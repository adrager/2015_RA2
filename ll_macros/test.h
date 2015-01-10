//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan  8 15:53:52 2015 by ROOT version 5.34/04
// from TTree LostLeptonExpectation/a simple Tree with simple variables
// found on file: Expectation.root
//////////////////////////////////////////////////////////

#ifndef test_h
#define test_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class test : public TSelector {
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
   UShort_t        GenMuFromTau[1];   //[GenMuNum]
   Float_t         GenMuPt[1];   //[GenMuNum]
   Float_t         GenMuEta[1];   //[GenMuNum]
   Float_t         GenMuPhi[1];   //[GenMuNum]
   UShort_t        GenMuonIsoTrackMatched[1];   //[GenMuNum]
   UShort_t        GenElecNum;
   UShort_t        GenElecFromTau[1];   //[GenElecNum]
   Float_t         GenElecPt[1];   //[GenElecNum]
   Float_t         GenElecEta[1];   //[GenElecNum]
   Float_t         GenElecPhi[1];   //[GenElecNum]
   UShort_t        GenElecIsoTrackMatched[1];   //[GenElecNum]
   UShort_t        GenTauNum;
   Float_t         GenTauPt[1];   //[GenTauNum]
   Float_t         GenTauEta[1];   //[GenTauNum]
   Float_t         GenTauPhi[1];   //[GenTauNum]
   UShort_t        GenTauIsoTrackMatched[1];   //[GenTauNum]
   UShort_t        Expectation;
   UShort_t        muAcc;
   UShort_t        muReco;
   UShort_t        muIso;
   Float_t         MTW;
   Float_t         IsoTrackMTW;
   UShort_t        elecAcc;
   UShort_t        elecReco;
   UShort_t        elecIso;
   UShort_t        muIsoTrack;
   UShort_t        elecIsoTrack;
   UShort_t        FallsVetoLep;
   UShort_t        selectedIDIsoMuonsNum;
   Float_t         selectedIDIsoMuonsPt[3];   //[selectedIDIsoMuonsNum]
   UShort_t        muIsoMatched[3];   //[selectedIDIsoMuonsNum]
   UShort_t        RecoIsoMuonPromtMatched[3];   //[selectedIDIsoMuonsNum]
   Float_t         RecoIsoMuonPromtMatchedDeltaR[3];   //[selectedIDIsoMuonsNum]
   Float_t         RecoIsoMuonPromtMatchedRelPt[3];   //[selectedIDIsoMuonsNum]
   Float_t         selectedIDIsoMuonsEta[3];   //[selectedIDIsoMuonsNum]
   Float_t         selectedIDIsoMuonsPhi[3];   //[selectedIDIsoMuonsNum]
   Float_t         selectedIDIsoMuonsE[3];   //[selectedIDIsoMuonsNum]
   UShort_t        selectedIDMuonsNum;
   Float_t         selectedIDMuonsPt[5];   //[selectedIDMuonsNum]
   UShort_t        selectedIDMuonsMatched[5];   //[selectedIDMuonsNum]
   Float_t         selectedIDMuonsEta[5];   //[selectedIDMuonsNum]
   Float_t         selectedIDMuonsPhi[5];   //[selectedIDMuonsNum]
   Float_t         selectedIDMuonsE[5];   //[selectedIDMuonsNum]
   UShort_t        RecoIsoMuonIsoTrackMatched[3];   //[selectedIDIsoMuonsNum]
   UShort_t        selectedIDIsoElectronsNum;
   Float_t         selectedIDIsoElectronsPt[3];   //[selectedIDIsoElectronsNum]
   UShort_t        elecIsoMatched[3];   //[selectedIDIsoElectronsNum]
   UShort_t        RecoIsoElecPromtMatched[3];   //[selectedIDIsoElectronsNum]
   Float_t         RecoIsoElecPromtMatchedDeltaR[3];   //[selectedIDIsoElectronsNum]
   Float_t         RecoIsoElecPromtMatchedRelPt[3];   //[selectedIDIsoElectronsNum]
   Float_t         selectedIDIsoElectronsEta[3];   //[selectedIDIsoElectronsNum]
   Float_t         selectedIDIsoElectronsPhi[3];   //[selectedIDIsoElectronsNum]
   Float_t         selectedIDIsoElectronsE[3];   //[selectedIDIsoElectronsNum]
   UShort_t        RecoIsoElecIsoTrackMatched[3];   //[selectedIDIsoElectronsNum]
   UShort_t        selectedIDElectronsNum;
   Float_t         selectedIDElectronsPt[7];   //[selectedIDElectronsNum]
   UShort_t        selectedIDElectronsMatched[7];   //[selectedIDElectronsNum]
   Float_t         selectedIDElectronsEta[7];   //[selectedIDElectronsNum]
   Float_t         selectedIDElectronsPhi[7];   //[selectedIDElectronsNum]
   Float_t         selectedIDElectronsE[7];   //[selectedIDElectronsNum]
   UShort_t        IsolatedTracksNum;
   UShort_t        FallsVetoIsoTrack;
   Float_t         IsolatedTracksPt[3];   //[IsolatedTracksNum]
   Float_t         IsolatedTracksEta[3];   //[IsolatedTracksNum]
   Float_t         IsolatedTracksPhi[3];   //[IsolatedTracksNum]
   Float_t         IsolatedTracksE[3];   //[IsolatedTracksNum]
   UShort_t        muIsoTrackMatched[3];   //[IsolatedTracksNum]
   UShort_t        elecIsoTrackMatched[3];   //[IsolatedTracksNum]
   UShort_t        SelectedIsoTracksMatchedToGenLepton[3];   //[IsolatedTracksNum]
   Float_t         SelectedIsoTracksMatchedToGenDeltaR[3];   //[IsolatedTracksNum]
   Float_t         SelectedIsoTracksMatchedToGenRelPT[3];   //[IsolatedTracksNum]
   UShort_t        SelectedIsoTracksMatchedToRecoIsoLepton[3];   //[IsolatedTracksNum]
   UShort_t        JetsNum;
   Float_t         JetsPt[31];   //[JetsNum]
   Float_t         JetsEta[31];   //[JetsNum]
   Float_t         JetsPhi[31];   //[JetsNum]
   Float_t         JetsE[31];   //[JetsNum]
   Float_t         Jets_bDiscriminator[31];   //[JetsNum]
   Float_t         Jets_chargedEmEnergyFraction[31];   //[JetsNum]
   Float_t         Jets_chargedHadronEnergyFraction[31];   //[JetsNum]
   Int_t           Jets_chargedHadronMultiplicity[31];   //[JetsNum]
   Float_t         Jets_electronMultiplicity[31];   //[JetsNum]
   Float_t         Jets_jetArea[31];   //[JetsNum]
   Float_t         Jets_muonEnergyFraction[31];   //[JetsNum]
   Int_t           Jets_muonMultiplicity[31];   //[JetsNum]
   Float_t         Jets_neutralEmEnergyFraction[31];   //[JetsNum]
   Int_t           Jets_neutralHadronMultiplicity[31];   //[JetsNum]
   Float_t         Jets_photonEnergyFraction[31];   //[JetsNum]
   Int_t           Jets_photonMultiplicity[31];   //[JetsNum]

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
   TBranch        *b_IsoTrackMTW;   //!
   TBranch        *b_elecAcc;   //!
   TBranch        *b_elecReco;   //!
   TBranch        *b_elecIso;   //!
   TBranch        *b_muIsoTrack;   //!
   TBranch        *b_elecIsoTrack;   //!
   TBranch        *b_FallsVetoLep;   //!
   TBranch        *b_selectedIDIsoMuonsNum;   //!
   TBranch        *b_selectedIDIsoMuonsPt;   //!
   TBranch        *b_muIsoMatched;   //!
   TBranch        *b_RecoIsoMuonPromtMatched;   //!
   TBranch        *b_RecoIsoMuonPromtMatchedDeltaR;   //!
   TBranch        *b_RecoIsoMuonPromtMatchedRelPt;   //!
   TBranch        *b_selectedIDIsoMuonsEta;   //!
   TBranch        *b_selectedIDIsoMuonsPhi;   //!
   TBranch        *b_selectedIDIsoMuonsE;   //!
   TBranch        *b_selectedIDMuonsNum;   //!
   TBranch        *b_selectedIDMuonsPt;   //!
   TBranch        *b_selectedIDMuonsMatched;   //!
   TBranch        *b_selectedIDMuonsEta;   //!
   TBranch        *b_selectedIDMuonsPhi;   //!
   TBranch        *b_selectedIDMuonsE;   //!
   TBranch        *b_RecoIsoMuonIsoTrackMatched;   //!
   TBranch        *b_selectedIDIsoElectronsNum;   //!
   TBranch        *b_selectedIDIsoElectronsPt;   //!
   TBranch        *b_elecIsoMatched;   //!
   TBranch        *b_RecoIsoElecPromtMatched;   //!
   TBranch        *b_RecoIsoElecPromtMatchedDeltaR;   //!
   TBranch        *b_RecoIsoElecPromtMatchedRelPt;   //!
   TBranch        *b_selectedIDIsoElectronsEta;   //!
   TBranch        *b_selectedIDIsoElectronsPhi;   //!
   TBranch        *b_selectedIDIsoElectronsE;   //!
   TBranch        *b_RecoIsoElecIsoTrackMatched;   //!
   TBranch        *b_selectedIDElectronsNum;   //!
   TBranch        *b_selectedIDElectronsPt;   //!
   TBranch        *b_selectedIDElectronsMatched;   //!
   TBranch        *b_selectedIDElectronsEta;   //!
   TBranch        *b_selectedIDElectronsPhi;   //!
   TBranch        *b_selectedIDElectronsE;   //!
   TBranch        *b_IsolatedTracksNum;   //!
   TBranch        *b_FallsVetoIsoTrack;   //!
   TBranch        *b_IsolatedTracksPt;   //!
   TBranch        *b_IsolatedTracksEta;   //!
   TBranch        *b_IsolatedTracksPhi;   //!
   TBranch        *b_IsolatedTracksE;   //!
   TBranch        *b_muIsoTrackMatched;   //!
   TBranch        *b_elecIsoTrackMatched;   //!
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

   test(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~test() { }
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

   ClassDef(test,0);
};

#endif

#ifdef test_cxx
void test::Init(TTree *tree)
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
   fChain->SetBranchAddress("IsoTrackMTW", &IsoTrackMTW, &b_IsoTrackMTW);
   fChain->SetBranchAddress("elecAcc", &elecAcc, &b_elecAcc);
   fChain->SetBranchAddress("elecReco", &elecReco, &b_elecReco);
   fChain->SetBranchAddress("elecIso", &elecIso, &b_elecIso);
   fChain->SetBranchAddress("muIsoTrack", &muIsoTrack, &b_muIsoTrack);
   fChain->SetBranchAddress("elecIsoTrack", &elecIsoTrack, &b_elecIsoTrack);
   fChain->SetBranchAddress("FallsVetoLep", &FallsVetoLep, &b_FallsVetoLep);
   fChain->SetBranchAddress("selectedIDIsoMuonsNum", &selectedIDIsoMuonsNum, &b_selectedIDIsoMuonsNum);
   fChain->SetBranchAddress("selectedIDIsoMuonsPt", selectedIDIsoMuonsPt, &b_selectedIDIsoMuonsPt);
   fChain->SetBranchAddress("muIsoMatched", muIsoMatched, &b_muIsoMatched);
   fChain->SetBranchAddress("RecoIsoMuonPromtMatched", RecoIsoMuonPromtMatched, &b_RecoIsoMuonPromtMatched);
   fChain->SetBranchAddress("RecoIsoMuonPromtMatchedDeltaR", RecoIsoMuonPromtMatchedDeltaR, &b_RecoIsoMuonPromtMatchedDeltaR);
   fChain->SetBranchAddress("RecoIsoMuonPromtMatchedRelPt", RecoIsoMuonPromtMatchedRelPt, &b_RecoIsoMuonPromtMatchedRelPt);
   fChain->SetBranchAddress("selectedIDIsoMuonsEta", selectedIDIsoMuonsEta, &b_selectedIDIsoMuonsEta);
   fChain->SetBranchAddress("selectedIDIsoMuonsPhi", selectedIDIsoMuonsPhi, &b_selectedIDIsoMuonsPhi);
   fChain->SetBranchAddress("selectedIDIsoMuonsE", selectedIDIsoMuonsE, &b_selectedIDIsoMuonsE);
   fChain->SetBranchAddress("selectedIDMuonsNum", &selectedIDMuonsNum, &b_selectedIDMuonsNum);
   fChain->SetBranchAddress("selectedIDMuonsPt", selectedIDMuonsPt, &b_selectedIDMuonsPt);
   fChain->SetBranchAddress("selectedIDMuonsMatched", selectedIDMuonsMatched, &b_selectedIDMuonsMatched);
   fChain->SetBranchAddress("selectedIDMuonsEta", selectedIDMuonsEta, &b_selectedIDMuonsEta);
   fChain->SetBranchAddress("selectedIDMuonsPhi", selectedIDMuonsPhi, &b_selectedIDMuonsPhi);
   fChain->SetBranchAddress("selectedIDMuonsE", selectedIDMuonsE, &b_selectedIDMuonsE);
   fChain->SetBranchAddress("RecoIsoMuonIsoTrackMatched", RecoIsoMuonIsoTrackMatched, &b_RecoIsoMuonIsoTrackMatched);
   fChain->SetBranchAddress("selectedIDIsoElectronsNum", &selectedIDIsoElectronsNum, &b_selectedIDIsoElectronsNum);
   fChain->SetBranchAddress("selectedIDIsoElectronsPt", selectedIDIsoElectronsPt, &b_selectedIDIsoElectronsPt);
   fChain->SetBranchAddress("elecIsoMatched", elecIsoMatched, &b_elecIsoMatched);
   fChain->SetBranchAddress("RecoIsoElecPromtMatched", RecoIsoElecPromtMatched, &b_RecoIsoElecPromtMatched);
   fChain->SetBranchAddress("RecoIsoElecPromtMatchedDeltaR", RecoIsoElecPromtMatchedDeltaR, &b_RecoIsoElecPromtMatchedDeltaR);
   fChain->SetBranchAddress("RecoIsoElecPromtMatchedRelPt", RecoIsoElecPromtMatchedRelPt, &b_RecoIsoElecPromtMatchedRelPt);
   fChain->SetBranchAddress("selectedIDIsoElectronsEta", selectedIDIsoElectronsEta, &b_selectedIDIsoElectronsEta);
   fChain->SetBranchAddress("selectedIDIsoElectronsPhi", selectedIDIsoElectronsPhi, &b_selectedIDIsoElectronsPhi);
   fChain->SetBranchAddress("selectedIDIsoElectronsE", selectedIDIsoElectronsE, &b_selectedIDIsoElectronsE);
   fChain->SetBranchAddress("RecoIsoElecIsoTrackMatched", RecoIsoElecIsoTrackMatched, &b_RecoIsoElecIsoTrackMatched);
   fChain->SetBranchAddress("selectedIDElectronsNum", &selectedIDElectronsNum, &b_selectedIDElectronsNum);
   fChain->SetBranchAddress("selectedIDElectronsPt", selectedIDElectronsPt, &b_selectedIDElectronsPt);
   fChain->SetBranchAddress("selectedIDElectronsMatched", selectedIDElectronsMatched, &b_selectedIDElectronsMatched);
   fChain->SetBranchAddress("selectedIDElectronsEta", selectedIDElectronsEta, &b_selectedIDElectronsEta);
   fChain->SetBranchAddress("selectedIDElectronsPhi", selectedIDElectronsPhi, &b_selectedIDElectronsPhi);
   fChain->SetBranchAddress("selectedIDElectronsE", selectedIDElectronsE, &b_selectedIDElectronsE);
   fChain->SetBranchAddress("IsolatedTracksNum", &IsolatedTracksNum, &b_IsolatedTracksNum);
   fChain->SetBranchAddress("FallsVetoIsoTrack", &FallsVetoIsoTrack, &b_FallsVetoIsoTrack);
   fChain->SetBranchAddress("IsolatedTracksPt", IsolatedTracksPt, &b_IsolatedTracksPt);
   fChain->SetBranchAddress("IsolatedTracksEta", IsolatedTracksEta, &b_IsolatedTracksEta);
   fChain->SetBranchAddress("IsolatedTracksPhi", IsolatedTracksPhi, &b_IsolatedTracksPhi);
   fChain->SetBranchAddress("IsolatedTracksE", IsolatedTracksE, &b_IsolatedTracksE);
   fChain->SetBranchAddress("muIsoTrackMatched", muIsoTrackMatched, &b_muIsoTrackMatched);
   fChain->SetBranchAddress("elecIsoTrackMatched", elecIsoTrackMatched, &b_elecIsoTrackMatched);
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

Bool_t test::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef test_cxx
