# gemqc8
```bash
scram p -n QC8Test CMSSW CMSSW_10_5_0_pre2
cd QC8Test/src
cmsenv
git-cms-merge-topic jshlee:gem-vfatv3
git clone git@github.com:hyunyong/gemqc8.git
scram b -j 12
cd gemqc8/Analysis/test
cmsRun runGEMCosmicStand_sim.py
```
or
```bash
cmsRun runGEMCosmicStand_data_test.py
```
