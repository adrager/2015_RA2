//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan  8 13:46:43 2015 by ROOT version 5.34/04
// from TTree LostLeptonExpectation/a simple Tree with simple variables
// found on file: ExpectationMHT100.root
//////////////////////////////////////////////////////////

#ifndef Test_h
#define Test_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class Test : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   Float_t         HT;
   Float_t         MHT;
   UShort_t        NJets;
   UShort_t        BTags;
   UShort_t        Leptons;
   UShort_t        NVtx;
   Float_t         DeltaPhi1;
   Float_t         DeltaPhi2;
   Float_t         DeltaPhi3;
   Float_t         Weight;
   Float_t         MET;
   Float_t         METPhi;
   UShort_t        GenMuNum;
   UShort_t        GenMuFromTau[2];   //[GenMuNum]
   Float_t         GenMuPt[2];   //[GenMuNum]
   Float_t         GenMuEta[2];   //[GenMuNum]
   Float_t         GenMuPhi[2];   //[GenMuNum]
   UShort_t        GenMuonIsoTrackMatched[2];   //[GenMuNum]
   UShort_t        GenElecNum;
   UShort_t        GenElecFromTau[2];   //[GenElecNum]
   Float_t         GenElecPt[2];   //[GenElecNum]
   Float_t         GenElecEta[2];   //[GenElecNum]
   Float_t         GenElecPhi[2];   //[GenElecNum]
   UShort_t        GenElecIsoTrackMatched[2];   //[GenElecNum]
   UShort_t        GenTauNum;
   Float_t         GenTauPt[2];   //[GenTauNum]
   Float_t         GenTauEta[2];   //[GenTauNum]
   Float_t         GenTauPhi[2];   //[GenTauNum]
   UShort_t        GenTauIsoTrackMatched[2];   //[GenTauNum]
   UShort_t        Expectation;
   UShort_t        muAcc;
   UShort_t        muReco;
   UShort_t        muIso;
   Float_t         MTW;
   UShort_t        elecAcc;
   UShort_t        elecReco;
   UShort_t        elecIso;
   UShort_t        FallsVetoLep;
   UShort_t        selectedIDIsoMuonsNum;
   Float_t         selectedIDIsoMuonsPt[3];   //[selectedIDIsoMuonsNum]
   UShort_t        RecoIsoMuonPromtMatched[3];   //[selectedIDIsoMuonsNum]
   Float_t         RecoIsoMuonPromtMatchedDeltaR[3];   //[selectedIDIsoMuonsNum]
   Float_t         RecoIsoMuonPromtMatchedRelPt[3];   //[selectedIDIsoMuonsNum]
   Float_t         selectedIDIsoMuonsEta[3];   //[selectedIDIsoMuonsNum]
   Float_t         selectedIDIsoMuonsPhi[3];   //[selectedIDIsoMuonsNum]
   Float_t         selectedIDIsoMuonsE[3];   //[selectedIDIsoMuonsNum]
   UShort_t        RecoIsoMuonIsoTrackMatched[3];   //[selectedIDIsoMuonsNum]
   UShort_t        selectedIDIsoElectronsNum;
   Float_t         selectedIDIsoElectronsPt[4];   //[selectedIDIsoElectronsNum]
   UShort_t        RecoIsoElecPromtMatched[4];   //[selectedIDIsoElectronsNum]
   Float_t         RecoIsoElecPromtMatchedDeltaR[4];   //[selectedIDIsoElectronsNum]
   Float_t         RecoIsoElecPromtMatchedRelPt[4];   //[selectedIDIsoElectronsNum]
   Float_t         selectedIDIsoElectronsEta[4];   //[selectedIDIsoElectronsNum]
   Float_t         selectedIDIsoElectronsPhi[4];   //[selectedIDIsoElectronsNum]
   Float_t         selectedIDIsoElectronsE[4];   //[selectedIDIsoElectronsNum]
   UShort_t        RecoIsoElecIsoTrackMatched[4];   //[selectedIDIsoElectronsNum]
   UShort_t        IsolatedTracksNum;
   UShort_t        FallsVetoIsoTrack;
   Float_t         IsolatedTracksPt[5];   //[IsolatedTracksNum]
   Float_t         IsolatedTracksEta[5];   //[IsolatedTracksNum]
   Float_t         IsolatedTracksPhi[5];   //[IsolatedTracksNum]
   Float_t         IsolatedTracksE[5];   //[IsolatedTracksNum]
   UShort_t        SelectedIsoTracksMatchedToGenLepton[5];   //[IsolatedTracksNum]
   Float_t         SelectedIsoTracksMatchedToGenDeltaR[5];   //[IsolatedTracksNum]
   Float_t         SelectedIsoTracksMatchedToGenRelPT[5];   //[IsolatedTracksNum]
   UShort_t        SelectedIsoTracksMatchedToRecoIsoLepton[5];   //[IsolatedTracksNum]
   UShort_t        JetsNum;
   Float_t         JetsPt[39];   //[JetsNum]
   Float_t         JetsEta[39];   //[JetsNum]
   Float_t         JetsPhi[39];   //[JetsNum]
   Float_t         JetsE[39];   //[JetsNum]
   Float_t         Jets_bDiscriminator[39];   //[JetsNum]
   Float_t         Jets_chargedEmEnergyFraction[39];   //[JetsNum]
   Float_t         Jets_chargedHadronEnergyFraction[39];   //[JetsNum]
   Int_t           Jets_chargedHadronMultiplicity[39];   //[JetsNum]
   Float_t         Jets_electronMultiplicity[39];   //[JetsNum]
   Float_t         Jets_jetArea[39];   //[JetsNum]
   Float_t         Jets_muonEnergyFraction[39];   //[JetsNum]
   Int_t           Jets_muonMultiplicity[39];   //[JetsNum]
   Float_t         Jets_neutralEmEnergyFraction[39];   //[JetsNum]
   Int_t           Jets_neutralHadronMultiplicity[39];   //[JetsNum]
   Float_t         Jets_photonEnergyFraction[39];   //[JetsNum]
   Int_t           Jets_photonMultiplicity[39];   //[JetsNum]

   // List of branches
   TBranch        *b_HT;   //!
   TBranch        *b_MHT;   //!
   TBranch        *b_NJets;   //!
   TBranch        *b_BTags;   //!
   TBranch        *b_Leptons;   //!
   TBranch        *b_NVtx;   //!
   TBranch        *b_DeltaPhi1;   //!
   TBranch        *b_DeltaPhi2;   //!
   TBranch        *b_DeltaPhi3;   //!
   TBranch        *b_Weight;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_METPhi;   //!
   TBranch        *b_GenMuNum;   //!
   TBranch        *b_GenMuFromTau;   //!
   TBranch        *b_GenMuPt;   //!
   TBranch        *b_GenMuEta;   //!
   TBranch        *b_GenMuPhi;   //!
   TBranch        *b_GenMuonIsoTrackMatched;   //!
   TBranch        *b_GenElecNum;   //!
   TBranch        *b_GenElecFromTau;   //!
   TBranch        *b_GenElecPt;   //!
   TBranch        *b_GenElecEta;   //!
   TBranch        *b_GenElecPhi;   //!
   TBranch        *b_GenElecIsoTrackMatched;   //!
   TBranch        *b_GenTauNum;   //!
   TBranch        *b_GenTauPt;   //!
   TBranch        *b_GenTauEta;   //!
   TBranch        *b_GenTauPhi;   //!
   TBranch        *b_GenTauIsoTrackMatched;   //!
   TBranch        *b_Expectation;   //!
   TBranch        *b_muAcc;   //!
   TBranch        *b_muReco;   //!
   TBranch        *b_muIso;   //!
   TBranch        *b_MTW;   //!
   TBranch        *b_elecAcc;   //!
   TBranch        *b_elecReco;   //!
   TBranch        *b_elecIso;   //!
   TBranch        *b_FallsVetoLep;   //!
   TBranch        *b_selectedIDIsoMuonsNum;   //!
   TBranch        *b_selectedIDIsoMuonsPt;   //!
   TBranch        *b_RecoIsoMuonPromtMatched;   //!
   TBranch        *b_RecoIsoMuonPromtMatchedDeltaR;   //!
   TBranch        *b_RecoIsoMuonPromtMatchedRelPt;   //!
   TBranch        *b_selectedIDIsoMuonsEta;   //!
   TBranch        *b_selectedIDIsoMuonsPhi;   //!
   TBranch        *b_selectedIDIsoMuonsE;   //!
   TBranch        *b_RecoIsoMuonIsoTrackMatched;   //!
   TBranch        *b_selectedIDIsoElectronsNum;   //!
   TBranch        *b_selectedIDIsoElectronsPt;   //!
   TBranch        *b_RecoIsoElecPromtMatched;   //!
   TBranch        *b_RecoIsoElecPromtMatchedDeltaR;   //!
   TBranch        *b_RecoIsoElecPromtMatchedRelPt;   //!
   TBranch        *b_selectedIDIsoElectronsEta;   //!
   TBranch        *b_selectedIDIsoElectronsPhi;   //!
   TBranch        *b_selectedIDIsoElectronsE;   //!
   TBranch        *b_RecoIsoElecIsoTrackMatched;   //!
   TBranch        *b_IsolatedTracksNum;   //!
   TBranch        *b_FallsVetoIsoTrack;   //!
   TBranch        *b_IsolatedTracksPt;   //!
   TBranch        *b_IsolatedTracksEta;   //!
   TBranch        *b_IsolatedTracksPhi;   //!
   TBranch        *b_IsolatedTracksE;   //!
   TBranch        *b_SelectedIsoTracksMatchedToGenLepton;   //!
   TBranch        *b_SelectedIsoTracksMatchedToGenDeltaR;   //!
   TBranch        *b_SelectedIsoTracksMatchedToGenRelPT;   //!
   TBranch        *b_SelectedIsoTracksMatchedToRecoIsoLepton;   //!
   TBranch        *b_JetsNum;   //!
   TBranch        *b_JetsPt;   //!
   TBranch        *b_JetsEta;   //!
   TBranch        *b_JetsPhi;   //!
   TBranch        *b_JetsE;   //!
   TBranch        *b_Jets_bDiscriminator;   //!
   TBranch        *b_Jets_chargedEmEnergyFraction;   //!
   TBranch        *b_Jets_chargedHadronEnergyFraction;   //!
   TBranch        *b_Jets_chargedHadronMultiplicity;   //!
   TBranch        *b_Jets_electronMultiplicity;   //!
   TBranch        *b_Jets_jetArea;   //!
   TBranch        *b_Jets_muonEnergyFraction;   //!
   TBranch        *b_Jets_muonMultiplicity;   //!
   TBranch        *b_Jets_neutralEmEnergyFraction;   //!
   TBranch        *b_Jets_neutralHadronMultiplicity;   //!
   TBranch        *b_Jets_photonEnergyFraction;   //!
   TBranch        *b_Jets_photonMultiplicity;   //!

   Test(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~Test() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(Test,0);
};

#endif

#ifdef Test_cxx
void Test::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("HT", &HT, &b_HT);
   fChain->SetBranchAddress("MHT", &MHT, &b_MHT);
   fChain->SetBranchAddress("NJets", &NJets, &b_NJets);
   fChain->SetBranchAddress("BTags", &BTags, &b_BTags);
   fChain->SetBranchAddress("Leptons", &Leptons, &b_Leptons);
   fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);
   fChain->SetBranchAddress("DeltaPhi1", &DeltaPhi1, &b_DeltaPhi1);
   fChain->SetBranchAddress("DeltaPhi2", &DeltaPhi2, &b_DeltaPhi2);
   fChain->SetBranchAddress("DeltaPhi3", &DeltaPhi3, &b_DeltaPhi3);
   fChain->SetBranchAddress("Weight", &Weight, &b_Weight);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("METPhi", &METPhi, &b_METPhi);
   fChain->SetBranchAddress("GenMuNum", &GenMuNum, &b_GenMuNum);
   fChain->SetBranchAddress("GenMuFromTau", GenMuFromTau, &b_GenMuFromTau);
   fChain->SetBranchAddress("GenMuPt", GenMuPt, &b_GenMuPt);
   fChain->SetBranchAddress("GenMuEta", GenMuEta, &b_GenMuEta);
   fChain->SetBranchAddress("GenMuPhi", GenMuPhi, &b_GenMuPhi);
   fChain->SetBranchAddress("GenMuonIsoTrackMatched", GenMuonIsoTrackMatched, &b_GenMuonIsoTrackMatched);
   fChain->SetBranchAddress("GenElecNum", &GenElecNum, &b_GenElecNum);
   fChain->SetBranchAddress("GenElecFromTau", GenElecFromTau, &b_GenElecFromTau);
   fChain->SetBranchAddress("GenElecPt", GenElecPt, &b_GenElecPt);
   fChain->SetBranchAddress("GenElecEta", GenElecEta, &b_GenElecEta);
   fChain->SetBranchAddress("GenElecPhi", GenElecPhi, &b_GenElecPhi);
   fChain->SetBranchAddress("GenElecIsoTrackMatched", GenElecIsoTrackMatched, &b_GenElecIsoTrackMatched);
   fChain->SetBranchAddress("GenTauNum", &GenTauNum, &b_GenTauNum);
   fChain->SetBranchAddress("GenTauPt", GenTauPt, &b_GenTauPt);
   fChain->SetBranchAddress("GenTauEta", GenTauEta, &b_GenTauEta);
   fChain->SetBranchAddress("GenTauPhi", GenTauPhi, &b_GenTauPhi);
   fChain->SetBranchAddress("GenTauIsoTrackMatched", GenTauIsoTrackMatched, &b_GenTauIsoTrackMatched);
   fChain->SetBranchAddress("Expectation", &Expectation, &b_Expectation);
   fChain->SetBranchAddress("muAcc", &muAcc, &b_muAcc);
   fChain->SetBranchAddress("muReco", &muReco, &b_muReco);
   fChain->SetBranchAddress("muIso", &muIso, &b_muIso);
   fChain->SetBranchAddress("MTW", &MTW, &b_MTW);
   fChain->SetBranchAddress("elecAcc", &elecAcc, &b_elecAcc);
   fChain->SetBranchAddress("elecReco", &elecReco, &b_elecReco);
   fChain->SetBranchAddress("elecIso", &elecIso, &b_elecIso);
   fChain->SetBranchAddress("FallsVetoLep", &FallsVetoLep, &b_FallsVetoLep);
   fChain->SetBranchAddress("selectedIDIsoMuonsNum", &selectedIDIsoMuonsNum, &b_selectedIDIsoMuonsNum);
   fChain->SetBranchAddress("selectedIDIsoMuonsPt", selectedIDIsoMuonsPt, &b_selectedIDIsoMuonsPt);
   fChain->SetBranchAddress("RecoIsoMuonPromtMatched", RecoIsoMuonPromtMatched, &b_RecoIsoMuonPromtMatched);
   fChain->SetBranchAddress("RecoIsoMuonPromtMatchedDeltaR", RecoIsoMuonPromtMatchedDeltaR, &b_RecoIsoMuonPromtMatchedDeltaR);
   fChain->SetBranchAddress("RecoIsoMuonPromtMatchedRelPt", RecoIsoMuonPromtMatchedRelPt, &b_RecoIsoMuonPromtMatchedRelPt);
   fChain->SetBranchAddress("selectedIDIsoMuonsEta", selectedIDIsoMuonsEta, &b_selectedIDIsoMuonsEta);
   fChain->SetBranchAddress("selectedIDIsoMuonsPhi", selectedIDIsoMuonsPhi, &b_selectedIDIsoMuonsPhi);
   fChain->SetBranchAddress("selectedIDIsoMuonsE", selectedIDIsoMuonsE, &b_selectedIDIsoMuonsE);
   fChain->SetBranchAddress("RecoIsoMuonIsoTrackMatched", RecoIsoMuonIsoTrackMatched, &b_RecoIsoMuonIsoTrackMatched);
   fChain->SetBranchAddress("selectedIDIsoElectronsNum", &selectedIDIsoElectronsNum, &b_selectedIDIsoElectronsNum);
   fChain->SetBranchAddress("selectedIDIsoElectronsPt", selectedIDIsoElectronsPt, &b_selectedIDIsoElectronsPt);
   fChain->SetBranchAddress("RecoIsoElecPromtMatched", RecoIsoElecPromtMatched, &b_RecoIsoElecPromtMatched);
   fChain->SetBranchAddress("RecoIsoElecPromtMatchedDeltaR", RecoIsoElecPromtMatchedDeltaR, &b_RecoIsoElecPromtMatchedDeltaR);
   fChain->SetBranchAddress("RecoIsoElecPromtMatchedRelPt", RecoIsoElecPromtMatchedRelPt, &b_RecoIsoElecPromtMatchedRelPt);
   fChain->SetBranchAddress("selectedIDIsoElectronsEta", selectedIDIsoElectronsEta, &b_selectedIDIsoElectronsEta);
   fChain->SetBranchAddress("selectedIDIsoElectronsPhi", selectedIDIsoElectronsPhi, &b_selectedIDIsoElectronsPhi);
   fChain->SetBranchAddress("selectedIDIsoElectronsE", selectedIDIsoElectronsE, &b_selectedIDIsoElectronsE);
   fChain->SetBranchAddress("RecoIsoElecIsoTrackMatched", RecoIsoElecIsoTrackMatched, &b_RecoIsoElecIsoTrackMatched);
   fChain->SetBranchAddress("IsolatedTracksNum", &IsolatedTracksNum, &b_IsolatedTracksNum);
   fChain->SetBranchAddress("FallsVetoIsoTrack", &FallsVetoIsoTrack, &b_FallsVetoIsoTrack);
   fChain->SetBranchAddress("IsolatedTracksPt", IsolatedTracksPt, &b_IsolatedTracksPt);
   fChain->SetBranchAddress("IsolatedTracksEta", IsolatedTracksEta, &b_IsolatedTracksEta);
   fChain->SetBranchAddress("IsolatedTracksPhi", IsolatedTracksPhi, &b_IsolatedTracksPhi);
   fChain->SetBranchAddress("IsolatedTracksE", IsolatedTracksE, &b_IsolatedTracksE);
   fChain->SetBranchAddress("SelectedIsoTracksMatchedToGenLepton", SelectedIsoTracksMatchedToGenLepton, &b_SelectedIsoTracksMatchedToGenLepton);
   fChain->SetBranchAddress("SelectedIsoTracksMatchedToGenDeltaR", SelectedIsoTracksMatchedToGenDeltaR, &b_SelectedIsoTracksMatchedToGenDeltaR);
   fChain->SetBranchAddress("SelectedIsoTracksMatchedToGenRelPT", SelectedIsoTracksMatchedToGenRelPT, &b_SelectedIsoTracksMatchedToGenRelPT);
   fChain->SetBranchAddress("SelectedIsoTracksMatchedToRecoIsoLepton", SelectedIsoTracksMatchedToRecoIsoLepton, &b_SelectedIsoTracksMatchedToRecoIsoLepton);
   fChain->SetBranchAddress("JetsNum", &JetsNum, &b_JetsNum);
   fChain->SetBranchAddress("JetsPt", JetsPt, &b_JetsPt);
   fChain->SetBranchAddress("JetsEta", JetsEta, &b_JetsEta);
   fChain->SetBranchAddress("JetsPhi", JetsPhi, &b_JetsPhi);
   fChain->SetBranchAddress("JetsE", JetsE, &b_JetsE);
   fChain->SetBranchAddress("Jets_bDiscriminator", Jets_bDiscriminator, &b_Jets_bDiscriminator);
   fChain->SetBranchAddress("Jets_chargedEmEnergyFraction", Jets_chargedEmEnergyFraction, &b_Jets_chargedEmEnergyFraction);
   fChain->SetBranchAddress("Jets_chargedHadronEnergyFraction", Jets_chargedHadronEnergyFraction, &b_Jets_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("Jets_chargedHadronMultiplicity", Jets_chargedHadronMultiplicity, &b_Jets_chargedHadronMultiplicity);
   fChain->SetBranchAddress("Jets_electronMultiplicity", Jets_electronMultiplicity, &b_Jets_electronMultiplicity);
   fChain->SetBranchAddress("Jets_jetArea", Jets_jetArea, &b_Jets_jetArea);
   fChain->SetBranchAddress("Jets_muonEnergyFraction", Jets_muonEnergyFraction, &b_Jets_muonEnergyFraction);
   fChain->SetBranchAddress("Jets_muonMultiplicity", Jets_muonMultiplicity, &b_Jets_muonMultiplicity);
   fChain->SetBranchAddress("Jets_neutralEmEnergyFraction", Jets_neutralEmEnergyFraction, &b_Jets_neutralEmEnergyFraction);
   fChain->SetBranchAddress("Jets_neutralHadronMultiplicity", Jets_neutralHadronMultiplicity, &b_Jets_neutralHadronMultiplicity);
   fChain->SetBranchAddress("Jets_photonEnergyFraction", Jets_photonEnergyFraction, &b_Jets_photonEnergyFraction);
   fChain->SetBranchAddress("Jets_photonMultiplicity", Jets_photonMultiplicity, &b_Jets_photonMultiplicity);
}

Bool_t Test::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef Test_cxx
