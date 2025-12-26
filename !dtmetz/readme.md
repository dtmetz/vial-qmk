To build
qmk compile -kb sofle2/keyhive -km keyhive_vial -e CONVERT_TO=kb2040

To update
git fetch upstream
git rebase upstream/vial
git push