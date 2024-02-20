#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<string> codes = {"w45_kj3", "psc_mjk", "xyk_470", "333_mkb", "r90_ssm", "hju_355", "rym_klm", "ert_333", "aio_ios", "589_psc", "pqr_ggh", "470_s10", "qmt_ert", "mg3_445", "xyz_tmt", "s1s_md9", "qmt_xyk", "s10_r90", "110_qmt", "ssm_pqr", "tpo_789", "mkb_589", "mjk_s1s"};

pair<string, int> getAncestor(string child)
{
    for (size_t j = 0; j < codes.size(); j++)
    {
        if (child.substr(0, 3) == codes[j].substr(4, 3))
        {
            return make_pair(codes[j], j);
        }
    }
    return make_pair(child, 0);
}

int main()
{
    pair<string, int> strain1 = make_pair("md9_ggy", 0);
    pair<string, int> strain2 = make_pair("ggh_mln", 0);

    while (strain1.first.substr(4, 3) != strain2.first.substr(4, 3))
    {
        strain1 = getAncestor(strain1.first);
        cout << "parent dna stain 1: " << strain1.first << " position: " << strain1.second << endl;

        strain2 = getAncestor(strain2.first);
        cout << "parent dna stain 2: " << strain2.first << " position: " << strain2.second << endl;
    }

    cout << "\n----------------------------" << endl;
    cout << "common ancestor of dna: " << strain1.first << endl;
    cout << "position of ancestor:" << strain1.second << endl;
}