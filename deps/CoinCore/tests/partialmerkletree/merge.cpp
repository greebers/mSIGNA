#include <MerkleTree.h>

#include <iostream>

using namespace Coin;
using namespace std;

int main()
{
    try {
        cout << "setUncompressed..." << endl;
        std::vector<PartialMerkleTree::MerkleLeaf> leaves1;
        std::vector<PartialMerkleTree::MerkleLeaf> leaves2;

        leaves1.push_back(make_pair(uchar_vector("51ad11ed9bad5760329d771cd889f85e5c17b9236f7d42c6404ba41eb0ff0167").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("56ecfac584945699e2cfccbc6989a6ab61abeacefc65ecfadeb0381e75470b4e").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("746be68a8a21cf6f0ef26a9c7bb1339e224d308d8dd208784ca55a76fcf6c38f").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("405122efdbb255e19a94af59918786b3e5d34304a1822ed50c718ca65c38e9bc").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("ccab3d4ce1ba4b7fd28b2457f5f5aecb3ff99f9af258d7162c0d6a460d9ca886").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("75fe0cfc5e2cd334603423f1d915f58940b9d39c4eec1e92e13303263d30ff5f").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("a45f13a4d4bce1c23a8e4148a5dbd17a2fd45ec1a15593642d74e08a3be86c4a").getReverse(), true));
        leaves1.push_back(make_pair(uchar_vector("6d09da9621b9d7e63021a6f3bab03d844d493332d1b6200873333e6f35902b9b").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("1d6b42d3aca225b03d9e4c5188e1b71d036b101fed49ce3e9fcd51d387bc324c").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("1aa71b9f4d9079e3dc02976f0dff69c2b4389aa7763db0b1ac87a1490899ec57").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("62f6344c35f875f95fea4e68a14e81c1b969b6452d2b4525519e6860c2c4b1bf").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("09081b1d4f4c84d8f33de6d0b12a156db9012e1ada4c4abdb071531b5080e50f").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("d6bea71b9751730a076310833913cc7773249cfdf8a82b702ce96a0a18cb6de1").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("7557538688de04dc37617157838c4410e22b447ce2ecf40cd771d221fb067a5b").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("25d723aa5fe9e8e0e5ac8e4517081ceaca0c520b08884fadd1a0a06bd1914be7").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("e14db0d0534bec05e42729f40612afb7ac9ff206aa26cba7a9a71c53c3241ec5").getReverse(), true));
        leaves1.push_back(make_pair(uchar_vector("57a01bdfc42308ae0918f943bf399395878032b6c41b234a73a8e590f4ae2d1a").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("068085b8560ef634e60d35486adf56c06575a1483a392386dd1be546b48cd6f1").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("22cb6109bfc30ad9e04e927600dd590d93d7d805eff2710014d0cc1aef1bd73a").getReverse(), true));
        leaves1.push_back(make_pair(uchar_vector("8bc9f104934d7c9bb6d604fcab54aafbd1cae9cec4f2eada892161ecef6575f1").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("e552494369e0f4968ccbb88c5a7ac33a3529a540cd1f7db5ffc41046ca7a191e").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("12495894a5c26976715d5c9194d9433df10d29c47a81eb52f73942a6aba08cb7").getReverse(), false));
        leaves1.push_back(make_pair(uchar_vector("8136919fc56496bda3d5bc9c05d29cecedf68bc3199fa85af4d6777a9ac3095a").getReverse(), false));


        leaves2.push_back(make_pair(uchar_vector("51ad11ed9bad5760329d771cd889f85e5c17b9236f7d42c6404ba41eb0ff0167").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("56ecfac584945699e2cfccbc6989a6ab61abeacefc65ecfadeb0381e75470b4e").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("746be68a8a21cf6f0ef26a9c7bb1339e224d308d8dd208784ca55a76fcf6c38f").getReverse(), true));
        leaves2.push_back(make_pair(uchar_vector("405122efdbb255e19a94af59918786b3e5d34304a1822ed50c718ca65c38e9bc").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("ccab3d4ce1ba4b7fd28b2457f5f5aecb3ff99f9af258d7162c0d6a460d9ca886").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("75fe0cfc5e2cd334603423f1d915f58940b9d39c4eec1e92e13303263d30ff5f").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("a45f13a4d4bce1c23a8e4148a5dbd17a2fd45ec1a15593642d74e08a3be86c4a").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("6d09da9621b9d7e63021a6f3bab03d844d493332d1b6200873333e6f35902b9b").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("1d6b42d3aca225b03d9e4c5188e1b71d036b101fed49ce3e9fcd51d387bc324c").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("1aa71b9f4d9079e3dc02976f0dff69c2b4389aa7763db0b1ac87a1490899ec57").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("62f6344c35f875f95fea4e68a14e81c1b969b6452d2b4525519e6860c2c4b1bf").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("09081b1d4f4c84d8f33de6d0b12a156db9012e1ada4c4abdb071531b5080e50f").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("d6bea71b9751730a076310833913cc7773249cfdf8a82b702ce96a0a18cb6de1").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("7557538688de04dc37617157838c4410e22b447ce2ecf40cd771d221fb067a5b").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("25d723aa5fe9e8e0e5ac8e4517081ceaca0c520b08884fadd1a0a06bd1914be7").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("e14db0d0534bec05e42729f40612afb7ac9ff206aa26cba7a9a71c53c3241ec5").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("57a01bdfc42308ae0918f943bf399395878032b6c41b234a73a8e590f4ae2d1a").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("068085b8560ef634e60d35486adf56c06575a1483a392386dd1be546b48cd6f1").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("22cb6109bfc30ad9e04e927600dd590d93d7d805eff2710014d0cc1aef1bd73a").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("8bc9f104934d7c9bb6d604fcab54aafbd1cae9cec4f2eada892161ecef6575f1").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("e552494369e0f4968ccbb88c5a7ac33a3529a540cd1f7db5ffc41046ca7a191e").getReverse(), true));
        leaves2.push_back(make_pair(uchar_vector("12495894a5c26976715d5c9194d9433df10d29c47a81eb52f73942a6aba08cb7").getReverse(), false));
        leaves2.push_back(make_pair(uchar_vector("8136919fc56496bda3d5bc9c05d29cecedf68bc3199fa85af4d6777a9ac3095a").getReverse(), false));

        PartialMerkleTree tree1;
        tree1.setUncompressed(leaves1);

        cout << "Tree1" << endl;
        cout << tree1.toIndentedString() << endl;

        PartialMerkleTree tree2;
        tree2.setUncompressed(leaves2);

        cout << "Tree2" << endl;
        cout << tree2.toIndentedString() << endl;

        tree1.merge(tree2);
        cout << "Tree1 + Tree2" << endl;
        cout << tree1.toIndentedString() << endl;

        return 0;
    }
    catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
        return 1;
    }
}
