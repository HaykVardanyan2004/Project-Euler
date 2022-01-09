#include <iostream>

size_t greatest_product_13(std::string str)
{
    int count = 0;
    size_t max_product = 0;
    size_t tmp_product = 1;
    
    for(int i = 0; i < str.size(); ++i)
    {
        for(int j = i; ; ++j)
        {
            ++count;
            tmp_product *= str[j] - '0';
            
            if(count == 13)
            {
                break;
            }
            
        }
        if(tmp_product > max_product)
        {
            max_product = tmp_product;
        }
        tmp_product = 1;
        count = 0;
        
    }
    return max_product;
}

int main()
{
std::string str = "73167176531330624919225119674426574742355349194934";
str += "96983520312774506326239578318016984801869478851843";
str += "85861560789112949495459501737958331952853208805511";
str += "12540698747158523863050715693290963295227443043557";
str += "66896648950445244523161731856403098711121722383113";
str += "62229893423380308135336276614282806444486645238749";
str += "30358907296290491560440772390713810515859307960866";
str += "70172427121883998797908792274921901699720888093776";
str += "65727333001053367881220235421809751254540594752243";
str += "52584907711670556013604839586446706324415722155397";
str += "53697817977846174064955149290862569321978468622482";
str += "83972241375657056057490261407972968652414535100474";
str += "82166370484403199890008895243450658541227588666881";
str += "16427171479924442928230863465674813919123162824586";
str += "17866458359124566529476545682848912883142607690042";
str += "24219022671055626321111109370544217506941658960408";
str += "07198403850962455444362981230987879927244284909188";
str += "84580156166097919133875499200524063689912560717606";
str += "05886116467109405077541002256983155200055935729725";
str += "71636269561882670428252483600823257530420752963450";

std::cout << greatest_product_13(str);


}
