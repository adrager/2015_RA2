#define Prediction_cxx
// The class definition in Prediction.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// Root > T->Process("Prediction.C")
// Root > T->Process("Prediction.C","some options")
// Root > T->Process("Prediction.C+")
//

#include "Prediction.h"
#include <TH2.h>
#include <TStyle.h>
#include <iostream>


void Prediction::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();


}

void Prediction::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

  TFile *effInput = new TFile("/afs/desy.de/user/a/adraeger/xxl-af-cms/2015/2015_RA2/ll_macros/Efficiencies.root","UPDATE");
   TDirectory *EffInputFolder =   (TDirectory*)effInput->Get("Efficiencies");
   MuMTWActivity_ = (TH1F*) EffInputFolder->Get("MuMTWActivity");
   MuDiLepContributionMTWAppliedNJets_ = (TH1F*) EffInputFolder->Get("MuDiLepContributionMTWNJets1D");
   MuIsoPTActivity_ = (TH2F*)EffInputFolder->Get("MuIsoPTActivity");
   MuRecoActivitiy_ = (TH1F*)EffInputFolder->Get("MuRecoActivity");
   MuAccHTNJets_ = (TH2F*)EffInputFolder->Get("MuAccHTNJets");
   ElecIsoPTActivity_ = (TH2F*)EffInputFolder->Get("ElecIsoPTActivity");
   ElecRecoActivity_ = (TH1F*)EffInputFolder->Get("ElecRecoActivity");
   ElecAccHTNJets_ = (TH2F*)EffInputFolder->Get("ElecAccHTNJets");


  
   TString option = GetOption();
   tPrediction_ = new TTree("LostLeptonPrediction","a simple Tree with simple variables");
   tPrediction_->Branch("HT",&HT,"HT/F");
   tPrediction_->Branch("MHT",&MHT,"MHT/F");
   tPrediction_->Branch("NJets",&NJets,"NJets/s");
   tPrediction_->Branch("BTags",&BTags,"BTags/s");
   tPrediction_->Branch("NVtx",&NVtx,"NVtx/s");
   tPrediction_->Branch("DeltaPhi1",&DeltaPhi1,"DeltaPhi1/F");
   tPrediction_->Branch("DeltaPhi2",&DeltaPhi2,"DeltaPhi2/F");
   tPrediction_->Branch("DeltaPhi3",&DeltaPhi3,"DeltaPhi3/F");
   tPrediction_->Branch("Weight", &Weight, "Weight/F");
   tPrediction_->Branch("MET",&METPt,"MET/F");
   tPrediction_->Branch("METPhi",&METPhi,"METPhi/F");
	 tPrediction_->Branch("selectedIDIsoMuonsNum",&selectedIDIsoMuonsNum,"selectedIDIsoMuonsNum/s");
	 tPrediction_->Branch("selectedIDIsoMuonsPt", selectedIDIsoMuonsPt, "selectedIDIsoMuonsPt[selectedIDIsoMuonsNum]/F");
	 tPrediction_->Branch("selectedIDIsoMuonsEta", selectedIDIsoMuonsEta, "selectedIDIsoMuonsEta[selectedIDIsoMuonsNum]/F");
	 tPrediction_->Branch("selectedIDIsoMuonsPhi", selectedIDIsoMuonsPhi, "selectedIDIsoMuonsPhi[selectedIDIsoMuonsNum]/F");
	 tPrediction_->Branch("selectedIDIsoMuonsActivity", selectedIDIsoMuonsActivity, "selectedIDIsoMuonsActivity[selectedIDIsoMuonsNum]/F");
	 tPrediction_->Branch("RecoIsoMuonE", selectedIDIsoMuonsE, "RecoIsoMuonE[selectedIDIsoMuonsNum]/F");
	 tPrediction_->Branch("selectedIDIsoElectronsNum",&selectedIDIsoElectronsNum,"selectedIDIsoElectronsNum/s");
	 tPrediction_->Branch("RecoIsoElecPt", selectedIDIsoElectronsPt, "RecoIsoElecPt[selectedIDIsoElectronsNum]/F");
	 tPrediction_->Branch("RecoIsoElecEta", selectedIDIsoElectronsEta, "RecoIsoElecEta[selectedIDIsoElectronsNum]/F");
	 tPrediction_->Branch("RecoIsoElecPhi", selectedIDIsoElectronsPhi, "RecoIsoElecPhi[selectedIDIsoElectronsNum]/F");
	 tPrediction_->Branch("RecoIsoElecE", selectedIDIsoElectronsE, "RecoIsoElecE[selectedIDIsoElectronsNum]/F");
   tPrediction_->Branch("MTW",&mtw,"MTW/F");
   tPrediction_->Branch("muMTWEff",&muMTWEff_,"muMTWEff/F");
   tPrediction_->Branch("mtwCorrectedWeight",&mtwCorrectedWeight_,"mtwCorrectedWeight/F");
   tPrediction_->Branch("muDiLepContributionMTWAppliedEff",&muDiLepContributionMTWAppliedEff_,"muDiLepContributionMTWAppliedEff/F");
   tPrediction_->Branch("mtwDiLepCorrectedWeight",&mtwDiLepCorrectedWeight_,"mtwDiLepCorrectedWeight/F");
   tPrediction_->Branch("muIsoWeight",&muIsoWeight_,"muIsoWeight/F");
   tPrediction_->Branch("muIsoEff",&muIsoEff_,"muIsoEff/F");
   tPrediction_->Branch("muRecoWeight",&muRecoWeight_,"muRecoWeight/F");
   tPrediction_->Branch("muRecoEff",&muRecoEff_,"muRecoEff/F");
   tPrediction_->Branch("muAccWeight",&muAccWeight_,"muAccWeight/F");
   tPrediction_->Branch("muAccEff",&muAccEff_,"muAccEff/F");
   tPrediction_->Branch("muTotalWeight",&muTotalWeight_,"muTotalWeight/F");
   tPrediction_->Branch("totalMuons",&totalMuons_,"totalMuons/F");
   tPrediction_->Branch("elecAccWeight",&elecAccWeight_,"elecAccWeight/F");
   tPrediction_->Branch("elecAccEff",&elecAccEff_,"elecAccEff/F");
   tPrediction_->Branch("elecRecoWeight",&elecRecoWeight_,"elecRecoWeight/F");
   tPrediction_->Branch("elecRecoEff",&elecRecoEff_,"elecRecoEff/F");
   tPrediction_->Branch("elecIsoWeight",&elecIsoWeight_,"elecIsoWeight/F");
   tPrediction_->Branch("elecIsoEff",&elecIsoEff_,"elecIsoEff/F");
   tPrediction_->Branch("elecTotalWeight",&elecTotalWeight_,"elecTotalWeight/F");
   tPrediction_->Branch("totalWeight",&totalWeight_,"totalWeight/F");
   GetOutputList()->Add(tPrediction_);
}

Bool_t Prediction::Process(Long64_t entry)
{
	resetValues();
	fChain->GetTree()->GetEntry(entry);
	if(HT<minHT_ || MHT< minMHT_ || NJets < minNJets_||  DeltaPhi1 < deltaPhi1_ || DeltaPhi2 < deltaPhi2_ || DeltaPhi3 < deltaPhi3_ ) return kTRUE;
	if(applyFilters_ &&  !FiltersPass() ) return kTRUE;
	if(selectedIDIsoMuonsNum==1 && selectedIDIsoElectronsNum==0)
	{
	  mtw =  MTWCalculator(METPt,METPhi, selectedIDIsoMuonsPt[0], selectedIDIsoMuonsPhi[0]);
	  selectedIDIsoMuonsActivity[0]=MuActivity(selectedIDIsoMuonsEta[0], selectedIDIsoMuonsPhi[0]);
	  muMTWEff_ = getEff(MuMTWActivity_,selectedIDIsoMuonsActivity[0]);
	  mtwCorrectedWeight_ = Weight / muMTWEff_;
	  muDiLepContributionMTWAppliedEff_ = getEff(MuDiLepContributionMTWAppliedNJets_,NJets);
	  mtwDiLepCorrectedWeight_ = mtwCorrectedWeight_ * muDiLepContributionMTWAppliedEff_;
	  muIsoEff_ = getEff(MuIsoPTActivity_, selectedIDIsoMuonsPt[0],selectedIDIsoMuonsActivity[0]);
	  muIsoWeight_ = mtwDiLepCorrectedWeight_* (1 - muIsoEff_)/muIsoEff_;
	  muRecoEff_ = getEff(MuRecoActivitiy_,selectedIDIsoMuonsActivity[0]);
	  muRecoWeight_ = mtwDiLepCorrectedWeight_* 1 / muIsoEff_ * (1-muRecoEff_)/muRecoEff_;
	  muAccEff_ = getEff(MuAccHTNJets_,HT,NJets);
	  muAccWeight_ = mtwDiLepCorrectedWeight_* 1 / muIsoEff_ * 1 / muRecoEff_ * (1-muAccEff_)/muAccEff_;
	  
	  muTotalWeight_ = muIsoWeight_ + muRecoWeight_ + muAccWeight_;
	  totalMuons_ = mtwDiLepCorrectedWeight_ / ( muIsoEff_ * muRecoEff_ * muAccEff_);
	  
	  elecAccEff_ = getEff(ElecAccHTNJets_,HT,NJets);
	  elecAccWeight_ = totalMuons_ * (1 - elecAccEff_);
	  elecRecoEff_ = getEff(ElecRecoActivity_,ElecActivity(selectedIDIsoMuonsEta[0], selectedIDIsoMuonsPhi[0]));
	  elecRecoWeight_ = totalMuons_ * (elecAccEff_) * (1-elecRecoEff_);
	  elecIsoEff_ = getEff(ElecIsoPTActivity_,selectedIDIsoMuonsPt[0],ElecActivity(selectedIDIsoMuonsEta[0], selectedIDIsoMuonsPhi[0]));
	  elecIsoWeight_ = totalMuons_ * (elecAccEff_) * (elecRecoEff_) * (1-elecIsoEff_);
	  elecTotalWeight_ = elecIsoWeight_ + elecRecoWeight_ + elecAccWeight_;
	  totalWeight_ = elecTotalWeight_ + muTotalWeight_;
	  
	}	
	if(selectedIDIsoMuonsNum==0 && selectedIDIsoElectronsNum==1)
	{
	  mtw =  MTWCalculator(METPt,METPhi, selectedIDIsoElectronsPt[0], selectedIDIsoElectronsPhi[0]);
	  selectedIDIsoElectronsActivity[0]=ElecActivity(selectedIDIsoElectronsEta[0], selectedIDIsoElectronsPhi[0]);
	}

	else return kTRUE;
	tPrediction_->Fill();
   return kTRUE;
}

void Prediction::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void Prediction::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.
  TFile *outPutFile = new TFile("Prediction.root","RECREATE"); ;
   outPutFile->cd();
   tPrediction_->Write();

}
void Prediction::resetValues()
{
	mtw=0.;
	muMTWEff_=0.;
	mtwCorrectedWeight_=0.;
	muDiLepContributionMTWAppliedEff_=0.;
	mtwDiLepCorrectedWeight_=0.;
	muIsoEff_=0;
	muIsoWeight_=0;
	muRecoEff_=0;
	muRecoWeight_=0;
	muAccEff_=0;
	muAccWeight_=0;
	muTotalWeight_=0.;
	totalMuons_=0;
	elecIsoEff_=0;
	elecIsoWeight_=0;
	elecRecoEff_=0;
	elecRecoWeight_=0;
	elecAccEff_=0;
	elecAccWeight_=0;
	elecTotalWeight_=0;
	totalWeight_=0.;

}
bool Prediction::FiltersPass()
{
	bool result=true;
	// if(Filter_HBHENoiseFilterRA2==0) result=false;
	return result;
}
double Prediction::deltaR(double eta1, double phi1, double eta2, double phi2)
{
	double deta = eta1-eta2;
	double dphi = TVector2::Phi_mpi_pi(phi1-phi2);
	return sqrt(deta * deta + dphi *dphi); 
}

double Prediction::MTWCalculator(double metPt,double  metPhi,double  lepPt,double  lepPhi)
{
	double deltaPhi =TVector2::Phi_mpi_pi(lepPhi-metPhi);
	return sqrt(2*lepPt*metPt*(1-cos(deltaPhi)) );
}
double Prediction::effUp(double eff, double up)
{
	double result = eff + up;
	if(result>0.995)result=0.995;
	return result;
}
double Prediction::effDown(double eff, double down)
{
	double result = eff - down;
	if(result<0.01)result=eff * 0.1;
	return result;
}

double Prediction::getEff(TH2F* effTH2F, double xValue, double yValue)
{
	double result = 0;
	if(xValue < effTH2F->GetXaxis()->GetXmin() )
	{
		std::cout<<"Warning xValue: "<<xValue<<" is smaller than minimum of histo: "<<effTH2F->GetName()<<std::endl;
		xValue= effTH2F->GetXaxis()->GetXmin()+0.01;
	}
	else if(xValue > effTH2F->GetXaxis()->GetXmax() )
	{
	  std::cout<<"Warning xValue: "<<xValue<<" is bigger than maximum of histo: "<<effTH2F->GetName()<<" which is: "<<effTH2F->GetXaxis()->GetXmax();
		xValue= effTH2F->GetXaxis()->GetXmax()-0.01;
		std::cout<<" Setting xValue to: "<<xValue<<std::endl;
		if(xValue > effTH2F->GetXaxis()->GetXmax() )std::cout<<"Problem persists!!!!!!!!!"<<std::endl;
	}
	
	if(yValue < effTH2F->GetYaxis()->GetXmin() )
	{
		std::cout<<"Warning yValue: "<<yValue<<" is smaller than minimum of histo: "<<effTH2F->GetName()<<std::endl;
		yValue= effTH2F->GetYaxis()->GetXmin()+0.01;
	}
	else if(yValue > effTH2F->GetYaxis()->GetXmax() )
	{
		std::cout<<"Warning yValue: "<<yValue<<" is bigger than maximum of histo: "<<effTH2F->GetName()<<std::endl;
		yValue= effTH2F->GetYaxis()->GetXmax()-0.01;
	}
	result = effTH2F->GetBinContent(effTH2F->GetXaxis()->FindBin(xValue),effTH2F->GetYaxis()->FindBin(yValue));
	if(result<0.01)
	{
		std::cout<<"Warning efficiency is: "<<result<<" is smaller than 1% for histo: "<<effTH2F->GetName()<<std::endl;
		result =0.01;
	}
	if(result>1)
	{
		std::cout<<"Warning efficiency is: "<<result<<" is bigger than 1 for histo: "<<effTH2F->GetName()<<std::endl;
		result =0.99;
	}
	return result;
}
double Prediction::getEff(TH1F* effTH1F, double xValue)
{
  double result = 0;
  if(xValue < effTH1F->GetXaxis()->GetXmin() )
  {
    std::cout<<"Warning xValue: "<<xValue<<" is smaller than minimum of histo: "<<effTH1F->GetName()<<std::endl;
    xValue= effTH1F->GetXaxis()->GetXmin()+0.01;
  }
  else if(xValue > effTH1F->GetXaxis()->GetXmax() )
  {
    std::cout<<"Warning xValue: "<<xValue<<" is bigger than maximum of histo: "<<effTH1F->GetName()<<" which is: "<<effTH1F->GetXaxis()->GetXmax();
    xValue= effTH1F->GetXaxis()->GetXmax()-0.01;
    std::cout<<" Setting xValue to: "<<xValue<<std::endl;
    if(xValue > effTH1F->GetXaxis()->GetXmax() )std::cout<<"Problem persists!!!!!!!!!"<<std::endl;
  }
  
  
  result = effTH1F->GetBinContent(effTH1F->GetXaxis()->FindBin(xValue));
  if(result<0.01)
  {
    std::cout<<"Warning efficiency is: "<<result<<" is smaller than 1% for histo: "<<effTH1F->GetName()<<std::endl;
    result =0.01;
  }
  if(result>1)
  {
    std::cout<<"Warning efficiency is: "<<result<<" is bigger than 1 for histo: "<<effTH1F->GetName()<<std::endl;
    result =0.99;
  }
  return result;
}

double Prediction::MuActivity( double muEta, double muPhi)
{
  double result =0;
  for (unsigned int i=0; i < JetsNum ; i++)
  {
    if(deltaR(muEta,muPhi,JetsEta[i],JetsPhi[i])>maxDeltaRMuActivity_ ) continue;
    result+=JetsPt[i] * (Jets_chargedEmEnergyFraction[i] + Jets_chargedHadronEnergyFraction[i]);
  }
  return result;
  
}
double Prediction::ElecActivity( double elecEta, double elecPhi)
{
  double result =0;
  for (unsigned int i=0; i < JetsNum ; i++)
  {
    if(deltaR(elecEta,elecPhi,JetsEta[i],JetsPhi[i])>maxDeltaRElecActivity_ ) continue;
    result+=JetsPt[i] * (Jets_chargedHadronEnergyFraction[i]);
  }
  return result;
  
}
double Prediction::IsoTrackActivityCalc( double isoTrackEta, double isoTrackPhi)
{
  double result =0;
  for (unsigned int i=0; i < JetsNum ; i++)
  {
    if(deltaR(isoTrackEta,isoTrackPhi,JetsEta[i],JetsPhi[i])>maxDeltaRElecActivity_ ) continue;
    result+=JetsPt[i] * (Jets_neutralEmEnergyFraction[i] + Jets_photonEnergyFraction[i]);
  }
  return result;
  
}