

unsigned char swap_bits(char octet)
{
    unsigned char result;

    unsigned char right_bits = octet << 4;

    unsigned char left_bits = octet >> 4;

    result = right_bits | left_bits;
    return result;
}
