#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetItem
// Address: 0x2518c0 - 0x252aa8
void SetItem_0x2518c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2518c0u;

label_2518c0:
    // 0x2518c0: 0x27bdff00
    ctx->pc = 0x2518c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
label_2518c4:
    // 0x2518c4: 0xffbf00f0
    ctx->pc = 0x2518c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_2518c8:
    // 0x2518c8: 0xffbe00e0
    ctx->pc = 0x2518c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
label_2518cc:
    // 0x2518cc: 0xffb700d0
    ctx->pc = 0x2518ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
label_2518d0:
    // 0x2518d0: 0xffb600c0
    ctx->pc = 0x2518d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
label_2518d4:
    // 0x2518d4: 0xffb500b0
    ctx->pc = 0x2518d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
label_2518d8:
    // 0x2518d8: 0xffb400a0
    ctx->pc = 0x2518d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_2518dc:
    // 0x2518dc: 0xffb30090
    ctx->pc = 0x2518dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
label_2518e0:
    // 0x2518e0: 0xffb20080
    ctx->pc = 0x2518e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_2518e4:
    // 0x2518e4: 0xffb10070
    ctx->pc = 0x2518e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
label_2518e8:
    // 0x2518e8: 0xffb00060
    ctx->pc = 0x2518e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_2518ec:
    // 0x2518ec: 0x80882d
    ctx->pc = 0x2518ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2518f0:
    // 0x2518f0: 0xa0982d
    ctx->pc = 0x2518f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2518f4:
    // 0x2518f4: 0xc0902d
    ctx->pc = 0x2518f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2518f8:
    // 0x2518f8: 0x24020001
    ctx->pc = 0x2518f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2518fc:
    // 0x2518fc: 0xafa20058
    ctx->pc = 0x2518fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_251900:
    // 0x251900: 0x8e430000
    ctx->pc = 0x251900u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_251904:
    // 0x251904: 0x2402ffff
    ctx->pc = 0x251904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_251908:
    // 0x251908: 0x14620019
label_25190c:
    if (ctx->pc == 0x25190Cu) {
        ctx->pc = 0x25190Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x251910u;
        goto label_251910;
    }
    ctx->pc = 0x251908u;
    {
        const bool branch_taken_0x251908 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25190Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x251908) {
            ctx->pc = 0x251970u;
            goto label_251970;
        }
    }
    ctx->pc = 0x251910u;
label_251910:
    // 0x251910: 0x3c170034
    ctx->pc = 0x251910u;
    SET_GPR_U32(ctx, 23, ((uint32_t)52 << 16));
label_251914:
    // 0x251914: 0x3c16f0f0
    ctx->pc = 0x251914u;
    SET_GPR_U32(ctx, 22, ((uint32_t)61680 << 16));
label_251918:
    // 0x251918: 0x36d6f0f1
    ctx->pc = 0x251918u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), 61681));
label_25191c:
    // 0x25191c: 0x3c020032
    ctx->pc = 0x25191cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_251920:
    // 0x251920: 0x2455f9f8
    ctx->pc = 0x251920u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294965752));
label_251924:
    // 0x251924: 0x24140050
    ctx->pc = 0x251924u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 80));
label_251928:
    // 0x251928: 0x2410ffff
    ctx->pc = 0x251928u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25192c:
    // 0x25192c: 0x8ee4cd94
    ctx->pc = 0x25192cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 23), 4294954388)));
label_251930:
    // 0x251930: 0x2242023
    ctx->pc = 0x251930u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_251934:
    // 0x251934: 0x962018
    ctx->pc = 0x251934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_251938:
    // 0x251938: 0x42103
    ctx->pc = 0x251938u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_25193c:
    // 0x25193c: 0x8e450004
    ctx->pc = 0x25193cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_251940:
    // 0x251940: 0xc093e96
label_251944:
    if (ctx->pc == 0x251944u) {
        ctx->pc = 0x251944u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x251948u;
        goto label_251948;
    }
    ctx->pc = 0x251940u;
    SET_GPR_U32(ctx, 31, 0x251948u);
    ctx->pc = 0x251944u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24FA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandItemIdx_0x24fa58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251948u; }
    }
    if (ctx->pc != 0x251948u) { return; }
    ctx->pc = 0x251948u;
label_251948:
    // 0x251948: 0x21040
    ctx->pc = 0x251948u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_25194c:
    // 0x25194c: 0x2421021
    ctx->pc = 0x25194cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_251950:
    // 0x251950: 0x84440008
    ctx->pc = 0x251950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_251954:
    // 0x251954: 0x941818
    ctx->pc = 0x251954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_251958:
    // 0x251958: 0x8ea20068
    ctx->pc = 0x251958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_25195c:
    // 0x25195c: 0x629021
    ctx->pc = 0x25195cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_251960:
    // 0x251960: 0x8e420000
    ctx->pc = 0x251960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_251964:
    // 0x251964: 0x1050fff2
label_251968:
    if (ctx->pc == 0x251968u) {
        ctx->pc = 0x251968u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 23), 4294954388)));
        ctx->pc = 0x25196Cu;
        goto label_25196c;
    }
    ctx->pc = 0x251964u;
    {
        const bool branch_taken_0x251964 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x251968u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 23), 4294954388)));
        if (branch_taken_0x251964) {
            ctx->pc = 0x251930u;
            goto label_251930;
        }
    }
    ctx->pc = 0x25196Cu;
label_25196c:
    // 0x25196c: 0x8e430000
    ctx->pc = 0x25196cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_251970:
    // 0x251970: 0xafa30050
    ctx->pc = 0x251970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_251974:
    // 0x251974: 0x8e440004
    ctx->pc = 0x251974u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_251978:
    // 0x251978: 0x24020001
    ctx->pc = 0x251978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_25197c:
    // 0x25197c: 0x14620037
label_251980:
    if (ctx->pc == 0x251980u) {
        ctx->pc = 0x251980u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->pc = 0x251984u;
        goto label_251984;
    }
    ctx->pc = 0x25197Cu;
    {
        const bool branch_taken_0x25197c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x251980u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        if (branch_taken_0x25197c) {
            ctx->pc = 0x251A5Cu;
            goto label_251a5c;
        }
    }
    ctx->pc = 0x251984u;
label_251984:
    // 0x251984: 0x2483fffe
    ctx->pc = 0x251984u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967294));
label_251988:
    // 0x251988: 0x2c62000e
    ctx->pc = 0x251988u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
label_25198c:
    // 0x25198c: 0x10400033
label_251990:
    if (ctx->pc == 0x251990u) {
        ctx->pc = 0x251990u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x251994u;
        goto label_251994;
    }
    ctx->pc = 0x25198Cu;
    {
        const bool branch_taken_0x25198c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251990u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x25198c) {
            ctx->pc = 0x251A5Cu;
            goto label_251a5c;
        }
    }
    ctx->pc = 0x251994u;
label_251994:
    // 0x251994: 0x244287c0
    ctx->pc = 0x251994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936512));
label_251998:
    // 0x251998: 0x31880
    ctx->pc = 0x251998u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_25199c:
    // 0x25199c: 0x621821
    ctx->pc = 0x25199cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2519a0:
    // 0x2519a0: 0x8c620000
    ctx->pc = 0x2519a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2519a4:
    // 0x2519a4: 0x400008
label_2519a8:
    if (ctx->pc == 0x2519A8u) {
        ctx->pc = 0x2519ACu;
        goto label_2519ac;
    }
    ctx->pc = 0x2519A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2518C0u: goto label_2518c0;
            case 0x2518C4u: goto label_2518c4;
            case 0x2518C8u: goto label_2518c8;
            case 0x2518CCu: goto label_2518cc;
            case 0x2518D0u: goto label_2518d0;
            case 0x2518D4u: goto label_2518d4;
            case 0x2518D8u: goto label_2518d8;
            case 0x2518DCu: goto label_2518dc;
            case 0x2518E0u: goto label_2518e0;
            case 0x2518E4u: goto label_2518e4;
            case 0x2518E8u: goto label_2518e8;
            case 0x2518ECu: goto label_2518ec;
            case 0x2518F0u: goto label_2518f0;
            case 0x2518F4u: goto label_2518f4;
            case 0x2518F8u: goto label_2518f8;
            case 0x2518FCu: goto label_2518fc;
            case 0x251900u: goto label_251900;
            case 0x251904u: goto label_251904;
            case 0x251908u: goto label_251908;
            case 0x25190Cu: goto label_25190c;
            case 0x251910u: goto label_251910;
            case 0x251914u: goto label_251914;
            case 0x251918u: goto label_251918;
            case 0x25191Cu: goto label_25191c;
            case 0x251920u: goto label_251920;
            case 0x251924u: goto label_251924;
            case 0x251928u: goto label_251928;
            case 0x25192Cu: goto label_25192c;
            case 0x251930u: goto label_251930;
            case 0x251934u: goto label_251934;
            case 0x251938u: goto label_251938;
            case 0x25193Cu: goto label_25193c;
            case 0x251940u: goto label_251940;
            case 0x251944u: goto label_251944;
            case 0x251948u: goto label_251948;
            case 0x25194Cu: goto label_25194c;
            case 0x251950u: goto label_251950;
            case 0x251954u: goto label_251954;
            case 0x251958u: goto label_251958;
            case 0x25195Cu: goto label_25195c;
            case 0x251960u: goto label_251960;
            case 0x251964u: goto label_251964;
            case 0x251968u: goto label_251968;
            case 0x25196Cu: goto label_25196c;
            case 0x251970u: goto label_251970;
            case 0x251974u: goto label_251974;
            case 0x251978u: goto label_251978;
            case 0x25197Cu: goto label_25197c;
            case 0x251980u: goto label_251980;
            case 0x251984u: goto label_251984;
            case 0x251988u: goto label_251988;
            case 0x25198Cu: goto label_25198c;
            case 0x251990u: goto label_251990;
            case 0x251994u: goto label_251994;
            case 0x251998u: goto label_251998;
            case 0x25199Cu: goto label_25199c;
            case 0x2519A0u: goto label_2519a0;
            case 0x2519A4u: goto label_2519a4;
            case 0x2519A8u: goto label_2519a8;
            case 0x2519ACu: goto label_2519ac;
            case 0x2519B0u: goto label_2519b0;
            case 0x2519B4u: goto label_2519b4;
            case 0x2519B8u: goto label_2519b8;
            case 0x2519BCu: goto label_2519bc;
            case 0x2519C0u: goto label_2519c0;
            case 0x2519C4u: goto label_2519c4;
            case 0x2519C8u: goto label_2519c8;
            case 0x2519CCu: goto label_2519cc;
            case 0x2519D0u: goto label_2519d0;
            case 0x2519D4u: goto label_2519d4;
            case 0x2519D8u: goto label_2519d8;
            case 0x2519DCu: goto label_2519dc;
            case 0x2519E0u: goto label_2519e0;
            case 0x2519E4u: goto label_2519e4;
            case 0x2519E8u: goto label_2519e8;
            case 0x2519ECu: goto label_2519ec;
            case 0x2519F0u: goto label_2519f0;
            case 0x2519F4u: goto label_2519f4;
            case 0x2519F8u: goto label_2519f8;
            case 0x2519FCu: goto label_2519fc;
            case 0x251A00u: goto label_251a00;
            case 0x251A04u: goto label_251a04;
            case 0x251A08u: goto label_251a08;
            case 0x251A0Cu: goto label_251a0c;
            case 0x251A10u: goto label_251a10;
            case 0x251A14u: goto label_251a14;
            case 0x251A18u: goto label_251a18;
            case 0x251A1Cu: goto label_251a1c;
            case 0x251A20u: goto label_251a20;
            case 0x251A24u: goto label_251a24;
            case 0x251A28u: goto label_251a28;
            case 0x251A2Cu: goto label_251a2c;
            case 0x251A30u: goto label_251a30;
            case 0x251A34u: goto label_251a34;
            case 0x251A38u: goto label_251a38;
            case 0x251A3Cu: goto label_251a3c;
            case 0x251A40u: goto label_251a40;
            case 0x251A44u: goto label_251a44;
            case 0x251A48u: goto label_251a48;
            case 0x251A4Cu: goto label_251a4c;
            case 0x251A50u: goto label_251a50;
            case 0x251A54u: goto label_251a54;
            case 0x251A58u: goto label_251a58;
            case 0x251A5Cu: goto label_251a5c;
            case 0x251A60u: goto label_251a60;
            case 0x251A64u: goto label_251a64;
            case 0x251A68u: goto label_251a68;
            case 0x251A6Cu: goto label_251a6c;
            case 0x251A70u: goto label_251a70;
            case 0x251A74u: goto label_251a74;
            case 0x251A78u: goto label_251a78;
            case 0x251A7Cu: goto label_251a7c;
            case 0x251A80u: goto label_251a80;
            case 0x251A84u: goto label_251a84;
            case 0x251A88u: goto label_251a88;
            case 0x251A8Cu: goto label_251a8c;
            case 0x251A90u: goto label_251a90;
            case 0x251A94u: goto label_251a94;
            case 0x251A98u: goto label_251a98;
            case 0x251A9Cu: goto label_251a9c;
            case 0x251AA0u: goto label_251aa0;
            case 0x251AA4u: goto label_251aa4;
            case 0x251AA8u: goto label_251aa8;
            case 0x251AACu: goto label_251aac;
            case 0x251AB0u: goto label_251ab0;
            case 0x251AB4u: goto label_251ab4;
            case 0x251AB8u: goto label_251ab8;
            case 0x251ABCu: goto label_251abc;
            case 0x251AC0u: goto label_251ac0;
            case 0x251AC4u: goto label_251ac4;
            case 0x251AC8u: goto label_251ac8;
            case 0x251ACCu: goto label_251acc;
            case 0x251AD0u: goto label_251ad0;
            case 0x251AD4u: goto label_251ad4;
            case 0x251AD8u: goto label_251ad8;
            case 0x251ADCu: goto label_251adc;
            case 0x251AE0u: goto label_251ae0;
            case 0x251AE4u: goto label_251ae4;
            case 0x251AE8u: goto label_251ae8;
            case 0x251AECu: goto label_251aec;
            case 0x251AF0u: goto label_251af0;
            case 0x251AF4u: goto label_251af4;
            case 0x251AF8u: goto label_251af8;
            case 0x251AFCu: goto label_251afc;
            case 0x251B00u: goto label_251b00;
            case 0x251B04u: goto label_251b04;
            case 0x251B08u: goto label_251b08;
            case 0x251B0Cu: goto label_251b0c;
            case 0x251B10u: goto label_251b10;
            case 0x251B14u: goto label_251b14;
            case 0x251B18u: goto label_251b18;
            case 0x251B1Cu: goto label_251b1c;
            case 0x251B20u: goto label_251b20;
            case 0x251B24u: goto label_251b24;
            case 0x251B28u: goto label_251b28;
            case 0x251B2Cu: goto label_251b2c;
            case 0x251B30u: goto label_251b30;
            case 0x251B34u: goto label_251b34;
            case 0x251B38u: goto label_251b38;
            case 0x251B3Cu: goto label_251b3c;
            case 0x251B40u: goto label_251b40;
            case 0x251B44u: goto label_251b44;
            case 0x251B48u: goto label_251b48;
            case 0x251B4Cu: goto label_251b4c;
            case 0x251B50u: goto label_251b50;
            case 0x251B54u: goto label_251b54;
            case 0x251B58u: goto label_251b58;
            case 0x251B5Cu: goto label_251b5c;
            case 0x251B60u: goto label_251b60;
            case 0x251B64u: goto label_251b64;
            case 0x251B68u: goto label_251b68;
            case 0x251B6Cu: goto label_251b6c;
            case 0x251B70u: goto label_251b70;
            case 0x251B74u: goto label_251b74;
            case 0x251B78u: goto label_251b78;
            case 0x251B7Cu: goto label_251b7c;
            case 0x251B80u: goto label_251b80;
            case 0x251B84u: goto label_251b84;
            case 0x251B88u: goto label_251b88;
            case 0x251B8Cu: goto label_251b8c;
            case 0x251B90u: goto label_251b90;
            case 0x251B94u: goto label_251b94;
            case 0x251B98u: goto label_251b98;
            case 0x251B9Cu: goto label_251b9c;
            case 0x251BA0u: goto label_251ba0;
            case 0x251BA4u: goto label_251ba4;
            case 0x251BA8u: goto label_251ba8;
            case 0x251BACu: goto label_251bac;
            case 0x251BB0u: goto label_251bb0;
            case 0x251BB4u: goto label_251bb4;
            case 0x251BB8u: goto label_251bb8;
            case 0x251BBCu: goto label_251bbc;
            case 0x251BC0u: goto label_251bc0;
            case 0x251BC4u: goto label_251bc4;
            case 0x251BC8u: goto label_251bc8;
            case 0x251BCCu: goto label_251bcc;
            case 0x251BD0u: goto label_251bd0;
            case 0x251BD4u: goto label_251bd4;
            case 0x251BD8u: goto label_251bd8;
            case 0x251BDCu: goto label_251bdc;
            case 0x251BE0u: goto label_251be0;
            case 0x251BE4u: goto label_251be4;
            case 0x251BE8u: goto label_251be8;
            case 0x251BECu: goto label_251bec;
            case 0x251BF0u: goto label_251bf0;
            case 0x251BF4u: goto label_251bf4;
            case 0x251BF8u: goto label_251bf8;
            case 0x251BFCu: goto label_251bfc;
            case 0x251C00u: goto label_251c00;
            case 0x251C04u: goto label_251c04;
            case 0x251C08u: goto label_251c08;
            case 0x251C0Cu: goto label_251c0c;
            case 0x251C10u: goto label_251c10;
            case 0x251C14u: goto label_251c14;
            case 0x251C18u: goto label_251c18;
            case 0x251C1Cu: goto label_251c1c;
            case 0x251C20u: goto label_251c20;
            case 0x251C24u: goto label_251c24;
            case 0x251C28u: goto label_251c28;
            case 0x251C2Cu: goto label_251c2c;
            case 0x251C30u: goto label_251c30;
            case 0x251C34u: goto label_251c34;
            case 0x251C38u: goto label_251c38;
            case 0x251C3Cu: goto label_251c3c;
            case 0x251C40u: goto label_251c40;
            case 0x251C44u: goto label_251c44;
            case 0x251C48u: goto label_251c48;
            case 0x251C4Cu: goto label_251c4c;
            case 0x251C50u: goto label_251c50;
            case 0x251C54u: goto label_251c54;
            case 0x251C58u: goto label_251c58;
            case 0x251C5Cu: goto label_251c5c;
            case 0x251C60u: goto label_251c60;
            case 0x251C64u: goto label_251c64;
            case 0x251C68u: goto label_251c68;
            case 0x251C6Cu: goto label_251c6c;
            case 0x251C70u: goto label_251c70;
            case 0x251C74u: goto label_251c74;
            case 0x251C78u: goto label_251c78;
            case 0x251C7Cu: goto label_251c7c;
            case 0x251C80u: goto label_251c80;
            case 0x251C84u: goto label_251c84;
            case 0x251C88u: goto label_251c88;
            case 0x251C8Cu: goto label_251c8c;
            case 0x251C90u: goto label_251c90;
            case 0x251C94u: goto label_251c94;
            case 0x251C98u: goto label_251c98;
            case 0x251C9Cu: goto label_251c9c;
            case 0x251CA0u: goto label_251ca0;
            case 0x251CA4u: goto label_251ca4;
            case 0x251CA8u: goto label_251ca8;
            case 0x251CACu: goto label_251cac;
            case 0x251CB0u: goto label_251cb0;
            case 0x251CB4u: goto label_251cb4;
            case 0x251CB8u: goto label_251cb8;
            case 0x251CBCu: goto label_251cbc;
            case 0x251CC0u: goto label_251cc0;
            case 0x251CC4u: goto label_251cc4;
            case 0x251CC8u: goto label_251cc8;
            case 0x251CCCu: goto label_251ccc;
            case 0x251CD0u: goto label_251cd0;
            case 0x251CD4u: goto label_251cd4;
            case 0x251CD8u: goto label_251cd8;
            case 0x251CDCu: goto label_251cdc;
            case 0x251CE0u: goto label_251ce0;
            case 0x251CE4u: goto label_251ce4;
            case 0x251CE8u: goto label_251ce8;
            case 0x251CECu: goto label_251cec;
            case 0x251CF0u: goto label_251cf0;
            case 0x251CF4u: goto label_251cf4;
            case 0x251CF8u: goto label_251cf8;
            case 0x251CFCu: goto label_251cfc;
            case 0x251D00u: goto label_251d00;
            case 0x251D04u: goto label_251d04;
            case 0x251D08u: goto label_251d08;
            case 0x251D0Cu: goto label_251d0c;
            case 0x251D10u: goto label_251d10;
            case 0x251D14u: goto label_251d14;
            case 0x251D18u: goto label_251d18;
            case 0x251D1Cu: goto label_251d1c;
            case 0x251D20u: goto label_251d20;
            case 0x251D24u: goto label_251d24;
            case 0x251D28u: goto label_251d28;
            case 0x251D2Cu: goto label_251d2c;
            case 0x251D30u: goto label_251d30;
            case 0x251D34u: goto label_251d34;
            case 0x251D38u: goto label_251d38;
            case 0x251D3Cu: goto label_251d3c;
            case 0x251D40u: goto label_251d40;
            case 0x251D44u: goto label_251d44;
            case 0x251D48u: goto label_251d48;
            case 0x251D4Cu: goto label_251d4c;
            case 0x251D50u: goto label_251d50;
            case 0x251D54u: goto label_251d54;
            case 0x251D58u: goto label_251d58;
            case 0x251D5Cu: goto label_251d5c;
            case 0x251D60u: goto label_251d60;
            case 0x251D64u: goto label_251d64;
            case 0x251D68u: goto label_251d68;
            case 0x251D6Cu: goto label_251d6c;
            case 0x251D70u: goto label_251d70;
            case 0x251D74u: goto label_251d74;
            case 0x251D78u: goto label_251d78;
            case 0x251D7Cu: goto label_251d7c;
            case 0x251D80u: goto label_251d80;
            case 0x251D84u: goto label_251d84;
            case 0x251D88u: goto label_251d88;
            case 0x251D8Cu: goto label_251d8c;
            case 0x251D90u: goto label_251d90;
            case 0x251D94u: goto label_251d94;
            case 0x251D98u: goto label_251d98;
            case 0x251D9Cu: goto label_251d9c;
            case 0x251DA0u: goto label_251da0;
            case 0x251DA4u: goto label_251da4;
            case 0x251DA8u: goto label_251da8;
            case 0x251DACu: goto label_251dac;
            case 0x251DB0u: goto label_251db0;
            case 0x251DB4u: goto label_251db4;
            case 0x251DB8u: goto label_251db8;
            case 0x251DBCu: goto label_251dbc;
            case 0x251DC0u: goto label_251dc0;
            case 0x251DC4u: goto label_251dc4;
            case 0x251DC8u: goto label_251dc8;
            case 0x251DCCu: goto label_251dcc;
            case 0x251DD0u: goto label_251dd0;
            case 0x251DD4u: goto label_251dd4;
            case 0x251DD8u: goto label_251dd8;
            case 0x251DDCu: goto label_251ddc;
            case 0x251DE0u: goto label_251de0;
            case 0x251DE4u: goto label_251de4;
            case 0x251DE8u: goto label_251de8;
            case 0x251DECu: goto label_251dec;
            case 0x251DF0u: goto label_251df0;
            case 0x251DF4u: goto label_251df4;
            case 0x251DF8u: goto label_251df8;
            case 0x251DFCu: goto label_251dfc;
            case 0x251E00u: goto label_251e00;
            case 0x251E04u: goto label_251e04;
            case 0x251E08u: goto label_251e08;
            case 0x251E0Cu: goto label_251e0c;
            case 0x251E10u: goto label_251e10;
            case 0x251E14u: goto label_251e14;
            case 0x251E18u: goto label_251e18;
            case 0x251E1Cu: goto label_251e1c;
            case 0x251E20u: goto label_251e20;
            case 0x251E24u: goto label_251e24;
            case 0x251E28u: goto label_251e28;
            case 0x251E2Cu: goto label_251e2c;
            case 0x251E30u: goto label_251e30;
            case 0x251E34u: goto label_251e34;
            case 0x251E38u: goto label_251e38;
            case 0x251E3Cu: goto label_251e3c;
            case 0x251E40u: goto label_251e40;
            case 0x251E44u: goto label_251e44;
            case 0x251E48u: goto label_251e48;
            case 0x251E4Cu: goto label_251e4c;
            case 0x251E50u: goto label_251e50;
            case 0x251E54u: goto label_251e54;
            case 0x251E58u: goto label_251e58;
            case 0x251E5Cu: goto label_251e5c;
            case 0x251E60u: goto label_251e60;
            case 0x251E64u: goto label_251e64;
            case 0x251E68u: goto label_251e68;
            case 0x251E6Cu: goto label_251e6c;
            case 0x251E70u: goto label_251e70;
            case 0x251E74u: goto label_251e74;
            case 0x251E78u: goto label_251e78;
            case 0x251E7Cu: goto label_251e7c;
            case 0x251E80u: goto label_251e80;
            case 0x251E84u: goto label_251e84;
            case 0x251E88u: goto label_251e88;
            case 0x251E8Cu: goto label_251e8c;
            case 0x251E90u: goto label_251e90;
            case 0x251E94u: goto label_251e94;
            case 0x251E98u: goto label_251e98;
            case 0x251E9Cu: goto label_251e9c;
            case 0x251EA0u: goto label_251ea0;
            case 0x251EA4u: goto label_251ea4;
            case 0x251EA8u: goto label_251ea8;
            case 0x251EACu: goto label_251eac;
            case 0x251EB0u: goto label_251eb0;
            case 0x251EB4u: goto label_251eb4;
            case 0x251EB8u: goto label_251eb8;
            case 0x251EBCu: goto label_251ebc;
            case 0x251EC0u: goto label_251ec0;
            case 0x251EC4u: goto label_251ec4;
            case 0x251EC8u: goto label_251ec8;
            case 0x251ECCu: goto label_251ecc;
            case 0x251ED0u: goto label_251ed0;
            case 0x251ED4u: goto label_251ed4;
            case 0x251ED8u: goto label_251ed8;
            case 0x251EDCu: goto label_251edc;
            case 0x251EE0u: goto label_251ee0;
            case 0x251EE4u: goto label_251ee4;
            case 0x251EE8u: goto label_251ee8;
            case 0x251EECu: goto label_251eec;
            case 0x251EF0u: goto label_251ef0;
            case 0x251EF4u: goto label_251ef4;
            case 0x251EF8u: goto label_251ef8;
            case 0x251EFCu: goto label_251efc;
            case 0x251F00u: goto label_251f00;
            case 0x251F04u: goto label_251f04;
            case 0x251F08u: goto label_251f08;
            case 0x251F0Cu: goto label_251f0c;
            case 0x251F10u: goto label_251f10;
            case 0x251F14u: goto label_251f14;
            case 0x251F18u: goto label_251f18;
            case 0x251F1Cu: goto label_251f1c;
            case 0x251F20u: goto label_251f20;
            case 0x251F24u: goto label_251f24;
            case 0x251F28u: goto label_251f28;
            case 0x251F2Cu: goto label_251f2c;
            case 0x251F30u: goto label_251f30;
            case 0x251F34u: goto label_251f34;
            case 0x251F38u: goto label_251f38;
            case 0x251F3Cu: goto label_251f3c;
            case 0x251F40u: goto label_251f40;
            case 0x251F44u: goto label_251f44;
            case 0x251F48u: goto label_251f48;
            case 0x251F4Cu: goto label_251f4c;
            case 0x251F50u: goto label_251f50;
            case 0x251F54u: goto label_251f54;
            case 0x251F58u: goto label_251f58;
            case 0x251F5Cu: goto label_251f5c;
            case 0x251F60u: goto label_251f60;
            case 0x251F64u: goto label_251f64;
            case 0x251F68u: goto label_251f68;
            case 0x251F6Cu: goto label_251f6c;
            case 0x251F70u: goto label_251f70;
            case 0x251F74u: goto label_251f74;
            case 0x251F78u: goto label_251f78;
            case 0x251F7Cu: goto label_251f7c;
            case 0x251F80u: goto label_251f80;
            case 0x251F84u: goto label_251f84;
            case 0x251F88u: goto label_251f88;
            case 0x251F8Cu: goto label_251f8c;
            case 0x251F90u: goto label_251f90;
            case 0x251F94u: goto label_251f94;
            case 0x251F98u: goto label_251f98;
            case 0x251F9Cu: goto label_251f9c;
            case 0x251FA0u: goto label_251fa0;
            case 0x251FA4u: goto label_251fa4;
            case 0x251FA8u: goto label_251fa8;
            case 0x251FACu: goto label_251fac;
            case 0x251FB0u: goto label_251fb0;
            case 0x251FB4u: goto label_251fb4;
            case 0x251FB8u: goto label_251fb8;
            case 0x251FBCu: goto label_251fbc;
            case 0x251FC0u: goto label_251fc0;
            case 0x251FC4u: goto label_251fc4;
            case 0x251FC8u: goto label_251fc8;
            case 0x251FCCu: goto label_251fcc;
            case 0x251FD0u: goto label_251fd0;
            case 0x251FD4u: goto label_251fd4;
            case 0x251FD8u: goto label_251fd8;
            case 0x251FDCu: goto label_251fdc;
            case 0x251FE0u: goto label_251fe0;
            case 0x251FE4u: goto label_251fe4;
            case 0x251FE8u: goto label_251fe8;
            case 0x251FECu: goto label_251fec;
            case 0x251FF0u: goto label_251ff0;
            case 0x251FF4u: goto label_251ff4;
            case 0x251FF8u: goto label_251ff8;
            case 0x251FFCu: goto label_251ffc;
            case 0x252000u: goto label_252000;
            case 0x252004u: goto label_252004;
            case 0x252008u: goto label_252008;
            case 0x25200Cu: goto label_25200c;
            case 0x252010u: goto label_252010;
            case 0x252014u: goto label_252014;
            case 0x252018u: goto label_252018;
            case 0x25201Cu: goto label_25201c;
            case 0x252020u: goto label_252020;
            case 0x252024u: goto label_252024;
            case 0x252028u: goto label_252028;
            case 0x25202Cu: goto label_25202c;
            case 0x252030u: goto label_252030;
            case 0x252034u: goto label_252034;
            case 0x252038u: goto label_252038;
            case 0x25203Cu: goto label_25203c;
            case 0x252040u: goto label_252040;
            case 0x252044u: goto label_252044;
            case 0x252048u: goto label_252048;
            case 0x25204Cu: goto label_25204c;
            case 0x252050u: goto label_252050;
            case 0x252054u: goto label_252054;
            case 0x252058u: goto label_252058;
            case 0x25205Cu: goto label_25205c;
            case 0x252060u: goto label_252060;
            case 0x252064u: goto label_252064;
            case 0x252068u: goto label_252068;
            case 0x25206Cu: goto label_25206c;
            case 0x252070u: goto label_252070;
            case 0x252074u: goto label_252074;
            case 0x252078u: goto label_252078;
            case 0x25207Cu: goto label_25207c;
            case 0x252080u: goto label_252080;
            case 0x252084u: goto label_252084;
            case 0x252088u: goto label_252088;
            case 0x25208Cu: goto label_25208c;
            case 0x252090u: goto label_252090;
            case 0x252094u: goto label_252094;
            case 0x252098u: goto label_252098;
            case 0x25209Cu: goto label_25209c;
            case 0x2520A0u: goto label_2520a0;
            case 0x2520A4u: goto label_2520a4;
            case 0x2520A8u: goto label_2520a8;
            case 0x2520ACu: goto label_2520ac;
            case 0x2520B0u: goto label_2520b0;
            case 0x2520B4u: goto label_2520b4;
            case 0x2520B8u: goto label_2520b8;
            case 0x2520BCu: goto label_2520bc;
            case 0x2520C0u: goto label_2520c0;
            case 0x2520C4u: goto label_2520c4;
            case 0x2520C8u: goto label_2520c8;
            case 0x2520CCu: goto label_2520cc;
            case 0x2520D0u: goto label_2520d0;
            case 0x2520D4u: goto label_2520d4;
            case 0x2520D8u: goto label_2520d8;
            case 0x2520DCu: goto label_2520dc;
            case 0x2520E0u: goto label_2520e0;
            case 0x2520E4u: goto label_2520e4;
            case 0x2520E8u: goto label_2520e8;
            case 0x2520ECu: goto label_2520ec;
            case 0x2520F0u: goto label_2520f0;
            case 0x2520F4u: goto label_2520f4;
            case 0x2520F8u: goto label_2520f8;
            case 0x2520FCu: goto label_2520fc;
            case 0x252100u: goto label_252100;
            case 0x252104u: goto label_252104;
            case 0x252108u: goto label_252108;
            case 0x25210Cu: goto label_25210c;
            case 0x252110u: goto label_252110;
            case 0x252114u: goto label_252114;
            case 0x252118u: goto label_252118;
            case 0x25211Cu: goto label_25211c;
            case 0x252120u: goto label_252120;
            case 0x252124u: goto label_252124;
            case 0x252128u: goto label_252128;
            case 0x25212Cu: goto label_25212c;
            case 0x252130u: goto label_252130;
            case 0x252134u: goto label_252134;
            case 0x252138u: goto label_252138;
            case 0x25213Cu: goto label_25213c;
            case 0x252140u: goto label_252140;
            case 0x252144u: goto label_252144;
            case 0x252148u: goto label_252148;
            case 0x25214Cu: goto label_25214c;
            case 0x252150u: goto label_252150;
            case 0x252154u: goto label_252154;
            case 0x252158u: goto label_252158;
            case 0x25215Cu: goto label_25215c;
            case 0x252160u: goto label_252160;
            case 0x252164u: goto label_252164;
            case 0x252168u: goto label_252168;
            case 0x25216Cu: goto label_25216c;
            case 0x252170u: goto label_252170;
            case 0x252174u: goto label_252174;
            case 0x252178u: goto label_252178;
            case 0x25217Cu: goto label_25217c;
            case 0x252180u: goto label_252180;
            case 0x252184u: goto label_252184;
            case 0x252188u: goto label_252188;
            case 0x25218Cu: goto label_25218c;
            case 0x252190u: goto label_252190;
            case 0x252194u: goto label_252194;
            case 0x252198u: goto label_252198;
            case 0x25219Cu: goto label_25219c;
            case 0x2521A0u: goto label_2521a0;
            case 0x2521A4u: goto label_2521a4;
            case 0x2521A8u: goto label_2521a8;
            case 0x2521ACu: goto label_2521ac;
            case 0x2521B0u: goto label_2521b0;
            case 0x2521B4u: goto label_2521b4;
            case 0x2521B8u: goto label_2521b8;
            case 0x2521BCu: goto label_2521bc;
            case 0x2521C0u: goto label_2521c0;
            case 0x2521C4u: goto label_2521c4;
            case 0x2521C8u: goto label_2521c8;
            case 0x2521CCu: goto label_2521cc;
            case 0x2521D0u: goto label_2521d0;
            case 0x2521D4u: goto label_2521d4;
            case 0x2521D8u: goto label_2521d8;
            case 0x2521DCu: goto label_2521dc;
            case 0x2521E0u: goto label_2521e0;
            case 0x2521E4u: goto label_2521e4;
            case 0x2521E8u: goto label_2521e8;
            case 0x2521ECu: goto label_2521ec;
            case 0x2521F0u: goto label_2521f0;
            case 0x2521F4u: goto label_2521f4;
            case 0x2521F8u: goto label_2521f8;
            case 0x2521FCu: goto label_2521fc;
            case 0x252200u: goto label_252200;
            case 0x252204u: goto label_252204;
            case 0x252208u: goto label_252208;
            case 0x25220Cu: goto label_25220c;
            case 0x252210u: goto label_252210;
            case 0x252214u: goto label_252214;
            case 0x252218u: goto label_252218;
            case 0x25221Cu: goto label_25221c;
            case 0x252220u: goto label_252220;
            case 0x252224u: goto label_252224;
            case 0x252228u: goto label_252228;
            case 0x25222Cu: goto label_25222c;
            case 0x252230u: goto label_252230;
            case 0x252234u: goto label_252234;
            case 0x252238u: goto label_252238;
            case 0x25223Cu: goto label_25223c;
            case 0x252240u: goto label_252240;
            case 0x252244u: goto label_252244;
            case 0x252248u: goto label_252248;
            case 0x25224Cu: goto label_25224c;
            case 0x252250u: goto label_252250;
            case 0x252254u: goto label_252254;
            case 0x252258u: goto label_252258;
            case 0x25225Cu: goto label_25225c;
            case 0x252260u: goto label_252260;
            case 0x252264u: goto label_252264;
            case 0x252268u: goto label_252268;
            case 0x25226Cu: goto label_25226c;
            case 0x252270u: goto label_252270;
            case 0x252274u: goto label_252274;
            case 0x252278u: goto label_252278;
            case 0x25227Cu: goto label_25227c;
            case 0x252280u: goto label_252280;
            case 0x252284u: goto label_252284;
            case 0x252288u: goto label_252288;
            case 0x25228Cu: goto label_25228c;
            case 0x252290u: goto label_252290;
            case 0x252294u: goto label_252294;
            case 0x252298u: goto label_252298;
            case 0x25229Cu: goto label_25229c;
            case 0x2522A0u: goto label_2522a0;
            case 0x2522A4u: goto label_2522a4;
            case 0x2522A8u: goto label_2522a8;
            case 0x2522ACu: goto label_2522ac;
            case 0x2522B0u: goto label_2522b0;
            case 0x2522B4u: goto label_2522b4;
            case 0x2522B8u: goto label_2522b8;
            case 0x2522BCu: goto label_2522bc;
            case 0x2522C0u: goto label_2522c0;
            case 0x2522C4u: goto label_2522c4;
            case 0x2522C8u: goto label_2522c8;
            case 0x2522CCu: goto label_2522cc;
            case 0x2522D0u: goto label_2522d0;
            case 0x2522D4u: goto label_2522d4;
            case 0x2522D8u: goto label_2522d8;
            case 0x2522DCu: goto label_2522dc;
            case 0x2522E0u: goto label_2522e0;
            case 0x2522E4u: goto label_2522e4;
            case 0x2522E8u: goto label_2522e8;
            case 0x2522ECu: goto label_2522ec;
            case 0x2522F0u: goto label_2522f0;
            case 0x2522F4u: goto label_2522f4;
            case 0x2522F8u: goto label_2522f8;
            case 0x2522FCu: goto label_2522fc;
            case 0x252300u: goto label_252300;
            case 0x252304u: goto label_252304;
            case 0x252308u: goto label_252308;
            case 0x25230Cu: goto label_25230c;
            case 0x252310u: goto label_252310;
            case 0x252314u: goto label_252314;
            case 0x252318u: goto label_252318;
            case 0x25231Cu: goto label_25231c;
            case 0x252320u: goto label_252320;
            case 0x252324u: goto label_252324;
            case 0x252328u: goto label_252328;
            case 0x25232Cu: goto label_25232c;
            case 0x252330u: goto label_252330;
            case 0x252334u: goto label_252334;
            case 0x252338u: goto label_252338;
            case 0x25233Cu: goto label_25233c;
            case 0x252340u: goto label_252340;
            case 0x252344u: goto label_252344;
            case 0x252348u: goto label_252348;
            case 0x25234Cu: goto label_25234c;
            case 0x252350u: goto label_252350;
            case 0x252354u: goto label_252354;
            case 0x252358u: goto label_252358;
            case 0x25235Cu: goto label_25235c;
            case 0x252360u: goto label_252360;
            case 0x252364u: goto label_252364;
            case 0x252368u: goto label_252368;
            case 0x25236Cu: goto label_25236c;
            case 0x252370u: goto label_252370;
            case 0x252374u: goto label_252374;
            case 0x252378u: goto label_252378;
            case 0x25237Cu: goto label_25237c;
            case 0x252380u: goto label_252380;
            case 0x252384u: goto label_252384;
            case 0x252388u: goto label_252388;
            case 0x25238Cu: goto label_25238c;
            case 0x252390u: goto label_252390;
            case 0x252394u: goto label_252394;
            case 0x252398u: goto label_252398;
            case 0x25239Cu: goto label_25239c;
            case 0x2523A0u: goto label_2523a0;
            case 0x2523A4u: goto label_2523a4;
            case 0x2523A8u: goto label_2523a8;
            case 0x2523ACu: goto label_2523ac;
            case 0x2523B0u: goto label_2523b0;
            case 0x2523B4u: goto label_2523b4;
            case 0x2523B8u: goto label_2523b8;
            case 0x2523BCu: goto label_2523bc;
            case 0x2523C0u: goto label_2523c0;
            case 0x2523C4u: goto label_2523c4;
            case 0x2523C8u: goto label_2523c8;
            case 0x2523CCu: goto label_2523cc;
            case 0x2523D0u: goto label_2523d0;
            case 0x2523D4u: goto label_2523d4;
            case 0x2523D8u: goto label_2523d8;
            case 0x2523DCu: goto label_2523dc;
            case 0x2523E0u: goto label_2523e0;
            case 0x2523E4u: goto label_2523e4;
            case 0x2523E8u: goto label_2523e8;
            case 0x2523ECu: goto label_2523ec;
            case 0x2523F0u: goto label_2523f0;
            case 0x2523F4u: goto label_2523f4;
            case 0x2523F8u: goto label_2523f8;
            case 0x2523FCu: goto label_2523fc;
            case 0x252400u: goto label_252400;
            case 0x252404u: goto label_252404;
            case 0x252408u: goto label_252408;
            case 0x25240Cu: goto label_25240c;
            case 0x252410u: goto label_252410;
            case 0x252414u: goto label_252414;
            case 0x252418u: goto label_252418;
            case 0x25241Cu: goto label_25241c;
            case 0x252420u: goto label_252420;
            case 0x252424u: goto label_252424;
            case 0x252428u: goto label_252428;
            case 0x25242Cu: goto label_25242c;
            case 0x252430u: goto label_252430;
            case 0x252434u: goto label_252434;
            case 0x252438u: goto label_252438;
            case 0x25243Cu: goto label_25243c;
            case 0x252440u: goto label_252440;
            case 0x252444u: goto label_252444;
            case 0x252448u: goto label_252448;
            case 0x25244Cu: goto label_25244c;
            case 0x252450u: goto label_252450;
            case 0x252454u: goto label_252454;
            case 0x252458u: goto label_252458;
            case 0x25245Cu: goto label_25245c;
            case 0x252460u: goto label_252460;
            case 0x252464u: goto label_252464;
            case 0x252468u: goto label_252468;
            case 0x25246Cu: goto label_25246c;
            case 0x252470u: goto label_252470;
            case 0x252474u: goto label_252474;
            case 0x252478u: goto label_252478;
            case 0x25247Cu: goto label_25247c;
            case 0x252480u: goto label_252480;
            case 0x252484u: goto label_252484;
            case 0x252488u: goto label_252488;
            case 0x25248Cu: goto label_25248c;
            case 0x252490u: goto label_252490;
            case 0x252494u: goto label_252494;
            case 0x252498u: goto label_252498;
            case 0x25249Cu: goto label_25249c;
            case 0x2524A0u: goto label_2524a0;
            case 0x2524A4u: goto label_2524a4;
            case 0x2524A8u: goto label_2524a8;
            case 0x2524ACu: goto label_2524ac;
            case 0x2524B0u: goto label_2524b0;
            case 0x2524B4u: goto label_2524b4;
            case 0x2524B8u: goto label_2524b8;
            case 0x2524BCu: goto label_2524bc;
            case 0x2524C0u: goto label_2524c0;
            case 0x2524C4u: goto label_2524c4;
            case 0x2524C8u: goto label_2524c8;
            case 0x2524CCu: goto label_2524cc;
            case 0x2524D0u: goto label_2524d0;
            case 0x2524D4u: goto label_2524d4;
            case 0x2524D8u: goto label_2524d8;
            case 0x2524DCu: goto label_2524dc;
            case 0x2524E0u: goto label_2524e0;
            case 0x2524E4u: goto label_2524e4;
            case 0x2524E8u: goto label_2524e8;
            case 0x2524ECu: goto label_2524ec;
            case 0x2524F0u: goto label_2524f0;
            case 0x2524F4u: goto label_2524f4;
            case 0x2524F8u: goto label_2524f8;
            case 0x2524FCu: goto label_2524fc;
            case 0x252500u: goto label_252500;
            case 0x252504u: goto label_252504;
            case 0x252508u: goto label_252508;
            case 0x25250Cu: goto label_25250c;
            case 0x252510u: goto label_252510;
            case 0x252514u: goto label_252514;
            case 0x252518u: goto label_252518;
            case 0x25251Cu: goto label_25251c;
            case 0x252520u: goto label_252520;
            case 0x252524u: goto label_252524;
            case 0x252528u: goto label_252528;
            case 0x25252Cu: goto label_25252c;
            case 0x252530u: goto label_252530;
            case 0x252534u: goto label_252534;
            case 0x252538u: goto label_252538;
            case 0x25253Cu: goto label_25253c;
            case 0x252540u: goto label_252540;
            case 0x252544u: goto label_252544;
            case 0x252548u: goto label_252548;
            case 0x25254Cu: goto label_25254c;
            case 0x252550u: goto label_252550;
            case 0x252554u: goto label_252554;
            case 0x252558u: goto label_252558;
            case 0x25255Cu: goto label_25255c;
            case 0x252560u: goto label_252560;
            case 0x252564u: goto label_252564;
            case 0x252568u: goto label_252568;
            case 0x25256Cu: goto label_25256c;
            case 0x252570u: goto label_252570;
            case 0x252574u: goto label_252574;
            case 0x252578u: goto label_252578;
            case 0x25257Cu: goto label_25257c;
            case 0x252580u: goto label_252580;
            case 0x252584u: goto label_252584;
            case 0x252588u: goto label_252588;
            case 0x25258Cu: goto label_25258c;
            case 0x252590u: goto label_252590;
            case 0x252594u: goto label_252594;
            case 0x252598u: goto label_252598;
            case 0x25259Cu: goto label_25259c;
            case 0x2525A0u: goto label_2525a0;
            case 0x2525A4u: goto label_2525a4;
            case 0x2525A8u: goto label_2525a8;
            case 0x2525ACu: goto label_2525ac;
            case 0x2525B0u: goto label_2525b0;
            case 0x2525B4u: goto label_2525b4;
            case 0x2525B8u: goto label_2525b8;
            case 0x2525BCu: goto label_2525bc;
            case 0x2525C0u: goto label_2525c0;
            case 0x2525C4u: goto label_2525c4;
            case 0x2525C8u: goto label_2525c8;
            case 0x2525CCu: goto label_2525cc;
            case 0x2525D0u: goto label_2525d0;
            case 0x2525D4u: goto label_2525d4;
            case 0x2525D8u: goto label_2525d8;
            case 0x2525DCu: goto label_2525dc;
            case 0x2525E0u: goto label_2525e0;
            case 0x2525E4u: goto label_2525e4;
            case 0x2525E8u: goto label_2525e8;
            case 0x2525ECu: goto label_2525ec;
            case 0x2525F0u: goto label_2525f0;
            case 0x2525F4u: goto label_2525f4;
            case 0x2525F8u: goto label_2525f8;
            case 0x2525FCu: goto label_2525fc;
            case 0x252600u: goto label_252600;
            case 0x252604u: goto label_252604;
            case 0x252608u: goto label_252608;
            case 0x25260Cu: goto label_25260c;
            case 0x252610u: goto label_252610;
            case 0x252614u: goto label_252614;
            case 0x252618u: goto label_252618;
            case 0x25261Cu: goto label_25261c;
            case 0x252620u: goto label_252620;
            case 0x252624u: goto label_252624;
            case 0x252628u: goto label_252628;
            case 0x25262Cu: goto label_25262c;
            case 0x252630u: goto label_252630;
            case 0x252634u: goto label_252634;
            case 0x252638u: goto label_252638;
            case 0x25263Cu: goto label_25263c;
            case 0x252640u: goto label_252640;
            case 0x252644u: goto label_252644;
            case 0x252648u: goto label_252648;
            case 0x25264Cu: goto label_25264c;
            case 0x252650u: goto label_252650;
            case 0x252654u: goto label_252654;
            case 0x252658u: goto label_252658;
            case 0x25265Cu: goto label_25265c;
            case 0x252660u: goto label_252660;
            case 0x252664u: goto label_252664;
            case 0x252668u: goto label_252668;
            case 0x25266Cu: goto label_25266c;
            case 0x252670u: goto label_252670;
            case 0x252674u: goto label_252674;
            case 0x252678u: goto label_252678;
            case 0x25267Cu: goto label_25267c;
            case 0x252680u: goto label_252680;
            case 0x252684u: goto label_252684;
            case 0x252688u: goto label_252688;
            case 0x25268Cu: goto label_25268c;
            case 0x252690u: goto label_252690;
            case 0x252694u: goto label_252694;
            case 0x252698u: goto label_252698;
            case 0x25269Cu: goto label_25269c;
            case 0x2526A0u: goto label_2526a0;
            case 0x2526A4u: goto label_2526a4;
            case 0x2526A8u: goto label_2526a8;
            case 0x2526ACu: goto label_2526ac;
            case 0x2526B0u: goto label_2526b0;
            case 0x2526B4u: goto label_2526b4;
            case 0x2526B8u: goto label_2526b8;
            case 0x2526BCu: goto label_2526bc;
            case 0x2526C0u: goto label_2526c0;
            case 0x2526C4u: goto label_2526c4;
            case 0x2526C8u: goto label_2526c8;
            case 0x2526CCu: goto label_2526cc;
            case 0x2526D0u: goto label_2526d0;
            case 0x2526D4u: goto label_2526d4;
            case 0x2526D8u: goto label_2526d8;
            case 0x2526DCu: goto label_2526dc;
            case 0x2526E0u: goto label_2526e0;
            case 0x2526E4u: goto label_2526e4;
            case 0x2526E8u: goto label_2526e8;
            case 0x2526ECu: goto label_2526ec;
            case 0x2526F0u: goto label_2526f0;
            case 0x2526F4u: goto label_2526f4;
            case 0x2526F8u: goto label_2526f8;
            case 0x2526FCu: goto label_2526fc;
            case 0x252700u: goto label_252700;
            case 0x252704u: goto label_252704;
            case 0x252708u: goto label_252708;
            case 0x25270Cu: goto label_25270c;
            case 0x252710u: goto label_252710;
            case 0x252714u: goto label_252714;
            case 0x252718u: goto label_252718;
            case 0x25271Cu: goto label_25271c;
            case 0x252720u: goto label_252720;
            case 0x252724u: goto label_252724;
            case 0x252728u: goto label_252728;
            case 0x25272Cu: goto label_25272c;
            case 0x252730u: goto label_252730;
            case 0x252734u: goto label_252734;
            case 0x252738u: goto label_252738;
            case 0x25273Cu: goto label_25273c;
            case 0x252740u: goto label_252740;
            case 0x252744u: goto label_252744;
            case 0x252748u: goto label_252748;
            case 0x25274Cu: goto label_25274c;
            case 0x252750u: goto label_252750;
            case 0x252754u: goto label_252754;
            case 0x252758u: goto label_252758;
            case 0x25275Cu: goto label_25275c;
            case 0x252760u: goto label_252760;
            case 0x252764u: goto label_252764;
            case 0x252768u: goto label_252768;
            case 0x25276Cu: goto label_25276c;
            case 0x252770u: goto label_252770;
            case 0x252774u: goto label_252774;
            case 0x252778u: goto label_252778;
            case 0x25277Cu: goto label_25277c;
            case 0x252780u: goto label_252780;
            case 0x252784u: goto label_252784;
            case 0x252788u: goto label_252788;
            case 0x25278Cu: goto label_25278c;
            case 0x252790u: goto label_252790;
            case 0x252794u: goto label_252794;
            case 0x252798u: goto label_252798;
            case 0x25279Cu: goto label_25279c;
            case 0x2527A0u: goto label_2527a0;
            case 0x2527A4u: goto label_2527a4;
            case 0x2527A8u: goto label_2527a8;
            case 0x2527ACu: goto label_2527ac;
            case 0x2527B0u: goto label_2527b0;
            case 0x2527B4u: goto label_2527b4;
            case 0x2527B8u: goto label_2527b8;
            case 0x2527BCu: goto label_2527bc;
            case 0x2527C0u: goto label_2527c0;
            case 0x2527C4u: goto label_2527c4;
            case 0x2527C8u: goto label_2527c8;
            case 0x2527CCu: goto label_2527cc;
            case 0x2527D0u: goto label_2527d0;
            case 0x2527D4u: goto label_2527d4;
            case 0x2527D8u: goto label_2527d8;
            case 0x2527DCu: goto label_2527dc;
            case 0x2527E0u: goto label_2527e0;
            case 0x2527E4u: goto label_2527e4;
            case 0x2527E8u: goto label_2527e8;
            case 0x2527ECu: goto label_2527ec;
            case 0x2527F0u: goto label_2527f0;
            case 0x2527F4u: goto label_2527f4;
            case 0x2527F8u: goto label_2527f8;
            case 0x2527FCu: goto label_2527fc;
            case 0x252800u: goto label_252800;
            case 0x252804u: goto label_252804;
            case 0x252808u: goto label_252808;
            case 0x25280Cu: goto label_25280c;
            case 0x252810u: goto label_252810;
            case 0x252814u: goto label_252814;
            case 0x252818u: goto label_252818;
            case 0x25281Cu: goto label_25281c;
            case 0x252820u: goto label_252820;
            case 0x252824u: goto label_252824;
            case 0x252828u: goto label_252828;
            case 0x25282Cu: goto label_25282c;
            case 0x252830u: goto label_252830;
            case 0x252834u: goto label_252834;
            case 0x252838u: goto label_252838;
            case 0x25283Cu: goto label_25283c;
            case 0x252840u: goto label_252840;
            case 0x252844u: goto label_252844;
            case 0x252848u: goto label_252848;
            case 0x25284Cu: goto label_25284c;
            case 0x252850u: goto label_252850;
            case 0x252854u: goto label_252854;
            case 0x252858u: goto label_252858;
            case 0x25285Cu: goto label_25285c;
            case 0x252860u: goto label_252860;
            case 0x252864u: goto label_252864;
            case 0x252868u: goto label_252868;
            case 0x25286Cu: goto label_25286c;
            case 0x252870u: goto label_252870;
            case 0x252874u: goto label_252874;
            case 0x252878u: goto label_252878;
            case 0x25287Cu: goto label_25287c;
            case 0x252880u: goto label_252880;
            case 0x252884u: goto label_252884;
            case 0x252888u: goto label_252888;
            case 0x25288Cu: goto label_25288c;
            case 0x252890u: goto label_252890;
            case 0x252894u: goto label_252894;
            case 0x252898u: goto label_252898;
            case 0x25289Cu: goto label_25289c;
            case 0x2528A0u: goto label_2528a0;
            case 0x2528A4u: goto label_2528a4;
            case 0x2528A8u: goto label_2528a8;
            case 0x2528ACu: goto label_2528ac;
            case 0x2528B0u: goto label_2528b0;
            case 0x2528B4u: goto label_2528b4;
            case 0x2528B8u: goto label_2528b8;
            case 0x2528BCu: goto label_2528bc;
            case 0x2528C0u: goto label_2528c0;
            case 0x2528C4u: goto label_2528c4;
            case 0x2528C8u: goto label_2528c8;
            case 0x2528CCu: goto label_2528cc;
            case 0x2528D0u: goto label_2528d0;
            case 0x2528D4u: goto label_2528d4;
            case 0x2528D8u: goto label_2528d8;
            case 0x2528DCu: goto label_2528dc;
            case 0x2528E0u: goto label_2528e0;
            case 0x2528E4u: goto label_2528e4;
            case 0x2528E8u: goto label_2528e8;
            case 0x2528ECu: goto label_2528ec;
            case 0x2528F0u: goto label_2528f0;
            case 0x2528F4u: goto label_2528f4;
            case 0x2528F8u: goto label_2528f8;
            case 0x2528FCu: goto label_2528fc;
            case 0x252900u: goto label_252900;
            case 0x252904u: goto label_252904;
            case 0x252908u: goto label_252908;
            case 0x25290Cu: goto label_25290c;
            case 0x252910u: goto label_252910;
            case 0x252914u: goto label_252914;
            case 0x252918u: goto label_252918;
            case 0x25291Cu: goto label_25291c;
            case 0x252920u: goto label_252920;
            case 0x252924u: goto label_252924;
            case 0x252928u: goto label_252928;
            case 0x25292Cu: goto label_25292c;
            case 0x252930u: goto label_252930;
            case 0x252934u: goto label_252934;
            case 0x252938u: goto label_252938;
            case 0x25293Cu: goto label_25293c;
            case 0x252940u: goto label_252940;
            case 0x252944u: goto label_252944;
            case 0x252948u: goto label_252948;
            case 0x25294Cu: goto label_25294c;
            case 0x252950u: goto label_252950;
            case 0x252954u: goto label_252954;
            case 0x252958u: goto label_252958;
            case 0x25295Cu: goto label_25295c;
            case 0x252960u: goto label_252960;
            case 0x252964u: goto label_252964;
            case 0x252968u: goto label_252968;
            case 0x25296Cu: goto label_25296c;
            case 0x252970u: goto label_252970;
            case 0x252974u: goto label_252974;
            case 0x252978u: goto label_252978;
            case 0x25297Cu: goto label_25297c;
            case 0x252980u: goto label_252980;
            case 0x252984u: goto label_252984;
            case 0x252988u: goto label_252988;
            case 0x25298Cu: goto label_25298c;
            case 0x252990u: goto label_252990;
            case 0x252994u: goto label_252994;
            case 0x252998u: goto label_252998;
            case 0x25299Cu: goto label_25299c;
            case 0x2529A0u: goto label_2529a0;
            case 0x2529A4u: goto label_2529a4;
            case 0x2529A8u: goto label_2529a8;
            case 0x2529ACu: goto label_2529ac;
            case 0x2529B0u: goto label_2529b0;
            case 0x2529B4u: goto label_2529b4;
            case 0x2529B8u: goto label_2529b8;
            case 0x2529BCu: goto label_2529bc;
            case 0x2529C0u: goto label_2529c0;
            case 0x2529C4u: goto label_2529c4;
            case 0x2529C8u: goto label_2529c8;
            case 0x2529CCu: goto label_2529cc;
            case 0x2529D0u: goto label_2529d0;
            case 0x2529D4u: goto label_2529d4;
            case 0x2529D8u: goto label_2529d8;
            case 0x2529DCu: goto label_2529dc;
            case 0x2529E0u: goto label_2529e0;
            case 0x2529E4u: goto label_2529e4;
            case 0x2529E8u: goto label_2529e8;
            case 0x2529ECu: goto label_2529ec;
            case 0x2529F0u: goto label_2529f0;
            case 0x2529F4u: goto label_2529f4;
            case 0x2529F8u: goto label_2529f8;
            case 0x2529FCu: goto label_2529fc;
            case 0x252A00u: goto label_252a00;
            case 0x252A04u: goto label_252a04;
            case 0x252A08u: goto label_252a08;
            case 0x252A0Cu: goto label_252a0c;
            case 0x252A10u: goto label_252a10;
            case 0x252A14u: goto label_252a14;
            case 0x252A18u: goto label_252a18;
            case 0x252A1Cu: goto label_252a1c;
            case 0x252A20u: goto label_252a20;
            case 0x252A24u: goto label_252a24;
            case 0x252A28u: goto label_252a28;
            case 0x252A2Cu: goto label_252a2c;
            case 0x252A30u: goto label_252a30;
            case 0x252A34u: goto label_252a34;
            case 0x252A38u: goto label_252a38;
            case 0x252A3Cu: goto label_252a3c;
            case 0x252A40u: goto label_252a40;
            case 0x252A44u: goto label_252a44;
            case 0x252A48u: goto label_252a48;
            case 0x252A4Cu: goto label_252a4c;
            case 0x252A50u: goto label_252a50;
            case 0x252A54u: goto label_252a54;
            case 0x252A58u: goto label_252a58;
            case 0x252A5Cu: goto label_252a5c;
            case 0x252A60u: goto label_252a60;
            case 0x252A64u: goto label_252a64;
            case 0x252A68u: goto label_252a68;
            case 0x252A6Cu: goto label_252a6c;
            case 0x252A70u: goto label_252a70;
            case 0x252A74u: goto label_252a74;
            case 0x252A78u: goto label_252a78;
            case 0x252A7Cu: goto label_252a7c;
            case 0x252A80u: goto label_252a80;
            case 0x252A84u: goto label_252a84;
            case 0x252A88u: goto label_252a88;
            case 0x252A8Cu: goto label_252a8c;
            case 0x252A90u: goto label_252a90;
            case 0x252A94u: goto label_252a94;
            case 0x252A98u: goto label_252a98;
            case 0x252A9Cu: goto label_252a9c;
            case 0x252AA0u: goto label_252aa0;
            case 0x252AA4u: goto label_252aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2519ACu;
label_2519ac:
    // 0x2519ac: 0x5260002c
label_2519b0:
    if (ctx->pc == 0x2519B0u) {
        ctx->pc = 0x2519B0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x2519B4u;
        goto label_2519b4;
    }
    ctx->pc = 0x2519ACu;
    {
        const bool branch_taken_0x2519ac = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2519ac) {
            ctx->pc = 0x2519B0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
            ctx->pc = 0x251A60u;
            goto label_251a60;
        }
    }
    ctx->pc = 0x2519B4u;
label_2519b4:
    // 0x2519b4: 0x86620030
    ctx->pc = 0x2519b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_2519b8:
    // 0x2519b8: 0x28420002
    ctx->pc = 0x2519b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_2519bc:
    // 0x2519bc: 0x54400028
label_2519c0:
    if (ctx->pc == 0x2519C0u) {
        ctx->pc = 0x2519C0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x2519C4u;
        goto label_2519c4;
    }
    ctx->pc = 0x2519BCu;
    {
        const bool branch_taken_0x2519bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2519bc) {
            ctx->pc = 0x2519C0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
            ctx->pc = 0x251A60u;
            goto label_251a60;
        }
    }
    ctx->pc = 0x2519C4u;
label_2519c4:
    // 0x2519c4: 0x8fa40050
    ctx->pc = 0x2519c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2519c8:
    // 0x2519c8: 0x8fa50054
    ctx->pc = 0x2519c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2519cc:
    // 0x2519cc: 0x3c06003b
    ctx->pc = 0x2519ccu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2519d0:
    // 0x2519d0: 0xc094e02
label_2519d4:
    if (ctx->pc == 0x2519D4u) {
        ctx->pc = 0x2519D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294935752));
        ctx->pc = 0x2519D8u;
        goto label_2519d8;
    }
    ctx->pc = 0x2519D0u;
    SET_GPR_U32(ctx, 31, 0x2519D8u);
    ctx->pc = 0x2519D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294935752));
    ctx->pc = 0x253808u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindInfoIndex_0x253808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2519D8u; }
    }
    if (ctx->pc != 0x2519D8u) { return; }
    ctx->pc = 0x2519D8u;
label_2519d8:
    // 0x2519d8: 0x3c040032
    ctx->pc = 0x2519d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_2519dc:
    // 0x2519dc: 0x24030050
    ctx->pc = 0x2519dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
label_2519e0:
    // 0x2519e0: 0x431018
    ctx->pc = 0x2519e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2519e4:
    // 0x2519e4: 0x8c83fa60
    ctx->pc = 0x2519e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294965856)));
label_2519e8:
    // 0x2519e8: 0x439021
    ctx->pc = 0x2519e8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2519ec:
    // 0x2519ec: 0x8e420000
    ctx->pc = 0x2519ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2519f0:
    // 0x2519f0: 0xafa20050
    ctx->pc = 0x2519f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2519f4:
    // 0x2519f4: 0x8e430004
    ctx->pc = 0x2519f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2519f8:
    // 0x2519f8: 0x10000018
label_2519fc:
    if (ctx->pc == 0x2519FCu) {
        ctx->pc = 0x2519FCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x251A00u;
        goto label_251a00;
    }
    ctx->pc = 0x2519F8u;
    {
        const bool branch_taken_0x2519f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2519FCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        if (branch_taken_0x2519f8) {
            ctx->pc = 0x251A5Cu;
            goto label_251a5c;
        }
    }
    ctx->pc = 0x251A00u;
label_251a00:
    // 0x251a00: 0x3c04003b
    ctx->pc = 0x251a00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_251a04:
    // 0x251a04: 0x248486c0
    ctx->pc = 0x251a04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936256));
label_251a08:
    // 0x251a08: 0xc7cc0030
    ctx->pc = 0x251a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_251a0c:
    // 0x251a0c: 0xc7cd0034
    ctx->pc = 0x251a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_251a10:
    // 0x251a10: 0xc0b492e
label_251a14:
    if (ctx->pc == 0x251A14u) {
        ctx->pc = 0x251A14u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->pc = 0x251A18u;
        goto label_251a18;
    }
    ctx->pc = 0x251A10u;
    SET_GPR_U32(ctx, 31, 0x251A18u);
    ctx->pc = 0x251A14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A18u; }
    }
    if (ctx->pc != 0x251A18u) { return; }
    ctx->pc = 0x251A18u;
label_251a18:
    // 0x251a18: 0x1000000e
label_251a1c:
    if (ctx->pc == 0x251A1Cu) {
        ctx->pc = 0x251A1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x251A20u;
        goto label_251a20;
    }
    ctx->pc = 0x251A18u;
    {
        const bool branch_taken_0x251a18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251A1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x251a18) {
            ctx->pc = 0x251A54u;
            goto label_251a54;
        }
    }
    ctx->pc = 0x251A20u;
label_251a20:
    // 0x251a20: 0x3c020034
    ctx->pc = 0x251a20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_251a24:
    // 0x251a24: 0x8c43e7f0
    ctx->pc = 0x251a24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_251a28:
    // 0x251a28: 0x2402000d
    ctx->pc = 0x251a28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_251a2c:
    // 0x251a2c: 0x5462000c
label_251a30:
    if (ctx->pc == 0x251A30u) {
        ctx->pc = 0x251A30u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x251A34u;
        goto label_251a34;
    }
    ctx->pc = 0x251A2Cu;
    {
        const bool branch_taken_0x251a2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x251a2c) {
            ctx->pc = 0x251A30u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
            ctx->pc = 0x251A60u;
            goto label_251a60;
        }
    }
    ctx->pc = 0x251A34u;
label_251a34:
    // 0x251a34: 0x3c020031
    ctx->pc = 0x251a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_251a38:
    // 0x251a38: 0x8c42f184
    ctx->pc = 0x251a38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_251a3c:
    // 0x251a3c: 0x14400005
label_251a40:
    if (ctx->pc == 0x251A40u) {
        ctx->pc = 0x251A40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x251A44u;
        goto label_251a44;
    }
    ctx->pc = 0x251A3Cu;
    {
        const bool branch_taken_0x251a3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x251A40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x251a3c) {
            ctx->pc = 0x251A54u;
            goto label_251a54;
        }
    }
    ctx->pc = 0x251A44u;
label_251a44:
    // 0x251a44: 0xc09dbb2
label_251a48:
    if (ctx->pc == 0x251A48u) {
        ctx->pc = 0x251A48u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x251A4Cu;
        goto label_251a4c;
    }
    ctx->pc = 0x251A44u;
    SET_GPR_U32(ctx, 31, 0x251A4Cu);
    ctx->pc = 0x251A48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x276EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnyPlayerHasAllCrystals_0x276ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A4Cu; }
    }
    if (ctx->pc != 0x251A4Cu) { return; }
    ctx->pc = 0x251A4Cu;
label_251a4c:
    // 0x251a4c: 0x10400003
label_251a50:
    if (ctx->pc == 0x251A50u) {
        ctx->pc = 0x251A50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x251A54u;
        goto label_251a54;
    }
    ctx->pc = 0x251A4Cu;
    {
        const bool branch_taken_0x251a4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251A50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x251a4c) {
            ctx->pc = 0x251A5Cu;
            goto label_251a5c;
        }
    }
    ctx->pc = 0x251A54u;
label_251a54:
    // 0x251a54: 0x10000408
label_251a58:
    if (ctx->pc == 0x251A58u) {
        ctx->pc = 0x251A58u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x251A5Cu;
        goto label_251a5c;
    }
    ctx->pc = 0x251A54u;
    {
        const bool branch_taken_0x251a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251A58u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x251a54) {
            ctx->pc = 0x252A78u;
            goto label_252a78;
        }
    }
    ctx->pc = 0x251A5Cu;
label_251a5c:
    // 0x251a5c: 0xae320000
    ctx->pc = 0x251a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_251a60:
    // 0x251a60: 0xc640001c
    ctx->pc = 0x251a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251a64:
    // 0x251a64: 0xe62000c8
    ctx->pc = 0x251a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
label_251a68:
    // 0x251a68: 0xc6410020
    ctx->pc = 0x251a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251a6c:
    // 0x251a6c: 0xe62100cc
    ctx->pc = 0x251a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
label_251a70:
    // 0x251a70: 0xc6400024
    ctx->pc = 0x251a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251a74:
    // 0x251a74: 0xe62000d0
    ctx->pc = 0x251a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_251a78:
    // 0x251a78: 0x3c013f80
    ctx->pc = 0x251a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_251a7c:
    // 0x251a7c: 0x44810000
    ctx->pc = 0x251a7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_251a80:
    // 0x251a80: 0x46000840
    ctx->pc = 0x251a80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_251a84:
    // 0x251a84: 0xe62100cc
    ctx->pc = 0x251a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
label_251a88:
    // 0x251a88: 0xc641000c
    ctx->pc = 0x251a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251a8c:
    // 0x251a8c: 0xc6400010
    ctx->pc = 0x251a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251a90:
    // 0x251a90: 0x46010034
    ctx->pc = 0x251a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251a94:
    // 0x251a94: 0x0
    ctx->pc = 0x251a94u;
    // NOP
label_251a98:
    // 0x251a98: 0x45020002
label_251a9c:
    if (ctx->pc == 0x251A9Cu) {
        ctx->pc = 0x251A9Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->pc = 0x251AA0u;
        goto label_251aa0;
    }
    ctx->pc = 0x251A98u;
    {
        const bool branch_taken_0x251a98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251a98) {
            ctx->pc = 0x251A9Cu;
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
            ctx->pc = 0x251AA4u;
            goto label_251aa4;
        }
    }
    ctx->pc = 0x251AA0u;
label_251aa0:
    // 0x251aa0: 0x46010800
    ctx->pc = 0x251aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_251aa4:
    // 0x251aa4: 0xe62000e8
    ctx->pc = 0x251aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_251aa8:
    // 0x251aa8: 0xae200074
    ctx->pc = 0x251aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_251aac:
    // 0x251aac: 0xc62000c8
    ctx->pc = 0x251aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251ab0:
    // 0x251ab0: 0x46000005
    ctx->pc = 0x251ab0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_251ab4:
    // 0x251ab4: 0xc62100d0
    ctx->pc = 0x251ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251ab8:
    // 0x251ab8: 0x46000845
    ctx->pc = 0x251ab8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_251abc:
    // 0x251abc: 0x46010000
    ctx->pc = 0x251abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_251ac0:
    // 0x251ac0: 0x3c013c23
    ctx->pc = 0x251ac0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
label_251ac4:
    // 0x251ac4: 0x3421d70a
    ctx->pc = 0x251ac4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
label_251ac8:
    // 0x251ac8: 0x44810800
    ctx->pc = 0x251ac8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_251acc:
    // 0x251acc: 0x46010034
    ctx->pc = 0x251accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251ad0:
    // 0x251ad0: 0x0
    ctx->pc = 0x251ad0u;
    // NOP
label_251ad4:
    // 0x251ad4: 0x45000002
label_251ad8:
    if (ctx->pc == 0x251AD8u) {
        ctx->pc = 0x251AD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x251ADCu;
        goto label_251adc;
    }
    ctx->pc = 0x251AD4u;
    {
        const bool branch_taken_0x251ad4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251AD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x251ad4) {
            ctx->pc = 0x251AE0u;
            goto label_251ae0;
        }
    }
    ctx->pc = 0x251ADCu;
label_251adc:
    // 0x251adc: 0xae220074
    ctx->pc = 0x251adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_251ae0:
    // 0x251ae0: 0x12600002
label_251ae4:
    if (ctx->pc == 0x251AE4u) {
        ctx->pc = 0x251AE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x251AE8u;
        goto label_251ae8;
    }
    ctx->pc = 0x251AE0u;
    {
        const bool branch_taken_0x251ae0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x251AE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x251ae0) {
            ctx->pc = 0x251AECu;
            goto label_251aec;
        }
    }
    ctx->pc = 0x251AE8u;
label_251ae8:
    // 0x251ae8: 0x96620004
    ctx->pc = 0x251ae8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_251aec:
    // 0x251aec: 0x12600004
label_251af0:
    if (ctx->pc == 0x251AF0u) {
        ctx->pc = 0x251AF0u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 212), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x251AF4u;
        goto label_251af4;
    }
    ctx->pc = 0x251AECu;
    {
        const bool branch_taken_0x251aec = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x251AF0u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 212), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x251aec) {
            ctx->pc = 0x251B00u;
            goto label_251b00;
        }
    }
    ctx->pc = 0x251AF4u;
label_251af4:
    // 0x251af4: 0x96620006
    ctx->pc = 0x251af4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_251af8:
    // 0x251af8: 0x10000002
label_251afc:
    if (ctx->pc == 0x251AFCu) {
        ctx->pc = 0x251AFCu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 214), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x251B00u;
        goto label_251b00;
    }
    ctx->pc = 0x251AF8u;
    {
        const bool branch_taken_0x251af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251AFCu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 214), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x251af8) {
            ctx->pc = 0x251B04u;
            goto label_251b04;
        }
    }
    ctx->pc = 0x251B00u;
label_251b00:
    // 0x251b00: 0xa62000d6
    ctx->pc = 0x251b00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 214), (uint16_t)GPR_U32(ctx, 0));
label_251b04:
    // 0x251b04: 0x96420046
    ctx->pc = 0x251b04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
label_251b08:
    // 0x251b08: 0xa62200d8
    ctx->pc = 0x251b08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_251b0c:
    // 0x251b0c: 0xa62000da
    ctx->pc = 0x251b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 218), (uint16_t)GPR_U32(ctx, 0));
label_251b10:
    // 0x251b10: 0xa22000dc
    ctx->pc = 0x251b10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 220), (uint8_t)GPR_U32(ctx, 0));
label_251b14:
    // 0x251b14: 0xa22000dd
    ctx->pc = 0x251b14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 221), (uint8_t)GPR_U32(ctx, 0));
label_251b18:
    // 0x251b18: 0x12600004
label_251b1c:
    if (ctx->pc == 0x251B1Cu) {
        ctx->pc = 0x251B1Cu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 222), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x251B20u;
        goto label_251b20;
    }
    ctx->pc = 0x251B18u;
    {
        const bool branch_taken_0x251b18 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x251B1Cu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 222), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x251b18) {
            ctx->pc = 0x251B2Cu;
            goto label_251b2c;
        }
    }
    ctx->pc = 0x251B20u;
label_251b20:
    // 0x251b20: 0x92620002
    ctx->pc = 0x251b20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_251b24:
    // 0x251b24: 0x10000002
label_251b28:
    if (ctx->pc == 0x251B28u) {
        ctx->pc = 0x251B28u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 224), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x251B2Cu;
        goto label_251b2c;
    }
    ctx->pc = 0x251B24u;
    {
        const bool branch_taken_0x251b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251B28u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 224), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x251b24) {
            ctx->pc = 0x251B30u;
            goto label_251b30;
        }
    }
    ctx->pc = 0x251B2Cu;
label_251b2c:
    // 0x251b2c: 0xa22000e0
    ctx->pc = 0x251b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 224), (uint8_t)GPR_U32(ctx, 0));
label_251b30:
    // 0x251b30: 0x52600009
label_251b34:
    if (ctx->pc == 0x251B34u) {
        ctx->pc = 0x251B34u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 226), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x251B38u;
        goto label_251b38;
    }
    ctx->pc = 0x251B30u;
    {
        const bool branch_taken_0x251b30 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x251b30) {
            ctx->pc = 0x251B34u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 226), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x251B58u;
            goto label_251b58;
        }
    }
    ctx->pc = 0x251B38u;
label_251b38:
    // 0x251b38: 0x92620003
    ctx->pc = 0x251b38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_251b3c:
    // 0x251b3c: 0x30420001
    ctx->pc = 0x251b3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_251b40:
    // 0x251b40: 0x50400005
label_251b44:
    if (ctx->pc == 0x251B44u) {
        ctx->pc = 0x251B44u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 226), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x251B48u;
        goto label_251b48;
    }
    ctx->pc = 0x251B40u;
    {
        const bool branch_taken_0x251b40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x251b40) {
            ctx->pc = 0x251B44u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 226), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x251B58u;
            goto label_251b58;
        }
    }
    ctx->pc = 0x251B48u;
label_251b48:
    // 0x251b48: 0x962200d8
    ctx->pc = 0x251b48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_251b4c:
    // 0x251b4c: 0x34420040
    ctx->pc = 0x251b4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
label_251b50:
    // 0x251b50: 0xa62200d8
    ctx->pc = 0x251b50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_251b54:
    // 0x251b54: 0xa22000e2
    ctx->pc = 0x251b54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 226), (uint8_t)GPR_U32(ctx, 0));
label_251b58:
    // 0x251b58: 0x2402ffff
    ctx->pc = 0x251b58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_251b5c:
    // 0x251b5c: 0xa22200df
    ctx->pc = 0x251b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 223), (uint8_t)GPR_U32(ctx, 2));
label_251b60:
    // 0x251b60: 0xc09459a
label_251b64:
    if (ctx->pc == 0x251B64u) {
        ctx->pc = 0x251B64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x251B68u;
        goto label_251b68;
    }
    ctx->pc = 0x251B60u;
    SET_GPR_U32(ctx, 31, 0x251B68u);
    ctx->pc = 0x251B64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251668u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_item_0x251668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251B68u; }
    }
    if (ctx->pc != 0x251B68u) { return; }
    ctx->pc = 0x251B68u;
label_251b68:
    // 0x251b68: 0x2c420001
    ctx->pc = 0x251b68u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_251b6c:
    // 0x251b6c: 0xa22200e1
    ctx->pc = 0x251b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 225), (uint8_t)GPR_U32(ctx, 2));
label_251b70:
    // 0x251b70: 0x8e44004c
    ctx->pc = 0x251b70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_251b74:
    // 0x251b74: 0x12600009
label_251b78:
    if (ctx->pc == 0x251B78u) {
        ctx->pc = 0x251B78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->pc = 0x251B7Cu;
        goto label_251b7c;
    }
    ctx->pc = 0x251B74u;
    {
        const bool branch_taken_0x251b74 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x251B78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        if (branch_taken_0x251b74) {
            ctx->pc = 0x251B9Cu;
            goto label_251b9c;
        }
    }
    ctx->pc = 0x251B7Cu;
label_251b7c:
    // 0x251b7c: 0x82620008
    ctx->pc = 0x251b7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_251b80:
    // 0x251b80: 0x10400006
label_251b84:
    if (ctx->pc == 0x251B84u) {
        ctx->pc = 0x251B84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x251B88u;
        goto label_251b88;
    }
    ctx->pc = 0x251B80u;
    {
        const bool branch_taken_0x251b80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251B84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x251b80) {
            ctx->pc = 0x251B9Cu;
            goto label_251b9c;
        }
    }
    ctx->pc = 0x251B88u;
label_251b88:
    // 0x251b88: 0x26650008
    ctx->pc = 0x251b88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 8));
label_251b8c:
    // 0x251b8c: 0xc0bf42e
label_251b90:
    if (ctx->pc == 0x251B90u) {
        ctx->pc = 0x251B90u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x251B94u;
        goto label_251b94;
    }
    ctx->pc = 0x251B8Cu;
    SET_GPR_U32(ctx, 31, 0x251B94u);
    ctx->pc = 0x251B90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251B94u; }
    }
    if (ctx->pc != 0x251B94u) { return; }
    ctx->pc = 0x251B94u;
label_251b94:
    // 0x251b94: 0x10000005
label_251b98:
    if (ctx->pc == 0x251B98u) {
        ctx->pc = 0x251B98u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
        ctx->pc = 0x251B9Cu;
        goto label_251b9c;
    }
    ctx->pc = 0x251B94u;
    {
        const bool branch_taken_0x251b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251B98u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
        if (branch_taken_0x251b94) {
            ctx->pc = 0x251BACu;
            goto label_251bac;
        }
    }
    ctx->pc = 0x251B9Cu;
label_251b9c:
    // 0x251b9c: 0x3a0202d
    ctx->pc = 0x251b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_251ba0:
    // 0x251ba0: 0xc0bf2c1
label_251ba4:
    if (ctx->pc == 0x251BA4u) {
        ctx->pc = 0x251BA4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 40));
        ctx->pc = 0x251BA8u;
        goto label_251ba8;
    }
    ctx->pc = 0x251BA0u;
    SET_GPR_U32(ctx, 31, 0x251BA8u);
    ctx->pc = 0x251BA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 40));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251BA8u; }
    }
    if (ctx->pc != 0x251BA8u) { return; }
    ctx->pc = 0x251BA8u;
label_251ba8:
    // 0x251ba8: 0x92420042
    ctx->pc = 0x251ba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
label_251bac:
    // 0x251bac: 0xa22200e3
    ctx->pc = 0x251bacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 227), (uint8_t)GPR_U32(ctx, 2));
label_251bb0:
    // 0x251bb0: 0x96420044
    ctx->pc = 0x251bb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_251bb4:
    // 0x251bb4: 0xa62200e4
    ctx->pc = 0x251bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
label_251bb8:
    // 0x251bb8: 0x8fa20050
    ctx->pc = 0x251bb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_251bbc:
    // 0x251bbc: 0x2443ffff
    ctx->pc = 0x251bbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_251bc0:
    // 0x251bc0: 0x2c62000d
    ctx->pc = 0x251bc0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 13));
label_251bc4:
    // 0x251bc4: 0x10400329
label_251bc8:
    if (ctx->pc == 0x251BC8u) {
        ctx->pc = 0x251BC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x251BCCu;
        goto label_251bcc;
    }
    ctx->pc = 0x251BC4u;
    {
        const bool branch_taken_0x251bc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251BC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x251bc4) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x251BCCu;
label_251bcc:
    // 0x251bcc: 0x24428800
    ctx->pc = 0x251bccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936576));
label_251bd0:
    // 0x251bd0: 0x31880
    ctx->pc = 0x251bd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_251bd4:
    // 0x251bd4: 0x621821
    ctx->pc = 0x251bd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_251bd8:
    // 0x251bd8: 0x8c620000
    ctx->pc = 0x251bd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_251bdc:
    // 0x251bdc: 0x400008
label_251be0:
    if (ctx->pc == 0x251BE0u) {
        ctx->pc = 0x251BE4u;
        goto label_251be4;
    }
    ctx->pc = 0x251BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2518C0u: goto label_2518c0;
            case 0x2518C4u: goto label_2518c4;
            case 0x2518C8u: goto label_2518c8;
            case 0x2518CCu: goto label_2518cc;
            case 0x2518D0u: goto label_2518d0;
            case 0x2518D4u: goto label_2518d4;
            case 0x2518D8u: goto label_2518d8;
            case 0x2518DCu: goto label_2518dc;
            case 0x2518E0u: goto label_2518e0;
            case 0x2518E4u: goto label_2518e4;
            case 0x2518E8u: goto label_2518e8;
            case 0x2518ECu: goto label_2518ec;
            case 0x2518F0u: goto label_2518f0;
            case 0x2518F4u: goto label_2518f4;
            case 0x2518F8u: goto label_2518f8;
            case 0x2518FCu: goto label_2518fc;
            case 0x251900u: goto label_251900;
            case 0x251904u: goto label_251904;
            case 0x251908u: goto label_251908;
            case 0x25190Cu: goto label_25190c;
            case 0x251910u: goto label_251910;
            case 0x251914u: goto label_251914;
            case 0x251918u: goto label_251918;
            case 0x25191Cu: goto label_25191c;
            case 0x251920u: goto label_251920;
            case 0x251924u: goto label_251924;
            case 0x251928u: goto label_251928;
            case 0x25192Cu: goto label_25192c;
            case 0x251930u: goto label_251930;
            case 0x251934u: goto label_251934;
            case 0x251938u: goto label_251938;
            case 0x25193Cu: goto label_25193c;
            case 0x251940u: goto label_251940;
            case 0x251944u: goto label_251944;
            case 0x251948u: goto label_251948;
            case 0x25194Cu: goto label_25194c;
            case 0x251950u: goto label_251950;
            case 0x251954u: goto label_251954;
            case 0x251958u: goto label_251958;
            case 0x25195Cu: goto label_25195c;
            case 0x251960u: goto label_251960;
            case 0x251964u: goto label_251964;
            case 0x251968u: goto label_251968;
            case 0x25196Cu: goto label_25196c;
            case 0x251970u: goto label_251970;
            case 0x251974u: goto label_251974;
            case 0x251978u: goto label_251978;
            case 0x25197Cu: goto label_25197c;
            case 0x251980u: goto label_251980;
            case 0x251984u: goto label_251984;
            case 0x251988u: goto label_251988;
            case 0x25198Cu: goto label_25198c;
            case 0x251990u: goto label_251990;
            case 0x251994u: goto label_251994;
            case 0x251998u: goto label_251998;
            case 0x25199Cu: goto label_25199c;
            case 0x2519A0u: goto label_2519a0;
            case 0x2519A4u: goto label_2519a4;
            case 0x2519A8u: goto label_2519a8;
            case 0x2519ACu: goto label_2519ac;
            case 0x2519B0u: goto label_2519b0;
            case 0x2519B4u: goto label_2519b4;
            case 0x2519B8u: goto label_2519b8;
            case 0x2519BCu: goto label_2519bc;
            case 0x2519C0u: goto label_2519c0;
            case 0x2519C4u: goto label_2519c4;
            case 0x2519C8u: goto label_2519c8;
            case 0x2519CCu: goto label_2519cc;
            case 0x2519D0u: goto label_2519d0;
            case 0x2519D4u: goto label_2519d4;
            case 0x2519D8u: goto label_2519d8;
            case 0x2519DCu: goto label_2519dc;
            case 0x2519E0u: goto label_2519e0;
            case 0x2519E4u: goto label_2519e4;
            case 0x2519E8u: goto label_2519e8;
            case 0x2519ECu: goto label_2519ec;
            case 0x2519F0u: goto label_2519f0;
            case 0x2519F4u: goto label_2519f4;
            case 0x2519F8u: goto label_2519f8;
            case 0x2519FCu: goto label_2519fc;
            case 0x251A00u: goto label_251a00;
            case 0x251A04u: goto label_251a04;
            case 0x251A08u: goto label_251a08;
            case 0x251A0Cu: goto label_251a0c;
            case 0x251A10u: goto label_251a10;
            case 0x251A14u: goto label_251a14;
            case 0x251A18u: goto label_251a18;
            case 0x251A1Cu: goto label_251a1c;
            case 0x251A20u: goto label_251a20;
            case 0x251A24u: goto label_251a24;
            case 0x251A28u: goto label_251a28;
            case 0x251A2Cu: goto label_251a2c;
            case 0x251A30u: goto label_251a30;
            case 0x251A34u: goto label_251a34;
            case 0x251A38u: goto label_251a38;
            case 0x251A3Cu: goto label_251a3c;
            case 0x251A40u: goto label_251a40;
            case 0x251A44u: goto label_251a44;
            case 0x251A48u: goto label_251a48;
            case 0x251A4Cu: goto label_251a4c;
            case 0x251A50u: goto label_251a50;
            case 0x251A54u: goto label_251a54;
            case 0x251A58u: goto label_251a58;
            case 0x251A5Cu: goto label_251a5c;
            case 0x251A60u: goto label_251a60;
            case 0x251A64u: goto label_251a64;
            case 0x251A68u: goto label_251a68;
            case 0x251A6Cu: goto label_251a6c;
            case 0x251A70u: goto label_251a70;
            case 0x251A74u: goto label_251a74;
            case 0x251A78u: goto label_251a78;
            case 0x251A7Cu: goto label_251a7c;
            case 0x251A80u: goto label_251a80;
            case 0x251A84u: goto label_251a84;
            case 0x251A88u: goto label_251a88;
            case 0x251A8Cu: goto label_251a8c;
            case 0x251A90u: goto label_251a90;
            case 0x251A94u: goto label_251a94;
            case 0x251A98u: goto label_251a98;
            case 0x251A9Cu: goto label_251a9c;
            case 0x251AA0u: goto label_251aa0;
            case 0x251AA4u: goto label_251aa4;
            case 0x251AA8u: goto label_251aa8;
            case 0x251AACu: goto label_251aac;
            case 0x251AB0u: goto label_251ab0;
            case 0x251AB4u: goto label_251ab4;
            case 0x251AB8u: goto label_251ab8;
            case 0x251ABCu: goto label_251abc;
            case 0x251AC0u: goto label_251ac0;
            case 0x251AC4u: goto label_251ac4;
            case 0x251AC8u: goto label_251ac8;
            case 0x251ACCu: goto label_251acc;
            case 0x251AD0u: goto label_251ad0;
            case 0x251AD4u: goto label_251ad4;
            case 0x251AD8u: goto label_251ad8;
            case 0x251ADCu: goto label_251adc;
            case 0x251AE0u: goto label_251ae0;
            case 0x251AE4u: goto label_251ae4;
            case 0x251AE8u: goto label_251ae8;
            case 0x251AECu: goto label_251aec;
            case 0x251AF0u: goto label_251af0;
            case 0x251AF4u: goto label_251af4;
            case 0x251AF8u: goto label_251af8;
            case 0x251AFCu: goto label_251afc;
            case 0x251B00u: goto label_251b00;
            case 0x251B04u: goto label_251b04;
            case 0x251B08u: goto label_251b08;
            case 0x251B0Cu: goto label_251b0c;
            case 0x251B10u: goto label_251b10;
            case 0x251B14u: goto label_251b14;
            case 0x251B18u: goto label_251b18;
            case 0x251B1Cu: goto label_251b1c;
            case 0x251B20u: goto label_251b20;
            case 0x251B24u: goto label_251b24;
            case 0x251B28u: goto label_251b28;
            case 0x251B2Cu: goto label_251b2c;
            case 0x251B30u: goto label_251b30;
            case 0x251B34u: goto label_251b34;
            case 0x251B38u: goto label_251b38;
            case 0x251B3Cu: goto label_251b3c;
            case 0x251B40u: goto label_251b40;
            case 0x251B44u: goto label_251b44;
            case 0x251B48u: goto label_251b48;
            case 0x251B4Cu: goto label_251b4c;
            case 0x251B50u: goto label_251b50;
            case 0x251B54u: goto label_251b54;
            case 0x251B58u: goto label_251b58;
            case 0x251B5Cu: goto label_251b5c;
            case 0x251B60u: goto label_251b60;
            case 0x251B64u: goto label_251b64;
            case 0x251B68u: goto label_251b68;
            case 0x251B6Cu: goto label_251b6c;
            case 0x251B70u: goto label_251b70;
            case 0x251B74u: goto label_251b74;
            case 0x251B78u: goto label_251b78;
            case 0x251B7Cu: goto label_251b7c;
            case 0x251B80u: goto label_251b80;
            case 0x251B84u: goto label_251b84;
            case 0x251B88u: goto label_251b88;
            case 0x251B8Cu: goto label_251b8c;
            case 0x251B90u: goto label_251b90;
            case 0x251B94u: goto label_251b94;
            case 0x251B98u: goto label_251b98;
            case 0x251B9Cu: goto label_251b9c;
            case 0x251BA0u: goto label_251ba0;
            case 0x251BA4u: goto label_251ba4;
            case 0x251BA8u: goto label_251ba8;
            case 0x251BACu: goto label_251bac;
            case 0x251BB0u: goto label_251bb0;
            case 0x251BB4u: goto label_251bb4;
            case 0x251BB8u: goto label_251bb8;
            case 0x251BBCu: goto label_251bbc;
            case 0x251BC0u: goto label_251bc0;
            case 0x251BC4u: goto label_251bc4;
            case 0x251BC8u: goto label_251bc8;
            case 0x251BCCu: goto label_251bcc;
            case 0x251BD0u: goto label_251bd0;
            case 0x251BD4u: goto label_251bd4;
            case 0x251BD8u: goto label_251bd8;
            case 0x251BDCu: goto label_251bdc;
            case 0x251BE0u: goto label_251be0;
            case 0x251BE4u: goto label_251be4;
            case 0x251BE8u: goto label_251be8;
            case 0x251BECu: goto label_251bec;
            case 0x251BF0u: goto label_251bf0;
            case 0x251BF4u: goto label_251bf4;
            case 0x251BF8u: goto label_251bf8;
            case 0x251BFCu: goto label_251bfc;
            case 0x251C00u: goto label_251c00;
            case 0x251C04u: goto label_251c04;
            case 0x251C08u: goto label_251c08;
            case 0x251C0Cu: goto label_251c0c;
            case 0x251C10u: goto label_251c10;
            case 0x251C14u: goto label_251c14;
            case 0x251C18u: goto label_251c18;
            case 0x251C1Cu: goto label_251c1c;
            case 0x251C20u: goto label_251c20;
            case 0x251C24u: goto label_251c24;
            case 0x251C28u: goto label_251c28;
            case 0x251C2Cu: goto label_251c2c;
            case 0x251C30u: goto label_251c30;
            case 0x251C34u: goto label_251c34;
            case 0x251C38u: goto label_251c38;
            case 0x251C3Cu: goto label_251c3c;
            case 0x251C40u: goto label_251c40;
            case 0x251C44u: goto label_251c44;
            case 0x251C48u: goto label_251c48;
            case 0x251C4Cu: goto label_251c4c;
            case 0x251C50u: goto label_251c50;
            case 0x251C54u: goto label_251c54;
            case 0x251C58u: goto label_251c58;
            case 0x251C5Cu: goto label_251c5c;
            case 0x251C60u: goto label_251c60;
            case 0x251C64u: goto label_251c64;
            case 0x251C68u: goto label_251c68;
            case 0x251C6Cu: goto label_251c6c;
            case 0x251C70u: goto label_251c70;
            case 0x251C74u: goto label_251c74;
            case 0x251C78u: goto label_251c78;
            case 0x251C7Cu: goto label_251c7c;
            case 0x251C80u: goto label_251c80;
            case 0x251C84u: goto label_251c84;
            case 0x251C88u: goto label_251c88;
            case 0x251C8Cu: goto label_251c8c;
            case 0x251C90u: goto label_251c90;
            case 0x251C94u: goto label_251c94;
            case 0x251C98u: goto label_251c98;
            case 0x251C9Cu: goto label_251c9c;
            case 0x251CA0u: goto label_251ca0;
            case 0x251CA4u: goto label_251ca4;
            case 0x251CA8u: goto label_251ca8;
            case 0x251CACu: goto label_251cac;
            case 0x251CB0u: goto label_251cb0;
            case 0x251CB4u: goto label_251cb4;
            case 0x251CB8u: goto label_251cb8;
            case 0x251CBCu: goto label_251cbc;
            case 0x251CC0u: goto label_251cc0;
            case 0x251CC4u: goto label_251cc4;
            case 0x251CC8u: goto label_251cc8;
            case 0x251CCCu: goto label_251ccc;
            case 0x251CD0u: goto label_251cd0;
            case 0x251CD4u: goto label_251cd4;
            case 0x251CD8u: goto label_251cd8;
            case 0x251CDCu: goto label_251cdc;
            case 0x251CE0u: goto label_251ce0;
            case 0x251CE4u: goto label_251ce4;
            case 0x251CE8u: goto label_251ce8;
            case 0x251CECu: goto label_251cec;
            case 0x251CF0u: goto label_251cf0;
            case 0x251CF4u: goto label_251cf4;
            case 0x251CF8u: goto label_251cf8;
            case 0x251CFCu: goto label_251cfc;
            case 0x251D00u: goto label_251d00;
            case 0x251D04u: goto label_251d04;
            case 0x251D08u: goto label_251d08;
            case 0x251D0Cu: goto label_251d0c;
            case 0x251D10u: goto label_251d10;
            case 0x251D14u: goto label_251d14;
            case 0x251D18u: goto label_251d18;
            case 0x251D1Cu: goto label_251d1c;
            case 0x251D20u: goto label_251d20;
            case 0x251D24u: goto label_251d24;
            case 0x251D28u: goto label_251d28;
            case 0x251D2Cu: goto label_251d2c;
            case 0x251D30u: goto label_251d30;
            case 0x251D34u: goto label_251d34;
            case 0x251D38u: goto label_251d38;
            case 0x251D3Cu: goto label_251d3c;
            case 0x251D40u: goto label_251d40;
            case 0x251D44u: goto label_251d44;
            case 0x251D48u: goto label_251d48;
            case 0x251D4Cu: goto label_251d4c;
            case 0x251D50u: goto label_251d50;
            case 0x251D54u: goto label_251d54;
            case 0x251D58u: goto label_251d58;
            case 0x251D5Cu: goto label_251d5c;
            case 0x251D60u: goto label_251d60;
            case 0x251D64u: goto label_251d64;
            case 0x251D68u: goto label_251d68;
            case 0x251D6Cu: goto label_251d6c;
            case 0x251D70u: goto label_251d70;
            case 0x251D74u: goto label_251d74;
            case 0x251D78u: goto label_251d78;
            case 0x251D7Cu: goto label_251d7c;
            case 0x251D80u: goto label_251d80;
            case 0x251D84u: goto label_251d84;
            case 0x251D88u: goto label_251d88;
            case 0x251D8Cu: goto label_251d8c;
            case 0x251D90u: goto label_251d90;
            case 0x251D94u: goto label_251d94;
            case 0x251D98u: goto label_251d98;
            case 0x251D9Cu: goto label_251d9c;
            case 0x251DA0u: goto label_251da0;
            case 0x251DA4u: goto label_251da4;
            case 0x251DA8u: goto label_251da8;
            case 0x251DACu: goto label_251dac;
            case 0x251DB0u: goto label_251db0;
            case 0x251DB4u: goto label_251db4;
            case 0x251DB8u: goto label_251db8;
            case 0x251DBCu: goto label_251dbc;
            case 0x251DC0u: goto label_251dc0;
            case 0x251DC4u: goto label_251dc4;
            case 0x251DC8u: goto label_251dc8;
            case 0x251DCCu: goto label_251dcc;
            case 0x251DD0u: goto label_251dd0;
            case 0x251DD4u: goto label_251dd4;
            case 0x251DD8u: goto label_251dd8;
            case 0x251DDCu: goto label_251ddc;
            case 0x251DE0u: goto label_251de0;
            case 0x251DE4u: goto label_251de4;
            case 0x251DE8u: goto label_251de8;
            case 0x251DECu: goto label_251dec;
            case 0x251DF0u: goto label_251df0;
            case 0x251DF4u: goto label_251df4;
            case 0x251DF8u: goto label_251df8;
            case 0x251DFCu: goto label_251dfc;
            case 0x251E00u: goto label_251e00;
            case 0x251E04u: goto label_251e04;
            case 0x251E08u: goto label_251e08;
            case 0x251E0Cu: goto label_251e0c;
            case 0x251E10u: goto label_251e10;
            case 0x251E14u: goto label_251e14;
            case 0x251E18u: goto label_251e18;
            case 0x251E1Cu: goto label_251e1c;
            case 0x251E20u: goto label_251e20;
            case 0x251E24u: goto label_251e24;
            case 0x251E28u: goto label_251e28;
            case 0x251E2Cu: goto label_251e2c;
            case 0x251E30u: goto label_251e30;
            case 0x251E34u: goto label_251e34;
            case 0x251E38u: goto label_251e38;
            case 0x251E3Cu: goto label_251e3c;
            case 0x251E40u: goto label_251e40;
            case 0x251E44u: goto label_251e44;
            case 0x251E48u: goto label_251e48;
            case 0x251E4Cu: goto label_251e4c;
            case 0x251E50u: goto label_251e50;
            case 0x251E54u: goto label_251e54;
            case 0x251E58u: goto label_251e58;
            case 0x251E5Cu: goto label_251e5c;
            case 0x251E60u: goto label_251e60;
            case 0x251E64u: goto label_251e64;
            case 0x251E68u: goto label_251e68;
            case 0x251E6Cu: goto label_251e6c;
            case 0x251E70u: goto label_251e70;
            case 0x251E74u: goto label_251e74;
            case 0x251E78u: goto label_251e78;
            case 0x251E7Cu: goto label_251e7c;
            case 0x251E80u: goto label_251e80;
            case 0x251E84u: goto label_251e84;
            case 0x251E88u: goto label_251e88;
            case 0x251E8Cu: goto label_251e8c;
            case 0x251E90u: goto label_251e90;
            case 0x251E94u: goto label_251e94;
            case 0x251E98u: goto label_251e98;
            case 0x251E9Cu: goto label_251e9c;
            case 0x251EA0u: goto label_251ea0;
            case 0x251EA4u: goto label_251ea4;
            case 0x251EA8u: goto label_251ea8;
            case 0x251EACu: goto label_251eac;
            case 0x251EB0u: goto label_251eb0;
            case 0x251EB4u: goto label_251eb4;
            case 0x251EB8u: goto label_251eb8;
            case 0x251EBCu: goto label_251ebc;
            case 0x251EC0u: goto label_251ec0;
            case 0x251EC4u: goto label_251ec4;
            case 0x251EC8u: goto label_251ec8;
            case 0x251ECCu: goto label_251ecc;
            case 0x251ED0u: goto label_251ed0;
            case 0x251ED4u: goto label_251ed4;
            case 0x251ED8u: goto label_251ed8;
            case 0x251EDCu: goto label_251edc;
            case 0x251EE0u: goto label_251ee0;
            case 0x251EE4u: goto label_251ee4;
            case 0x251EE8u: goto label_251ee8;
            case 0x251EECu: goto label_251eec;
            case 0x251EF0u: goto label_251ef0;
            case 0x251EF4u: goto label_251ef4;
            case 0x251EF8u: goto label_251ef8;
            case 0x251EFCu: goto label_251efc;
            case 0x251F00u: goto label_251f00;
            case 0x251F04u: goto label_251f04;
            case 0x251F08u: goto label_251f08;
            case 0x251F0Cu: goto label_251f0c;
            case 0x251F10u: goto label_251f10;
            case 0x251F14u: goto label_251f14;
            case 0x251F18u: goto label_251f18;
            case 0x251F1Cu: goto label_251f1c;
            case 0x251F20u: goto label_251f20;
            case 0x251F24u: goto label_251f24;
            case 0x251F28u: goto label_251f28;
            case 0x251F2Cu: goto label_251f2c;
            case 0x251F30u: goto label_251f30;
            case 0x251F34u: goto label_251f34;
            case 0x251F38u: goto label_251f38;
            case 0x251F3Cu: goto label_251f3c;
            case 0x251F40u: goto label_251f40;
            case 0x251F44u: goto label_251f44;
            case 0x251F48u: goto label_251f48;
            case 0x251F4Cu: goto label_251f4c;
            case 0x251F50u: goto label_251f50;
            case 0x251F54u: goto label_251f54;
            case 0x251F58u: goto label_251f58;
            case 0x251F5Cu: goto label_251f5c;
            case 0x251F60u: goto label_251f60;
            case 0x251F64u: goto label_251f64;
            case 0x251F68u: goto label_251f68;
            case 0x251F6Cu: goto label_251f6c;
            case 0x251F70u: goto label_251f70;
            case 0x251F74u: goto label_251f74;
            case 0x251F78u: goto label_251f78;
            case 0x251F7Cu: goto label_251f7c;
            case 0x251F80u: goto label_251f80;
            case 0x251F84u: goto label_251f84;
            case 0x251F88u: goto label_251f88;
            case 0x251F8Cu: goto label_251f8c;
            case 0x251F90u: goto label_251f90;
            case 0x251F94u: goto label_251f94;
            case 0x251F98u: goto label_251f98;
            case 0x251F9Cu: goto label_251f9c;
            case 0x251FA0u: goto label_251fa0;
            case 0x251FA4u: goto label_251fa4;
            case 0x251FA8u: goto label_251fa8;
            case 0x251FACu: goto label_251fac;
            case 0x251FB0u: goto label_251fb0;
            case 0x251FB4u: goto label_251fb4;
            case 0x251FB8u: goto label_251fb8;
            case 0x251FBCu: goto label_251fbc;
            case 0x251FC0u: goto label_251fc0;
            case 0x251FC4u: goto label_251fc4;
            case 0x251FC8u: goto label_251fc8;
            case 0x251FCCu: goto label_251fcc;
            case 0x251FD0u: goto label_251fd0;
            case 0x251FD4u: goto label_251fd4;
            case 0x251FD8u: goto label_251fd8;
            case 0x251FDCu: goto label_251fdc;
            case 0x251FE0u: goto label_251fe0;
            case 0x251FE4u: goto label_251fe4;
            case 0x251FE8u: goto label_251fe8;
            case 0x251FECu: goto label_251fec;
            case 0x251FF0u: goto label_251ff0;
            case 0x251FF4u: goto label_251ff4;
            case 0x251FF8u: goto label_251ff8;
            case 0x251FFCu: goto label_251ffc;
            case 0x252000u: goto label_252000;
            case 0x252004u: goto label_252004;
            case 0x252008u: goto label_252008;
            case 0x25200Cu: goto label_25200c;
            case 0x252010u: goto label_252010;
            case 0x252014u: goto label_252014;
            case 0x252018u: goto label_252018;
            case 0x25201Cu: goto label_25201c;
            case 0x252020u: goto label_252020;
            case 0x252024u: goto label_252024;
            case 0x252028u: goto label_252028;
            case 0x25202Cu: goto label_25202c;
            case 0x252030u: goto label_252030;
            case 0x252034u: goto label_252034;
            case 0x252038u: goto label_252038;
            case 0x25203Cu: goto label_25203c;
            case 0x252040u: goto label_252040;
            case 0x252044u: goto label_252044;
            case 0x252048u: goto label_252048;
            case 0x25204Cu: goto label_25204c;
            case 0x252050u: goto label_252050;
            case 0x252054u: goto label_252054;
            case 0x252058u: goto label_252058;
            case 0x25205Cu: goto label_25205c;
            case 0x252060u: goto label_252060;
            case 0x252064u: goto label_252064;
            case 0x252068u: goto label_252068;
            case 0x25206Cu: goto label_25206c;
            case 0x252070u: goto label_252070;
            case 0x252074u: goto label_252074;
            case 0x252078u: goto label_252078;
            case 0x25207Cu: goto label_25207c;
            case 0x252080u: goto label_252080;
            case 0x252084u: goto label_252084;
            case 0x252088u: goto label_252088;
            case 0x25208Cu: goto label_25208c;
            case 0x252090u: goto label_252090;
            case 0x252094u: goto label_252094;
            case 0x252098u: goto label_252098;
            case 0x25209Cu: goto label_25209c;
            case 0x2520A0u: goto label_2520a0;
            case 0x2520A4u: goto label_2520a4;
            case 0x2520A8u: goto label_2520a8;
            case 0x2520ACu: goto label_2520ac;
            case 0x2520B0u: goto label_2520b0;
            case 0x2520B4u: goto label_2520b4;
            case 0x2520B8u: goto label_2520b8;
            case 0x2520BCu: goto label_2520bc;
            case 0x2520C0u: goto label_2520c0;
            case 0x2520C4u: goto label_2520c4;
            case 0x2520C8u: goto label_2520c8;
            case 0x2520CCu: goto label_2520cc;
            case 0x2520D0u: goto label_2520d0;
            case 0x2520D4u: goto label_2520d4;
            case 0x2520D8u: goto label_2520d8;
            case 0x2520DCu: goto label_2520dc;
            case 0x2520E0u: goto label_2520e0;
            case 0x2520E4u: goto label_2520e4;
            case 0x2520E8u: goto label_2520e8;
            case 0x2520ECu: goto label_2520ec;
            case 0x2520F0u: goto label_2520f0;
            case 0x2520F4u: goto label_2520f4;
            case 0x2520F8u: goto label_2520f8;
            case 0x2520FCu: goto label_2520fc;
            case 0x252100u: goto label_252100;
            case 0x252104u: goto label_252104;
            case 0x252108u: goto label_252108;
            case 0x25210Cu: goto label_25210c;
            case 0x252110u: goto label_252110;
            case 0x252114u: goto label_252114;
            case 0x252118u: goto label_252118;
            case 0x25211Cu: goto label_25211c;
            case 0x252120u: goto label_252120;
            case 0x252124u: goto label_252124;
            case 0x252128u: goto label_252128;
            case 0x25212Cu: goto label_25212c;
            case 0x252130u: goto label_252130;
            case 0x252134u: goto label_252134;
            case 0x252138u: goto label_252138;
            case 0x25213Cu: goto label_25213c;
            case 0x252140u: goto label_252140;
            case 0x252144u: goto label_252144;
            case 0x252148u: goto label_252148;
            case 0x25214Cu: goto label_25214c;
            case 0x252150u: goto label_252150;
            case 0x252154u: goto label_252154;
            case 0x252158u: goto label_252158;
            case 0x25215Cu: goto label_25215c;
            case 0x252160u: goto label_252160;
            case 0x252164u: goto label_252164;
            case 0x252168u: goto label_252168;
            case 0x25216Cu: goto label_25216c;
            case 0x252170u: goto label_252170;
            case 0x252174u: goto label_252174;
            case 0x252178u: goto label_252178;
            case 0x25217Cu: goto label_25217c;
            case 0x252180u: goto label_252180;
            case 0x252184u: goto label_252184;
            case 0x252188u: goto label_252188;
            case 0x25218Cu: goto label_25218c;
            case 0x252190u: goto label_252190;
            case 0x252194u: goto label_252194;
            case 0x252198u: goto label_252198;
            case 0x25219Cu: goto label_25219c;
            case 0x2521A0u: goto label_2521a0;
            case 0x2521A4u: goto label_2521a4;
            case 0x2521A8u: goto label_2521a8;
            case 0x2521ACu: goto label_2521ac;
            case 0x2521B0u: goto label_2521b0;
            case 0x2521B4u: goto label_2521b4;
            case 0x2521B8u: goto label_2521b8;
            case 0x2521BCu: goto label_2521bc;
            case 0x2521C0u: goto label_2521c0;
            case 0x2521C4u: goto label_2521c4;
            case 0x2521C8u: goto label_2521c8;
            case 0x2521CCu: goto label_2521cc;
            case 0x2521D0u: goto label_2521d0;
            case 0x2521D4u: goto label_2521d4;
            case 0x2521D8u: goto label_2521d8;
            case 0x2521DCu: goto label_2521dc;
            case 0x2521E0u: goto label_2521e0;
            case 0x2521E4u: goto label_2521e4;
            case 0x2521E8u: goto label_2521e8;
            case 0x2521ECu: goto label_2521ec;
            case 0x2521F0u: goto label_2521f0;
            case 0x2521F4u: goto label_2521f4;
            case 0x2521F8u: goto label_2521f8;
            case 0x2521FCu: goto label_2521fc;
            case 0x252200u: goto label_252200;
            case 0x252204u: goto label_252204;
            case 0x252208u: goto label_252208;
            case 0x25220Cu: goto label_25220c;
            case 0x252210u: goto label_252210;
            case 0x252214u: goto label_252214;
            case 0x252218u: goto label_252218;
            case 0x25221Cu: goto label_25221c;
            case 0x252220u: goto label_252220;
            case 0x252224u: goto label_252224;
            case 0x252228u: goto label_252228;
            case 0x25222Cu: goto label_25222c;
            case 0x252230u: goto label_252230;
            case 0x252234u: goto label_252234;
            case 0x252238u: goto label_252238;
            case 0x25223Cu: goto label_25223c;
            case 0x252240u: goto label_252240;
            case 0x252244u: goto label_252244;
            case 0x252248u: goto label_252248;
            case 0x25224Cu: goto label_25224c;
            case 0x252250u: goto label_252250;
            case 0x252254u: goto label_252254;
            case 0x252258u: goto label_252258;
            case 0x25225Cu: goto label_25225c;
            case 0x252260u: goto label_252260;
            case 0x252264u: goto label_252264;
            case 0x252268u: goto label_252268;
            case 0x25226Cu: goto label_25226c;
            case 0x252270u: goto label_252270;
            case 0x252274u: goto label_252274;
            case 0x252278u: goto label_252278;
            case 0x25227Cu: goto label_25227c;
            case 0x252280u: goto label_252280;
            case 0x252284u: goto label_252284;
            case 0x252288u: goto label_252288;
            case 0x25228Cu: goto label_25228c;
            case 0x252290u: goto label_252290;
            case 0x252294u: goto label_252294;
            case 0x252298u: goto label_252298;
            case 0x25229Cu: goto label_25229c;
            case 0x2522A0u: goto label_2522a0;
            case 0x2522A4u: goto label_2522a4;
            case 0x2522A8u: goto label_2522a8;
            case 0x2522ACu: goto label_2522ac;
            case 0x2522B0u: goto label_2522b0;
            case 0x2522B4u: goto label_2522b4;
            case 0x2522B8u: goto label_2522b8;
            case 0x2522BCu: goto label_2522bc;
            case 0x2522C0u: goto label_2522c0;
            case 0x2522C4u: goto label_2522c4;
            case 0x2522C8u: goto label_2522c8;
            case 0x2522CCu: goto label_2522cc;
            case 0x2522D0u: goto label_2522d0;
            case 0x2522D4u: goto label_2522d4;
            case 0x2522D8u: goto label_2522d8;
            case 0x2522DCu: goto label_2522dc;
            case 0x2522E0u: goto label_2522e0;
            case 0x2522E4u: goto label_2522e4;
            case 0x2522E8u: goto label_2522e8;
            case 0x2522ECu: goto label_2522ec;
            case 0x2522F0u: goto label_2522f0;
            case 0x2522F4u: goto label_2522f4;
            case 0x2522F8u: goto label_2522f8;
            case 0x2522FCu: goto label_2522fc;
            case 0x252300u: goto label_252300;
            case 0x252304u: goto label_252304;
            case 0x252308u: goto label_252308;
            case 0x25230Cu: goto label_25230c;
            case 0x252310u: goto label_252310;
            case 0x252314u: goto label_252314;
            case 0x252318u: goto label_252318;
            case 0x25231Cu: goto label_25231c;
            case 0x252320u: goto label_252320;
            case 0x252324u: goto label_252324;
            case 0x252328u: goto label_252328;
            case 0x25232Cu: goto label_25232c;
            case 0x252330u: goto label_252330;
            case 0x252334u: goto label_252334;
            case 0x252338u: goto label_252338;
            case 0x25233Cu: goto label_25233c;
            case 0x252340u: goto label_252340;
            case 0x252344u: goto label_252344;
            case 0x252348u: goto label_252348;
            case 0x25234Cu: goto label_25234c;
            case 0x252350u: goto label_252350;
            case 0x252354u: goto label_252354;
            case 0x252358u: goto label_252358;
            case 0x25235Cu: goto label_25235c;
            case 0x252360u: goto label_252360;
            case 0x252364u: goto label_252364;
            case 0x252368u: goto label_252368;
            case 0x25236Cu: goto label_25236c;
            case 0x252370u: goto label_252370;
            case 0x252374u: goto label_252374;
            case 0x252378u: goto label_252378;
            case 0x25237Cu: goto label_25237c;
            case 0x252380u: goto label_252380;
            case 0x252384u: goto label_252384;
            case 0x252388u: goto label_252388;
            case 0x25238Cu: goto label_25238c;
            case 0x252390u: goto label_252390;
            case 0x252394u: goto label_252394;
            case 0x252398u: goto label_252398;
            case 0x25239Cu: goto label_25239c;
            case 0x2523A0u: goto label_2523a0;
            case 0x2523A4u: goto label_2523a4;
            case 0x2523A8u: goto label_2523a8;
            case 0x2523ACu: goto label_2523ac;
            case 0x2523B0u: goto label_2523b0;
            case 0x2523B4u: goto label_2523b4;
            case 0x2523B8u: goto label_2523b8;
            case 0x2523BCu: goto label_2523bc;
            case 0x2523C0u: goto label_2523c0;
            case 0x2523C4u: goto label_2523c4;
            case 0x2523C8u: goto label_2523c8;
            case 0x2523CCu: goto label_2523cc;
            case 0x2523D0u: goto label_2523d0;
            case 0x2523D4u: goto label_2523d4;
            case 0x2523D8u: goto label_2523d8;
            case 0x2523DCu: goto label_2523dc;
            case 0x2523E0u: goto label_2523e0;
            case 0x2523E4u: goto label_2523e4;
            case 0x2523E8u: goto label_2523e8;
            case 0x2523ECu: goto label_2523ec;
            case 0x2523F0u: goto label_2523f0;
            case 0x2523F4u: goto label_2523f4;
            case 0x2523F8u: goto label_2523f8;
            case 0x2523FCu: goto label_2523fc;
            case 0x252400u: goto label_252400;
            case 0x252404u: goto label_252404;
            case 0x252408u: goto label_252408;
            case 0x25240Cu: goto label_25240c;
            case 0x252410u: goto label_252410;
            case 0x252414u: goto label_252414;
            case 0x252418u: goto label_252418;
            case 0x25241Cu: goto label_25241c;
            case 0x252420u: goto label_252420;
            case 0x252424u: goto label_252424;
            case 0x252428u: goto label_252428;
            case 0x25242Cu: goto label_25242c;
            case 0x252430u: goto label_252430;
            case 0x252434u: goto label_252434;
            case 0x252438u: goto label_252438;
            case 0x25243Cu: goto label_25243c;
            case 0x252440u: goto label_252440;
            case 0x252444u: goto label_252444;
            case 0x252448u: goto label_252448;
            case 0x25244Cu: goto label_25244c;
            case 0x252450u: goto label_252450;
            case 0x252454u: goto label_252454;
            case 0x252458u: goto label_252458;
            case 0x25245Cu: goto label_25245c;
            case 0x252460u: goto label_252460;
            case 0x252464u: goto label_252464;
            case 0x252468u: goto label_252468;
            case 0x25246Cu: goto label_25246c;
            case 0x252470u: goto label_252470;
            case 0x252474u: goto label_252474;
            case 0x252478u: goto label_252478;
            case 0x25247Cu: goto label_25247c;
            case 0x252480u: goto label_252480;
            case 0x252484u: goto label_252484;
            case 0x252488u: goto label_252488;
            case 0x25248Cu: goto label_25248c;
            case 0x252490u: goto label_252490;
            case 0x252494u: goto label_252494;
            case 0x252498u: goto label_252498;
            case 0x25249Cu: goto label_25249c;
            case 0x2524A0u: goto label_2524a0;
            case 0x2524A4u: goto label_2524a4;
            case 0x2524A8u: goto label_2524a8;
            case 0x2524ACu: goto label_2524ac;
            case 0x2524B0u: goto label_2524b0;
            case 0x2524B4u: goto label_2524b4;
            case 0x2524B8u: goto label_2524b8;
            case 0x2524BCu: goto label_2524bc;
            case 0x2524C0u: goto label_2524c0;
            case 0x2524C4u: goto label_2524c4;
            case 0x2524C8u: goto label_2524c8;
            case 0x2524CCu: goto label_2524cc;
            case 0x2524D0u: goto label_2524d0;
            case 0x2524D4u: goto label_2524d4;
            case 0x2524D8u: goto label_2524d8;
            case 0x2524DCu: goto label_2524dc;
            case 0x2524E0u: goto label_2524e0;
            case 0x2524E4u: goto label_2524e4;
            case 0x2524E8u: goto label_2524e8;
            case 0x2524ECu: goto label_2524ec;
            case 0x2524F0u: goto label_2524f0;
            case 0x2524F4u: goto label_2524f4;
            case 0x2524F8u: goto label_2524f8;
            case 0x2524FCu: goto label_2524fc;
            case 0x252500u: goto label_252500;
            case 0x252504u: goto label_252504;
            case 0x252508u: goto label_252508;
            case 0x25250Cu: goto label_25250c;
            case 0x252510u: goto label_252510;
            case 0x252514u: goto label_252514;
            case 0x252518u: goto label_252518;
            case 0x25251Cu: goto label_25251c;
            case 0x252520u: goto label_252520;
            case 0x252524u: goto label_252524;
            case 0x252528u: goto label_252528;
            case 0x25252Cu: goto label_25252c;
            case 0x252530u: goto label_252530;
            case 0x252534u: goto label_252534;
            case 0x252538u: goto label_252538;
            case 0x25253Cu: goto label_25253c;
            case 0x252540u: goto label_252540;
            case 0x252544u: goto label_252544;
            case 0x252548u: goto label_252548;
            case 0x25254Cu: goto label_25254c;
            case 0x252550u: goto label_252550;
            case 0x252554u: goto label_252554;
            case 0x252558u: goto label_252558;
            case 0x25255Cu: goto label_25255c;
            case 0x252560u: goto label_252560;
            case 0x252564u: goto label_252564;
            case 0x252568u: goto label_252568;
            case 0x25256Cu: goto label_25256c;
            case 0x252570u: goto label_252570;
            case 0x252574u: goto label_252574;
            case 0x252578u: goto label_252578;
            case 0x25257Cu: goto label_25257c;
            case 0x252580u: goto label_252580;
            case 0x252584u: goto label_252584;
            case 0x252588u: goto label_252588;
            case 0x25258Cu: goto label_25258c;
            case 0x252590u: goto label_252590;
            case 0x252594u: goto label_252594;
            case 0x252598u: goto label_252598;
            case 0x25259Cu: goto label_25259c;
            case 0x2525A0u: goto label_2525a0;
            case 0x2525A4u: goto label_2525a4;
            case 0x2525A8u: goto label_2525a8;
            case 0x2525ACu: goto label_2525ac;
            case 0x2525B0u: goto label_2525b0;
            case 0x2525B4u: goto label_2525b4;
            case 0x2525B8u: goto label_2525b8;
            case 0x2525BCu: goto label_2525bc;
            case 0x2525C0u: goto label_2525c0;
            case 0x2525C4u: goto label_2525c4;
            case 0x2525C8u: goto label_2525c8;
            case 0x2525CCu: goto label_2525cc;
            case 0x2525D0u: goto label_2525d0;
            case 0x2525D4u: goto label_2525d4;
            case 0x2525D8u: goto label_2525d8;
            case 0x2525DCu: goto label_2525dc;
            case 0x2525E0u: goto label_2525e0;
            case 0x2525E4u: goto label_2525e4;
            case 0x2525E8u: goto label_2525e8;
            case 0x2525ECu: goto label_2525ec;
            case 0x2525F0u: goto label_2525f0;
            case 0x2525F4u: goto label_2525f4;
            case 0x2525F8u: goto label_2525f8;
            case 0x2525FCu: goto label_2525fc;
            case 0x252600u: goto label_252600;
            case 0x252604u: goto label_252604;
            case 0x252608u: goto label_252608;
            case 0x25260Cu: goto label_25260c;
            case 0x252610u: goto label_252610;
            case 0x252614u: goto label_252614;
            case 0x252618u: goto label_252618;
            case 0x25261Cu: goto label_25261c;
            case 0x252620u: goto label_252620;
            case 0x252624u: goto label_252624;
            case 0x252628u: goto label_252628;
            case 0x25262Cu: goto label_25262c;
            case 0x252630u: goto label_252630;
            case 0x252634u: goto label_252634;
            case 0x252638u: goto label_252638;
            case 0x25263Cu: goto label_25263c;
            case 0x252640u: goto label_252640;
            case 0x252644u: goto label_252644;
            case 0x252648u: goto label_252648;
            case 0x25264Cu: goto label_25264c;
            case 0x252650u: goto label_252650;
            case 0x252654u: goto label_252654;
            case 0x252658u: goto label_252658;
            case 0x25265Cu: goto label_25265c;
            case 0x252660u: goto label_252660;
            case 0x252664u: goto label_252664;
            case 0x252668u: goto label_252668;
            case 0x25266Cu: goto label_25266c;
            case 0x252670u: goto label_252670;
            case 0x252674u: goto label_252674;
            case 0x252678u: goto label_252678;
            case 0x25267Cu: goto label_25267c;
            case 0x252680u: goto label_252680;
            case 0x252684u: goto label_252684;
            case 0x252688u: goto label_252688;
            case 0x25268Cu: goto label_25268c;
            case 0x252690u: goto label_252690;
            case 0x252694u: goto label_252694;
            case 0x252698u: goto label_252698;
            case 0x25269Cu: goto label_25269c;
            case 0x2526A0u: goto label_2526a0;
            case 0x2526A4u: goto label_2526a4;
            case 0x2526A8u: goto label_2526a8;
            case 0x2526ACu: goto label_2526ac;
            case 0x2526B0u: goto label_2526b0;
            case 0x2526B4u: goto label_2526b4;
            case 0x2526B8u: goto label_2526b8;
            case 0x2526BCu: goto label_2526bc;
            case 0x2526C0u: goto label_2526c0;
            case 0x2526C4u: goto label_2526c4;
            case 0x2526C8u: goto label_2526c8;
            case 0x2526CCu: goto label_2526cc;
            case 0x2526D0u: goto label_2526d0;
            case 0x2526D4u: goto label_2526d4;
            case 0x2526D8u: goto label_2526d8;
            case 0x2526DCu: goto label_2526dc;
            case 0x2526E0u: goto label_2526e0;
            case 0x2526E4u: goto label_2526e4;
            case 0x2526E8u: goto label_2526e8;
            case 0x2526ECu: goto label_2526ec;
            case 0x2526F0u: goto label_2526f0;
            case 0x2526F4u: goto label_2526f4;
            case 0x2526F8u: goto label_2526f8;
            case 0x2526FCu: goto label_2526fc;
            case 0x252700u: goto label_252700;
            case 0x252704u: goto label_252704;
            case 0x252708u: goto label_252708;
            case 0x25270Cu: goto label_25270c;
            case 0x252710u: goto label_252710;
            case 0x252714u: goto label_252714;
            case 0x252718u: goto label_252718;
            case 0x25271Cu: goto label_25271c;
            case 0x252720u: goto label_252720;
            case 0x252724u: goto label_252724;
            case 0x252728u: goto label_252728;
            case 0x25272Cu: goto label_25272c;
            case 0x252730u: goto label_252730;
            case 0x252734u: goto label_252734;
            case 0x252738u: goto label_252738;
            case 0x25273Cu: goto label_25273c;
            case 0x252740u: goto label_252740;
            case 0x252744u: goto label_252744;
            case 0x252748u: goto label_252748;
            case 0x25274Cu: goto label_25274c;
            case 0x252750u: goto label_252750;
            case 0x252754u: goto label_252754;
            case 0x252758u: goto label_252758;
            case 0x25275Cu: goto label_25275c;
            case 0x252760u: goto label_252760;
            case 0x252764u: goto label_252764;
            case 0x252768u: goto label_252768;
            case 0x25276Cu: goto label_25276c;
            case 0x252770u: goto label_252770;
            case 0x252774u: goto label_252774;
            case 0x252778u: goto label_252778;
            case 0x25277Cu: goto label_25277c;
            case 0x252780u: goto label_252780;
            case 0x252784u: goto label_252784;
            case 0x252788u: goto label_252788;
            case 0x25278Cu: goto label_25278c;
            case 0x252790u: goto label_252790;
            case 0x252794u: goto label_252794;
            case 0x252798u: goto label_252798;
            case 0x25279Cu: goto label_25279c;
            case 0x2527A0u: goto label_2527a0;
            case 0x2527A4u: goto label_2527a4;
            case 0x2527A8u: goto label_2527a8;
            case 0x2527ACu: goto label_2527ac;
            case 0x2527B0u: goto label_2527b0;
            case 0x2527B4u: goto label_2527b4;
            case 0x2527B8u: goto label_2527b8;
            case 0x2527BCu: goto label_2527bc;
            case 0x2527C0u: goto label_2527c0;
            case 0x2527C4u: goto label_2527c4;
            case 0x2527C8u: goto label_2527c8;
            case 0x2527CCu: goto label_2527cc;
            case 0x2527D0u: goto label_2527d0;
            case 0x2527D4u: goto label_2527d4;
            case 0x2527D8u: goto label_2527d8;
            case 0x2527DCu: goto label_2527dc;
            case 0x2527E0u: goto label_2527e0;
            case 0x2527E4u: goto label_2527e4;
            case 0x2527E8u: goto label_2527e8;
            case 0x2527ECu: goto label_2527ec;
            case 0x2527F0u: goto label_2527f0;
            case 0x2527F4u: goto label_2527f4;
            case 0x2527F8u: goto label_2527f8;
            case 0x2527FCu: goto label_2527fc;
            case 0x252800u: goto label_252800;
            case 0x252804u: goto label_252804;
            case 0x252808u: goto label_252808;
            case 0x25280Cu: goto label_25280c;
            case 0x252810u: goto label_252810;
            case 0x252814u: goto label_252814;
            case 0x252818u: goto label_252818;
            case 0x25281Cu: goto label_25281c;
            case 0x252820u: goto label_252820;
            case 0x252824u: goto label_252824;
            case 0x252828u: goto label_252828;
            case 0x25282Cu: goto label_25282c;
            case 0x252830u: goto label_252830;
            case 0x252834u: goto label_252834;
            case 0x252838u: goto label_252838;
            case 0x25283Cu: goto label_25283c;
            case 0x252840u: goto label_252840;
            case 0x252844u: goto label_252844;
            case 0x252848u: goto label_252848;
            case 0x25284Cu: goto label_25284c;
            case 0x252850u: goto label_252850;
            case 0x252854u: goto label_252854;
            case 0x252858u: goto label_252858;
            case 0x25285Cu: goto label_25285c;
            case 0x252860u: goto label_252860;
            case 0x252864u: goto label_252864;
            case 0x252868u: goto label_252868;
            case 0x25286Cu: goto label_25286c;
            case 0x252870u: goto label_252870;
            case 0x252874u: goto label_252874;
            case 0x252878u: goto label_252878;
            case 0x25287Cu: goto label_25287c;
            case 0x252880u: goto label_252880;
            case 0x252884u: goto label_252884;
            case 0x252888u: goto label_252888;
            case 0x25288Cu: goto label_25288c;
            case 0x252890u: goto label_252890;
            case 0x252894u: goto label_252894;
            case 0x252898u: goto label_252898;
            case 0x25289Cu: goto label_25289c;
            case 0x2528A0u: goto label_2528a0;
            case 0x2528A4u: goto label_2528a4;
            case 0x2528A8u: goto label_2528a8;
            case 0x2528ACu: goto label_2528ac;
            case 0x2528B0u: goto label_2528b0;
            case 0x2528B4u: goto label_2528b4;
            case 0x2528B8u: goto label_2528b8;
            case 0x2528BCu: goto label_2528bc;
            case 0x2528C0u: goto label_2528c0;
            case 0x2528C4u: goto label_2528c4;
            case 0x2528C8u: goto label_2528c8;
            case 0x2528CCu: goto label_2528cc;
            case 0x2528D0u: goto label_2528d0;
            case 0x2528D4u: goto label_2528d4;
            case 0x2528D8u: goto label_2528d8;
            case 0x2528DCu: goto label_2528dc;
            case 0x2528E0u: goto label_2528e0;
            case 0x2528E4u: goto label_2528e4;
            case 0x2528E8u: goto label_2528e8;
            case 0x2528ECu: goto label_2528ec;
            case 0x2528F0u: goto label_2528f0;
            case 0x2528F4u: goto label_2528f4;
            case 0x2528F8u: goto label_2528f8;
            case 0x2528FCu: goto label_2528fc;
            case 0x252900u: goto label_252900;
            case 0x252904u: goto label_252904;
            case 0x252908u: goto label_252908;
            case 0x25290Cu: goto label_25290c;
            case 0x252910u: goto label_252910;
            case 0x252914u: goto label_252914;
            case 0x252918u: goto label_252918;
            case 0x25291Cu: goto label_25291c;
            case 0x252920u: goto label_252920;
            case 0x252924u: goto label_252924;
            case 0x252928u: goto label_252928;
            case 0x25292Cu: goto label_25292c;
            case 0x252930u: goto label_252930;
            case 0x252934u: goto label_252934;
            case 0x252938u: goto label_252938;
            case 0x25293Cu: goto label_25293c;
            case 0x252940u: goto label_252940;
            case 0x252944u: goto label_252944;
            case 0x252948u: goto label_252948;
            case 0x25294Cu: goto label_25294c;
            case 0x252950u: goto label_252950;
            case 0x252954u: goto label_252954;
            case 0x252958u: goto label_252958;
            case 0x25295Cu: goto label_25295c;
            case 0x252960u: goto label_252960;
            case 0x252964u: goto label_252964;
            case 0x252968u: goto label_252968;
            case 0x25296Cu: goto label_25296c;
            case 0x252970u: goto label_252970;
            case 0x252974u: goto label_252974;
            case 0x252978u: goto label_252978;
            case 0x25297Cu: goto label_25297c;
            case 0x252980u: goto label_252980;
            case 0x252984u: goto label_252984;
            case 0x252988u: goto label_252988;
            case 0x25298Cu: goto label_25298c;
            case 0x252990u: goto label_252990;
            case 0x252994u: goto label_252994;
            case 0x252998u: goto label_252998;
            case 0x25299Cu: goto label_25299c;
            case 0x2529A0u: goto label_2529a0;
            case 0x2529A4u: goto label_2529a4;
            case 0x2529A8u: goto label_2529a8;
            case 0x2529ACu: goto label_2529ac;
            case 0x2529B0u: goto label_2529b0;
            case 0x2529B4u: goto label_2529b4;
            case 0x2529B8u: goto label_2529b8;
            case 0x2529BCu: goto label_2529bc;
            case 0x2529C0u: goto label_2529c0;
            case 0x2529C4u: goto label_2529c4;
            case 0x2529C8u: goto label_2529c8;
            case 0x2529CCu: goto label_2529cc;
            case 0x2529D0u: goto label_2529d0;
            case 0x2529D4u: goto label_2529d4;
            case 0x2529D8u: goto label_2529d8;
            case 0x2529DCu: goto label_2529dc;
            case 0x2529E0u: goto label_2529e0;
            case 0x2529E4u: goto label_2529e4;
            case 0x2529E8u: goto label_2529e8;
            case 0x2529ECu: goto label_2529ec;
            case 0x2529F0u: goto label_2529f0;
            case 0x2529F4u: goto label_2529f4;
            case 0x2529F8u: goto label_2529f8;
            case 0x2529FCu: goto label_2529fc;
            case 0x252A00u: goto label_252a00;
            case 0x252A04u: goto label_252a04;
            case 0x252A08u: goto label_252a08;
            case 0x252A0Cu: goto label_252a0c;
            case 0x252A10u: goto label_252a10;
            case 0x252A14u: goto label_252a14;
            case 0x252A18u: goto label_252a18;
            case 0x252A1Cu: goto label_252a1c;
            case 0x252A20u: goto label_252a20;
            case 0x252A24u: goto label_252a24;
            case 0x252A28u: goto label_252a28;
            case 0x252A2Cu: goto label_252a2c;
            case 0x252A30u: goto label_252a30;
            case 0x252A34u: goto label_252a34;
            case 0x252A38u: goto label_252a38;
            case 0x252A3Cu: goto label_252a3c;
            case 0x252A40u: goto label_252a40;
            case 0x252A44u: goto label_252a44;
            case 0x252A48u: goto label_252a48;
            case 0x252A4Cu: goto label_252a4c;
            case 0x252A50u: goto label_252a50;
            case 0x252A54u: goto label_252a54;
            case 0x252A58u: goto label_252a58;
            case 0x252A5Cu: goto label_252a5c;
            case 0x252A60u: goto label_252a60;
            case 0x252A64u: goto label_252a64;
            case 0x252A68u: goto label_252a68;
            case 0x252A6Cu: goto label_252a6c;
            case 0x252A70u: goto label_252a70;
            case 0x252A74u: goto label_252a74;
            case 0x252A78u: goto label_252a78;
            case 0x252A7Cu: goto label_252a7c;
            case 0x252A80u: goto label_252a80;
            case 0x252A84u: goto label_252a84;
            case 0x252A88u: goto label_252a88;
            case 0x252A8Cu: goto label_252a8c;
            case 0x252A90u: goto label_252a90;
            case 0x252A94u: goto label_252a94;
            case 0x252A98u: goto label_252a98;
            case 0x252A9Cu: goto label_252a9c;
            case 0x252AA0u: goto label_252aa0;
            case 0x252AA4u: goto label_252aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x251BE4u;
label_251be4:
    // 0x251be4: 0x12600002
label_251be8:
    if (ctx->pc == 0x251BE8u) {
        ctx->pc = 0x251BE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x251BECu;
        goto label_251bec;
    }
    ctx->pc = 0x251BE4u;
    {
        const bool branch_taken_0x251be4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x251BE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x251be4) {
            ctx->pc = 0x251BF0u;
            goto label_251bf0;
        }
    }
    ctx->pc = 0x251BECu;
label_251bec:
    // 0x251bec: 0x92620030
    ctx->pc = 0x251becu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 48)));
label_251bf0:
    // 0x251bf0: 0x12600003
label_251bf4:
    if (ctx->pc == 0x251BF4u) {
        ctx->pc = 0x251BF4u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 242), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x251BF8u;
        goto label_251bf8;
    }
    ctx->pc = 0x251BF0u;
    {
        const bool branch_taken_0x251bf0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x251BF4u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 242), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x251bf0) {
            ctx->pc = 0x251C00u;
            goto label_251c00;
        }
    }
    ctx->pc = 0x251BF8u;
label_251bf8:
    // 0x251bf8: 0x10000002
label_251bfc:
    if (ctx->pc == 0x251BFCu) {
        ctx->pc = 0x251BFCu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 50)));
        ctx->pc = 0x251C00u;
        goto label_251c00;
    }
    ctx->pc = 0x251BF8u;
    {
        const bool branch_taken_0x251bf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251BFCu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 50)));
        if (branch_taken_0x251bf8) {
            ctx->pc = 0x251C04u;
            goto label_251c04;
        }
    }
    ctx->pc = 0x251C00u;
label_251c00:
    // 0x251c00: 0x2402ffff
    ctx->pc = 0x251c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_251c04:
    // 0x251c04: 0xa22200f3
    ctx->pc = 0x251c04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 243), (uint8_t)GPR_U32(ctx, 2));
label_251c08:
    // 0x251c08: 0xc08dbc4
label_251c0c:
    if (ctx->pc == 0x251C0Cu) {
        ctx->pc = 0x251C0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 40));
        ctx->pc = 0x251C10u;
        goto label_251c10;
    }
    ctx->pc = 0x251C08u;
    SET_GPR_U32(ctx, 31, 0x251C10u);
    ctx->pc = 0x251C0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 40));
    ctx->pc = 0x236F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyDescType_0x236f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C10u; }
    }
    if (ctx->pc != 0x251C10u) { return; }
    ctx->pc = 0x251C10u;
label_251c10:
    // 0x251c10: 0xa62200f0
    ctx->pc = 0x251c10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_251c14:
    // 0x251c14: 0xc7cc0020
    ctx->pc = 0x251c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_251c18:
    // 0x251c18: 0xc0ba04a
label_251c1c:
    if (ctx->pc == 0x251C1Cu) {
        ctx->pc = 0x251C1Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x251C20u;
        goto label_251c20;
    }
    ctx->pc = 0x251C18u;
    SET_GPR_U32(ctx, 31, 0x251C20u);
    ctx->pc = 0x251C1Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C20u; }
    }
    if (ctx->pc != 0x251C20u) { return; }
    ctx->pc = 0x251C20u;
label_251c20:
    // 0x251c20: 0xe62000f4
    ctx->pc = 0x251c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
label_251c24:
    // 0x251c24: 0x12600004
label_251c28:
    if (ctx->pc == 0x251C28u) {
        ctx->pc = 0x251C28u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
        ctx->pc = 0x251C2Cu;
        goto label_251c2c;
    }
    ctx->pc = 0x251C24u;
    {
        const bool branch_taken_0x251c24 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x251C28u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
        if (branch_taken_0x251c24) {
            ctx->pc = 0x251C38u;
            goto label_251c38;
        }
    }
    ctx->pc = 0x251C2Cu;
label_251c2c:
    // 0x251c2c: 0xc6600034
    ctx->pc = 0x251c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251c30:
    // 0x251c30: 0x10000002
label_251c34:
    if (ctx->pc == 0x251C34u) {
        ctx->pc = 0x251C34u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
        ctx->pc = 0x251C38u;
        goto label_251c38;
    }
    ctx->pc = 0x251C30u;
    {
        const bool branch_taken_0x251c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251C34u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
        if (branch_taken_0x251c30) {
            ctx->pc = 0x251C3Cu;
            goto label_251c3c;
        }
    }
    ctx->pc = 0x251C38u;
label_251c38:
    // 0x251c38: 0xae2000fc
    ctx->pc = 0x251c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_251c3c:
    // 0x251c3c: 0x52600003
label_251c40:
    if (ctx->pc == 0x251C40u) {
        ctx->pc = 0x251C40u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x251C44u;
        goto label_251c44;
    }
    ctx->pc = 0x251C3Cu;
    {
        const bool branch_taken_0x251c3c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x251c3c) {
            ctx->pc = 0x251C40u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x251C4Cu;
            goto label_251c4c;
        }
    }
    ctx->pc = 0x251C44u;
label_251c44:
    // 0x251c44: 0x96620038
    ctx->pc = 0x251c44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_251c48:
    // 0x251c48: 0xa6220100
    ctx->pc = 0x251c48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 2));
label_251c4c:
    // 0x251c4c: 0x3c020031
    ctx->pc = 0x251c4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_251c50:
    // 0x251c50: 0x8c420010
    ctx->pc = 0x251c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_251c54:
    // 0x251c54: 0x14400005
label_251c58:
    if (ctx->pc == 0x251C58u) {
        ctx->pc = 0x251C58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        ctx->pc = 0x251C5Cu;
        goto label_251c5c;
    }
    ctx->pc = 0x251C54u;
    {
        const bool branch_taken_0x251c54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x251C58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x251c54) {
            ctx->pc = 0x251C6Cu;
            goto label_251c6c;
        }
    }
    ctx->pc = 0x251C5Cu;
label_251c5c:
    // 0x251c5c: 0x822200f3
    ctx->pc = 0x251c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 243)));
label_251c60:
    // 0x251c60: 0x4430009
label_251c64:
    if (ctx->pc == 0x251C64u) {
        ctx->pc = 0x251C64u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x251C68u;
        goto label_251c68;
    }
    ctx->pc = 0x251C60u;
    {
        const bool branch_taken_0x251c60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x251c60) {
            ctx->pc = 0x251C64u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
            ctx->pc = 0x251C88u;
            goto label_251c88;
        }
    }
    ctx->pc = 0x251C68u;
label_251c68:
    // 0x251c68: 0x3c020033
    ctx->pc = 0x251c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_251c6c:
    // 0x251c6c: 0x2442dc10
    ctx->pc = 0x251c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958096));
label_251c70:
    // 0x251c70: 0x862300f0
    ctx->pc = 0x251c70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
label_251c74:
    // 0x251c74: 0x31880
    ctx->pc = 0x251c74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_251c78:
    // 0x251c78: 0x621821
    ctx->pc = 0x251c78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_251c7c:
    // 0x251c7c: 0x90620000
    ctx->pc = 0x251c7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_251c80:
    // 0x251c80: 0xa22200f3
    ctx->pc = 0x251c80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 243), (uint8_t)GPR_U32(ctx, 2));
label_251c84:
    // 0x251c84: 0xafa00058
    ctx->pc = 0x251c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_251c88:
    // 0x251c88: 0x862400f0
    ctx->pc = 0x251c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
label_251c8c:
    // 0x251c8c: 0xc08e032
label_251c90:
    if (ctx->pc == 0x251C90u) {
        ctx->pc = 0x251C90u;
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 242)));
        ctx->pc = 0x251C94u;
        goto label_251c94;
    }
    ctx->pc = 0x251C8Cu;
    SET_GPR_U32(ctx, 31, 0x251C94u);
    ctx->pc = 0x251C90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 242)));
    ctx->pc = 0x2380C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetEnemyType_0x2380c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251C94u; }
    }
    if (ctx->pc != 0x251C94u) { return; }
    ctx->pc = 0x251C94u;
label_251c94:
    // 0x251c94: 0xa62200f0
    ctx->pc = 0x251c94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_251c98:
    // 0x251c98: 0x21400
    ctx->pc = 0x251c98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_251c9c:
    // 0x251c9c: 0x21403
    ctx->pc = 0x251c9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_251ca0:
    // 0x251ca0: 0x24030020
    ctx->pc = 0x251ca0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
label_251ca4:
    // 0x251ca4: 0x54430015
label_251ca8:
    if (ctx->pc == 0x251CA8u) {
        ctx->pc = 0x251CA8u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x251CACu;
        goto label_251cac;
    }
    ctx->pc = 0x251CA4u;
    {
        const bool branch_taken_0x251ca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x251ca4) {
            ctx->pc = 0x251CA8u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->pc = 0x251CFCu;
            goto label_251cfc;
        }
    }
    ctx->pc = 0x251CACu;
label_251cac:
    // 0x251cac: 0x24040007
    ctx->pc = 0x251cacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
label_251cb0:
    // 0x251cb0: 0xc0a4974
label_251cb4:
    if (ctx->pc == 0x251CB4u) {
        ctx->pc = 0x251CB4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x251CB8u;
        goto label_251cb8;
    }
    ctx->pc = 0x251CB0u;
    SET_GPR_U32(ctx, 31, 0x251CB8u);
    ctx->pc = 0x251CB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2925D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterTypeLoaded_0x2925d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251CB8u; }
    }
    if (ctx->pc != 0x251CB8u) { return; }
    ctx->pc = 0x251CB8u;
label_251cb8:
    // 0x251cb8: 0x10400059
label_251cbc:
    if (ctx->pc == 0x251CBCu) {
        ctx->pc = 0x251CBCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x251CC0u;
        goto label_251cc0;
    }
    ctx->pc = 0x251CB8u;
    {
        const bool branch_taken_0x251cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251CBCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x251cb8) {
            ctx->pc = 0x251E20u;
            goto label_251e20;
        }
    }
    ctx->pc = 0x251CC0u;
label_251cc0:
    // 0x251cc0: 0x962200d8
    ctx->pc = 0x251cc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_251cc4:
    // 0x251cc4: 0x3042fffe
    ctx->pc = 0x251cc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65534));
label_251cc8:
    // 0x251cc8: 0xa62200d8
    ctx->pc = 0x251cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_251ccc:
    // 0x251ccc: 0xafa30058
    ctx->pc = 0x251cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_251cd0:
    // 0x251cd0: 0x24040007
    ctx->pc = 0x251cd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
label_251cd4:
    // 0x251cd4: 0xc0a4974
label_251cd8:
    if (ctx->pc == 0x251CD8u) {
        ctx->pc = 0x251CD8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x251CDCu;
        goto label_251cdc;
    }
    ctx->pc = 0x251CD4u;
    SET_GPR_U32(ctx, 31, 0x251CDCu);
    ctx->pc = 0x251CD8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2925D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterTypeLoaded_0x2925d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251CDCu; }
    }
    if (ctx->pc != 0x251CDCu) { return; }
    ctx->pc = 0x251CDCu;
label_251cdc:
    // 0x251cdc: 0x8c420120
    ctx->pc = 0x251cdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_251ce0:
    // 0x251ce0: 0x8c440028
    ctx->pc = 0x251ce0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_251ce4:
    // 0x251ce4: 0x3c05003b
    ctx->pc = 0x251ce4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_251ce8:
    // 0x251ce8: 0x24a586e0
    ctx->pc = 0x251ce8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936288));
label_251cec:
    // 0x251cec: 0xc0847fc
label_251cf0:
    if (ctx->pc == 0x251CF0u) {
        ctx->pc = 0x251CF0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x251CF4u;
        goto label_251cf4;
    }
    ctx->pc = 0x251CECu;
    SET_GPR_U32(ctx, 31, 0x251CF4u);
    ctx->pc = 0x251CF0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251CF4u; }
    }
    if (ctx->pc != 0x251CF4u) { return; }
    ctx->pc = 0x251CF4u;
label_251cf4:
    // 0x251cf4: 0x1000004a
label_251cf8:
    if (ctx->pc == 0x251CF8u) {
        ctx->pc = 0x251CF8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x251CFCu;
        goto label_251cfc;
    }
    ctx->pc = 0x251CF4u;
    {
        const bool branch_taken_0x251cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251CF8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        if (branch_taken_0x251cf4) {
            ctx->pc = 0x251E20u;
            goto label_251e20;
        }
    }
    ctx->pc = 0x251CFCu;
label_251cfc:
    // 0x251cfc: 0x2402001d
    ctx->pc = 0x251cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
label_251d00:
    // 0x251d00: 0x54620022
label_251d04:
    if (ctx->pc == 0x251D04u) {
        ctx->pc = 0x251D04u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x251D08u;
        goto label_251d08;
    }
    ctx->pc = 0x251D00u;
    {
        const bool branch_taken_0x251d00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x251d00) {
            ctx->pc = 0x251D04u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->pc = 0x251D8Cu;
            goto label_251d8c;
        }
    }
    ctx->pc = 0x251D08u;
label_251d08:
    // 0x251d08: 0x3c020033
    ctx->pc = 0x251d08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_251d0c:
    // 0x251d0c: 0x24433c08
    ctx->pc = 0x251d0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 15368));
label_251d10:
    // 0x251d10: 0x8c620074
    ctx->pc = 0x251d10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_251d14:
    // 0x251d14: 0x10400009
label_251d18:
    if (ctx->pc == 0x251D18u) {
        ctx->pc = 0x251D18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x251D1Cu;
        goto label_251d1c;
    }
    ctx->pc = 0x251D14u;
    {
        const bool branch_taken_0x251d14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251D18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x251d14) {
            ctx->pc = 0x251D3Cu;
            goto label_251d3c;
        }
    }
    ctx->pc = 0x251D1Cu;
label_251d1c:
    // 0x251d1c: 0x962200d8
    ctx->pc = 0x251d1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_251d20:
    // 0x251d20: 0x3042fffe
    ctx->pc = 0x251d20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65534));
label_251d24:
    // 0x251d24: 0xa62200d8
    ctx->pc = 0x251d24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_251d28:
    // 0x251d28: 0xafa40058
    ctx->pc = 0x251d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_251d2c:
    // 0x251d2c: 0x8c640074
    ctx->pc = 0x251d2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_251d30:
    // 0x251d30: 0x3c05003b
    ctx->pc = 0x251d30u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_251d34:
    // 0x251d34: 0x10000037
label_251d38:
    if (ctx->pc == 0x251D38u) {
        ctx->pc = 0x251D38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936304));
        ctx->pc = 0x251D3Cu;
        goto label_251d3c;
    }
    ctx->pc = 0x251D34u;
    {
        const bool branch_taken_0x251d34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251D38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936304));
        if (branch_taken_0x251d34) {
            ctx->pc = 0x251E14u;
            goto label_251e14;
        }
    }
    ctx->pc = 0x251D3Cu;
label_251d3c:
    // 0x251d3c: 0x24040003
    ctx->pc = 0x251d3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_251d40:
    // 0x251d40: 0xc0a4974
label_251d44:
    if (ctx->pc == 0x251D44u) {
        ctx->pc = 0x251D44u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x251D48u;
        goto label_251d48;
    }
    ctx->pc = 0x251D40u;
    SET_GPR_U32(ctx, 31, 0x251D48u);
    ctx->pc = 0x251D44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2925D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterTypeLoaded_0x2925d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D48u; }
    }
    if (ctx->pc != 0x251D48u) { return; }
    ctx->pc = 0x251D48u;
label_251d48:
    // 0x251d48: 0x10400035
label_251d4c:
    if (ctx->pc == 0x251D4Cu) {
        ctx->pc = 0x251D4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x251D50u;
        goto label_251d50;
    }
    ctx->pc = 0x251D48u;
    {
        const bool branch_taken_0x251d48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251D4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x251d48) {
            ctx->pc = 0x251E20u;
            goto label_251e20;
        }
    }
    ctx->pc = 0x251D50u;
label_251d50:
    // 0x251d50: 0x962200d8
    ctx->pc = 0x251d50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_251d54:
    // 0x251d54: 0x3042fffe
    ctx->pc = 0x251d54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65534));
label_251d58:
    // 0x251d58: 0xa62200d8
    ctx->pc = 0x251d58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_251d5c:
    // 0x251d5c: 0x24020001
    ctx->pc = 0x251d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_251d60:
    // 0x251d60: 0xafa20058
    ctx->pc = 0x251d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_251d64:
    // 0x251d64: 0xc0a4974
label_251d68:
    if (ctx->pc == 0x251D68u) {
        ctx->pc = 0x251D68u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x251D6Cu;
        goto label_251d6c;
    }
    ctx->pc = 0x251D64u;
    SET_GPR_U32(ctx, 31, 0x251D6Cu);
    ctx->pc = 0x251D68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2925D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterTypeLoaded_0x2925d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D6Cu; }
    }
    if (ctx->pc != 0x251D6Cu) { return; }
    ctx->pc = 0x251D6Cu;
label_251d6c:
    // 0x251d6c: 0x8c420120
    ctx->pc = 0x251d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_251d70:
    // 0x251d70: 0x8c440028
    ctx->pc = 0x251d70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_251d74:
    // 0x251d74: 0x3c05003b
    ctx->pc = 0x251d74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_251d78:
    // 0x251d78: 0x24a586f0
    ctx->pc = 0x251d78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936304));
label_251d7c:
    // 0x251d7c: 0xc0847fc
label_251d80:
    if (ctx->pc == 0x251D80u) {
        ctx->pc = 0x251D80u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x251D84u;
        goto label_251d84;
    }
    ctx->pc = 0x251D7Cu;
    SET_GPR_U32(ctx, 31, 0x251D84u);
    ctx->pc = 0x251D80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D84u; }
    }
    if (ctx->pc != 0x251D84u) { return; }
    ctx->pc = 0x251D84u;
label_251d84:
    // 0x251d84: 0x10000026
label_251d88:
    if (ctx->pc == 0x251D88u) {
        ctx->pc = 0x251D88u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x251D8Cu;
        goto label_251d8c;
    }
    ctx->pc = 0x251D84u;
    {
        const bool branch_taken_0x251d84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251D88u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        if (branch_taken_0x251d84) {
            ctx->pc = 0x251E20u;
            goto label_251e20;
        }
    }
    ctx->pc = 0x251D8Cu;
label_251d8c:
    // 0x251d8c: 0x2402001e
    ctx->pc = 0x251d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_251d90:
    // 0x251d90: 0x546202b7
label_251d94:
    if (ctx->pc == 0x251D94u) {
        ctx->pc = 0x251D94u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x251D98u;
        goto label_251d98;
    }
    ctx->pc = 0x251D90u;
    {
        const bool branch_taken_0x251d90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x251d90) {
            ctx->pc = 0x251D94u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->pc = 0x252870u;
            goto label_252870;
        }
    }
    ctx->pc = 0x251D98u;
label_251d98:
    // 0x251d98: 0x3c020033
    ctx->pc = 0x251d98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_251d9c:
    // 0x251d9c: 0x8c423c80
    ctx->pc = 0x251d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15488)));
label_251da0:
    // 0x251da0: 0x104002b2
label_251da4:
    if (ctx->pc == 0x251DA4u) {
        ctx->pc = 0x251DA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x251DA8u;
        goto label_251da8;
    }
    ctx->pc = 0x251DA0u;
    {
        const bool branch_taken_0x251da0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251DA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x251da0) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x251DA8u;
label_251da8:
    // 0x251da8: 0x962200d8
    ctx->pc = 0x251da8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_251dac:
    // 0x251dac: 0x3042fffe
    ctx->pc = 0x251dacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65534));
label_251db0:
    // 0x251db0: 0xa62200d8
    ctx->pc = 0x251db0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_251db4:
    // 0x251db4: 0xafa30058
    ctx->pc = 0x251db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_251db8:
    // 0x251db8: 0x822300f2
    ctx->pc = 0x251db8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 242)));
label_251dbc:
    // 0x251dbc: 0x8fa40058
    ctx->pc = 0x251dbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_251dc0:
    // 0x251dc0: 0x1064000d
label_251dc4:
    if (ctx->pc == 0x251DC4u) {
        ctx->pc = 0x251DC4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x251DC8u;
        goto label_251dc8;
    }
    ctx->pc = 0x251DC0u;
    {
        const bool branch_taken_0x251dc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x251DC4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x251dc0) {
            ctx->pc = 0x251DF8u;
            goto label_251df8;
        }
    }
    ctx->pc = 0x251DC8u;
label_251dc8:
    // 0x251dc8: 0x10400005
label_251dcc:
    if (ctx->pc == 0x251DCCu) {
        ctx->pc = 0x251DCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x251DD0u;
        goto label_251dd0;
    }
    ctx->pc = 0x251DC8u;
    {
        const bool branch_taken_0x251dc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251DCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x251dc8) {
            ctx->pc = 0x251DE0u;
            goto label_251de0;
        }
    }
    ctx->pc = 0x251DD0u;
label_251dd0:
    // 0x251dd0: 0x1060000d
label_251dd4:
    if (ctx->pc == 0x251DD4u) {
        ctx->pc = 0x251DD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        ctx->pc = 0x251DD8u;
        goto label_251dd8;
    }
    ctx->pc = 0x251DD0u;
    {
        const bool branch_taken_0x251dd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x251DD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x251dd0) {
            ctx->pc = 0x251E08u;
            goto label_251e08;
        }
    }
    ctx->pc = 0x251DD8u;
label_251dd8:
    // 0x251dd8: 0x100002a5
label_251ddc:
    if (ctx->pc == 0x251DDCu) {
        ctx->pc = 0x251DDCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x251DE0u;
        goto label_251de0;
    }
    ctx->pc = 0x251DD8u;
    {
        const bool branch_taken_0x251dd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251DDCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
        if (branch_taken_0x251dd8) {
            ctx->pc = 0x252870u;
            goto label_252870;
        }
    }
    ctx->pc = 0x251DE0u;
label_251de0:
    // 0x251de0: 0x10620014
label_251de4:
    if (ctx->pc == 0x251DE4u) {
        ctx->pc = 0x251DE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x251DE8u;
        goto label_251de8;
    }
    ctx->pc = 0x251DE0u;
    {
        const bool branch_taken_0x251de0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x251DE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x251de0) {
            ctx->pc = 0x251E34u;
            goto label_251e34;
        }
    }
    ctx->pc = 0x251DE8u;
label_251de8:
    // 0x251de8: 0x50620010
label_251dec:
    if (ctx->pc == 0x251DECu) {
        ctx->pc = 0x251DECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->pc = 0x251DF0u;
        goto label_251df0;
    }
    ctx->pc = 0x251DE8u;
    {
        const bool branch_taken_0x251de8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x251de8) {
            ctx->pc = 0x251DECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 248)));
            ctx->pc = 0x251E2Cu;
            goto label_251e2c;
        }
    }
    ctx->pc = 0x251DF0u;
label_251df0:
    // 0x251df0: 0x1000029f
label_251df4:
    if (ctx->pc == 0x251DF4u) {
        ctx->pc = 0x251DF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x251DF8u;
        goto label_251df8;
    }
    ctx->pc = 0x251DF0u;
    {
        const bool branch_taken_0x251df0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251DF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
        if (branch_taken_0x251df0) {
            ctx->pc = 0x252870u;
            goto label_252870;
        }
    }
    ctx->pc = 0x251DF8u;
label_251df8:
    // 0x251df8: 0x8e2200f8
    ctx->pc = 0x251df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_251dfc:
    // 0x251dfc: 0x34420001
    ctx->pc = 0x251dfcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_251e00:
    // 0x251e00: 0xae2200f8
    ctx->pc = 0x251e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
label_251e04:
    // 0x251e04: 0x3c020033
    ctx->pc = 0x251e04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_251e08:
    // 0x251e08: 0x8c443c80
    ctx->pc = 0x251e08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15488)));
label_251e0c:
    // 0x251e0c: 0x3c05003b
    ctx->pc = 0x251e0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_251e10:
    // 0x251e10: 0x24a58700
    ctx->pc = 0x251e10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936320));
label_251e14:
    // 0x251e14: 0xc0847fc
label_251e18:
    if (ctx->pc == 0x251E18u) {
        ctx->pc = 0x251E18u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x251E1Cu;
        goto label_251e1c;
    }
    ctx->pc = 0x251E14u;
    SET_GPR_U32(ctx, 31, 0x251E1Cu);
    ctx->pc = 0x251E18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E1Cu; }
    }
    if (ctx->pc != 0x251E1Cu) { return; }
    ctx->pc = 0x251E1Cu;
label_251e1c:
    // 0x251e1c: 0xafa2005c
    ctx->pc = 0x251e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_251e20:
    // 0x251e20: 0x24020001
    ctx->pc = 0x251e20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_251e24:
    // 0x251e24: 0x10000291
label_251e28:
    if (ctx->pc == 0x251E28u) {
        ctx->pc = 0x251E28u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 242), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x251E2Cu;
        goto label_251e2c;
    }
    ctx->pc = 0x251E24u;
    {
        const bool branch_taken_0x251e24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251E28u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 242), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x251e24) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x251E2Cu;
label_251e2c:
    // 0x251e2c: 0x34420001
    ctx->pc = 0x251e2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_251e30:
    // 0x251e30: 0xae2200f8
    ctx->pc = 0x251e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
label_251e34:
    // 0x251e34: 0x3c020033
    ctx->pc = 0x251e34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_251e38:
    // 0x251e38: 0x8c443c80
    ctx->pc = 0x251e38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15488)));
label_251e3c:
    // 0x251e3c: 0x3c05003b
    ctx->pc = 0x251e3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_251e40:
    // 0x251e40: 0x24a58710
    ctx->pc = 0x251e40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936336));
label_251e44:
    // 0x251e44: 0xc0847fc
label_251e48:
    if (ctx->pc == 0x251E48u) {
        ctx->pc = 0x251E48u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x251E4Cu;
        goto label_251e4c;
    }
    ctx->pc = 0x251E44u;
    SET_GPR_U32(ctx, 31, 0x251E4Cu);
    ctx->pc = 0x251E48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E4Cu; }
    }
    if (ctx->pc != 0x251E4Cu) { return; }
    ctx->pc = 0x251E4Cu;
label_251e4c:
    // 0x251e4c: 0xafa2005c
    ctx->pc = 0x251e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_251e50:
    // 0x251e50: 0x24020002
    ctx->pc = 0x251e50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_251e54:
    // 0x251e54: 0x10000285
label_251e58:
    if (ctx->pc == 0x251E58u) {
        ctx->pc = 0x251E58u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 242), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x251E5Cu;
        goto label_251e5c;
    }
    ctx->pc = 0x251E54u;
    {
        const bool branch_taken_0x251e54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251E58u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 242), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x251e54) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x251E5Cu;
label_251e5c:
    // 0x251e5c: 0x12600002
label_251e60:
    if (ctx->pc == 0x251E60u) {
        ctx->pc = 0x251E60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x251E64u;
        goto label_251e64;
    }
    ctx->pc = 0x251E5Cu;
    {
        const bool branch_taken_0x251e5c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x251E60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x251e5c) {
            ctx->pc = 0x251E68u;
            goto label_251e68;
        }
    }
    ctx->pc = 0x251E64u;
label_251e64:
    // 0x251e64: 0x96620030
    ctx->pc = 0x251e64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_251e68:
    // 0x251e68: 0xa62200f0
    ctx->pc = 0x251e68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_251e6c:
    // 0x251e6c: 0xa62000f2
    ctx->pc = 0x251e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 0));
label_251e70:
    // 0x251e70: 0xae2000f8
    ctx->pc = 0x251e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
label_251e74:
    // 0x251e74: 0xae2000fc
    ctx->pc = 0x251e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_251e78:
    // 0x251e78: 0xc7cc0020
    ctx->pc = 0x251e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_251e7c:
    // 0x251e7c: 0xc0ba04a
label_251e80:
    if (ctx->pc == 0x251E80u) {
        ctx->pc = 0x251E80u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x251E84u;
        goto label_251e84;
    }
    ctx->pc = 0x251E7Cu;
    SET_GPR_U32(ctx, 31, 0x251E84u);
    ctx->pc = 0x251E80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E84u; }
    }
    if (ctx->pc != 0x251E84u) { return; }
    ctx->pc = 0x251E84u;
label_251e84:
    // 0x251e84: 0x12600004
label_251e88:
    if (ctx->pc == 0x251E88u) {
        ctx->pc = 0x251E88u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
        ctx->pc = 0x251E8Cu;
        goto label_251e8c;
    }
    ctx->pc = 0x251E84u;
    {
        const bool branch_taken_0x251e84 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x251E88u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
        if (branch_taken_0x251e84) {
            ctx->pc = 0x251E98u;
            goto label_251e98;
        }
    }
    ctx->pc = 0x251E8Cu;
label_251e8c:
    // 0x251e8c: 0x96620034
    ctx->pc = 0x251e8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
label_251e90:
    // 0x251e90: 0x10000276
label_251e94:
    if (ctx->pc == 0x251E94u) {
        ctx->pc = 0x251E94u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x251E98u;
        goto label_251e98;
    }
    ctx->pc = 0x251E90u;
    {
        const bool branch_taken_0x251e90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251E94u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x251e90) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x251E98u;
label_251e98:
    // 0x251e98: 0x10000274
label_251e9c:
    if (ctx->pc == 0x251E9Cu) {
        ctx->pc = 0x251E9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x251EA0u;
        goto label_251ea0;
    }
    ctx->pc = 0x251E98u;
    {
        const bool branch_taken_0x251e98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251E9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x251e98) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x251EA0u;
label_251ea0:
    // 0x251ea0: 0x1260006d
label_251ea4:
    if (ctx->pc == 0x251EA4u) {
        ctx->pc = 0x251EA4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x251EA8u;
        goto label_251ea8;
    }
    ctx->pc = 0x251EA0u;
    {
        const bool branch_taken_0x251ea0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x251EA4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x251ea0) {
            ctx->pc = 0x252058u;
            goto label_252058;
        }
    }
    ctx->pc = 0x251EA8u;
label_251ea8:
    // 0x251ea8: 0x8fa20054
    ctx->pc = 0x251ea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_251eac:
    // 0x251eac: 0x2443ffec
    ctx->pc = 0x251eacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967276));
label_251eb0:
    // 0x251eb0: 0x2c62000c
    ctx->pc = 0x251eb0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 12));
label_251eb4:
    // 0x251eb4: 0x10400017
label_251eb8:
    if (ctx->pc == 0x251EB8u) {
        ctx->pc = 0x251EB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x251EBCu;
        goto label_251ebc;
    }
    ctx->pc = 0x251EB4u;
    {
        const bool branch_taken_0x251eb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251EB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x251eb4) {
            ctx->pc = 0x251F14u;
            goto label_251f14;
        }
    }
    ctx->pc = 0x251EBCu;
label_251ebc:
    // 0x251ebc: 0x24428840
    ctx->pc = 0x251ebcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936640));
label_251ec0:
    // 0x251ec0: 0x31880
    ctx->pc = 0x251ec0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_251ec4:
    // 0x251ec4: 0x621821
    ctx->pc = 0x251ec4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_251ec8:
    // 0x251ec8: 0x8c620000
    ctx->pc = 0x251ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_251ecc:
    // 0x251ecc: 0x400008
label_251ed0:
    if (ctx->pc == 0x251ED0u) {
        ctx->pc = 0x251ED4u;
        goto label_251ed4;
    }
    ctx->pc = 0x251ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2518C0u: goto label_2518c0;
            case 0x2518C4u: goto label_2518c4;
            case 0x2518C8u: goto label_2518c8;
            case 0x2518CCu: goto label_2518cc;
            case 0x2518D0u: goto label_2518d0;
            case 0x2518D4u: goto label_2518d4;
            case 0x2518D8u: goto label_2518d8;
            case 0x2518DCu: goto label_2518dc;
            case 0x2518E0u: goto label_2518e0;
            case 0x2518E4u: goto label_2518e4;
            case 0x2518E8u: goto label_2518e8;
            case 0x2518ECu: goto label_2518ec;
            case 0x2518F0u: goto label_2518f0;
            case 0x2518F4u: goto label_2518f4;
            case 0x2518F8u: goto label_2518f8;
            case 0x2518FCu: goto label_2518fc;
            case 0x251900u: goto label_251900;
            case 0x251904u: goto label_251904;
            case 0x251908u: goto label_251908;
            case 0x25190Cu: goto label_25190c;
            case 0x251910u: goto label_251910;
            case 0x251914u: goto label_251914;
            case 0x251918u: goto label_251918;
            case 0x25191Cu: goto label_25191c;
            case 0x251920u: goto label_251920;
            case 0x251924u: goto label_251924;
            case 0x251928u: goto label_251928;
            case 0x25192Cu: goto label_25192c;
            case 0x251930u: goto label_251930;
            case 0x251934u: goto label_251934;
            case 0x251938u: goto label_251938;
            case 0x25193Cu: goto label_25193c;
            case 0x251940u: goto label_251940;
            case 0x251944u: goto label_251944;
            case 0x251948u: goto label_251948;
            case 0x25194Cu: goto label_25194c;
            case 0x251950u: goto label_251950;
            case 0x251954u: goto label_251954;
            case 0x251958u: goto label_251958;
            case 0x25195Cu: goto label_25195c;
            case 0x251960u: goto label_251960;
            case 0x251964u: goto label_251964;
            case 0x251968u: goto label_251968;
            case 0x25196Cu: goto label_25196c;
            case 0x251970u: goto label_251970;
            case 0x251974u: goto label_251974;
            case 0x251978u: goto label_251978;
            case 0x25197Cu: goto label_25197c;
            case 0x251980u: goto label_251980;
            case 0x251984u: goto label_251984;
            case 0x251988u: goto label_251988;
            case 0x25198Cu: goto label_25198c;
            case 0x251990u: goto label_251990;
            case 0x251994u: goto label_251994;
            case 0x251998u: goto label_251998;
            case 0x25199Cu: goto label_25199c;
            case 0x2519A0u: goto label_2519a0;
            case 0x2519A4u: goto label_2519a4;
            case 0x2519A8u: goto label_2519a8;
            case 0x2519ACu: goto label_2519ac;
            case 0x2519B0u: goto label_2519b0;
            case 0x2519B4u: goto label_2519b4;
            case 0x2519B8u: goto label_2519b8;
            case 0x2519BCu: goto label_2519bc;
            case 0x2519C0u: goto label_2519c0;
            case 0x2519C4u: goto label_2519c4;
            case 0x2519C8u: goto label_2519c8;
            case 0x2519CCu: goto label_2519cc;
            case 0x2519D0u: goto label_2519d0;
            case 0x2519D4u: goto label_2519d4;
            case 0x2519D8u: goto label_2519d8;
            case 0x2519DCu: goto label_2519dc;
            case 0x2519E0u: goto label_2519e0;
            case 0x2519E4u: goto label_2519e4;
            case 0x2519E8u: goto label_2519e8;
            case 0x2519ECu: goto label_2519ec;
            case 0x2519F0u: goto label_2519f0;
            case 0x2519F4u: goto label_2519f4;
            case 0x2519F8u: goto label_2519f8;
            case 0x2519FCu: goto label_2519fc;
            case 0x251A00u: goto label_251a00;
            case 0x251A04u: goto label_251a04;
            case 0x251A08u: goto label_251a08;
            case 0x251A0Cu: goto label_251a0c;
            case 0x251A10u: goto label_251a10;
            case 0x251A14u: goto label_251a14;
            case 0x251A18u: goto label_251a18;
            case 0x251A1Cu: goto label_251a1c;
            case 0x251A20u: goto label_251a20;
            case 0x251A24u: goto label_251a24;
            case 0x251A28u: goto label_251a28;
            case 0x251A2Cu: goto label_251a2c;
            case 0x251A30u: goto label_251a30;
            case 0x251A34u: goto label_251a34;
            case 0x251A38u: goto label_251a38;
            case 0x251A3Cu: goto label_251a3c;
            case 0x251A40u: goto label_251a40;
            case 0x251A44u: goto label_251a44;
            case 0x251A48u: goto label_251a48;
            case 0x251A4Cu: goto label_251a4c;
            case 0x251A50u: goto label_251a50;
            case 0x251A54u: goto label_251a54;
            case 0x251A58u: goto label_251a58;
            case 0x251A5Cu: goto label_251a5c;
            case 0x251A60u: goto label_251a60;
            case 0x251A64u: goto label_251a64;
            case 0x251A68u: goto label_251a68;
            case 0x251A6Cu: goto label_251a6c;
            case 0x251A70u: goto label_251a70;
            case 0x251A74u: goto label_251a74;
            case 0x251A78u: goto label_251a78;
            case 0x251A7Cu: goto label_251a7c;
            case 0x251A80u: goto label_251a80;
            case 0x251A84u: goto label_251a84;
            case 0x251A88u: goto label_251a88;
            case 0x251A8Cu: goto label_251a8c;
            case 0x251A90u: goto label_251a90;
            case 0x251A94u: goto label_251a94;
            case 0x251A98u: goto label_251a98;
            case 0x251A9Cu: goto label_251a9c;
            case 0x251AA0u: goto label_251aa0;
            case 0x251AA4u: goto label_251aa4;
            case 0x251AA8u: goto label_251aa8;
            case 0x251AACu: goto label_251aac;
            case 0x251AB0u: goto label_251ab0;
            case 0x251AB4u: goto label_251ab4;
            case 0x251AB8u: goto label_251ab8;
            case 0x251ABCu: goto label_251abc;
            case 0x251AC0u: goto label_251ac0;
            case 0x251AC4u: goto label_251ac4;
            case 0x251AC8u: goto label_251ac8;
            case 0x251ACCu: goto label_251acc;
            case 0x251AD0u: goto label_251ad0;
            case 0x251AD4u: goto label_251ad4;
            case 0x251AD8u: goto label_251ad8;
            case 0x251ADCu: goto label_251adc;
            case 0x251AE0u: goto label_251ae0;
            case 0x251AE4u: goto label_251ae4;
            case 0x251AE8u: goto label_251ae8;
            case 0x251AECu: goto label_251aec;
            case 0x251AF0u: goto label_251af0;
            case 0x251AF4u: goto label_251af4;
            case 0x251AF8u: goto label_251af8;
            case 0x251AFCu: goto label_251afc;
            case 0x251B00u: goto label_251b00;
            case 0x251B04u: goto label_251b04;
            case 0x251B08u: goto label_251b08;
            case 0x251B0Cu: goto label_251b0c;
            case 0x251B10u: goto label_251b10;
            case 0x251B14u: goto label_251b14;
            case 0x251B18u: goto label_251b18;
            case 0x251B1Cu: goto label_251b1c;
            case 0x251B20u: goto label_251b20;
            case 0x251B24u: goto label_251b24;
            case 0x251B28u: goto label_251b28;
            case 0x251B2Cu: goto label_251b2c;
            case 0x251B30u: goto label_251b30;
            case 0x251B34u: goto label_251b34;
            case 0x251B38u: goto label_251b38;
            case 0x251B3Cu: goto label_251b3c;
            case 0x251B40u: goto label_251b40;
            case 0x251B44u: goto label_251b44;
            case 0x251B48u: goto label_251b48;
            case 0x251B4Cu: goto label_251b4c;
            case 0x251B50u: goto label_251b50;
            case 0x251B54u: goto label_251b54;
            case 0x251B58u: goto label_251b58;
            case 0x251B5Cu: goto label_251b5c;
            case 0x251B60u: goto label_251b60;
            case 0x251B64u: goto label_251b64;
            case 0x251B68u: goto label_251b68;
            case 0x251B6Cu: goto label_251b6c;
            case 0x251B70u: goto label_251b70;
            case 0x251B74u: goto label_251b74;
            case 0x251B78u: goto label_251b78;
            case 0x251B7Cu: goto label_251b7c;
            case 0x251B80u: goto label_251b80;
            case 0x251B84u: goto label_251b84;
            case 0x251B88u: goto label_251b88;
            case 0x251B8Cu: goto label_251b8c;
            case 0x251B90u: goto label_251b90;
            case 0x251B94u: goto label_251b94;
            case 0x251B98u: goto label_251b98;
            case 0x251B9Cu: goto label_251b9c;
            case 0x251BA0u: goto label_251ba0;
            case 0x251BA4u: goto label_251ba4;
            case 0x251BA8u: goto label_251ba8;
            case 0x251BACu: goto label_251bac;
            case 0x251BB0u: goto label_251bb0;
            case 0x251BB4u: goto label_251bb4;
            case 0x251BB8u: goto label_251bb8;
            case 0x251BBCu: goto label_251bbc;
            case 0x251BC0u: goto label_251bc0;
            case 0x251BC4u: goto label_251bc4;
            case 0x251BC8u: goto label_251bc8;
            case 0x251BCCu: goto label_251bcc;
            case 0x251BD0u: goto label_251bd0;
            case 0x251BD4u: goto label_251bd4;
            case 0x251BD8u: goto label_251bd8;
            case 0x251BDCu: goto label_251bdc;
            case 0x251BE0u: goto label_251be0;
            case 0x251BE4u: goto label_251be4;
            case 0x251BE8u: goto label_251be8;
            case 0x251BECu: goto label_251bec;
            case 0x251BF0u: goto label_251bf0;
            case 0x251BF4u: goto label_251bf4;
            case 0x251BF8u: goto label_251bf8;
            case 0x251BFCu: goto label_251bfc;
            case 0x251C00u: goto label_251c00;
            case 0x251C04u: goto label_251c04;
            case 0x251C08u: goto label_251c08;
            case 0x251C0Cu: goto label_251c0c;
            case 0x251C10u: goto label_251c10;
            case 0x251C14u: goto label_251c14;
            case 0x251C18u: goto label_251c18;
            case 0x251C1Cu: goto label_251c1c;
            case 0x251C20u: goto label_251c20;
            case 0x251C24u: goto label_251c24;
            case 0x251C28u: goto label_251c28;
            case 0x251C2Cu: goto label_251c2c;
            case 0x251C30u: goto label_251c30;
            case 0x251C34u: goto label_251c34;
            case 0x251C38u: goto label_251c38;
            case 0x251C3Cu: goto label_251c3c;
            case 0x251C40u: goto label_251c40;
            case 0x251C44u: goto label_251c44;
            case 0x251C48u: goto label_251c48;
            case 0x251C4Cu: goto label_251c4c;
            case 0x251C50u: goto label_251c50;
            case 0x251C54u: goto label_251c54;
            case 0x251C58u: goto label_251c58;
            case 0x251C5Cu: goto label_251c5c;
            case 0x251C60u: goto label_251c60;
            case 0x251C64u: goto label_251c64;
            case 0x251C68u: goto label_251c68;
            case 0x251C6Cu: goto label_251c6c;
            case 0x251C70u: goto label_251c70;
            case 0x251C74u: goto label_251c74;
            case 0x251C78u: goto label_251c78;
            case 0x251C7Cu: goto label_251c7c;
            case 0x251C80u: goto label_251c80;
            case 0x251C84u: goto label_251c84;
            case 0x251C88u: goto label_251c88;
            case 0x251C8Cu: goto label_251c8c;
            case 0x251C90u: goto label_251c90;
            case 0x251C94u: goto label_251c94;
            case 0x251C98u: goto label_251c98;
            case 0x251C9Cu: goto label_251c9c;
            case 0x251CA0u: goto label_251ca0;
            case 0x251CA4u: goto label_251ca4;
            case 0x251CA8u: goto label_251ca8;
            case 0x251CACu: goto label_251cac;
            case 0x251CB0u: goto label_251cb0;
            case 0x251CB4u: goto label_251cb4;
            case 0x251CB8u: goto label_251cb8;
            case 0x251CBCu: goto label_251cbc;
            case 0x251CC0u: goto label_251cc0;
            case 0x251CC4u: goto label_251cc4;
            case 0x251CC8u: goto label_251cc8;
            case 0x251CCCu: goto label_251ccc;
            case 0x251CD0u: goto label_251cd0;
            case 0x251CD4u: goto label_251cd4;
            case 0x251CD8u: goto label_251cd8;
            case 0x251CDCu: goto label_251cdc;
            case 0x251CE0u: goto label_251ce0;
            case 0x251CE4u: goto label_251ce4;
            case 0x251CE8u: goto label_251ce8;
            case 0x251CECu: goto label_251cec;
            case 0x251CF0u: goto label_251cf0;
            case 0x251CF4u: goto label_251cf4;
            case 0x251CF8u: goto label_251cf8;
            case 0x251CFCu: goto label_251cfc;
            case 0x251D00u: goto label_251d00;
            case 0x251D04u: goto label_251d04;
            case 0x251D08u: goto label_251d08;
            case 0x251D0Cu: goto label_251d0c;
            case 0x251D10u: goto label_251d10;
            case 0x251D14u: goto label_251d14;
            case 0x251D18u: goto label_251d18;
            case 0x251D1Cu: goto label_251d1c;
            case 0x251D20u: goto label_251d20;
            case 0x251D24u: goto label_251d24;
            case 0x251D28u: goto label_251d28;
            case 0x251D2Cu: goto label_251d2c;
            case 0x251D30u: goto label_251d30;
            case 0x251D34u: goto label_251d34;
            case 0x251D38u: goto label_251d38;
            case 0x251D3Cu: goto label_251d3c;
            case 0x251D40u: goto label_251d40;
            case 0x251D44u: goto label_251d44;
            case 0x251D48u: goto label_251d48;
            case 0x251D4Cu: goto label_251d4c;
            case 0x251D50u: goto label_251d50;
            case 0x251D54u: goto label_251d54;
            case 0x251D58u: goto label_251d58;
            case 0x251D5Cu: goto label_251d5c;
            case 0x251D60u: goto label_251d60;
            case 0x251D64u: goto label_251d64;
            case 0x251D68u: goto label_251d68;
            case 0x251D6Cu: goto label_251d6c;
            case 0x251D70u: goto label_251d70;
            case 0x251D74u: goto label_251d74;
            case 0x251D78u: goto label_251d78;
            case 0x251D7Cu: goto label_251d7c;
            case 0x251D80u: goto label_251d80;
            case 0x251D84u: goto label_251d84;
            case 0x251D88u: goto label_251d88;
            case 0x251D8Cu: goto label_251d8c;
            case 0x251D90u: goto label_251d90;
            case 0x251D94u: goto label_251d94;
            case 0x251D98u: goto label_251d98;
            case 0x251D9Cu: goto label_251d9c;
            case 0x251DA0u: goto label_251da0;
            case 0x251DA4u: goto label_251da4;
            case 0x251DA8u: goto label_251da8;
            case 0x251DACu: goto label_251dac;
            case 0x251DB0u: goto label_251db0;
            case 0x251DB4u: goto label_251db4;
            case 0x251DB8u: goto label_251db8;
            case 0x251DBCu: goto label_251dbc;
            case 0x251DC0u: goto label_251dc0;
            case 0x251DC4u: goto label_251dc4;
            case 0x251DC8u: goto label_251dc8;
            case 0x251DCCu: goto label_251dcc;
            case 0x251DD0u: goto label_251dd0;
            case 0x251DD4u: goto label_251dd4;
            case 0x251DD8u: goto label_251dd8;
            case 0x251DDCu: goto label_251ddc;
            case 0x251DE0u: goto label_251de0;
            case 0x251DE4u: goto label_251de4;
            case 0x251DE8u: goto label_251de8;
            case 0x251DECu: goto label_251dec;
            case 0x251DF0u: goto label_251df0;
            case 0x251DF4u: goto label_251df4;
            case 0x251DF8u: goto label_251df8;
            case 0x251DFCu: goto label_251dfc;
            case 0x251E00u: goto label_251e00;
            case 0x251E04u: goto label_251e04;
            case 0x251E08u: goto label_251e08;
            case 0x251E0Cu: goto label_251e0c;
            case 0x251E10u: goto label_251e10;
            case 0x251E14u: goto label_251e14;
            case 0x251E18u: goto label_251e18;
            case 0x251E1Cu: goto label_251e1c;
            case 0x251E20u: goto label_251e20;
            case 0x251E24u: goto label_251e24;
            case 0x251E28u: goto label_251e28;
            case 0x251E2Cu: goto label_251e2c;
            case 0x251E30u: goto label_251e30;
            case 0x251E34u: goto label_251e34;
            case 0x251E38u: goto label_251e38;
            case 0x251E3Cu: goto label_251e3c;
            case 0x251E40u: goto label_251e40;
            case 0x251E44u: goto label_251e44;
            case 0x251E48u: goto label_251e48;
            case 0x251E4Cu: goto label_251e4c;
            case 0x251E50u: goto label_251e50;
            case 0x251E54u: goto label_251e54;
            case 0x251E58u: goto label_251e58;
            case 0x251E5Cu: goto label_251e5c;
            case 0x251E60u: goto label_251e60;
            case 0x251E64u: goto label_251e64;
            case 0x251E68u: goto label_251e68;
            case 0x251E6Cu: goto label_251e6c;
            case 0x251E70u: goto label_251e70;
            case 0x251E74u: goto label_251e74;
            case 0x251E78u: goto label_251e78;
            case 0x251E7Cu: goto label_251e7c;
            case 0x251E80u: goto label_251e80;
            case 0x251E84u: goto label_251e84;
            case 0x251E88u: goto label_251e88;
            case 0x251E8Cu: goto label_251e8c;
            case 0x251E90u: goto label_251e90;
            case 0x251E94u: goto label_251e94;
            case 0x251E98u: goto label_251e98;
            case 0x251E9Cu: goto label_251e9c;
            case 0x251EA0u: goto label_251ea0;
            case 0x251EA4u: goto label_251ea4;
            case 0x251EA8u: goto label_251ea8;
            case 0x251EACu: goto label_251eac;
            case 0x251EB0u: goto label_251eb0;
            case 0x251EB4u: goto label_251eb4;
            case 0x251EB8u: goto label_251eb8;
            case 0x251EBCu: goto label_251ebc;
            case 0x251EC0u: goto label_251ec0;
            case 0x251EC4u: goto label_251ec4;
            case 0x251EC8u: goto label_251ec8;
            case 0x251ECCu: goto label_251ecc;
            case 0x251ED0u: goto label_251ed0;
            case 0x251ED4u: goto label_251ed4;
            case 0x251ED8u: goto label_251ed8;
            case 0x251EDCu: goto label_251edc;
            case 0x251EE0u: goto label_251ee0;
            case 0x251EE4u: goto label_251ee4;
            case 0x251EE8u: goto label_251ee8;
            case 0x251EECu: goto label_251eec;
            case 0x251EF0u: goto label_251ef0;
            case 0x251EF4u: goto label_251ef4;
            case 0x251EF8u: goto label_251ef8;
            case 0x251EFCu: goto label_251efc;
            case 0x251F00u: goto label_251f00;
            case 0x251F04u: goto label_251f04;
            case 0x251F08u: goto label_251f08;
            case 0x251F0Cu: goto label_251f0c;
            case 0x251F10u: goto label_251f10;
            case 0x251F14u: goto label_251f14;
            case 0x251F18u: goto label_251f18;
            case 0x251F1Cu: goto label_251f1c;
            case 0x251F20u: goto label_251f20;
            case 0x251F24u: goto label_251f24;
            case 0x251F28u: goto label_251f28;
            case 0x251F2Cu: goto label_251f2c;
            case 0x251F30u: goto label_251f30;
            case 0x251F34u: goto label_251f34;
            case 0x251F38u: goto label_251f38;
            case 0x251F3Cu: goto label_251f3c;
            case 0x251F40u: goto label_251f40;
            case 0x251F44u: goto label_251f44;
            case 0x251F48u: goto label_251f48;
            case 0x251F4Cu: goto label_251f4c;
            case 0x251F50u: goto label_251f50;
            case 0x251F54u: goto label_251f54;
            case 0x251F58u: goto label_251f58;
            case 0x251F5Cu: goto label_251f5c;
            case 0x251F60u: goto label_251f60;
            case 0x251F64u: goto label_251f64;
            case 0x251F68u: goto label_251f68;
            case 0x251F6Cu: goto label_251f6c;
            case 0x251F70u: goto label_251f70;
            case 0x251F74u: goto label_251f74;
            case 0x251F78u: goto label_251f78;
            case 0x251F7Cu: goto label_251f7c;
            case 0x251F80u: goto label_251f80;
            case 0x251F84u: goto label_251f84;
            case 0x251F88u: goto label_251f88;
            case 0x251F8Cu: goto label_251f8c;
            case 0x251F90u: goto label_251f90;
            case 0x251F94u: goto label_251f94;
            case 0x251F98u: goto label_251f98;
            case 0x251F9Cu: goto label_251f9c;
            case 0x251FA0u: goto label_251fa0;
            case 0x251FA4u: goto label_251fa4;
            case 0x251FA8u: goto label_251fa8;
            case 0x251FACu: goto label_251fac;
            case 0x251FB0u: goto label_251fb0;
            case 0x251FB4u: goto label_251fb4;
            case 0x251FB8u: goto label_251fb8;
            case 0x251FBCu: goto label_251fbc;
            case 0x251FC0u: goto label_251fc0;
            case 0x251FC4u: goto label_251fc4;
            case 0x251FC8u: goto label_251fc8;
            case 0x251FCCu: goto label_251fcc;
            case 0x251FD0u: goto label_251fd0;
            case 0x251FD4u: goto label_251fd4;
            case 0x251FD8u: goto label_251fd8;
            case 0x251FDCu: goto label_251fdc;
            case 0x251FE0u: goto label_251fe0;
            case 0x251FE4u: goto label_251fe4;
            case 0x251FE8u: goto label_251fe8;
            case 0x251FECu: goto label_251fec;
            case 0x251FF0u: goto label_251ff0;
            case 0x251FF4u: goto label_251ff4;
            case 0x251FF8u: goto label_251ff8;
            case 0x251FFCu: goto label_251ffc;
            case 0x252000u: goto label_252000;
            case 0x252004u: goto label_252004;
            case 0x252008u: goto label_252008;
            case 0x25200Cu: goto label_25200c;
            case 0x252010u: goto label_252010;
            case 0x252014u: goto label_252014;
            case 0x252018u: goto label_252018;
            case 0x25201Cu: goto label_25201c;
            case 0x252020u: goto label_252020;
            case 0x252024u: goto label_252024;
            case 0x252028u: goto label_252028;
            case 0x25202Cu: goto label_25202c;
            case 0x252030u: goto label_252030;
            case 0x252034u: goto label_252034;
            case 0x252038u: goto label_252038;
            case 0x25203Cu: goto label_25203c;
            case 0x252040u: goto label_252040;
            case 0x252044u: goto label_252044;
            case 0x252048u: goto label_252048;
            case 0x25204Cu: goto label_25204c;
            case 0x252050u: goto label_252050;
            case 0x252054u: goto label_252054;
            case 0x252058u: goto label_252058;
            case 0x25205Cu: goto label_25205c;
            case 0x252060u: goto label_252060;
            case 0x252064u: goto label_252064;
            case 0x252068u: goto label_252068;
            case 0x25206Cu: goto label_25206c;
            case 0x252070u: goto label_252070;
            case 0x252074u: goto label_252074;
            case 0x252078u: goto label_252078;
            case 0x25207Cu: goto label_25207c;
            case 0x252080u: goto label_252080;
            case 0x252084u: goto label_252084;
            case 0x252088u: goto label_252088;
            case 0x25208Cu: goto label_25208c;
            case 0x252090u: goto label_252090;
            case 0x252094u: goto label_252094;
            case 0x252098u: goto label_252098;
            case 0x25209Cu: goto label_25209c;
            case 0x2520A0u: goto label_2520a0;
            case 0x2520A4u: goto label_2520a4;
            case 0x2520A8u: goto label_2520a8;
            case 0x2520ACu: goto label_2520ac;
            case 0x2520B0u: goto label_2520b0;
            case 0x2520B4u: goto label_2520b4;
            case 0x2520B8u: goto label_2520b8;
            case 0x2520BCu: goto label_2520bc;
            case 0x2520C0u: goto label_2520c0;
            case 0x2520C4u: goto label_2520c4;
            case 0x2520C8u: goto label_2520c8;
            case 0x2520CCu: goto label_2520cc;
            case 0x2520D0u: goto label_2520d0;
            case 0x2520D4u: goto label_2520d4;
            case 0x2520D8u: goto label_2520d8;
            case 0x2520DCu: goto label_2520dc;
            case 0x2520E0u: goto label_2520e0;
            case 0x2520E4u: goto label_2520e4;
            case 0x2520E8u: goto label_2520e8;
            case 0x2520ECu: goto label_2520ec;
            case 0x2520F0u: goto label_2520f0;
            case 0x2520F4u: goto label_2520f4;
            case 0x2520F8u: goto label_2520f8;
            case 0x2520FCu: goto label_2520fc;
            case 0x252100u: goto label_252100;
            case 0x252104u: goto label_252104;
            case 0x252108u: goto label_252108;
            case 0x25210Cu: goto label_25210c;
            case 0x252110u: goto label_252110;
            case 0x252114u: goto label_252114;
            case 0x252118u: goto label_252118;
            case 0x25211Cu: goto label_25211c;
            case 0x252120u: goto label_252120;
            case 0x252124u: goto label_252124;
            case 0x252128u: goto label_252128;
            case 0x25212Cu: goto label_25212c;
            case 0x252130u: goto label_252130;
            case 0x252134u: goto label_252134;
            case 0x252138u: goto label_252138;
            case 0x25213Cu: goto label_25213c;
            case 0x252140u: goto label_252140;
            case 0x252144u: goto label_252144;
            case 0x252148u: goto label_252148;
            case 0x25214Cu: goto label_25214c;
            case 0x252150u: goto label_252150;
            case 0x252154u: goto label_252154;
            case 0x252158u: goto label_252158;
            case 0x25215Cu: goto label_25215c;
            case 0x252160u: goto label_252160;
            case 0x252164u: goto label_252164;
            case 0x252168u: goto label_252168;
            case 0x25216Cu: goto label_25216c;
            case 0x252170u: goto label_252170;
            case 0x252174u: goto label_252174;
            case 0x252178u: goto label_252178;
            case 0x25217Cu: goto label_25217c;
            case 0x252180u: goto label_252180;
            case 0x252184u: goto label_252184;
            case 0x252188u: goto label_252188;
            case 0x25218Cu: goto label_25218c;
            case 0x252190u: goto label_252190;
            case 0x252194u: goto label_252194;
            case 0x252198u: goto label_252198;
            case 0x25219Cu: goto label_25219c;
            case 0x2521A0u: goto label_2521a0;
            case 0x2521A4u: goto label_2521a4;
            case 0x2521A8u: goto label_2521a8;
            case 0x2521ACu: goto label_2521ac;
            case 0x2521B0u: goto label_2521b0;
            case 0x2521B4u: goto label_2521b4;
            case 0x2521B8u: goto label_2521b8;
            case 0x2521BCu: goto label_2521bc;
            case 0x2521C0u: goto label_2521c0;
            case 0x2521C4u: goto label_2521c4;
            case 0x2521C8u: goto label_2521c8;
            case 0x2521CCu: goto label_2521cc;
            case 0x2521D0u: goto label_2521d0;
            case 0x2521D4u: goto label_2521d4;
            case 0x2521D8u: goto label_2521d8;
            case 0x2521DCu: goto label_2521dc;
            case 0x2521E0u: goto label_2521e0;
            case 0x2521E4u: goto label_2521e4;
            case 0x2521E8u: goto label_2521e8;
            case 0x2521ECu: goto label_2521ec;
            case 0x2521F0u: goto label_2521f0;
            case 0x2521F4u: goto label_2521f4;
            case 0x2521F8u: goto label_2521f8;
            case 0x2521FCu: goto label_2521fc;
            case 0x252200u: goto label_252200;
            case 0x252204u: goto label_252204;
            case 0x252208u: goto label_252208;
            case 0x25220Cu: goto label_25220c;
            case 0x252210u: goto label_252210;
            case 0x252214u: goto label_252214;
            case 0x252218u: goto label_252218;
            case 0x25221Cu: goto label_25221c;
            case 0x252220u: goto label_252220;
            case 0x252224u: goto label_252224;
            case 0x252228u: goto label_252228;
            case 0x25222Cu: goto label_25222c;
            case 0x252230u: goto label_252230;
            case 0x252234u: goto label_252234;
            case 0x252238u: goto label_252238;
            case 0x25223Cu: goto label_25223c;
            case 0x252240u: goto label_252240;
            case 0x252244u: goto label_252244;
            case 0x252248u: goto label_252248;
            case 0x25224Cu: goto label_25224c;
            case 0x252250u: goto label_252250;
            case 0x252254u: goto label_252254;
            case 0x252258u: goto label_252258;
            case 0x25225Cu: goto label_25225c;
            case 0x252260u: goto label_252260;
            case 0x252264u: goto label_252264;
            case 0x252268u: goto label_252268;
            case 0x25226Cu: goto label_25226c;
            case 0x252270u: goto label_252270;
            case 0x252274u: goto label_252274;
            case 0x252278u: goto label_252278;
            case 0x25227Cu: goto label_25227c;
            case 0x252280u: goto label_252280;
            case 0x252284u: goto label_252284;
            case 0x252288u: goto label_252288;
            case 0x25228Cu: goto label_25228c;
            case 0x252290u: goto label_252290;
            case 0x252294u: goto label_252294;
            case 0x252298u: goto label_252298;
            case 0x25229Cu: goto label_25229c;
            case 0x2522A0u: goto label_2522a0;
            case 0x2522A4u: goto label_2522a4;
            case 0x2522A8u: goto label_2522a8;
            case 0x2522ACu: goto label_2522ac;
            case 0x2522B0u: goto label_2522b0;
            case 0x2522B4u: goto label_2522b4;
            case 0x2522B8u: goto label_2522b8;
            case 0x2522BCu: goto label_2522bc;
            case 0x2522C0u: goto label_2522c0;
            case 0x2522C4u: goto label_2522c4;
            case 0x2522C8u: goto label_2522c8;
            case 0x2522CCu: goto label_2522cc;
            case 0x2522D0u: goto label_2522d0;
            case 0x2522D4u: goto label_2522d4;
            case 0x2522D8u: goto label_2522d8;
            case 0x2522DCu: goto label_2522dc;
            case 0x2522E0u: goto label_2522e0;
            case 0x2522E4u: goto label_2522e4;
            case 0x2522E8u: goto label_2522e8;
            case 0x2522ECu: goto label_2522ec;
            case 0x2522F0u: goto label_2522f0;
            case 0x2522F4u: goto label_2522f4;
            case 0x2522F8u: goto label_2522f8;
            case 0x2522FCu: goto label_2522fc;
            case 0x252300u: goto label_252300;
            case 0x252304u: goto label_252304;
            case 0x252308u: goto label_252308;
            case 0x25230Cu: goto label_25230c;
            case 0x252310u: goto label_252310;
            case 0x252314u: goto label_252314;
            case 0x252318u: goto label_252318;
            case 0x25231Cu: goto label_25231c;
            case 0x252320u: goto label_252320;
            case 0x252324u: goto label_252324;
            case 0x252328u: goto label_252328;
            case 0x25232Cu: goto label_25232c;
            case 0x252330u: goto label_252330;
            case 0x252334u: goto label_252334;
            case 0x252338u: goto label_252338;
            case 0x25233Cu: goto label_25233c;
            case 0x252340u: goto label_252340;
            case 0x252344u: goto label_252344;
            case 0x252348u: goto label_252348;
            case 0x25234Cu: goto label_25234c;
            case 0x252350u: goto label_252350;
            case 0x252354u: goto label_252354;
            case 0x252358u: goto label_252358;
            case 0x25235Cu: goto label_25235c;
            case 0x252360u: goto label_252360;
            case 0x252364u: goto label_252364;
            case 0x252368u: goto label_252368;
            case 0x25236Cu: goto label_25236c;
            case 0x252370u: goto label_252370;
            case 0x252374u: goto label_252374;
            case 0x252378u: goto label_252378;
            case 0x25237Cu: goto label_25237c;
            case 0x252380u: goto label_252380;
            case 0x252384u: goto label_252384;
            case 0x252388u: goto label_252388;
            case 0x25238Cu: goto label_25238c;
            case 0x252390u: goto label_252390;
            case 0x252394u: goto label_252394;
            case 0x252398u: goto label_252398;
            case 0x25239Cu: goto label_25239c;
            case 0x2523A0u: goto label_2523a0;
            case 0x2523A4u: goto label_2523a4;
            case 0x2523A8u: goto label_2523a8;
            case 0x2523ACu: goto label_2523ac;
            case 0x2523B0u: goto label_2523b0;
            case 0x2523B4u: goto label_2523b4;
            case 0x2523B8u: goto label_2523b8;
            case 0x2523BCu: goto label_2523bc;
            case 0x2523C0u: goto label_2523c0;
            case 0x2523C4u: goto label_2523c4;
            case 0x2523C8u: goto label_2523c8;
            case 0x2523CCu: goto label_2523cc;
            case 0x2523D0u: goto label_2523d0;
            case 0x2523D4u: goto label_2523d4;
            case 0x2523D8u: goto label_2523d8;
            case 0x2523DCu: goto label_2523dc;
            case 0x2523E0u: goto label_2523e0;
            case 0x2523E4u: goto label_2523e4;
            case 0x2523E8u: goto label_2523e8;
            case 0x2523ECu: goto label_2523ec;
            case 0x2523F0u: goto label_2523f0;
            case 0x2523F4u: goto label_2523f4;
            case 0x2523F8u: goto label_2523f8;
            case 0x2523FCu: goto label_2523fc;
            case 0x252400u: goto label_252400;
            case 0x252404u: goto label_252404;
            case 0x252408u: goto label_252408;
            case 0x25240Cu: goto label_25240c;
            case 0x252410u: goto label_252410;
            case 0x252414u: goto label_252414;
            case 0x252418u: goto label_252418;
            case 0x25241Cu: goto label_25241c;
            case 0x252420u: goto label_252420;
            case 0x252424u: goto label_252424;
            case 0x252428u: goto label_252428;
            case 0x25242Cu: goto label_25242c;
            case 0x252430u: goto label_252430;
            case 0x252434u: goto label_252434;
            case 0x252438u: goto label_252438;
            case 0x25243Cu: goto label_25243c;
            case 0x252440u: goto label_252440;
            case 0x252444u: goto label_252444;
            case 0x252448u: goto label_252448;
            case 0x25244Cu: goto label_25244c;
            case 0x252450u: goto label_252450;
            case 0x252454u: goto label_252454;
            case 0x252458u: goto label_252458;
            case 0x25245Cu: goto label_25245c;
            case 0x252460u: goto label_252460;
            case 0x252464u: goto label_252464;
            case 0x252468u: goto label_252468;
            case 0x25246Cu: goto label_25246c;
            case 0x252470u: goto label_252470;
            case 0x252474u: goto label_252474;
            case 0x252478u: goto label_252478;
            case 0x25247Cu: goto label_25247c;
            case 0x252480u: goto label_252480;
            case 0x252484u: goto label_252484;
            case 0x252488u: goto label_252488;
            case 0x25248Cu: goto label_25248c;
            case 0x252490u: goto label_252490;
            case 0x252494u: goto label_252494;
            case 0x252498u: goto label_252498;
            case 0x25249Cu: goto label_25249c;
            case 0x2524A0u: goto label_2524a0;
            case 0x2524A4u: goto label_2524a4;
            case 0x2524A8u: goto label_2524a8;
            case 0x2524ACu: goto label_2524ac;
            case 0x2524B0u: goto label_2524b0;
            case 0x2524B4u: goto label_2524b4;
            case 0x2524B8u: goto label_2524b8;
            case 0x2524BCu: goto label_2524bc;
            case 0x2524C0u: goto label_2524c0;
            case 0x2524C4u: goto label_2524c4;
            case 0x2524C8u: goto label_2524c8;
            case 0x2524CCu: goto label_2524cc;
            case 0x2524D0u: goto label_2524d0;
            case 0x2524D4u: goto label_2524d4;
            case 0x2524D8u: goto label_2524d8;
            case 0x2524DCu: goto label_2524dc;
            case 0x2524E0u: goto label_2524e0;
            case 0x2524E4u: goto label_2524e4;
            case 0x2524E8u: goto label_2524e8;
            case 0x2524ECu: goto label_2524ec;
            case 0x2524F0u: goto label_2524f0;
            case 0x2524F4u: goto label_2524f4;
            case 0x2524F8u: goto label_2524f8;
            case 0x2524FCu: goto label_2524fc;
            case 0x252500u: goto label_252500;
            case 0x252504u: goto label_252504;
            case 0x252508u: goto label_252508;
            case 0x25250Cu: goto label_25250c;
            case 0x252510u: goto label_252510;
            case 0x252514u: goto label_252514;
            case 0x252518u: goto label_252518;
            case 0x25251Cu: goto label_25251c;
            case 0x252520u: goto label_252520;
            case 0x252524u: goto label_252524;
            case 0x252528u: goto label_252528;
            case 0x25252Cu: goto label_25252c;
            case 0x252530u: goto label_252530;
            case 0x252534u: goto label_252534;
            case 0x252538u: goto label_252538;
            case 0x25253Cu: goto label_25253c;
            case 0x252540u: goto label_252540;
            case 0x252544u: goto label_252544;
            case 0x252548u: goto label_252548;
            case 0x25254Cu: goto label_25254c;
            case 0x252550u: goto label_252550;
            case 0x252554u: goto label_252554;
            case 0x252558u: goto label_252558;
            case 0x25255Cu: goto label_25255c;
            case 0x252560u: goto label_252560;
            case 0x252564u: goto label_252564;
            case 0x252568u: goto label_252568;
            case 0x25256Cu: goto label_25256c;
            case 0x252570u: goto label_252570;
            case 0x252574u: goto label_252574;
            case 0x252578u: goto label_252578;
            case 0x25257Cu: goto label_25257c;
            case 0x252580u: goto label_252580;
            case 0x252584u: goto label_252584;
            case 0x252588u: goto label_252588;
            case 0x25258Cu: goto label_25258c;
            case 0x252590u: goto label_252590;
            case 0x252594u: goto label_252594;
            case 0x252598u: goto label_252598;
            case 0x25259Cu: goto label_25259c;
            case 0x2525A0u: goto label_2525a0;
            case 0x2525A4u: goto label_2525a4;
            case 0x2525A8u: goto label_2525a8;
            case 0x2525ACu: goto label_2525ac;
            case 0x2525B0u: goto label_2525b0;
            case 0x2525B4u: goto label_2525b4;
            case 0x2525B8u: goto label_2525b8;
            case 0x2525BCu: goto label_2525bc;
            case 0x2525C0u: goto label_2525c0;
            case 0x2525C4u: goto label_2525c4;
            case 0x2525C8u: goto label_2525c8;
            case 0x2525CCu: goto label_2525cc;
            case 0x2525D0u: goto label_2525d0;
            case 0x2525D4u: goto label_2525d4;
            case 0x2525D8u: goto label_2525d8;
            case 0x2525DCu: goto label_2525dc;
            case 0x2525E0u: goto label_2525e0;
            case 0x2525E4u: goto label_2525e4;
            case 0x2525E8u: goto label_2525e8;
            case 0x2525ECu: goto label_2525ec;
            case 0x2525F0u: goto label_2525f0;
            case 0x2525F4u: goto label_2525f4;
            case 0x2525F8u: goto label_2525f8;
            case 0x2525FCu: goto label_2525fc;
            case 0x252600u: goto label_252600;
            case 0x252604u: goto label_252604;
            case 0x252608u: goto label_252608;
            case 0x25260Cu: goto label_25260c;
            case 0x252610u: goto label_252610;
            case 0x252614u: goto label_252614;
            case 0x252618u: goto label_252618;
            case 0x25261Cu: goto label_25261c;
            case 0x252620u: goto label_252620;
            case 0x252624u: goto label_252624;
            case 0x252628u: goto label_252628;
            case 0x25262Cu: goto label_25262c;
            case 0x252630u: goto label_252630;
            case 0x252634u: goto label_252634;
            case 0x252638u: goto label_252638;
            case 0x25263Cu: goto label_25263c;
            case 0x252640u: goto label_252640;
            case 0x252644u: goto label_252644;
            case 0x252648u: goto label_252648;
            case 0x25264Cu: goto label_25264c;
            case 0x252650u: goto label_252650;
            case 0x252654u: goto label_252654;
            case 0x252658u: goto label_252658;
            case 0x25265Cu: goto label_25265c;
            case 0x252660u: goto label_252660;
            case 0x252664u: goto label_252664;
            case 0x252668u: goto label_252668;
            case 0x25266Cu: goto label_25266c;
            case 0x252670u: goto label_252670;
            case 0x252674u: goto label_252674;
            case 0x252678u: goto label_252678;
            case 0x25267Cu: goto label_25267c;
            case 0x252680u: goto label_252680;
            case 0x252684u: goto label_252684;
            case 0x252688u: goto label_252688;
            case 0x25268Cu: goto label_25268c;
            case 0x252690u: goto label_252690;
            case 0x252694u: goto label_252694;
            case 0x252698u: goto label_252698;
            case 0x25269Cu: goto label_25269c;
            case 0x2526A0u: goto label_2526a0;
            case 0x2526A4u: goto label_2526a4;
            case 0x2526A8u: goto label_2526a8;
            case 0x2526ACu: goto label_2526ac;
            case 0x2526B0u: goto label_2526b0;
            case 0x2526B4u: goto label_2526b4;
            case 0x2526B8u: goto label_2526b8;
            case 0x2526BCu: goto label_2526bc;
            case 0x2526C0u: goto label_2526c0;
            case 0x2526C4u: goto label_2526c4;
            case 0x2526C8u: goto label_2526c8;
            case 0x2526CCu: goto label_2526cc;
            case 0x2526D0u: goto label_2526d0;
            case 0x2526D4u: goto label_2526d4;
            case 0x2526D8u: goto label_2526d8;
            case 0x2526DCu: goto label_2526dc;
            case 0x2526E0u: goto label_2526e0;
            case 0x2526E4u: goto label_2526e4;
            case 0x2526E8u: goto label_2526e8;
            case 0x2526ECu: goto label_2526ec;
            case 0x2526F0u: goto label_2526f0;
            case 0x2526F4u: goto label_2526f4;
            case 0x2526F8u: goto label_2526f8;
            case 0x2526FCu: goto label_2526fc;
            case 0x252700u: goto label_252700;
            case 0x252704u: goto label_252704;
            case 0x252708u: goto label_252708;
            case 0x25270Cu: goto label_25270c;
            case 0x252710u: goto label_252710;
            case 0x252714u: goto label_252714;
            case 0x252718u: goto label_252718;
            case 0x25271Cu: goto label_25271c;
            case 0x252720u: goto label_252720;
            case 0x252724u: goto label_252724;
            case 0x252728u: goto label_252728;
            case 0x25272Cu: goto label_25272c;
            case 0x252730u: goto label_252730;
            case 0x252734u: goto label_252734;
            case 0x252738u: goto label_252738;
            case 0x25273Cu: goto label_25273c;
            case 0x252740u: goto label_252740;
            case 0x252744u: goto label_252744;
            case 0x252748u: goto label_252748;
            case 0x25274Cu: goto label_25274c;
            case 0x252750u: goto label_252750;
            case 0x252754u: goto label_252754;
            case 0x252758u: goto label_252758;
            case 0x25275Cu: goto label_25275c;
            case 0x252760u: goto label_252760;
            case 0x252764u: goto label_252764;
            case 0x252768u: goto label_252768;
            case 0x25276Cu: goto label_25276c;
            case 0x252770u: goto label_252770;
            case 0x252774u: goto label_252774;
            case 0x252778u: goto label_252778;
            case 0x25277Cu: goto label_25277c;
            case 0x252780u: goto label_252780;
            case 0x252784u: goto label_252784;
            case 0x252788u: goto label_252788;
            case 0x25278Cu: goto label_25278c;
            case 0x252790u: goto label_252790;
            case 0x252794u: goto label_252794;
            case 0x252798u: goto label_252798;
            case 0x25279Cu: goto label_25279c;
            case 0x2527A0u: goto label_2527a0;
            case 0x2527A4u: goto label_2527a4;
            case 0x2527A8u: goto label_2527a8;
            case 0x2527ACu: goto label_2527ac;
            case 0x2527B0u: goto label_2527b0;
            case 0x2527B4u: goto label_2527b4;
            case 0x2527B8u: goto label_2527b8;
            case 0x2527BCu: goto label_2527bc;
            case 0x2527C0u: goto label_2527c0;
            case 0x2527C4u: goto label_2527c4;
            case 0x2527C8u: goto label_2527c8;
            case 0x2527CCu: goto label_2527cc;
            case 0x2527D0u: goto label_2527d0;
            case 0x2527D4u: goto label_2527d4;
            case 0x2527D8u: goto label_2527d8;
            case 0x2527DCu: goto label_2527dc;
            case 0x2527E0u: goto label_2527e0;
            case 0x2527E4u: goto label_2527e4;
            case 0x2527E8u: goto label_2527e8;
            case 0x2527ECu: goto label_2527ec;
            case 0x2527F0u: goto label_2527f0;
            case 0x2527F4u: goto label_2527f4;
            case 0x2527F8u: goto label_2527f8;
            case 0x2527FCu: goto label_2527fc;
            case 0x252800u: goto label_252800;
            case 0x252804u: goto label_252804;
            case 0x252808u: goto label_252808;
            case 0x25280Cu: goto label_25280c;
            case 0x252810u: goto label_252810;
            case 0x252814u: goto label_252814;
            case 0x252818u: goto label_252818;
            case 0x25281Cu: goto label_25281c;
            case 0x252820u: goto label_252820;
            case 0x252824u: goto label_252824;
            case 0x252828u: goto label_252828;
            case 0x25282Cu: goto label_25282c;
            case 0x252830u: goto label_252830;
            case 0x252834u: goto label_252834;
            case 0x252838u: goto label_252838;
            case 0x25283Cu: goto label_25283c;
            case 0x252840u: goto label_252840;
            case 0x252844u: goto label_252844;
            case 0x252848u: goto label_252848;
            case 0x25284Cu: goto label_25284c;
            case 0x252850u: goto label_252850;
            case 0x252854u: goto label_252854;
            case 0x252858u: goto label_252858;
            case 0x25285Cu: goto label_25285c;
            case 0x252860u: goto label_252860;
            case 0x252864u: goto label_252864;
            case 0x252868u: goto label_252868;
            case 0x25286Cu: goto label_25286c;
            case 0x252870u: goto label_252870;
            case 0x252874u: goto label_252874;
            case 0x252878u: goto label_252878;
            case 0x25287Cu: goto label_25287c;
            case 0x252880u: goto label_252880;
            case 0x252884u: goto label_252884;
            case 0x252888u: goto label_252888;
            case 0x25288Cu: goto label_25288c;
            case 0x252890u: goto label_252890;
            case 0x252894u: goto label_252894;
            case 0x252898u: goto label_252898;
            case 0x25289Cu: goto label_25289c;
            case 0x2528A0u: goto label_2528a0;
            case 0x2528A4u: goto label_2528a4;
            case 0x2528A8u: goto label_2528a8;
            case 0x2528ACu: goto label_2528ac;
            case 0x2528B0u: goto label_2528b0;
            case 0x2528B4u: goto label_2528b4;
            case 0x2528B8u: goto label_2528b8;
            case 0x2528BCu: goto label_2528bc;
            case 0x2528C0u: goto label_2528c0;
            case 0x2528C4u: goto label_2528c4;
            case 0x2528C8u: goto label_2528c8;
            case 0x2528CCu: goto label_2528cc;
            case 0x2528D0u: goto label_2528d0;
            case 0x2528D4u: goto label_2528d4;
            case 0x2528D8u: goto label_2528d8;
            case 0x2528DCu: goto label_2528dc;
            case 0x2528E0u: goto label_2528e0;
            case 0x2528E4u: goto label_2528e4;
            case 0x2528E8u: goto label_2528e8;
            case 0x2528ECu: goto label_2528ec;
            case 0x2528F0u: goto label_2528f0;
            case 0x2528F4u: goto label_2528f4;
            case 0x2528F8u: goto label_2528f8;
            case 0x2528FCu: goto label_2528fc;
            case 0x252900u: goto label_252900;
            case 0x252904u: goto label_252904;
            case 0x252908u: goto label_252908;
            case 0x25290Cu: goto label_25290c;
            case 0x252910u: goto label_252910;
            case 0x252914u: goto label_252914;
            case 0x252918u: goto label_252918;
            case 0x25291Cu: goto label_25291c;
            case 0x252920u: goto label_252920;
            case 0x252924u: goto label_252924;
            case 0x252928u: goto label_252928;
            case 0x25292Cu: goto label_25292c;
            case 0x252930u: goto label_252930;
            case 0x252934u: goto label_252934;
            case 0x252938u: goto label_252938;
            case 0x25293Cu: goto label_25293c;
            case 0x252940u: goto label_252940;
            case 0x252944u: goto label_252944;
            case 0x252948u: goto label_252948;
            case 0x25294Cu: goto label_25294c;
            case 0x252950u: goto label_252950;
            case 0x252954u: goto label_252954;
            case 0x252958u: goto label_252958;
            case 0x25295Cu: goto label_25295c;
            case 0x252960u: goto label_252960;
            case 0x252964u: goto label_252964;
            case 0x252968u: goto label_252968;
            case 0x25296Cu: goto label_25296c;
            case 0x252970u: goto label_252970;
            case 0x252974u: goto label_252974;
            case 0x252978u: goto label_252978;
            case 0x25297Cu: goto label_25297c;
            case 0x252980u: goto label_252980;
            case 0x252984u: goto label_252984;
            case 0x252988u: goto label_252988;
            case 0x25298Cu: goto label_25298c;
            case 0x252990u: goto label_252990;
            case 0x252994u: goto label_252994;
            case 0x252998u: goto label_252998;
            case 0x25299Cu: goto label_25299c;
            case 0x2529A0u: goto label_2529a0;
            case 0x2529A4u: goto label_2529a4;
            case 0x2529A8u: goto label_2529a8;
            case 0x2529ACu: goto label_2529ac;
            case 0x2529B0u: goto label_2529b0;
            case 0x2529B4u: goto label_2529b4;
            case 0x2529B8u: goto label_2529b8;
            case 0x2529BCu: goto label_2529bc;
            case 0x2529C0u: goto label_2529c0;
            case 0x2529C4u: goto label_2529c4;
            case 0x2529C8u: goto label_2529c8;
            case 0x2529CCu: goto label_2529cc;
            case 0x2529D0u: goto label_2529d0;
            case 0x2529D4u: goto label_2529d4;
            case 0x2529D8u: goto label_2529d8;
            case 0x2529DCu: goto label_2529dc;
            case 0x2529E0u: goto label_2529e0;
            case 0x2529E4u: goto label_2529e4;
            case 0x2529E8u: goto label_2529e8;
            case 0x2529ECu: goto label_2529ec;
            case 0x2529F0u: goto label_2529f0;
            case 0x2529F4u: goto label_2529f4;
            case 0x2529F8u: goto label_2529f8;
            case 0x2529FCu: goto label_2529fc;
            case 0x252A00u: goto label_252a00;
            case 0x252A04u: goto label_252a04;
            case 0x252A08u: goto label_252a08;
            case 0x252A0Cu: goto label_252a0c;
            case 0x252A10u: goto label_252a10;
            case 0x252A14u: goto label_252a14;
            case 0x252A18u: goto label_252a18;
            case 0x252A1Cu: goto label_252a1c;
            case 0x252A20u: goto label_252a20;
            case 0x252A24u: goto label_252a24;
            case 0x252A28u: goto label_252a28;
            case 0x252A2Cu: goto label_252a2c;
            case 0x252A30u: goto label_252a30;
            case 0x252A34u: goto label_252a34;
            case 0x252A38u: goto label_252a38;
            case 0x252A3Cu: goto label_252a3c;
            case 0x252A40u: goto label_252a40;
            case 0x252A44u: goto label_252a44;
            case 0x252A48u: goto label_252a48;
            case 0x252A4Cu: goto label_252a4c;
            case 0x252A50u: goto label_252a50;
            case 0x252A54u: goto label_252a54;
            case 0x252A58u: goto label_252a58;
            case 0x252A5Cu: goto label_252a5c;
            case 0x252A60u: goto label_252a60;
            case 0x252A64u: goto label_252a64;
            case 0x252A68u: goto label_252a68;
            case 0x252A6Cu: goto label_252a6c;
            case 0x252A70u: goto label_252a70;
            case 0x252A74u: goto label_252a74;
            case 0x252A78u: goto label_252a78;
            case 0x252A7Cu: goto label_252a7c;
            case 0x252A80u: goto label_252a80;
            case 0x252A84u: goto label_252a84;
            case 0x252A88u: goto label_252a88;
            case 0x252A8Cu: goto label_252a8c;
            case 0x252A90u: goto label_252a90;
            case 0x252A94u: goto label_252a94;
            case 0x252A98u: goto label_252a98;
            case 0x252A9Cu: goto label_252a9c;
            case 0x252AA0u: goto label_252aa0;
            case 0x252AA4u: goto label_252aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x251ED4u;
label_251ed4:
    // 0x251ed4: 0x10000011
label_251ed8:
    if (ctx->pc == 0x251ED8u) {
        ctx->pc = 0x251ED8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x251EDCu;
        goto label_251edc;
    }
    ctx->pc = 0x251ED4u;
    {
        const bool branch_taken_0x251ed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251ED8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x251ed4) {
            ctx->pc = 0x251F1Cu;
            goto label_251f1c;
        }
    }
    ctx->pc = 0x251EDCu;
label_251edc:
    // 0x251edc: 0x1000000f
label_251ee0:
    if (ctx->pc == 0x251EE0u) {
        ctx->pc = 0x251EE0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x251EE4u;
        goto label_251ee4;
    }
    ctx->pc = 0x251EDCu;
    {
        const bool branch_taken_0x251edc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251EE0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x251edc) {
            ctx->pc = 0x251F1Cu;
            goto label_251f1c;
        }
    }
    ctx->pc = 0x251EE4u;
label_251ee4:
    // 0x251ee4: 0x1000000d
label_251ee8:
    if (ctx->pc == 0x251EE8u) {
        ctx->pc = 0x251EE8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x251EECu;
        goto label_251eec;
    }
    ctx->pc = 0x251EE4u;
    {
        const bool branch_taken_0x251ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251EE8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x251ee4) {
            ctx->pc = 0x251F1Cu;
            goto label_251f1c;
        }
    }
    ctx->pc = 0x251EECu;
label_251eec:
    // 0x251eec: 0x1000000b
label_251ef0:
    if (ctx->pc == 0x251EF0u) {
        ctx->pc = 0x251EF0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2052));
        ctx->pc = 0x251EF4u;
        goto label_251ef4;
    }
    ctx->pc = 0x251EECu;
    {
        const bool branch_taken_0x251eec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251EF0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2052));
        if (branch_taken_0x251eec) {
            ctx->pc = 0x251F1Cu;
            goto label_251f1c;
        }
    }
    ctx->pc = 0x251EF4u;
label_251ef4:
    // 0x251ef4: 0x10000009
label_251ef8:
    if (ctx->pc == 0x251EF8u) {
        ctx->pc = 0x251EF8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x251EFCu;
        goto label_251efc;
    }
    ctx->pc = 0x251EF4u;
    {
        const bool branch_taken_0x251ef4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251EF8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x251ef4) {
            ctx->pc = 0x251F1Cu;
            goto label_251f1c;
        }
    }
    ctx->pc = 0x251EFCu;
label_251efc:
    // 0x251efc: 0x10000007
label_251f00:
    if (ctx->pc == 0x251F00u) {
        ctx->pc = 0x251F00u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2060));
        ctx->pc = 0x251F04u;
        goto label_251f04;
    }
    ctx->pc = 0x251EFCu;
    {
        const bool branch_taken_0x251efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251F00u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2060));
        if (branch_taken_0x251efc) {
            ctx->pc = 0x251F1Cu;
            goto label_251f1c;
        }
    }
    ctx->pc = 0x251F04u;
label_251f04:
    // 0x251f04: 0x10000005
label_251f08:
    if (ctx->pc == 0x251F08u) {
        ctx->pc = 0x251F08u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x251F0Cu;
        goto label_251f0c;
    }
    ctx->pc = 0x251F04u;
    {
        const bool branch_taken_0x251f04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251F08u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x251f04) {
            ctx->pc = 0x251F1Cu;
            goto label_251f1c;
        }
    }
    ctx->pc = 0x251F0Cu;
label_251f0c:
    // 0x251f0c: 0x10000003
label_251f10:
    if (ctx->pc == 0x251F10u) {
        ctx->pc = 0x251F10u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x251F14u;
        goto label_251f14;
    }
    ctx->pc = 0x251F0Cu;
    {
        const bool branch_taken_0x251f0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251F10u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x251f0c) {
            ctx->pc = 0x251F1Cu;
            goto label_251f1c;
        }
    }
    ctx->pc = 0x251F14u;
label_251f14:
    // 0x251f14: 0x86700032
    ctx->pc = 0x251f14u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_251f18:
    // 0x251f18: 0x36100008
    ctx->pc = 0x251f18u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 8));
label_251f1c:
    // 0x251f1c: 0x101200
    ctx->pc = 0x251f1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 8));
label_251f20:
    // 0x251f20: 0x3042ff00
    ctx->pc = 0x251f20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_251f24:
    // 0x251f24: 0x8fa30054
    ctx->pc = 0x251f24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_251f28:
    // 0x251f28: 0x621825
    ctx->pc = 0x251f28u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_251f2c:
    // 0x251f2c: 0xafa30054
    ctx->pc = 0x251f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_251f30:
    // 0x251f30: 0x86630030
    ctx->pc = 0x251f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_251f34:
    // 0x251f34: 0x4600017
label_251f38:
    if (ctx->pc == 0x251F38u) {
        ctx->pc = 0x251F38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x251F3Cu;
        goto label_251f3c;
    }
    ctx->pc = 0x251F34u;
    {
        const bool branch_taken_0x251f34 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x251F38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x251f34) {
            ctx->pc = 0x251F94u;
            goto label_251f94;
        }
    }
    ctx->pc = 0x251F3Cu;
label_251f3c:
    // 0x251f3c: 0x8c45fa58
    ctx->pc = 0x251f3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965848)));
label_251f40:
    // 0x251f40: 0x65102a
    ctx->pc = 0x251f40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
label_251f44:
    // 0x251f44: 0x14400006
label_251f48:
    if (ctx->pc == 0x251F48u) {
        ctx->pc = 0x251F48u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        ctx->pc = 0x251F4Cu;
        goto label_251f4c;
    }
    ctx->pc = 0x251F44u;
    {
        const bool branch_taken_0x251f44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x251F48u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x251f44) {
            ctx->pc = 0x251F60u;
            goto label_251f60;
        }
    }
    ctx->pc = 0x251F4Cu;
label_251f4c:
    // 0x251f4c: 0x3c04003b
    ctx->pc = 0x251f4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_251f50:
    // 0x251f50: 0xc0b492e
label_251f54:
    if (ctx->pc == 0x251F54u) {
        ctx->pc = 0x251F54u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936352));
        ctx->pc = 0x251F58u;
        goto label_251f58;
    }
    ctx->pc = 0x251F50u;
    SET_GPR_U32(ctx, 31, 0x251F58u);
    ctx->pc = 0x251F54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936352));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251F58u; }
    }
    if (ctx->pc != 0x251F58u) { return; }
    ctx->pc = 0x251F58u;
label_251f58:
    // 0x251f58: 0x1000000f
label_251f5c:
    if (ctx->pc == 0x251F5Cu) {
        ctx->pc = 0x251F5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 18));
        ctx->pc = 0x251F60u;
        goto label_251f60;
    }
    ctx->pc = 0x251F58u;
    {
        const bool branch_taken_0x251f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251F5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 18));
        if (branch_taken_0x251f58) {
            ctx->pc = 0x251F98u;
            goto label_251f98;
        }
    }
    ctx->pc = 0x251F60u;
label_251f60:
    // 0x251f60: 0x86620030
    ctx->pc = 0x251f60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_251f64:
    // 0x251f64: 0x2403003c
    ctx->pc = 0x251f64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
label_251f68:
    // 0x251f68: 0x431018
    ctx->pc = 0x251f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_251f6c:
    // 0x251f6c: 0x8c83f9fc
    ctx->pc = 0x251f6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294965756)));
label_251f70:
    // 0x251f70: 0x439021
    ctx->pc = 0x251f70u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251f74:
    // 0x251f74: 0x8e420028
    ctx->pc = 0x251f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_251f78:
    // 0x251f78: 0x54400007
label_251f7c:
    if (ctx->pc == 0x251F7Cu) {
        ctx->pc = 0x251F7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 18));
        ctx->pc = 0x251F80u;
        goto label_251f80;
    }
    ctx->pc = 0x251F78u;
    {
        const bool branch_taken_0x251f78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x251f78) {
            ctx->pc = 0x251F7Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 18));
            ctx->pc = 0x251F98u;
            goto label_251f98;
        }
    }
    ctx->pc = 0x251F80u;
label_251f80:
    // 0x251f80: 0x3c04003b
    ctx->pc = 0x251f80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_251f84:
    // 0x251f84: 0x24848740
    ctx->pc = 0x251f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936384));
label_251f88:
    // 0x251f88: 0xc0b492e
label_251f8c:
    if (ctx->pc == 0x251F8Cu) {
        ctx->pc = 0x251F8Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x251F90u;
        goto label_251f90;
    }
    ctx->pc = 0x251F88u;
    SET_GPR_U32(ctx, 31, 0x251F90u);
    ctx->pc = 0x251F8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251F90u; }
    }
    if (ctx->pc != 0x251F90u) { return; }
    ctx->pc = 0x251F90u;
label_251f90:
    // 0x251f90: 0x902d
    ctx->pc = 0x251f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251f94:
    // 0x251f94: 0xae3200f0
    ctx->pc = 0x251f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 18));
label_251f98:
    // 0x251f98: 0x52400016
label_251f9c:
    if (ctx->pc == 0x251F9Cu) {
        ctx->pc = 0x251F9Cu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
        ctx->pc = 0x251FA0u;
        goto label_251fa0;
    }
    ctx->pc = 0x251F98u;
    {
        const bool branch_taken_0x251f98 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x251f98) {
            ctx->pc = 0x251F9Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
            ctx->pc = 0x251FF4u;
            goto label_251ff4;
        }
    }
    ctx->pc = 0x251FA0u;
label_251fa0:
    // 0x251fa0: 0x8e430010
    ctx->pc = 0x251fa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_251fa4:
    // 0x251fa4: 0x30620800
    ctx->pc = 0x251fa4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2048));
label_251fa8:
    // 0x251fa8: 0x10400003
label_251fac:
    if (ctx->pc == 0x251FACu) {
        ctx->pc = 0x251FACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        ctx->pc = 0x251FB0u;
        goto label_251fb0;
    }
    ctx->pc = 0x251FA8u;
    {
        const bool branch_taken_0x251fa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251FACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x251fa8) {
            ctx->pc = 0x251FB8u;
            goto label_251fb8;
        }
    }
    ctx->pc = 0x251FB0u;
label_251fb0:
    // 0x251fb0: 0x621025
    ctx->pc = 0x251fb0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_251fb4:
    // 0x251fb4: 0xae420010
    ctx->pc = 0x251fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_251fb8:
    // 0x251fb8: 0x8fa40054
    ctx->pc = 0x251fb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_251fbc:
    // 0x251fbc: 0x42c00
    ctx->pc = 0x251fbcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 16));
label_251fc0:
    // 0x251fc0: 0x240202d
    ctx->pc = 0x251fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_251fc4:
    // 0x251fc4: 0x52c03
    ctx->pc = 0x251fc4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_251fc8:
    // 0x251fc8: 0x86660038
    ctx->pc = 0x251fc8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_251fcc:
    // 0x251fcc: 0x8667003a
    ctx->pc = 0x251fccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_251fd0:
    // 0x251fd0: 0xc0944f6
label_251fd4:
    if (ctx->pc == 0x251FD4u) {
        ctx->pc = 0x251FD4u;
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 53)));
        ctx->pc = 0x251FD8u;
        goto label_251fd8;
    }
    ctx->pc = 0x251FD0u;
    SET_GPR_U32(ctx, 31, 0x251FD8u);
    ctx->pc = 0x251FD4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 53)));
    ctx->pc = 0x2513D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItemWobj_0x2513d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251FD8u; }
    }
    if (ctx->pc != 0x251FD8u) { return; }
    ctx->pc = 0x251FD8u;
label_251fd8:
    // 0x251fd8: 0xa2400017
    ctx->pc = 0x251fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 23), (uint8_t)GPR_U32(ctx, 0));
label_251fdc:
    // 0x251fdc: 0xa2400016
    ctx->pc = 0x251fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22), (uint8_t)GPR_U32(ctx, 0));
label_251fe0:
    // 0x251fe0: 0x8e420010
    ctx->pc = 0x251fe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_251fe4:
    // 0x251fe4: 0x3c030010
    ctx->pc = 0x251fe4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
label_251fe8:
    // 0x251fe8: 0x431025
    ctx->pc = 0x251fe8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251fec:
    // 0x251fec: 0xae420010
    ctx->pc = 0x251fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_251ff0:
    // 0x251ff0: 0x96620032
    ctx->pc = 0x251ff0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_251ff4:
    // 0x251ff4: 0x3042ff00
    ctx->pc = 0x251ff4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_251ff8:
    // 0x251ff8: 0x21400
    ctx->pc = 0x251ff8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_251ffc:
    // 0x251ffc: 0x21403
    ctx->pc = 0x251ffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_252000:
    // 0x252000: 0x2028025
    ctx->pc = 0x252000u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_252004:
    // 0x252004: 0xa63000f4
    ctx->pc = 0x252004u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 16));
label_252008:
    // 0x252008: 0x92630034
    ctx->pc = 0x252008u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_25200c:
    // 0x25200c: 0x240200ff
    ctx->pc = 0x25200cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_252010:
    // 0x252010: 0x54620006
label_252014:
    if (ctx->pc == 0x252014u) {
        ctx->pc = 0x252014u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->pc = 0x252018u;
        goto label_252018;
    }
    ctx->pc = 0x252010u;
    {
        const bool branch_taken_0x252010 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x252010) {
            ctx->pc = 0x252014u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->pc = 0x25202Cu;
            goto label_25202c;
        }
    }
    ctx->pc = 0x252018u;
label_252018:
    // 0x252018: 0x3c013c23
    ctx->pc = 0x252018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
label_25201c:
    // 0x25201c: 0x3421d70a
    ctx->pc = 0x25201cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
label_252020:
    // 0x252020: 0x44810000
    ctx->pc = 0x252020u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_252024:
    // 0x252024: 0x10000007
label_252028:
    if (ctx->pc == 0x252028u) {
        ctx->pc = 0x252028u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
        ctx->pc = 0x25202Cu;
        goto label_25202c;
    }
    ctx->pc = 0x252024u;
    {
        const bool branch_taken_0x252024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252028u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
        if (branch_taken_0x252024) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x25202Cu;
label_25202c:
    // 0x25202c: 0x44820000
    ctx->pc = 0x25202cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_252030:
    // 0x252030: 0x46800020
    ctx->pc = 0x252030u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_252034:
    // 0x252034: 0x3c013f00
    ctx->pc = 0x252034u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_252038:
    // 0x252038: 0x44810800
    ctx->pc = 0x252038u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_25203c:
    // 0x25203c: 0x46010002
    ctx->pc = 0x25203cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_252040:
    // 0x252040: 0xe62000fc
    ctx->pc = 0x252040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
label_252044:
    // 0x252044: 0x92620036
    ctx->pc = 0x252044u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_252048:
    // 0x252048: 0xa22200f6
    ctx->pc = 0x252048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 246), (uint8_t)GPR_U32(ctx, 2));
label_25204c:
    // 0x25204c: 0x92620037
    ctx->pc = 0x25204cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
label_252050:
    // 0x252050: 0x10000006
label_252054:
    if (ctx->pc == 0x252054u) {
        ctx->pc = 0x252054u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x252058u;
        goto label_252058;
    }
    ctx->pc = 0x252050u;
    {
        const bool branch_taken_0x252050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252054u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x252050) {
            ctx->pc = 0x25206Cu;
            goto label_25206c;
        }
    }
    ctx->pc = 0x252058u;
label_252058:
    // 0x252058: 0xae2000f0
    ctx->pc = 0x252058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
label_25205c:
    // 0x25205c: 0xa62000f4
    ctx->pc = 0x25205cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 0));
label_252060:
    // 0x252060: 0xae2000fc
    ctx->pc = 0x252060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_252064:
    // 0x252064: 0xa22000f6
    ctx->pc = 0x252064u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 246), (uint8_t)GPR_U32(ctx, 0));
label_252068:
    // 0x252068: 0xa22000f7
    ctx->pc = 0x252068u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 0));
label_25206c:
    // 0x25206c: 0xae2000f8
    ctx->pc = 0x25206cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
label_252070:
    // 0x252070: 0xa6200100
    ctx->pc = 0x252070u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 0));
label_252074:
    // 0x252074: 0x2402ffff
    ctx->pc = 0x252074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_252078:
    // 0x252078: 0x124001fc
label_25207c:
    if (ctx->pc == 0x25207Cu) {
        ctx->pc = 0x25207Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x252080u;
        goto label_252080;
    }
    ctx->pc = 0x252078u;
    {
        const bool branch_taken_0x252078 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x25207Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x252078) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x252080u;
label_252080:
    // 0x252080: 0x3c020034
    ctx->pc = 0x252080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_252084:
    // 0x252084: 0x8c43e7f0
    ctx->pc = 0x252084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_252088:
    // 0x252088: 0x2402000d
    ctx->pc = 0x252088u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_25208c:
    // 0x25208c: 0x546201f8
label_252090:
    if (ctx->pc == 0x252090u) {
        ctx->pc = 0x252090u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x252094u;
        goto label_252094;
    }
    ctx->pc = 0x25208Cu;
    {
        const bool branch_taken_0x25208c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25208c) {
            ctx->pc = 0x252090u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->pc = 0x252870u;
            goto label_252870;
        }
    }
    ctx->pc = 0x252094u;
label_252094:
    // 0x252094: 0xa02d
    ctx->pc = 0x252094u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252098:
    // 0x252098: 0x922300f6
    ctx->pc = 0x252098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 246)));
label_25209c:
    // 0x25209c: 0x24020068
    ctx->pc = 0x25209cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
label_2520a0:
    // 0x2520a0: 0x10620004
label_2520a4:
    if (ctx->pc == 0x2520A4u) {
        ctx->pc = 0x2520A4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2520A8u;
        goto label_2520a8;
    }
    ctx->pc = 0x2520A0u;
    {
        const bool branch_taken_0x2520a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2520A4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2520a0) {
            ctx->pc = 0x2520B4u;
            goto label_2520b4;
        }
    }
    ctx->pc = 0x2520A8u;
label_2520a8:
    // 0x2520a8: 0x240200c7
    ctx->pc = 0x2520a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 199));
label_2520ac:
    // 0x2520ac: 0x14620014
label_2520b0:
    if (ctx->pc == 0x2520B0u) {
        ctx->pc = 0x2520B4u;
        goto label_2520b4;
    }
    ctx->pc = 0x2520ACu;
    {
        const bool branch_taken_0x2520ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2520ac) {
            ctx->pc = 0x252100u;
            goto label_252100;
        }
    }
    ctx->pc = 0x2520B4u;
label_2520b4:
    // 0x2520b4: 0x802d
    ctx->pc = 0x2520b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2520b8:
    // 0x2520b8: 0x24172b00
    ctx->pc = 0x2520b8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 11008));
label_2520bc:
    // 0x2520bc: 0x3c020032
    ctx->pc = 0x2520bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2520c0:
    // 0x2520c0: 0x24561bc0
    ctx->pc = 0x2520c0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7104));
label_2520c4:
    // 0x2520c4: 0x2171018
    ctx->pc = 0x2520c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2520c8:
    // 0x2520c8: 0x562021
    ctx->pc = 0x2520c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2520cc:
    // 0x2520cc: 0x8c8200fc
    ctx->pc = 0x2520ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_2520d0:
    // 0x2520d0: 0x50400005
label_2520d4:
    if (ctx->pc == 0x2520D4u) {
        ctx->pc = 0x2520D4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2520D8u;
        goto label_2520d8;
    }
    ctx->pc = 0x2520D0u;
    {
        const bool branch_taken_0x2520d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2520d0) {
            ctx->pc = 0x2520D4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2520E8u;
            goto label_2520e8;
        }
    }
    ctx->pc = 0x2520D8u;
label_2520d8:
    // 0x2520d8: 0xc09dd2c
label_2520dc:
    if (ctx->pc == 0x2520DCu) {
        ctx->pc = 0x2520DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2520E0u;
        goto label_2520e0;
    }
    ctx->pc = 0x2520D8u;
    SET_GPR_U32(ctx, 31, 0x2520E0u);
    ctx->pc = 0x2520DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2774B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerWaves_0x2774b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2520E0u; }
    }
    if (ctx->pc != 0x2520E0u) { return; }
    ctx->pc = 0x2520E0u;
label_2520e0:
    // 0x2520e0: 0x282a025
    ctx->pc = 0x2520e0u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2520e4:
    // 0x2520e4: 0x26100001
    ctx->pc = 0x2520e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2520e8:
    // 0x2520e8: 0x2a020004
    ctx->pc = 0x2520e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_2520ec:
    // 0x2520ec: 0x1440fff6
label_2520f0:
    if (ctx->pc == 0x2520F0u) {
        ctx->pc = 0x2520F0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x2520F4u;
        goto label_2520f4;
    }
    ctx->pc = 0x2520ECu;
    {
        const bool branch_taken_0x2520ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2520F0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2520ec) {
            ctx->pc = 0x2520C8u;
            goto label_2520c8;
        }
    }
    ctx->pc = 0x2520F4u;
label_2520f4:
    // 0x2520f4: 0x32830001
    ctx->pc = 0x2520f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), 1));
label_2520f8:
    // 0x2520f8: 0x24020001
    ctx->pc = 0x2520f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2520fc:
    // 0x2520fc: 0x43a80b
    ctx->pc = 0x2520fcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 2));
label_252100:
    // 0x252100: 0x52a001db
label_252104:
    if (ctx->pc == 0x252104u) {
        ctx->pc = 0x252104u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x252108u;
        goto label_252108;
    }
    ctx->pc = 0x252100u;
    {
        const bool branch_taken_0x252100 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x252100) {
            ctx->pc = 0x252104u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->pc = 0x252870u;
            goto label_252870;
        }
    }
    ctx->pc = 0x252108u;
label_252108:
    // 0x252108: 0xc099218
label_25210c:
    if (ctx->pc == 0x25210Cu) {
        ctx->pc = 0x25210Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x252110u;
        goto label_252110;
    }
    ctx->pc = 0x252108u;
    SET_GPR_U32(ctx, 31, 0x252110u);
    ctx->pc = 0x25210Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWobjWanim_0x264860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252110u; }
    }
    if (ctx->pc != 0x252110u) { return; }
    ctx->pc = 0x252110u;
label_252110:
    // 0x252110: 0x40202d
    ctx->pc = 0x252110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252114:
    // 0x252114: 0x2402002f
    ctx->pc = 0x252114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
label_252118:
    // 0x252118: 0xa2420017
    ctx->pc = 0x252118u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 23), (uint8_t)GPR_U32(ctx, 2));
label_25211c:
    // 0x25211c: 0xa2420016
    ctx->pc = 0x25211cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22), (uint8_t)GPR_U32(ctx, 2));
label_252120:
    // 0x252120: 0x8e420010
    ctx->pc = 0x252120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_252124:
    // 0x252124: 0x3c0300a0
    ctx->pc = 0x252124u;
    SET_GPR_U32(ctx, 3, ((uint32_t)160 << 16));
label_252128:
    // 0x252128: 0x431025
    ctx->pc = 0x252128u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25212c:
    // 0x25212c: 0x108001cf
label_252130:
    if (ctx->pc == 0x252130u) {
        ctx->pc = 0x252130u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x252134u;
        goto label_252134;
    }
    ctx->pc = 0x25212Cu;
    {
        const bool branch_taken_0x25212c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x252130u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x25212c) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x252134u;
label_252134:
    // 0x252134: 0x84820002
    ctx->pc = 0x252134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_252138:
    // 0x252138: 0x2442ffff
    ctx->pc = 0x252138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_25213c:
    // 0x25213c: 0x44820000
    ctx->pc = 0x25213cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_252140:
    // 0x252140: 0x46800020
    ctx->pc = 0x252140u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_252144:
    // 0x252144: 0x100001c9
label_252148:
    if (ctx->pc == 0x252148u) {
        ctx->pc = 0x252148u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = 0x25214Cu;
        goto label_25214c;
    }
    ctx->pc = 0x252144u;
    {
        const bool branch_taken_0x252144 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252148u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        if (branch_taken_0x252144) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x25214Cu;
label_25214c:
    // 0x25214c: 0x5260000d
label_252150:
    if (ctx->pc == 0x252150u) {
        ctx->pc = 0x252150u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->pc = 0x252154u;
        goto label_252154;
    }
    ctx->pc = 0x25214Cu;
    {
        const bool branch_taken_0x25214c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x25214c) {
            ctx->pc = 0x252150u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
            ctx->pc = 0x252184u;
            goto label_252184;
        }
    }
    ctx->pc = 0x252154u;
label_252154:
    // 0x252154: 0x8e640030
    ctx->pc = 0x252154u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_252158:
    // 0x252158: 0x4800009
label_25215c:
    if (ctx->pc == 0x25215Cu) {
        ctx->pc = 0x25215Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x252160u;
        goto label_252160;
    }
    ctx->pc = 0x252158u;
    {
        const bool branch_taken_0x252158 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25215Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x252158) {
            ctx->pc = 0x252180u;
            goto label_252180;
        }
    }
    ctx->pc = 0x252160u;
label_252160:
    // 0x252160: 0x2402003c
    ctx->pc = 0x252160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_252164:
    // 0x252164: 0x821018
    ctx->pc = 0x252164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_252168:
    // 0x252168: 0x8c63f9fc
    ctx->pc = 0x252168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294965756)));
label_25216c:
    // 0x25216c: 0x431021
    ctx->pc = 0x25216cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_252170:
    // 0x252170: 0xae2200f0
    ctx->pc = 0x252170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_252174:
    // 0x252174: 0xc6600034
    ctx->pc = 0x252174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252178:
    // 0x252178: 0x10000003
label_25217c:
    if (ctx->pc == 0x25217Cu) {
        ctx->pc = 0x25217Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
        ctx->pc = 0x252180u;
        goto label_252180;
    }
    ctx->pc = 0x252178u;
    {
        const bool branch_taken_0x252178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25217Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
        if (branch_taken_0x252178) {
            ctx->pc = 0x252188u;
            goto label_252188;
        }
    }
    ctx->pc = 0x252180u;
label_252180:
    // 0x252180: 0xae2000f0
    ctx->pc = 0x252180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
label_252184:
    // 0x252184: 0xae2000f4
    ctx->pc = 0x252184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_252188:
    // 0x252188: 0x52600003
label_25218c:
    if (ctx->pc == 0x25218Cu) {
        ctx->pc = 0x25218Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
        ctx->pc = 0x252190u;
        goto label_252190;
    }
    ctx->pc = 0x252188u;
    {
        const bool branch_taken_0x252188 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x252188) {
            ctx->pc = 0x25218Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
            ctx->pc = 0x252198u;
            goto label_252198;
        }
    }
    ctx->pc = 0x252190u;
label_252190:
    // 0x252190: 0xc6600038
    ctx->pc = 0x252190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252194:
    // 0x252194: 0xe62000f8
    ctx->pc = 0x252194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
label_252198:
    // 0x252198: 0xae2000fc
    ctx->pc = 0x252198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_25219c:
    // 0x25219c: 0x8e220000
    ctx->pc = 0x25219cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2521a0:
    // 0x2521a0: 0x8c420004
    ctx->pc = 0x2521a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2521a4:
    // 0x2521a4: 0x38420002
    ctx->pc = 0x2521a4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
label_2521a8:
    // 0x2521a8: 0x8fa30058
    ctx->pc = 0x2521a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2521ac:
    // 0x2521ac: 0x2180b
    ctx->pc = 0x2521acu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
label_2521b0:
    // 0x2521b0: 0x100001ae
label_2521b4:
    if (ctx->pc == 0x2521B4u) {
        ctx->pc = 0x2521B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x2521B8u;
        goto label_2521b8;
    }
    ctx->pc = 0x2521B0u;
    {
        const bool branch_taken_0x2521b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2521B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        if (branch_taken_0x2521b0) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x2521B8u;
label_2521b8:
    // 0x2521b8: 0xc62000e8
    ctx->pc = 0x2521b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2521bc:
    // 0x2521bc: 0x3c014080
    ctx->pc = 0x2521bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
label_2521c0:
    // 0x2521c0: 0x44810800
    ctx->pc = 0x2521c0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2521c4:
    // 0x2521c4: 0x46010002
    ctx->pc = 0x2521c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2521c8:
    // 0x2521c8: 0xe62000e8
    ctx->pc = 0x2521c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_2521cc:
    // 0x2521cc: 0x12600004
label_2521d0:
    if (ctx->pc == 0x2521D0u) {
        ctx->pc = 0x2521D0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 242), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2521D4u;
        goto label_2521d4;
    }
    ctx->pc = 0x2521CCu;
    {
        const bool branch_taken_0x2521cc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2521D0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 242), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2521cc) {
            ctx->pc = 0x2521E0u;
            goto label_2521e0;
        }
    }
    ctx->pc = 0x2521D4u;
label_2521d4:
    // 0x2521d4: 0x92620034
    ctx->pc = 0x2521d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_2521d8:
    // 0x2521d8: 0x10000002
label_2521dc:
    if (ctx->pc == 0x2521DCu) {
        ctx->pc = 0x2521DCu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 243), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2521E0u;
        goto label_2521e0;
    }
    ctx->pc = 0x2521D8u;
    {
        const bool branch_taken_0x2521d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2521DCu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 243), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2521d8) {
            ctx->pc = 0x2521E4u;
            goto label_2521e4;
        }
    }
    ctx->pc = 0x2521E0u;
label_2521e0:
    // 0x2521e0: 0xa22000f3
    ctx->pc = 0x2521e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 243), (uint8_t)GPR_U32(ctx, 0));
label_2521e4:
    // 0x2521e4: 0x52600003
label_2521e8:
    if (ctx->pc == 0x2521E8u) {
        ctx->pc = 0x2521E8u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 251), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2521ECu;
        goto label_2521ec;
    }
    ctx->pc = 0x2521E4u;
    {
        const bool branch_taken_0x2521e4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2521e4) {
            ctx->pc = 0x2521E8u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 251), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2521F4u;
            goto label_2521f4;
        }
    }
    ctx->pc = 0x2521ECu;
label_2521ec:
    // 0x2521ec: 0x92620036
    ctx->pc = 0x2521ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_2521f0:
    // 0x2521f0: 0xa22200fb
    ctx->pc = 0x2521f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 251), (uint8_t)GPR_U32(ctx, 2));
label_2521f4:
    // 0x2521f4: 0x12600004
label_2521f8:
    if (ctx->pc == 0x2521F8u) {
        ctx->pc = 0x2521F8u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 244), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2521FCu;
        goto label_2521fc;
    }
    ctx->pc = 0x2521F4u;
    {
        const bool branch_taken_0x2521f4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2521F8u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 244), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2521f4) {
            ctx->pc = 0x252208u;
            goto label_252208;
        }
    }
    ctx->pc = 0x2521FCu;
label_2521fc:
    // 0x2521fc: 0x92620032
    ctx->pc = 0x2521fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 50)));
label_252200:
    // 0x252200: 0x10000002
label_252204:
    if (ctx->pc == 0x252204u) {
        ctx->pc = 0x252204u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x252208u;
        goto label_252208;
    }
    ctx->pc = 0x252200u;
    {
        const bool branch_taken_0x252200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252204u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x252200) {
            ctx->pc = 0x25220Cu;
            goto label_25220c;
        }
    }
    ctx->pc = 0x252208u;
label_252208:
    // 0x252208: 0xa22000f7
    ctx->pc = 0x252208u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 0));
label_25220c:
    // 0x25220c: 0xc08dbc4
label_252210:
    if (ctx->pc == 0x252210u) {
        ctx->pc = 0x252210u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 40));
        ctx->pc = 0x252214u;
        goto label_252214;
    }
    ctx->pc = 0x25220Cu;
    SET_GPR_U32(ctx, 31, 0x252214u);
    ctx->pc = 0x252210u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 40));
    ctx->pc = 0x236F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyDescType_0x236f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252214u; }
    }
    if (ctx->pc != 0x252214u) { return; }
    ctx->pc = 0x252214u;
label_252214:
    // 0x252214: 0xa62200f0
    ctx->pc = 0x252214u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_252218:
    // 0x252218: 0x21400
    ctx->pc = 0x252218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_25221c:
    // 0x25221c: 0x21403
    ctx->pc = 0x25221cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_252220:
    // 0x252220: 0x24030003
    ctx->pc = 0x252220u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_252224:
    // 0x252224: 0x1443000f
label_252228:
    if (ctx->pc == 0x252228u) {
        ctx->pc = 0x252228u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x25222Cu;
        goto label_25222c;
    }
    ctx->pc = 0x252224u;
    {
        const bool branch_taken_0x252224 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x252228u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x252224) {
            ctx->pc = 0x252264u;
            goto label_252264;
        }
    }
    ctx->pc = 0x25222Cu;
label_25222c:
    // 0x25222c: 0x8fa40050
    ctx->pc = 0x25222cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_252230:
    // 0x252230: 0x8fa50054
    ctx->pc = 0x252230u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_252234:
    // 0x252234: 0x3c06003b
    ctx->pc = 0x252234u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_252238:
    // 0x252238: 0xc094e02
label_25223c:
    if (ctx->pc == 0x25223Cu) {
        ctx->pc = 0x25223Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294936424));
        ctx->pc = 0x252240u;
        goto label_252240;
    }
    ctx->pc = 0x252238u;
    SET_GPR_U32(ctx, 31, 0x252240u);
    ctx->pc = 0x25223Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294936424));
    ctx->pc = 0x253808u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindInfoIndex_0x253808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252240u; }
    }
    if (ctx->pc != 0x252240u) { return; }
    ctx->pc = 0x252240u;
label_252240:
    // 0x252240: 0x40202d
    ctx->pc = 0x252240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252244:
    // 0x252244: 0x4800006
label_252248:
    if (ctx->pc == 0x252248u) {
        ctx->pc = 0x252248u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x25224Cu;
        goto label_25224c;
    }
    ctx->pc = 0x252244u;
    {
        const bool branch_taken_0x252244 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x252248u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x252244) {
            ctx->pc = 0x252260u;
            goto label_252260;
        }
    }
    ctx->pc = 0x25224Cu;
label_25224c:
    // 0x25224c: 0x24020050
    ctx->pc = 0x25224cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_252250:
    // 0x252250: 0x821018
    ctx->pc = 0x252250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_252254:
    // 0x252254: 0x8c63fa60
    ctx->pc = 0x252254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294965856)));
label_252258:
    // 0x252258: 0x439021
    ctx->pc = 0x252258u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25225c:
    // 0x25225c: 0xae320000
    ctx->pc = 0x25225cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_252260:
    // 0x252260: 0x3c020031
    ctx->pc = 0x252260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_252264:
    // 0x252264: 0x8c420010
    ctx->pc = 0x252264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_252268:
    // 0x252268: 0x14400004
label_25226c:
    if (ctx->pc == 0x25226Cu) {
        ctx->pc = 0x25226Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        ctx->pc = 0x252270u;
        goto label_252270;
    }
    ctx->pc = 0x252268u;
    {
        const bool branch_taken_0x252268 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25226Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x252268) {
            ctx->pc = 0x25227Cu;
            goto label_25227c;
        }
    }
    ctx->pc = 0x252270u;
label_252270:
    // 0x252270: 0x822200f7
    ctx->pc = 0x252270u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
label_252274:
    // 0x252274: 0x4410007
label_252278:
    if (ctx->pc == 0x252278u) {
        ctx->pc = 0x252278u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        ctx->pc = 0x25227Cu;
        goto label_25227c;
    }
    ctx->pc = 0x252274u;
    {
        const bool branch_taken_0x252274 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x252278u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x252274) {
            ctx->pc = 0x252294u;
            goto label_252294;
        }
    }
    ctx->pc = 0x25227Cu;
label_25227c:
    // 0x25227c: 0x2442dc10
    ctx->pc = 0x25227cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958096));
label_252280:
    // 0x252280: 0x862300f0
    ctx->pc = 0x252280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
label_252284:
    // 0x252284: 0x31880
    ctx->pc = 0x252284u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_252288:
    // 0x252288: 0x621821
    ctx->pc = 0x252288u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25228c:
    // 0x25228c: 0x90620000
    ctx->pc = 0x25228cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_252290:
    // 0x252290: 0xa22200f7
    ctx->pc = 0x252290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 2));
label_252294:
    // 0x252294: 0x12600002
label_252298:
    if (ctx->pc == 0x252298u) {
        ctx->pc = 0x252298u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25229Cu;
        goto label_25229c;
    }
    ctx->pc = 0x252294u;
    {
        const bool branch_taken_0x252294 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x252298u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x252294) {
            ctx->pc = 0x2522A0u;
            goto label_2522a0;
        }
    }
    ctx->pc = 0x25229Cu;
label_25229c:
    // 0x25229c: 0x92620030
    ctx->pc = 0x25229cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 48)));
label_2522a0:
    // 0x2522a0: 0xa22200f6
    ctx->pc = 0x2522a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 246), (uint8_t)GPR_U32(ctx, 2));
label_2522a4:
    // 0x2522a4: 0x822500f6
    ctx->pc = 0x2522a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 246)));
label_2522a8:
    // 0x2522a8: 0x1ca0000a
label_2522ac:
    if (ctx->pc == 0x2522ACu) {
        ctx->pc = 0x2522ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2522B0u;
        goto label_2522b0;
    }
    ctx->pc = 0x2522A8u;
    {
        const bool branch_taken_0x2522a8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2522ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2522a8) {
            ctx->pc = 0x2522D4u;
            goto label_2522d4;
        }
    }
    ctx->pc = 0x2522B0u;
label_2522b0:
    // 0x2522b0: 0x3c04003b
    ctx->pc = 0x2522b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2522b4:
    // 0x2522b4: 0x24848770
    ctx->pc = 0x2522b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936432));
label_2522b8:
    // 0x2522b8: 0xc7cc0030
    ctx->pc = 0x2522b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2522bc:
    // 0x2522bc: 0xc7cd0034
    ctx->pc = 0x2522bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2522c0:
    // 0x2522c0: 0xc0b492e
label_2522c4:
    if (ctx->pc == 0x2522C4u) {
        ctx->pc = 0x2522C4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->pc = 0x2522C8u;
        goto label_2522c8;
    }
    ctx->pc = 0x2522C0u;
    SET_GPR_U32(ctx, 31, 0x2522C8u);
    ctx->pc = 0x2522C4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2522C8u; }
    }
    if (ctx->pc != 0x2522C8u) { return; }
    ctx->pc = 0x2522C8u;
label_2522c8:
    // 0x2522c8: 0x24020001
    ctx->pc = 0x2522c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2522cc:
    // 0x2522cc: 0xa22200f6
    ctx->pc = 0x2522ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 246), (uint8_t)GPR_U32(ctx, 2));
label_2522d0:
    // 0x2522d0: 0x2402ffff
    ctx->pc = 0x2522d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2522d4:
    // 0x2522d4: 0xa22200f5
    ctx->pc = 0x2522d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 245), (uint8_t)GPR_U32(ctx, 2));
label_2522d8:
    // 0x2522d8: 0xae2000fc
    ctx->pc = 0x2522d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_2522dc:
    // 0x2522dc: 0xa62000f8
    ctx->pc = 0x2522dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 248), (uint16_t)GPR_U32(ctx, 0));
label_2522e0:
    // 0x2522e0: 0xa22000fa
    ctx->pc = 0x2522e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 250), (uint8_t)GPR_U32(ctx, 0));
label_2522e4:
    // 0x2522e4: 0xc7cc0020
    ctx->pc = 0x2522e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2522e8:
    // 0x2522e8: 0xc0ba04a
label_2522ec:
    if (ctx->pc == 0x2522ECu) {
        ctx->pc = 0x2522ECu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x2522F0u;
        goto label_2522f0;
    }
    ctx->pc = 0x2522E8u;
    SET_GPR_U32(ctx, 31, 0x2522F0u);
    ctx->pc = 0x2522ECu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2522F0u; }
    }
    if (ctx->pc != 0x2522F0u) { return; }
    ctx->pc = 0x2522F0u;
label_2522f0:
    // 0x2522f0: 0xe6200100
    ctx->pc = 0x2522f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_2522f4:
    // 0x2522f4: 0x24020028
    ctx->pc = 0x2522f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
label_2522f8:
    // 0x2522f8: 0xa62200da
    ctx->pc = 0x2522f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 218), (uint16_t)GPR_U32(ctx, 2));
label_2522fc:
    // 0x2522fc: 0x922300f6
    ctx->pc = 0x2522fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 246)));
label_252300:
    // 0x252300: 0x31e00
    ctx->pc = 0x252300u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
label_252304:
    // 0x252304: 0x31603
    ctx->pc = 0x252304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 24));
label_252308:
    // 0x252308: 0x962400e4
    ctx->pc = 0x252308u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_25230c:
    // 0x25230c: 0x441018
    ctx->pc = 0x25230cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_252310:
    // 0x252310: 0x31e03
    ctx->pc = 0x252310u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_252314:
    // 0x252314: 0x2463ffff
    ctx->pc = 0x252314u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_252318:
    // 0x252318: 0x4600006
label_25231c:
    if (ctx->pc == 0x25231Cu) {
        ctx->pc = 0x25231Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x252320u;
        goto label_252320;
    }
    ctx->pc = 0x252318u;
    {
        const bool branch_taken_0x252318 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25231Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x252318) {
            ctx->pc = 0x252334u;
            goto label_252334;
        }
    }
    ctx->pc = 0x252320u;
label_252320:
    // 0x252320: 0x60202d
    ctx->pc = 0x252320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_252324:
    // 0x252324: 0x28830003
    ctx->pc = 0x252324u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 3));
label_252328:
    // 0x252328: 0x24020002
    ctx->pc = 0x252328u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_25232c:
    // 0x25232c: 0x10000002
label_252330:
    if (ctx->pc == 0x252330u) {
        ctx->pc = 0x252330u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        ctx->pc = 0x252334u;
        goto label_252334;
    }
    ctx->pc = 0x25232Cu;
    {
        const bool branch_taken_0x25232c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252330u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        if (branch_taken_0x25232c) {
            ctx->pc = 0x252338u;
            goto label_252338;
        }
    }
    ctx->pc = 0x252334u;
label_252334:
    // 0x252334: 0x202d
    ctx->pc = 0x252334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252338:
    // 0x252338: 0x822200f3
    ctx->pc = 0x252338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 243)));
label_25233c:
    // 0x25233c: 0x54400008
label_252340:
    if (ctx->pc == 0x252340u) {
        ctx->pc = 0x252340u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 251)));
        ctx->pc = 0x252344u;
        goto label_252344;
    }
    ctx->pc = 0x25233Cu;
    {
        const bool branch_taken_0x25233c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25233c) {
            ctx->pc = 0x252340u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 251)));
            ctx->pc = 0x252360u;
            goto label_252360;
        }
    }
    ctx->pc = 0x252344u;
label_252344:
    // 0x252344: 0x3c020033
    ctx->pc = 0x252344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_252348:
    // 0x252348: 0x244249b8
    ctx->pc = 0x252348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18872));
label_25234c:
    // 0x25234c: 0x41880
    ctx->pc = 0x25234cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_252350:
    // 0x252350: 0x621821
    ctx->pc = 0x252350u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_252354:
    // 0x252354: 0x90620000
    ctx->pc = 0x252354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_252358:
    // 0x252358: 0xa22200f3
    ctx->pc = 0x252358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 243), (uint8_t)GPR_U32(ctx, 2));
label_25235c:
    // 0x25235c: 0x922200fb
    ctx->pc = 0x25235cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 251)));
label_252360:
    // 0x252360: 0x54400008
label_252364:
    if (ctx->pc == 0x252364u) {
        ctx->pc = 0x252364u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 243)));
        ctx->pc = 0x252368u;
        goto label_252368;
    }
    ctx->pc = 0x252360u;
    {
        const bool branch_taken_0x252360 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x252360) {
            ctx->pc = 0x252364u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 243)));
            ctx->pc = 0x252384u;
            goto label_252384;
        }
    }
    ctx->pc = 0x252368u;
label_252368:
    // 0x252368: 0x3c020033
    ctx->pc = 0x252368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_25236c:
    // 0x25236c: 0x244249c8
    ctx->pc = 0x25236cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18888));
label_252370:
    // 0x252370: 0x41880
    ctx->pc = 0x252370u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_252374:
    // 0x252374: 0x621821
    ctx->pc = 0x252374u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_252378:
    // 0x252378: 0x90620000
    ctx->pc = 0x252378u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25237c:
    // 0x25237c: 0xa22200fb
    ctx->pc = 0x25237cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 251), (uint8_t)GPR_U32(ctx, 2));
label_252380:
    // 0x252380: 0x822200f3
    ctx->pc = 0x252380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 243)));
label_252384:
    // 0x252384: 0x44820800
    ctx->pc = 0x252384u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_252388:
    // 0x252388: 0x46800860
    ctx->pc = 0x252388u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_25238c:
    // 0x25238c: 0x3c030034
    ctx->pc = 0x25238cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_252390:
    // 0x252390: 0x8c62e7c8
    ctx->pc = 0x252390u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
label_252394:
    // 0x252394: 0xc44000d4
    ctx->pc = 0x252394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252398:
    // 0x252398: 0x46000842
    ctx->pc = 0x252398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25239c:
    // 0x25239c: 0x46000824
    ctx->pc = 0x25239cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_2523a0:
    // 0x2523a0: 0x44020000
    ctx->pc = 0x2523a0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
label_2523a4:
    // 0x2523a4: 0xa22200f3
    ctx->pc = 0x2523a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 243), (uint8_t)GPR_U32(ctx, 2));
label_2523a8:
    // 0x2523a8: 0x922200fb
    ctx->pc = 0x2523a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 251)));
label_2523ac:
    // 0x2523ac: 0x44820000
    ctx->pc = 0x2523acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2523b0:
    // 0x2523b0: 0x46800020
    ctx->pc = 0x2523b0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2523b4:
    // 0x2523b4: 0x8c62e7c8
    ctx->pc = 0x2523b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
label_2523b8:
    // 0x2523b8: 0xc44100d0
    ctx->pc = 0x2523b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2523bc:
    // 0x2523bc: 0x46010002
    ctx->pc = 0x2523bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2523c0:
    // 0x2523c0: 0x46000064
    ctx->pc = 0x2523c0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2523c4:
    // 0x2523c4: 0x44020800
    ctx->pc = 0x2523c4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2523c8:
    // 0x2523c8: 0xa22200fb
    ctx->pc = 0x2523c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 251), (uint8_t)GPR_U32(ctx, 2));
label_2523cc:
    // 0x2523cc: 0x862200e4
    ctx->pc = 0x2523ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_2523d0:
    // 0x2523d0: 0x44820000
    ctx->pc = 0x2523d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2523d4:
    // 0x2523d4: 0x46800020
    ctx->pc = 0x2523d4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2523d8:
    // 0x2523d8: 0x8c62e7c8
    ctx->pc = 0x2523d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
label_2523dc:
    // 0x2523dc: 0xc44100cc
    ctx->pc = 0x2523dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2523e0:
    // 0x2523e0: 0x46010002
    ctx->pc = 0x2523e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2523e4:
    // 0x2523e4: 0x46000064
    ctx->pc = 0x2523e4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2523e8:
    // 0x2523e8: 0x44020800
    ctx->pc = 0x2523e8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2523ec:
    // 0x2523ec: 0xa62200e4
    ctx->pc = 0x2523ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
label_2523f0:
    // 0x2523f0: 0x3c020034
    ctx->pc = 0x2523f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2523f4:
    // 0x2523f4: 0x8c43e7f0
    ctx->pc = 0x2523f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_2523f8:
    // 0x2523f8: 0x24020005
    ctx->pc = 0x2523f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2523fc:
    // 0x2523fc: 0x54620009
label_252400:
    if (ctx->pc == 0x252400u) {
        ctx->pc = 0x252400u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x252404u;
        goto label_252404;
    }
    ctx->pc = 0x2523FCu;
    {
        const bool branch_taken_0x2523fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2523fc) {
            ctx->pc = 0x252400u;
            SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
            ctx->pc = 0x252424u;
            goto label_252424;
        }
    }
    ctx->pc = 0x252404u;
label_252404:
    // 0x252404: 0x8e230000
    ctx->pc = 0x252404u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_252408:
    // 0x252408: 0x3c02003b
    ctx->pc = 0x252408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_25240c:
    // 0x25240c: 0x8c4287a0
    ctx->pc = 0x25240cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294936480)));
label_252410:
    // 0x252410: 0xac620028
    ctx->pc = 0x252410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_252414:
    // 0x252414: 0x2402fffe
    ctx->pc = 0x252414u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_252418:
    // 0x252418: 0xa62200f0
    ctx->pc = 0x252418u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_25241c:
    // 0x25241c: 0x1000000c
label_252420:
    if (ctx->pc == 0x252420u) {
        ctx->pc = 0x252420u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x252424u;
        goto label_252424;
    }
    ctx->pc = 0x25241Cu;
    {
        const bool branch_taken_0x25241c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252420u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25241c) {
            ctx->pc = 0x252450u;
            goto label_252450;
        }
    }
    ctx->pc = 0x252424u;
label_252424:
    // 0x252424: 0x8c43e7f0
    ctx->pc = 0x252424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_252428:
    // 0x252428: 0x24020006
    ctx->pc = 0x252428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_25242c:
    // 0x25242c: 0x5462000a
label_252430:
    if (ctx->pc == 0x252430u) {
        ctx->pc = 0x252430u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x252434u;
        goto label_252434;
    }
    ctx->pc = 0x25242Cu;
    {
        const bool branch_taken_0x25242c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25242c) {
            ctx->pc = 0x252430u;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->pc = 0x252458u;
            goto label_252458;
        }
    }
    ctx->pc = 0x252434u;
label_252434:
    // 0x252434: 0x8e230000
    ctx->pc = 0x252434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_252438:
    // 0x252438: 0x3c02003b
    ctx->pc = 0x252438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_25243c:
    // 0x25243c: 0x8c4287a8
    ctx->pc = 0x25243cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294936488)));
label_252440:
    // 0x252440: 0xac620028
    ctx->pc = 0x252440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_252444:
    // 0x252444: 0x2402fffd
    ctx->pc = 0x252444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
label_252448:
    // 0x252448: 0xa62200f0
    ctx->pc = 0x252448u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_25244c:
    // 0x25244c: 0x24020003
    ctx->pc = 0x25244cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_252450:
    // 0x252450: 0xa22200f6
    ctx->pc = 0x252450u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 246), (uint8_t)GPR_U32(ctx, 2));
label_252454:
    // 0x252454: 0x862400f0
    ctx->pc = 0x252454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
label_252458:
    // 0x252458: 0xc08e032
label_25245c:
    if (ctx->pc == 0x25245Cu) {
        ctx->pc = 0x25245Cu;
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 242)));
        ctx->pc = 0x252460u;
        goto label_252460;
    }
    ctx->pc = 0x252458u;
    SET_GPR_U32(ctx, 31, 0x252460u);
    ctx->pc = 0x25245Cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 242)));
    ctx->pc = 0x2380C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetEnemyType_0x2380c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252460u; }
    }
    if (ctx->pc != 0x252460u) { return; }
    ctx->pc = 0x252460u;
label_252460:
    // 0x252460: 0xa62200f0
    ctx->pc = 0x252460u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_252464:
    // 0x252464: 0x3a0202d
    ctx->pc = 0x252464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_252468:
    // 0x252468: 0xc0944d4
label_25246c:
    if (ctx->pc == 0x25246Cu) {
        ctx->pc = 0x25246Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x252470u;
        goto label_252470;
    }
    ctx->pc = 0x252468u;
    SET_GPR_U32(ctx, 31, 0x252470u);
    ctx->pc = 0x25246Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251350u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemGenDesc_0x251350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252470u; }
    }
    if (ctx->pc != 0x252470u) { return; }
    ctx->pc = 0x252470u;
label_252470:
    // 0x252470: 0x3a0202d
    ctx->pc = 0x252470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_252474:
    // 0x252474: 0xc093eaa
label_252478:
    if (ctx->pc == 0x252478u) {
        ctx->pc = 0x252478u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25247Cu;
        goto label_25247c;
    }
    ctx->pc = 0x252474u;
    SET_GPR_U32(ctx, 31, 0x25247Cu);
    ctx->pc = 0x252478u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24FAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatchAnyHeader_0x24faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25247Cu; }
    }
    if (ctx->pc != 0x25247Cu) { return; }
    ctx->pc = 0x25247Cu;
label_25247c:
    // 0x25247c: 0x100000fb
label_252480:
    if (ctx->pc == 0x252480u) {
        ctx->pc = 0x252480u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x252484u;
        goto label_252484;
    }
    ctx->pc = 0x25247Cu;
    {
        const bool branch_taken_0x25247c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252480u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        if (branch_taken_0x25247c) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x252484u;
label_252484:
    // 0x252484: 0x52600005
label_252488:
    if (ctx->pc == 0x252488u) {
        ctx->pc = 0x252488u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->pc = 0x25248Cu;
        goto label_25248c;
    }
    ctx->pc = 0x252484u;
    {
        const bool branch_taken_0x252484 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x252484) {
            ctx->pc = 0x252488u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
            ctx->pc = 0x25249Cu;
            goto label_25249c;
        }
    }
    ctx->pc = 0x25248Cu;
label_25248c:
    // 0x25248c: 0x86620030
    ctx->pc = 0x25248cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_252490:
    // 0x252490: 0x44820000
    ctx->pc = 0x252490u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_252494:
    // 0x252494: 0x46800020
    ctx->pc = 0x252494u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_252498:
    // 0x252498: 0xe62000f0
    ctx->pc = 0x252498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_25249c:
    // 0x25249c: 0xc62100f0
    ctx->pc = 0x25249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2524a0:
    // 0x2524a0: 0x44800000
    ctx->pc = 0x2524a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2524a4:
    // 0x2524a4: 0x46000832
    ctx->pc = 0x2524a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2524a8:
    // 0x2524a8: 0x45000006
label_2524ac:
    if (ctx->pc == 0x2524ACu) {
        ctx->pc = 0x2524B0u;
        goto label_2524b0;
    }
    ctx->pc = 0x2524A8u;
    {
        const bool branch_taken_0x2524a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2524a8) {
            ctx->pc = 0x2524C4u;
            goto label_2524c4;
        }
    }
    ctx->pc = 0x2524B0u;
label_2524b0:
    // 0x2524b0: 0x8e220000
    ctx->pc = 0x2524b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2524b4:
    // 0x2524b4: 0x84420040
    ctx->pc = 0x2524b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_2524b8:
    // 0x2524b8: 0x44820000
    ctx->pc = 0x2524b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2524bc:
    // 0x2524bc: 0x46800020
    ctx->pc = 0x2524bcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2524c0:
    // 0x2524c0: 0xe62000f0
    ctx->pc = 0x2524c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_2524c4:
    // 0x2524c4: 0x52600003
label_2524c8:
    if (ctx->pc == 0x2524C8u) {
        ctx->pc = 0x2524C8u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2524CCu;
        goto label_2524cc;
    }
    ctx->pc = 0x2524C4u;
    {
        const bool branch_taken_0x2524c4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2524c4) {
            ctx->pc = 0x2524C8u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2524D4u;
            goto label_2524d4;
        }
    }
    ctx->pc = 0x2524CCu;
label_2524cc:
    // 0x2524cc: 0x96620032
    ctx->pc = 0x2524ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_2524d0:
    // 0x2524d0: 0xa62200f4
    ctx->pc = 0x2524d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 2));
label_2524d4:
    // 0x2524d4: 0x862300f4
    ctx->pc = 0x2524d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 244)));
label_2524d8:
    // 0x2524d8: 0x10600005
label_2524dc:
    if (ctx->pc == 0x2524DCu) {
        ctx->pc = 0x2524DCu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->pc = 0x2524E0u;
        goto label_2524e0;
    }
    ctx->pc = 0x2524D8u;
    {
        const bool branch_taken_0x2524d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2524DCu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        if (branch_taken_0x2524d8) {
            ctx->pc = 0x2524F0u;
            goto label_2524f0;
        }
    }
    ctx->pc = 0x2524E0u;
label_2524e0:
    // 0x2524e0: 0x8e240000
    ctx->pc = 0x2524e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2524e4:
    // 0x2524e4: 0x31040
    ctx->pc = 0x2524e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_2524e8:
    // 0x2524e8: 0x431021
    ctx->pc = 0x2524e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2524ec:
    // 0x2524ec: 0xa4820048
    ctx->pc = 0x2524ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 2));
label_2524f0:
    // 0x2524f0: 0x3c100034
    ctx->pc = 0x2524f0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
label_2524f4:
    // 0x2524f4: 0x8e03e7c8
    ctx->pc = 0x2524f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294961096)));
label_2524f8:
    // 0x2524f8: 0xc62000f0
    ctx->pc = 0x2524f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2524fc:
    // 0x2524fc: 0xc46100dc
    ctx->pc = 0x2524fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_252500:
    // 0x252500: 0x46010002
    ctx->pc = 0x252500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_252504:
    // 0x252504: 0xe62000f0
    ctx->pc = 0x252504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_252508:
    // 0x252508: 0x862200e4
    ctx->pc = 0x252508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_25250c:
    // 0x25250c: 0x44820000
    ctx->pc = 0x25250cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_252510:
    // 0x252510: 0x46800020
    ctx->pc = 0x252510u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_252514:
    // 0x252514: 0xc46100cc
    ctx->pc = 0x252514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_252518:
    // 0x252518: 0x46010002
    ctx->pc = 0x252518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25251c:
    // 0x25251c: 0x46000064
    ctx->pc = 0x25251cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_252520:
    // 0x252520: 0x44020800
    ctx->pc = 0x252520u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_252524:
    // 0x252524: 0xa62200e4
    ctx->pc = 0x252524u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
label_252528:
    // 0x252528: 0x86440048
    ctx->pc = 0x252528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 72)));
label_25252c:
    // 0x25252c: 0x42040
    ctx->pc = 0x25252cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
label_252530:
    // 0x252530: 0xc0944c2
label_252534:
    if (ctx->pc == 0x252534u) {
        ctx->pc = 0x252534u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x252538u;
        goto label_252538;
    }
    ctx->pc = 0x252530u;
    SET_GPR_U32(ctx, 31, 0x252538u);
    ctx->pc = 0x252534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251308u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetActiveTime_0x251308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252538u; }
    }
    if (ctx->pc != 0x252538u) { return; }
    ctx->pc = 0x252538u;
label_252538:
    // 0x252538: 0x44820000
    ctx->pc = 0x252538u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_25253c:
    // 0x25253c: 0x46800020
    ctx->pc = 0x25253cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_252540:
    // 0x252540: 0x8e02e7c8
    ctx->pc = 0x252540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294961096)));
label_252544:
    // 0x252544: 0xc44100d8
    ctx->pc = 0x252544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_252548:
    // 0x252548: 0x46010002
    ctx->pc = 0x252548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25254c:
    // 0x25254c: 0x46000064
    ctx->pc = 0x25254cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_252550:
    // 0x252550: 0x44020800
    ctx->pc = 0x252550u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_252554:
    // 0x252554: 0x100000c5
label_252558:
    if (ctx->pc == 0x252558u) {
        ctx->pc = 0x252558u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 218), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x25255Cu;
        goto label_25255c;
    }
    ctx->pc = 0x252554u;
    {
        const bool branch_taken_0x252554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252558u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 218), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x252554) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x25255Cu;
label_25255c:
    // 0x25255c: 0x8e620030
    ctx->pc = 0x25255cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_252560:
    // 0x252560: 0x14400003
label_252564:
    if (ctx->pc == 0x252564u) {
        ctx->pc = 0x252564u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x252568u;
        goto label_252568;
    }
    ctx->pc = 0x252560u;
    {
        const bool branch_taken_0x252560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x252564u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x252560) {
            ctx->pc = 0x252570u;
            goto label_252570;
        }
    }
    ctx->pc = 0x252568u;
label_252568:
    // 0x252568: 0xc098956
label_25256c:
    if (ctx->pc == 0x25256Cu) {
        ctx->pc = 0x25256Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 52));
        ctx->pc = 0x252570u;
        goto label_252570;
    }
    ctx->pc = 0x252568u;
    SET_GPR_U32(ctx, 31, 0x252570u);
    ctx->pc = 0x25256Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 52));
    ctx->pc = 0x262558u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWave_0x262558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252570u; }
    }
    if (ctx->pc != 0x252570u) { return; }
    ctx->pc = 0x252570u;
label_252570:
    // 0x252570: 0xa62200f0
    ctx->pc = 0x252570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_252574:
    // 0x252574: 0xae2000f4
    ctx->pc = 0x252574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_252578:
    // 0x252578: 0x962200d8
    ctx->pc = 0x252578u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_25257c:
    // 0x25257c: 0x3042fffe
    ctx->pc = 0x25257cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65534));
label_252580:
    // 0x252580: 0x34420040
    ctx->pc = 0x252580u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
label_252584:
    // 0x252584: 0x100000b9
label_252588:
    if (ctx->pc == 0x252588u) {
        ctx->pc = 0x252588u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x25258Cu;
        goto label_25258c;
    }
    ctx->pc = 0x252584u;
    {
        const bool branch_taken_0x252584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252588u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x252584) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x25258Cu;
label_25258c:
    // 0x25258c: 0x12600002
label_252590:
    if (ctx->pc == 0x252590u) {
        ctx->pc = 0x252590u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x252594u;
        goto label_252594;
    }
    ctx->pc = 0x25258Cu;
    {
        const bool branch_taken_0x25258c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x252590u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25258c) {
            ctx->pc = 0x252598u;
            goto label_252598;
        }
    }
    ctx->pc = 0x252594u;
label_252594:
    // 0x252594: 0x8e620030
    ctx->pc = 0x252594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_252598:
    // 0x252598: 0xae2200f0
    ctx->pc = 0x252598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_25259c:
    // 0x25259c: 0x12600002
label_2525a0:
    if (ctx->pc == 0x2525A0u) {
        ctx->pc = 0x2525A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2525A4u;
        goto label_2525a4;
    }
    ctx->pc = 0x25259Cu;
    {
        const bool branch_taken_0x25259c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2525A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25259c) {
            ctx->pc = 0x2525A8u;
            goto label_2525a8;
        }
    }
    ctx->pc = 0x2525A4u;
label_2525a4:
    // 0x2525a4: 0x8e620034
    ctx->pc = 0x2525a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_2525a8:
    // 0x2525a8: 0xae2200f4
    ctx->pc = 0x2525a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_2525ac:
    // 0x2525ac: 0x100000af
label_2525b0:
    if (ctx->pc == 0x2525B0u) {
        ctx->pc = 0x2525B0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
        ctx->pc = 0x2525B4u;
        goto label_2525b4;
    }
    ctx->pc = 0x2525ACu;
    {
        const bool branch_taken_0x2525ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2525B0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
        if (branch_taken_0x2525ac) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x2525B4u;
label_2525b4:
    // 0x2525b4: 0x52600003
label_2525b8:
    if (ctx->pc == 0x2525B8u) {
        ctx->pc = 0x2525B8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->pc = 0x2525BCu;
        goto label_2525bc;
    }
    ctx->pc = 0x2525B4u;
    {
        const bool branch_taken_0x2525b4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2525b4) {
            ctx->pc = 0x2525B8u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
            ctx->pc = 0x2525C4u;
            goto label_2525c4;
        }
    }
    ctx->pc = 0x2525BCu;
label_2525bc:
    // 0x2525bc: 0xc6600030
    ctx->pc = 0x2525bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2525c0:
    // 0x2525c0: 0xe62000f0
    ctx->pc = 0x2525c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_2525c4:
    // 0x2525c4: 0x52600003
label_2525c8:
    if (ctx->pc == 0x2525C8u) {
        ctx->pc = 0x2525C8u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 252), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2525CCu;
        goto label_2525cc;
    }
    ctx->pc = 0x2525C4u;
    {
        const bool branch_taken_0x2525c4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2525c4) {
            ctx->pc = 0x2525C8u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 252), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2525D4u;
            goto label_2525d4;
        }
    }
    ctx->pc = 0x2525CCu;
label_2525cc:
    // 0x2525cc: 0x96620034
    ctx->pc = 0x2525ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
label_2525d0:
    // 0x2525d0: 0xa62200fc
    ctx->pc = 0x2525d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 252), (uint16_t)GPR_U32(ctx, 2));
label_2525d4:
    // 0x2525d4: 0x1260001d
label_2525d8:
    if (ctx->pc == 0x2525D8u) {
        ctx->pc = 0x2525D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2525DCu;
        goto label_2525dc;
    }
    ctx->pc = 0x2525D4u;
    {
        const bool branch_taken_0x2525d4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2525D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2525d4) {
            ctx->pc = 0x25264Cu;
            goto label_25264c;
        }
    }
    ctx->pc = 0x2525DCu;
label_2525dc:
    // 0x2525dc: 0x862200fc
    ctx->pc = 0x2525dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 252)));
label_2525e0:
    // 0x2525e0: 0x1440001a
label_2525e4:
    if (ctx->pc == 0x2525E4u) {
        ctx->pc = 0x2525E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2525E8u;
        goto label_2525e8;
    }
    ctx->pc = 0x2525E0u;
    {
        const bool branch_taken_0x2525e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2525E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2525e0) {
            ctx->pc = 0x25264Cu;
            goto label_25264c;
        }
    }
    ctx->pc = 0x2525E8u;
label_2525e8:
    // 0x2525e8: 0x802d
    ctx->pc = 0x2525e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2525ec:
    // 0x2525ec: 0x26720008
    ctx->pc = 0x2525ecu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 8));
label_2525f0:
    // 0x2525f0: 0x3c02003c
    ctx->pc = 0x2525f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2525f4:
    // 0x2525f4: 0x1000000a
label_2525f8:
    if (ctx->pc == 0x2525F8u) {
        ctx->pc = 0x2525F8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294944641));
        ctx->pc = 0x2525FCu;
        goto label_2525fc;
    }
    ctx->pc = 0x2525F4u;
    {
        const bool branch_taken_0x2525f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2525F8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294944641));
        if (branch_taken_0x2525f4) {
            ctx->pc = 0x252620u;
            goto label_252620;
        }
    }
    ctx->pc = 0x2525FCu;
label_2525fc:
    // 0x2525fc: 0x0
    ctx->pc = 0x2525fcu;
    // NOP
label_252600:
    // 0x252600: 0x80a40000
    ctx->pc = 0x252600u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_252604:
    // 0x252604: 0x941021
    ctx->pc = 0x252604u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_252608:
    // 0x252608: 0x90420000
    ctx->pc = 0x252608u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_25260c:
    // 0x25260c: 0x30420002
    ctx->pc = 0x25260cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_252610:
    // 0x252610: 0x2483ffe0
    ctx->pc = 0x252610u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
label_252614:
    // 0x252614: 0x62200b
    ctx->pc = 0x252614u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_252618:
    // 0x252618: 0xa0a40000
    ctx->pc = 0x252618u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_25261c:
    // 0x25261c: 0x26100001
    ctx->pc = 0x25261cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_252620:
    // 0x252620: 0xc0bf306
label_252624:
    if (ctx->pc == 0x252624u) {
        ctx->pc = 0x252624u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x252628u;
        goto label_252628;
    }
    ctx->pc = 0x252620u;
    SET_GPR_U32(ctx, 31, 0x252628u);
    ctx->pc = 0x252624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 8));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252628u; }
    }
    if (ctx->pc != 0x252628u) { return; }
    ctx->pc = 0x252628u;
label_252628:
    // 0x252628: 0x202102b
    ctx->pc = 0x252628u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25262c:
    // 0x25262c: 0x1440fff4
label_252630:
    if (ctx->pc == 0x252630u) {
        ctx->pc = 0x252630u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->pc = 0x252634u;
        goto label_252634;
    }
    ctx->pc = 0x25262Cu;
    {
        const bool branch_taken_0x25262c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x252630u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        if (branch_taken_0x25262c) {
            ctx->pc = 0x252600u;
            goto label_252600;
        }
    }
    ctx->pc = 0x252634u;
label_252634:
    // 0x252634: 0x26640008
    ctx->pc = 0x252634u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 8));
label_252638:
    // 0x252638: 0x24050010
    ctx->pc = 0x252638u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
label_25263c:
    // 0x25263c: 0xc088108
label_252640:
    if (ctx->pc == 0x252640u) {
        ctx->pc = 0x252640u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x252644u;
        goto label_252644;
    }
    ctx->pc = 0x25263Cu;
    SET_GPR_U32(ctx, 31, 0x252644u);
    ctx->pc = 0x252640u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252644u; }
    }
    if (ctx->pc != 0x252644u) { return; }
    ctx->pc = 0x252644u;
label_252644:
    // 0x252644: 0x10000002
label_252648:
    if (ctx->pc == 0x252648u) {
        ctx->pc = 0x252648u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->pc = 0x25264Cu;
        goto label_25264c;
    }
    ctx->pc = 0x252644u;
    {
        const bool branch_taken_0x252644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252648u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x252644) {
            ctx->pc = 0x252650u;
            goto label_252650;
        }
    }
    ctx->pc = 0x25264Cu;
label_25264c:
    // 0x25264c: 0xae2200f4
    ctx->pc = 0x25264cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_252650:
    // 0x252650: 0x12600004
label_252654:
    if (ctx->pc == 0x252654u) {
        ctx->pc = 0x252654u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 254), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x252658u;
        goto label_252658;
    }
    ctx->pc = 0x252650u;
    {
        const bool branch_taken_0x252650 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x252654u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 254), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x252650) {
            ctx->pc = 0x252664u;
            goto label_252664;
        }
    }
    ctx->pc = 0x252658u;
label_252658:
    // 0x252658: 0x96620038
    ctx->pc = 0x252658u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_25265c:
    // 0x25265c: 0x10000002
label_252660:
    if (ctx->pc == 0x252660u) {
        ctx->pc = 0x252660u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x252664u;
        goto label_252664;
    }
    ctx->pc = 0x25265Cu;
    {
        const bool branch_taken_0x25265c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252660u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x25265c) {
            ctx->pc = 0x252668u;
            goto label_252668;
        }
    }
    ctx->pc = 0x252664u;
label_252664:
    // 0x252664: 0xa6200100
    ctx->pc = 0x252664u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 0));
label_252668:
    // 0x252668: 0x52600003
label_25266c:
    if (ctx->pc == 0x25266Cu) {
        ctx->pc = 0x25266Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x252670u;
        goto label_252670;
    }
    ctx->pc = 0x252668u;
    {
        const bool branch_taken_0x252668 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x252668) {
            ctx->pc = 0x25266Cu;
            WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x252678u;
            goto label_252678;
        }
    }
    ctx->pc = 0x252670u;
label_252670:
    // 0x252670: 0x9662003a
    ctx->pc = 0x252670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_252674:
    // 0x252674: 0xa6220102
    ctx->pc = 0x252674u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 2));
label_252678:
    // 0x252678: 0x8e240000
    ctx->pc = 0x252678u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25267c:
    // 0x25267c: 0x24840028
    ctx->pc = 0x25267cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
label_252680:
    // 0x252680: 0x26650008
    ctx->pc = 0x252680u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 8));
label_252684:
    // 0x252684: 0xc0bf42e
label_252688:
    if (ctx->pc == 0x252688u) {
        ctx->pc = 0x252688u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x25268Cu;
        goto label_25268c;
    }
    ctx->pc = 0x252684u;
    SET_GPR_U32(ctx, 31, 0x25268Cu);
    ctx->pc = 0x252688u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25268Cu; }
    }
    if (ctx->pc != 0x25268Cu) { return; }
    ctx->pc = 0x25268Cu;
label_25268c:
    // 0x25268c: 0x3c014120
    ctx->pc = 0x25268cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_252690:
    // 0x252690: 0x44816000
    ctx->pc = 0x252690u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_252694:
    // 0x252694: 0xc08735c
label_252698:
    if (ctx->pc == 0x252698u) {
        ctx->pc = 0x252698u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 48));
        ctx->pc = 0x25269Cu;
        goto label_25269c;
    }
    ctx->pc = 0x252694u;
    SET_GPR_U32(ctx, 31, 0x25269Cu);
    ctx->pc = 0x252698u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 48));
    ctx->pc = 0x21CD70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldAnimNode_0x21cd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25269Cu; }
    }
    if (ctx->pc != 0x25269Cu) { return; }
    ctx->pc = 0x25269Cu;
label_25269c:
    // 0x25269c: 0xae2200f8
    ctx->pc = 0x25269cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
label_2526a0:
    // 0x2526a0: 0x10000072
label_2526a4:
    if (ctx->pc == 0x2526A4u) {
        ctx->pc = 0x2526A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x2526A8u;
        goto label_2526a8;
    }
    ctx->pc = 0x2526A0u;
    {
        const bool branch_taken_0x2526a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2526A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        if (branch_taken_0x2526a0) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x2526A8u;
label_2526a8:
    // 0x2526a8: 0x52600003
label_2526ac:
    if (ctx->pc == 0x2526ACu) {
        ctx->pc = 0x2526ACu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2526B0u;
        goto label_2526b0;
    }
    ctx->pc = 0x2526A8u;
    {
        const bool branch_taken_0x2526a8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2526a8) {
            ctx->pc = 0x2526ACu;
            WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2526B8u;
            goto label_2526b8;
        }
    }
    ctx->pc = 0x2526B0u;
label_2526b0:
    // 0x2526b0: 0x96620030
    ctx->pc = 0x2526b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_2526b4:
    // 0x2526b4: 0xa62200f0
    ctx->pc = 0x2526b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_2526b8:
    // 0x2526b8: 0x12600002
label_2526bc:
    if (ctx->pc == 0x2526BCu) {
        ctx->pc = 0x2526BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2526C0u;
        goto label_2526c0;
    }
    ctx->pc = 0x2526B8u;
    {
        const bool branch_taken_0x2526b8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2526BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2526b8) {
            ctx->pc = 0x2526C4u;
            goto label_2526c4;
        }
    }
    ctx->pc = 0x2526C0u;
label_2526c0:
    // 0x2526c0: 0x96620032
    ctx->pc = 0x2526c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_2526c4:
    // 0x2526c4: 0xa62200f2
    ctx->pc = 0x2526c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 2));
label_2526c8:
    // 0x2526c8: 0x862200f0
    ctx->pc = 0x2526c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
label_2526cc:
    // 0x2526cc: 0x5c400005
label_2526d0:
    if (ctx->pc == 0x2526D0u) {
        ctx->pc = 0x2526D0u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x2526D4u;
        goto label_2526d4;
    }
    ctx->pc = 0x2526CCu;
    {
        const bool branch_taken_0x2526cc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2526cc) {
            ctx->pc = 0x2526D0u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->pc = 0x2526E4u;
            goto label_2526e4;
        }
    }
    ctx->pc = 0x2526D4u;
label_2526d4:
    // 0x2526d4: 0x8e220000
    ctx->pc = 0x2526d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2526d8:
    // 0x2526d8: 0x94420004
    ctx->pc = 0x2526d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2526dc:
    // 0x2526dc: 0xa62200f0
    ctx->pc = 0x2526dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_2526e0:
    // 0x2526e0: 0x862300f0
    ctx->pc = 0x2526e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
label_2526e4:
    // 0x2526e4: 0x28620036
    ctx->pc = 0x2526e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 54));
label_2526e8:
    // 0x2526e8: 0x1040000a
label_2526ec:
    if (ctx->pc == 0x2526ECu) {
        ctx->pc = 0x2526ECu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 51));
        ctx->pc = 0x2526F0u;
        goto label_2526f0;
    }
    ctx->pc = 0x2526E8u;
    {
        const bool branch_taken_0x2526e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2526ECu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 51));
        if (branch_taken_0x2526e8) {
            ctx->pc = 0x252714u;
            goto label_252714;
        }
    }
    ctx->pc = 0x2526F0u;
label_2526f0:
    // 0x2526f0: 0x10400005
label_2526f4:
    if (ctx->pc == 0x2526F4u) {
        ctx->pc = 0x2526F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2526F8u;
        goto label_2526f8;
    }
    ctx->pc = 0x2526F0u;
    {
        const bool branch_taken_0x2526f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2526F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
        if (branch_taken_0x2526f0) {
            ctx->pc = 0x252708u;
            goto label_252708;
        }
    }
    ctx->pc = 0x2526F8u;
label_2526f8:
    // 0x2526f8: 0x10620003
label_2526fc:
    if (ctx->pc == 0x2526FCu) {
        ctx->pc = 0x2526FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        ctx->pc = 0x252700u;
        goto label_252700;
    }
    ctx->pc = 0x2526F8u;
    {
        const bool branch_taken_0x2526f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2526FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x2526f8) {
            ctx->pc = 0x252708u;
            goto label_252708;
        }
    }
    ctx->pc = 0x252700u;
label_252700:
    // 0x252700: 0x54620005
label_252704:
    if (ctx->pc == 0x252704u) {
        ctx->pc = 0x252704u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x252708u;
        goto label_252708;
    }
    ctx->pc = 0x252700u;
    {
        const bool branch_taken_0x252700 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x252700) {
            ctx->pc = 0x252704u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->pc = 0x252718u;
            goto label_252718;
        }
    }
    ctx->pc = 0x252708u;
label_252708:
    // 0x252708: 0x962200d8
    ctx->pc = 0x252708u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_25270c:
    // 0x25270c: 0x34420040
    ctx->pc = 0x25270cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
label_252710:
    // 0x252710: 0xa62200d8
    ctx->pc = 0x252710u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_252714:
    // 0x252714: 0x862300f0
    ctx->pc = 0x252714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
label_252718:
    // 0x252718: 0x24020029
    ctx->pc = 0x252718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
label_25271c:
    // 0x25271c: 0x5462000e
label_252720:
    if (ctx->pc == 0x252720u) {
        ctx->pc = 0x252720u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x252724u;
        goto label_252724;
    }
    ctx->pc = 0x25271Cu;
    {
        const bool branch_taken_0x25271c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25271c) {
            ctx->pc = 0x252720u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x252758u;
            goto label_252758;
        }
    }
    ctx->pc = 0x252724u;
label_252724:
    // 0x252724: 0x962200e4
    ctx->pc = 0x252724u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_252728:
    // 0x252728: 0x962700f2
    ctx->pc = 0x252728u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
label_25272c:
    // 0x25272c: 0x471018
    ctx->pc = 0x25272cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_252730:
    // 0x252730: 0xa62200e4
    ctx->pc = 0x252730u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
label_252734:
    // 0x252734: 0x8e260000
    ctx->pc = 0x252734u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_252738:
    // 0x252738: 0x73c00
    ctx->pc = 0x252738u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
label_25273c:
    // 0x25273c: 0x3a0202d
    ctx->pc = 0x25273cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_252740:
    // 0x252740: 0x3c05003b
    ctx->pc = 0x252740u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_252744:
    // 0x252744: 0x24a587b0
    ctx->pc = 0x252744u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936496));
label_252748:
    // 0x252748: 0x24c60028
    ctx->pc = 0x252748u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 40));
label_25274c:
    // 0x25274c: 0xc0b6252
label_252750:
    if (ctx->pc == 0x252750u) {
        ctx->pc = 0x252750u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
        ctx->pc = 0x252754u;
        goto label_252754;
    }
    ctx->pc = 0x25274Cu;
    SET_GPR_U32(ctx, 31, 0x252754u);
    ctx->pc = 0x252750u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252754u; }
    }
    if (ctx->pc != 0x252754u) { return; }
    ctx->pc = 0x252754u;
label_252754:
    // 0x252754: 0xa62000f4
    ctx->pc = 0x252754u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 0));
label_252758:
    // 0x252758: 0xa62000f6
    ctx->pc = 0x252758u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 246), (uint16_t)GPR_U32(ctx, 0));
label_25275c:
    // 0x25275c: 0xae2000f8
    ctx->pc = 0x25275cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
label_252760:
    // 0x252760: 0xae2000fc
    ctx->pc = 0x252760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_252764:
    // 0x252764: 0x10000041
label_252768:
    if (ctx->pc == 0x252768u) {
        ctx->pc = 0x252768u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
        ctx->pc = 0x25276Cu;
        goto label_25276c;
    }
    ctx->pc = 0x252764u;
    {
        const bool branch_taken_0x252764 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252768u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
        if (branch_taken_0x252764) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x25276Cu;
label_25276c:
    // 0x25276c: 0x8e230000
    ctx->pc = 0x25276cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_252770:
    // 0x252770: 0x8c62003c
    ctx->pc = 0x252770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_252774:
    // 0x252774: 0xae2200f0
    ctx->pc = 0x252774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_252778:
    // 0x252778: 0x84620040
    ctx->pc = 0x252778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_25277c:
    // 0x25277c: 0xae2200f4
    ctx->pc = 0x25277cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_252780:
    // 0x252780: 0x8462004a
    ctx->pc = 0x252780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
label_252784:
    // 0x252784: 0x44820000
    ctx->pc = 0x252784u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_252788:
    // 0x252788: 0x46800020
    ctx->pc = 0x252788u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_25278c:
    // 0x25278c: 0xe62000f8
    ctx->pc = 0x25278cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
label_252790:
    // 0x252790: 0xae2000fc
    ctx->pc = 0x252790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_252794:
    // 0x252794: 0xa6200100
    ctx->pc = 0x252794u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 0));
label_252798:
    // 0x252798: 0x8c630004
    ctx->pc = 0x252798u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25279c:
    // 0x25279c: 0xafa30054
    ctx->pc = 0x25279cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_2527a0:
    // 0x2527a0: 0x2463fffe
    ctx->pc = 0x2527a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
label_2527a4:
    // 0x2527a4: 0x2c62000e
    ctx->pc = 0x2527a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
label_2527a8:
    // 0x2527a8: 0x10400030
label_2527ac:
    if (ctx->pc == 0x2527ACu) {
        ctx->pc = 0x2527ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2527B0u;
        goto label_2527b0;
    }
    ctx->pc = 0x2527A8u;
    {
        const bool branch_taken_0x2527a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2527ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2527a8) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x2527B0u;
label_2527b0:
    // 0x2527b0: 0x24428870
    ctx->pc = 0x2527b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936688));
label_2527b4:
    // 0x2527b4: 0x31880
    ctx->pc = 0x2527b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2527b8:
    // 0x2527b8: 0x621821
    ctx->pc = 0x2527b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2527bc:
    // 0x2527bc: 0x8c620000
    ctx->pc = 0x2527bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2527c0:
    // 0x2527c0: 0x400008
label_2527c4:
    if (ctx->pc == 0x2527C4u) {
        ctx->pc = 0x2527C8u;
        goto label_2527c8;
    }
    ctx->pc = 0x2527C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2518C0u: goto label_2518c0;
            case 0x2518C4u: goto label_2518c4;
            case 0x2518C8u: goto label_2518c8;
            case 0x2518CCu: goto label_2518cc;
            case 0x2518D0u: goto label_2518d0;
            case 0x2518D4u: goto label_2518d4;
            case 0x2518D8u: goto label_2518d8;
            case 0x2518DCu: goto label_2518dc;
            case 0x2518E0u: goto label_2518e0;
            case 0x2518E4u: goto label_2518e4;
            case 0x2518E8u: goto label_2518e8;
            case 0x2518ECu: goto label_2518ec;
            case 0x2518F0u: goto label_2518f0;
            case 0x2518F4u: goto label_2518f4;
            case 0x2518F8u: goto label_2518f8;
            case 0x2518FCu: goto label_2518fc;
            case 0x251900u: goto label_251900;
            case 0x251904u: goto label_251904;
            case 0x251908u: goto label_251908;
            case 0x25190Cu: goto label_25190c;
            case 0x251910u: goto label_251910;
            case 0x251914u: goto label_251914;
            case 0x251918u: goto label_251918;
            case 0x25191Cu: goto label_25191c;
            case 0x251920u: goto label_251920;
            case 0x251924u: goto label_251924;
            case 0x251928u: goto label_251928;
            case 0x25192Cu: goto label_25192c;
            case 0x251930u: goto label_251930;
            case 0x251934u: goto label_251934;
            case 0x251938u: goto label_251938;
            case 0x25193Cu: goto label_25193c;
            case 0x251940u: goto label_251940;
            case 0x251944u: goto label_251944;
            case 0x251948u: goto label_251948;
            case 0x25194Cu: goto label_25194c;
            case 0x251950u: goto label_251950;
            case 0x251954u: goto label_251954;
            case 0x251958u: goto label_251958;
            case 0x25195Cu: goto label_25195c;
            case 0x251960u: goto label_251960;
            case 0x251964u: goto label_251964;
            case 0x251968u: goto label_251968;
            case 0x25196Cu: goto label_25196c;
            case 0x251970u: goto label_251970;
            case 0x251974u: goto label_251974;
            case 0x251978u: goto label_251978;
            case 0x25197Cu: goto label_25197c;
            case 0x251980u: goto label_251980;
            case 0x251984u: goto label_251984;
            case 0x251988u: goto label_251988;
            case 0x25198Cu: goto label_25198c;
            case 0x251990u: goto label_251990;
            case 0x251994u: goto label_251994;
            case 0x251998u: goto label_251998;
            case 0x25199Cu: goto label_25199c;
            case 0x2519A0u: goto label_2519a0;
            case 0x2519A4u: goto label_2519a4;
            case 0x2519A8u: goto label_2519a8;
            case 0x2519ACu: goto label_2519ac;
            case 0x2519B0u: goto label_2519b0;
            case 0x2519B4u: goto label_2519b4;
            case 0x2519B8u: goto label_2519b8;
            case 0x2519BCu: goto label_2519bc;
            case 0x2519C0u: goto label_2519c0;
            case 0x2519C4u: goto label_2519c4;
            case 0x2519C8u: goto label_2519c8;
            case 0x2519CCu: goto label_2519cc;
            case 0x2519D0u: goto label_2519d0;
            case 0x2519D4u: goto label_2519d4;
            case 0x2519D8u: goto label_2519d8;
            case 0x2519DCu: goto label_2519dc;
            case 0x2519E0u: goto label_2519e0;
            case 0x2519E4u: goto label_2519e4;
            case 0x2519E8u: goto label_2519e8;
            case 0x2519ECu: goto label_2519ec;
            case 0x2519F0u: goto label_2519f0;
            case 0x2519F4u: goto label_2519f4;
            case 0x2519F8u: goto label_2519f8;
            case 0x2519FCu: goto label_2519fc;
            case 0x251A00u: goto label_251a00;
            case 0x251A04u: goto label_251a04;
            case 0x251A08u: goto label_251a08;
            case 0x251A0Cu: goto label_251a0c;
            case 0x251A10u: goto label_251a10;
            case 0x251A14u: goto label_251a14;
            case 0x251A18u: goto label_251a18;
            case 0x251A1Cu: goto label_251a1c;
            case 0x251A20u: goto label_251a20;
            case 0x251A24u: goto label_251a24;
            case 0x251A28u: goto label_251a28;
            case 0x251A2Cu: goto label_251a2c;
            case 0x251A30u: goto label_251a30;
            case 0x251A34u: goto label_251a34;
            case 0x251A38u: goto label_251a38;
            case 0x251A3Cu: goto label_251a3c;
            case 0x251A40u: goto label_251a40;
            case 0x251A44u: goto label_251a44;
            case 0x251A48u: goto label_251a48;
            case 0x251A4Cu: goto label_251a4c;
            case 0x251A50u: goto label_251a50;
            case 0x251A54u: goto label_251a54;
            case 0x251A58u: goto label_251a58;
            case 0x251A5Cu: goto label_251a5c;
            case 0x251A60u: goto label_251a60;
            case 0x251A64u: goto label_251a64;
            case 0x251A68u: goto label_251a68;
            case 0x251A6Cu: goto label_251a6c;
            case 0x251A70u: goto label_251a70;
            case 0x251A74u: goto label_251a74;
            case 0x251A78u: goto label_251a78;
            case 0x251A7Cu: goto label_251a7c;
            case 0x251A80u: goto label_251a80;
            case 0x251A84u: goto label_251a84;
            case 0x251A88u: goto label_251a88;
            case 0x251A8Cu: goto label_251a8c;
            case 0x251A90u: goto label_251a90;
            case 0x251A94u: goto label_251a94;
            case 0x251A98u: goto label_251a98;
            case 0x251A9Cu: goto label_251a9c;
            case 0x251AA0u: goto label_251aa0;
            case 0x251AA4u: goto label_251aa4;
            case 0x251AA8u: goto label_251aa8;
            case 0x251AACu: goto label_251aac;
            case 0x251AB0u: goto label_251ab0;
            case 0x251AB4u: goto label_251ab4;
            case 0x251AB8u: goto label_251ab8;
            case 0x251ABCu: goto label_251abc;
            case 0x251AC0u: goto label_251ac0;
            case 0x251AC4u: goto label_251ac4;
            case 0x251AC8u: goto label_251ac8;
            case 0x251ACCu: goto label_251acc;
            case 0x251AD0u: goto label_251ad0;
            case 0x251AD4u: goto label_251ad4;
            case 0x251AD8u: goto label_251ad8;
            case 0x251ADCu: goto label_251adc;
            case 0x251AE0u: goto label_251ae0;
            case 0x251AE4u: goto label_251ae4;
            case 0x251AE8u: goto label_251ae8;
            case 0x251AECu: goto label_251aec;
            case 0x251AF0u: goto label_251af0;
            case 0x251AF4u: goto label_251af4;
            case 0x251AF8u: goto label_251af8;
            case 0x251AFCu: goto label_251afc;
            case 0x251B00u: goto label_251b00;
            case 0x251B04u: goto label_251b04;
            case 0x251B08u: goto label_251b08;
            case 0x251B0Cu: goto label_251b0c;
            case 0x251B10u: goto label_251b10;
            case 0x251B14u: goto label_251b14;
            case 0x251B18u: goto label_251b18;
            case 0x251B1Cu: goto label_251b1c;
            case 0x251B20u: goto label_251b20;
            case 0x251B24u: goto label_251b24;
            case 0x251B28u: goto label_251b28;
            case 0x251B2Cu: goto label_251b2c;
            case 0x251B30u: goto label_251b30;
            case 0x251B34u: goto label_251b34;
            case 0x251B38u: goto label_251b38;
            case 0x251B3Cu: goto label_251b3c;
            case 0x251B40u: goto label_251b40;
            case 0x251B44u: goto label_251b44;
            case 0x251B48u: goto label_251b48;
            case 0x251B4Cu: goto label_251b4c;
            case 0x251B50u: goto label_251b50;
            case 0x251B54u: goto label_251b54;
            case 0x251B58u: goto label_251b58;
            case 0x251B5Cu: goto label_251b5c;
            case 0x251B60u: goto label_251b60;
            case 0x251B64u: goto label_251b64;
            case 0x251B68u: goto label_251b68;
            case 0x251B6Cu: goto label_251b6c;
            case 0x251B70u: goto label_251b70;
            case 0x251B74u: goto label_251b74;
            case 0x251B78u: goto label_251b78;
            case 0x251B7Cu: goto label_251b7c;
            case 0x251B80u: goto label_251b80;
            case 0x251B84u: goto label_251b84;
            case 0x251B88u: goto label_251b88;
            case 0x251B8Cu: goto label_251b8c;
            case 0x251B90u: goto label_251b90;
            case 0x251B94u: goto label_251b94;
            case 0x251B98u: goto label_251b98;
            case 0x251B9Cu: goto label_251b9c;
            case 0x251BA0u: goto label_251ba0;
            case 0x251BA4u: goto label_251ba4;
            case 0x251BA8u: goto label_251ba8;
            case 0x251BACu: goto label_251bac;
            case 0x251BB0u: goto label_251bb0;
            case 0x251BB4u: goto label_251bb4;
            case 0x251BB8u: goto label_251bb8;
            case 0x251BBCu: goto label_251bbc;
            case 0x251BC0u: goto label_251bc0;
            case 0x251BC4u: goto label_251bc4;
            case 0x251BC8u: goto label_251bc8;
            case 0x251BCCu: goto label_251bcc;
            case 0x251BD0u: goto label_251bd0;
            case 0x251BD4u: goto label_251bd4;
            case 0x251BD8u: goto label_251bd8;
            case 0x251BDCu: goto label_251bdc;
            case 0x251BE0u: goto label_251be0;
            case 0x251BE4u: goto label_251be4;
            case 0x251BE8u: goto label_251be8;
            case 0x251BECu: goto label_251bec;
            case 0x251BF0u: goto label_251bf0;
            case 0x251BF4u: goto label_251bf4;
            case 0x251BF8u: goto label_251bf8;
            case 0x251BFCu: goto label_251bfc;
            case 0x251C00u: goto label_251c00;
            case 0x251C04u: goto label_251c04;
            case 0x251C08u: goto label_251c08;
            case 0x251C0Cu: goto label_251c0c;
            case 0x251C10u: goto label_251c10;
            case 0x251C14u: goto label_251c14;
            case 0x251C18u: goto label_251c18;
            case 0x251C1Cu: goto label_251c1c;
            case 0x251C20u: goto label_251c20;
            case 0x251C24u: goto label_251c24;
            case 0x251C28u: goto label_251c28;
            case 0x251C2Cu: goto label_251c2c;
            case 0x251C30u: goto label_251c30;
            case 0x251C34u: goto label_251c34;
            case 0x251C38u: goto label_251c38;
            case 0x251C3Cu: goto label_251c3c;
            case 0x251C40u: goto label_251c40;
            case 0x251C44u: goto label_251c44;
            case 0x251C48u: goto label_251c48;
            case 0x251C4Cu: goto label_251c4c;
            case 0x251C50u: goto label_251c50;
            case 0x251C54u: goto label_251c54;
            case 0x251C58u: goto label_251c58;
            case 0x251C5Cu: goto label_251c5c;
            case 0x251C60u: goto label_251c60;
            case 0x251C64u: goto label_251c64;
            case 0x251C68u: goto label_251c68;
            case 0x251C6Cu: goto label_251c6c;
            case 0x251C70u: goto label_251c70;
            case 0x251C74u: goto label_251c74;
            case 0x251C78u: goto label_251c78;
            case 0x251C7Cu: goto label_251c7c;
            case 0x251C80u: goto label_251c80;
            case 0x251C84u: goto label_251c84;
            case 0x251C88u: goto label_251c88;
            case 0x251C8Cu: goto label_251c8c;
            case 0x251C90u: goto label_251c90;
            case 0x251C94u: goto label_251c94;
            case 0x251C98u: goto label_251c98;
            case 0x251C9Cu: goto label_251c9c;
            case 0x251CA0u: goto label_251ca0;
            case 0x251CA4u: goto label_251ca4;
            case 0x251CA8u: goto label_251ca8;
            case 0x251CACu: goto label_251cac;
            case 0x251CB0u: goto label_251cb0;
            case 0x251CB4u: goto label_251cb4;
            case 0x251CB8u: goto label_251cb8;
            case 0x251CBCu: goto label_251cbc;
            case 0x251CC0u: goto label_251cc0;
            case 0x251CC4u: goto label_251cc4;
            case 0x251CC8u: goto label_251cc8;
            case 0x251CCCu: goto label_251ccc;
            case 0x251CD0u: goto label_251cd0;
            case 0x251CD4u: goto label_251cd4;
            case 0x251CD8u: goto label_251cd8;
            case 0x251CDCu: goto label_251cdc;
            case 0x251CE0u: goto label_251ce0;
            case 0x251CE4u: goto label_251ce4;
            case 0x251CE8u: goto label_251ce8;
            case 0x251CECu: goto label_251cec;
            case 0x251CF0u: goto label_251cf0;
            case 0x251CF4u: goto label_251cf4;
            case 0x251CF8u: goto label_251cf8;
            case 0x251CFCu: goto label_251cfc;
            case 0x251D00u: goto label_251d00;
            case 0x251D04u: goto label_251d04;
            case 0x251D08u: goto label_251d08;
            case 0x251D0Cu: goto label_251d0c;
            case 0x251D10u: goto label_251d10;
            case 0x251D14u: goto label_251d14;
            case 0x251D18u: goto label_251d18;
            case 0x251D1Cu: goto label_251d1c;
            case 0x251D20u: goto label_251d20;
            case 0x251D24u: goto label_251d24;
            case 0x251D28u: goto label_251d28;
            case 0x251D2Cu: goto label_251d2c;
            case 0x251D30u: goto label_251d30;
            case 0x251D34u: goto label_251d34;
            case 0x251D38u: goto label_251d38;
            case 0x251D3Cu: goto label_251d3c;
            case 0x251D40u: goto label_251d40;
            case 0x251D44u: goto label_251d44;
            case 0x251D48u: goto label_251d48;
            case 0x251D4Cu: goto label_251d4c;
            case 0x251D50u: goto label_251d50;
            case 0x251D54u: goto label_251d54;
            case 0x251D58u: goto label_251d58;
            case 0x251D5Cu: goto label_251d5c;
            case 0x251D60u: goto label_251d60;
            case 0x251D64u: goto label_251d64;
            case 0x251D68u: goto label_251d68;
            case 0x251D6Cu: goto label_251d6c;
            case 0x251D70u: goto label_251d70;
            case 0x251D74u: goto label_251d74;
            case 0x251D78u: goto label_251d78;
            case 0x251D7Cu: goto label_251d7c;
            case 0x251D80u: goto label_251d80;
            case 0x251D84u: goto label_251d84;
            case 0x251D88u: goto label_251d88;
            case 0x251D8Cu: goto label_251d8c;
            case 0x251D90u: goto label_251d90;
            case 0x251D94u: goto label_251d94;
            case 0x251D98u: goto label_251d98;
            case 0x251D9Cu: goto label_251d9c;
            case 0x251DA0u: goto label_251da0;
            case 0x251DA4u: goto label_251da4;
            case 0x251DA8u: goto label_251da8;
            case 0x251DACu: goto label_251dac;
            case 0x251DB0u: goto label_251db0;
            case 0x251DB4u: goto label_251db4;
            case 0x251DB8u: goto label_251db8;
            case 0x251DBCu: goto label_251dbc;
            case 0x251DC0u: goto label_251dc0;
            case 0x251DC4u: goto label_251dc4;
            case 0x251DC8u: goto label_251dc8;
            case 0x251DCCu: goto label_251dcc;
            case 0x251DD0u: goto label_251dd0;
            case 0x251DD4u: goto label_251dd4;
            case 0x251DD8u: goto label_251dd8;
            case 0x251DDCu: goto label_251ddc;
            case 0x251DE0u: goto label_251de0;
            case 0x251DE4u: goto label_251de4;
            case 0x251DE8u: goto label_251de8;
            case 0x251DECu: goto label_251dec;
            case 0x251DF0u: goto label_251df0;
            case 0x251DF4u: goto label_251df4;
            case 0x251DF8u: goto label_251df8;
            case 0x251DFCu: goto label_251dfc;
            case 0x251E00u: goto label_251e00;
            case 0x251E04u: goto label_251e04;
            case 0x251E08u: goto label_251e08;
            case 0x251E0Cu: goto label_251e0c;
            case 0x251E10u: goto label_251e10;
            case 0x251E14u: goto label_251e14;
            case 0x251E18u: goto label_251e18;
            case 0x251E1Cu: goto label_251e1c;
            case 0x251E20u: goto label_251e20;
            case 0x251E24u: goto label_251e24;
            case 0x251E28u: goto label_251e28;
            case 0x251E2Cu: goto label_251e2c;
            case 0x251E30u: goto label_251e30;
            case 0x251E34u: goto label_251e34;
            case 0x251E38u: goto label_251e38;
            case 0x251E3Cu: goto label_251e3c;
            case 0x251E40u: goto label_251e40;
            case 0x251E44u: goto label_251e44;
            case 0x251E48u: goto label_251e48;
            case 0x251E4Cu: goto label_251e4c;
            case 0x251E50u: goto label_251e50;
            case 0x251E54u: goto label_251e54;
            case 0x251E58u: goto label_251e58;
            case 0x251E5Cu: goto label_251e5c;
            case 0x251E60u: goto label_251e60;
            case 0x251E64u: goto label_251e64;
            case 0x251E68u: goto label_251e68;
            case 0x251E6Cu: goto label_251e6c;
            case 0x251E70u: goto label_251e70;
            case 0x251E74u: goto label_251e74;
            case 0x251E78u: goto label_251e78;
            case 0x251E7Cu: goto label_251e7c;
            case 0x251E80u: goto label_251e80;
            case 0x251E84u: goto label_251e84;
            case 0x251E88u: goto label_251e88;
            case 0x251E8Cu: goto label_251e8c;
            case 0x251E90u: goto label_251e90;
            case 0x251E94u: goto label_251e94;
            case 0x251E98u: goto label_251e98;
            case 0x251E9Cu: goto label_251e9c;
            case 0x251EA0u: goto label_251ea0;
            case 0x251EA4u: goto label_251ea4;
            case 0x251EA8u: goto label_251ea8;
            case 0x251EACu: goto label_251eac;
            case 0x251EB0u: goto label_251eb0;
            case 0x251EB4u: goto label_251eb4;
            case 0x251EB8u: goto label_251eb8;
            case 0x251EBCu: goto label_251ebc;
            case 0x251EC0u: goto label_251ec0;
            case 0x251EC4u: goto label_251ec4;
            case 0x251EC8u: goto label_251ec8;
            case 0x251ECCu: goto label_251ecc;
            case 0x251ED0u: goto label_251ed0;
            case 0x251ED4u: goto label_251ed4;
            case 0x251ED8u: goto label_251ed8;
            case 0x251EDCu: goto label_251edc;
            case 0x251EE0u: goto label_251ee0;
            case 0x251EE4u: goto label_251ee4;
            case 0x251EE8u: goto label_251ee8;
            case 0x251EECu: goto label_251eec;
            case 0x251EF0u: goto label_251ef0;
            case 0x251EF4u: goto label_251ef4;
            case 0x251EF8u: goto label_251ef8;
            case 0x251EFCu: goto label_251efc;
            case 0x251F00u: goto label_251f00;
            case 0x251F04u: goto label_251f04;
            case 0x251F08u: goto label_251f08;
            case 0x251F0Cu: goto label_251f0c;
            case 0x251F10u: goto label_251f10;
            case 0x251F14u: goto label_251f14;
            case 0x251F18u: goto label_251f18;
            case 0x251F1Cu: goto label_251f1c;
            case 0x251F20u: goto label_251f20;
            case 0x251F24u: goto label_251f24;
            case 0x251F28u: goto label_251f28;
            case 0x251F2Cu: goto label_251f2c;
            case 0x251F30u: goto label_251f30;
            case 0x251F34u: goto label_251f34;
            case 0x251F38u: goto label_251f38;
            case 0x251F3Cu: goto label_251f3c;
            case 0x251F40u: goto label_251f40;
            case 0x251F44u: goto label_251f44;
            case 0x251F48u: goto label_251f48;
            case 0x251F4Cu: goto label_251f4c;
            case 0x251F50u: goto label_251f50;
            case 0x251F54u: goto label_251f54;
            case 0x251F58u: goto label_251f58;
            case 0x251F5Cu: goto label_251f5c;
            case 0x251F60u: goto label_251f60;
            case 0x251F64u: goto label_251f64;
            case 0x251F68u: goto label_251f68;
            case 0x251F6Cu: goto label_251f6c;
            case 0x251F70u: goto label_251f70;
            case 0x251F74u: goto label_251f74;
            case 0x251F78u: goto label_251f78;
            case 0x251F7Cu: goto label_251f7c;
            case 0x251F80u: goto label_251f80;
            case 0x251F84u: goto label_251f84;
            case 0x251F88u: goto label_251f88;
            case 0x251F8Cu: goto label_251f8c;
            case 0x251F90u: goto label_251f90;
            case 0x251F94u: goto label_251f94;
            case 0x251F98u: goto label_251f98;
            case 0x251F9Cu: goto label_251f9c;
            case 0x251FA0u: goto label_251fa0;
            case 0x251FA4u: goto label_251fa4;
            case 0x251FA8u: goto label_251fa8;
            case 0x251FACu: goto label_251fac;
            case 0x251FB0u: goto label_251fb0;
            case 0x251FB4u: goto label_251fb4;
            case 0x251FB8u: goto label_251fb8;
            case 0x251FBCu: goto label_251fbc;
            case 0x251FC0u: goto label_251fc0;
            case 0x251FC4u: goto label_251fc4;
            case 0x251FC8u: goto label_251fc8;
            case 0x251FCCu: goto label_251fcc;
            case 0x251FD0u: goto label_251fd0;
            case 0x251FD4u: goto label_251fd4;
            case 0x251FD8u: goto label_251fd8;
            case 0x251FDCu: goto label_251fdc;
            case 0x251FE0u: goto label_251fe0;
            case 0x251FE4u: goto label_251fe4;
            case 0x251FE8u: goto label_251fe8;
            case 0x251FECu: goto label_251fec;
            case 0x251FF0u: goto label_251ff0;
            case 0x251FF4u: goto label_251ff4;
            case 0x251FF8u: goto label_251ff8;
            case 0x251FFCu: goto label_251ffc;
            case 0x252000u: goto label_252000;
            case 0x252004u: goto label_252004;
            case 0x252008u: goto label_252008;
            case 0x25200Cu: goto label_25200c;
            case 0x252010u: goto label_252010;
            case 0x252014u: goto label_252014;
            case 0x252018u: goto label_252018;
            case 0x25201Cu: goto label_25201c;
            case 0x252020u: goto label_252020;
            case 0x252024u: goto label_252024;
            case 0x252028u: goto label_252028;
            case 0x25202Cu: goto label_25202c;
            case 0x252030u: goto label_252030;
            case 0x252034u: goto label_252034;
            case 0x252038u: goto label_252038;
            case 0x25203Cu: goto label_25203c;
            case 0x252040u: goto label_252040;
            case 0x252044u: goto label_252044;
            case 0x252048u: goto label_252048;
            case 0x25204Cu: goto label_25204c;
            case 0x252050u: goto label_252050;
            case 0x252054u: goto label_252054;
            case 0x252058u: goto label_252058;
            case 0x25205Cu: goto label_25205c;
            case 0x252060u: goto label_252060;
            case 0x252064u: goto label_252064;
            case 0x252068u: goto label_252068;
            case 0x25206Cu: goto label_25206c;
            case 0x252070u: goto label_252070;
            case 0x252074u: goto label_252074;
            case 0x252078u: goto label_252078;
            case 0x25207Cu: goto label_25207c;
            case 0x252080u: goto label_252080;
            case 0x252084u: goto label_252084;
            case 0x252088u: goto label_252088;
            case 0x25208Cu: goto label_25208c;
            case 0x252090u: goto label_252090;
            case 0x252094u: goto label_252094;
            case 0x252098u: goto label_252098;
            case 0x25209Cu: goto label_25209c;
            case 0x2520A0u: goto label_2520a0;
            case 0x2520A4u: goto label_2520a4;
            case 0x2520A8u: goto label_2520a8;
            case 0x2520ACu: goto label_2520ac;
            case 0x2520B0u: goto label_2520b0;
            case 0x2520B4u: goto label_2520b4;
            case 0x2520B8u: goto label_2520b8;
            case 0x2520BCu: goto label_2520bc;
            case 0x2520C0u: goto label_2520c0;
            case 0x2520C4u: goto label_2520c4;
            case 0x2520C8u: goto label_2520c8;
            case 0x2520CCu: goto label_2520cc;
            case 0x2520D0u: goto label_2520d0;
            case 0x2520D4u: goto label_2520d4;
            case 0x2520D8u: goto label_2520d8;
            case 0x2520DCu: goto label_2520dc;
            case 0x2520E0u: goto label_2520e0;
            case 0x2520E4u: goto label_2520e4;
            case 0x2520E8u: goto label_2520e8;
            case 0x2520ECu: goto label_2520ec;
            case 0x2520F0u: goto label_2520f0;
            case 0x2520F4u: goto label_2520f4;
            case 0x2520F8u: goto label_2520f8;
            case 0x2520FCu: goto label_2520fc;
            case 0x252100u: goto label_252100;
            case 0x252104u: goto label_252104;
            case 0x252108u: goto label_252108;
            case 0x25210Cu: goto label_25210c;
            case 0x252110u: goto label_252110;
            case 0x252114u: goto label_252114;
            case 0x252118u: goto label_252118;
            case 0x25211Cu: goto label_25211c;
            case 0x252120u: goto label_252120;
            case 0x252124u: goto label_252124;
            case 0x252128u: goto label_252128;
            case 0x25212Cu: goto label_25212c;
            case 0x252130u: goto label_252130;
            case 0x252134u: goto label_252134;
            case 0x252138u: goto label_252138;
            case 0x25213Cu: goto label_25213c;
            case 0x252140u: goto label_252140;
            case 0x252144u: goto label_252144;
            case 0x252148u: goto label_252148;
            case 0x25214Cu: goto label_25214c;
            case 0x252150u: goto label_252150;
            case 0x252154u: goto label_252154;
            case 0x252158u: goto label_252158;
            case 0x25215Cu: goto label_25215c;
            case 0x252160u: goto label_252160;
            case 0x252164u: goto label_252164;
            case 0x252168u: goto label_252168;
            case 0x25216Cu: goto label_25216c;
            case 0x252170u: goto label_252170;
            case 0x252174u: goto label_252174;
            case 0x252178u: goto label_252178;
            case 0x25217Cu: goto label_25217c;
            case 0x252180u: goto label_252180;
            case 0x252184u: goto label_252184;
            case 0x252188u: goto label_252188;
            case 0x25218Cu: goto label_25218c;
            case 0x252190u: goto label_252190;
            case 0x252194u: goto label_252194;
            case 0x252198u: goto label_252198;
            case 0x25219Cu: goto label_25219c;
            case 0x2521A0u: goto label_2521a0;
            case 0x2521A4u: goto label_2521a4;
            case 0x2521A8u: goto label_2521a8;
            case 0x2521ACu: goto label_2521ac;
            case 0x2521B0u: goto label_2521b0;
            case 0x2521B4u: goto label_2521b4;
            case 0x2521B8u: goto label_2521b8;
            case 0x2521BCu: goto label_2521bc;
            case 0x2521C0u: goto label_2521c0;
            case 0x2521C4u: goto label_2521c4;
            case 0x2521C8u: goto label_2521c8;
            case 0x2521CCu: goto label_2521cc;
            case 0x2521D0u: goto label_2521d0;
            case 0x2521D4u: goto label_2521d4;
            case 0x2521D8u: goto label_2521d8;
            case 0x2521DCu: goto label_2521dc;
            case 0x2521E0u: goto label_2521e0;
            case 0x2521E4u: goto label_2521e4;
            case 0x2521E8u: goto label_2521e8;
            case 0x2521ECu: goto label_2521ec;
            case 0x2521F0u: goto label_2521f0;
            case 0x2521F4u: goto label_2521f4;
            case 0x2521F8u: goto label_2521f8;
            case 0x2521FCu: goto label_2521fc;
            case 0x252200u: goto label_252200;
            case 0x252204u: goto label_252204;
            case 0x252208u: goto label_252208;
            case 0x25220Cu: goto label_25220c;
            case 0x252210u: goto label_252210;
            case 0x252214u: goto label_252214;
            case 0x252218u: goto label_252218;
            case 0x25221Cu: goto label_25221c;
            case 0x252220u: goto label_252220;
            case 0x252224u: goto label_252224;
            case 0x252228u: goto label_252228;
            case 0x25222Cu: goto label_25222c;
            case 0x252230u: goto label_252230;
            case 0x252234u: goto label_252234;
            case 0x252238u: goto label_252238;
            case 0x25223Cu: goto label_25223c;
            case 0x252240u: goto label_252240;
            case 0x252244u: goto label_252244;
            case 0x252248u: goto label_252248;
            case 0x25224Cu: goto label_25224c;
            case 0x252250u: goto label_252250;
            case 0x252254u: goto label_252254;
            case 0x252258u: goto label_252258;
            case 0x25225Cu: goto label_25225c;
            case 0x252260u: goto label_252260;
            case 0x252264u: goto label_252264;
            case 0x252268u: goto label_252268;
            case 0x25226Cu: goto label_25226c;
            case 0x252270u: goto label_252270;
            case 0x252274u: goto label_252274;
            case 0x252278u: goto label_252278;
            case 0x25227Cu: goto label_25227c;
            case 0x252280u: goto label_252280;
            case 0x252284u: goto label_252284;
            case 0x252288u: goto label_252288;
            case 0x25228Cu: goto label_25228c;
            case 0x252290u: goto label_252290;
            case 0x252294u: goto label_252294;
            case 0x252298u: goto label_252298;
            case 0x25229Cu: goto label_25229c;
            case 0x2522A0u: goto label_2522a0;
            case 0x2522A4u: goto label_2522a4;
            case 0x2522A8u: goto label_2522a8;
            case 0x2522ACu: goto label_2522ac;
            case 0x2522B0u: goto label_2522b0;
            case 0x2522B4u: goto label_2522b4;
            case 0x2522B8u: goto label_2522b8;
            case 0x2522BCu: goto label_2522bc;
            case 0x2522C0u: goto label_2522c0;
            case 0x2522C4u: goto label_2522c4;
            case 0x2522C8u: goto label_2522c8;
            case 0x2522CCu: goto label_2522cc;
            case 0x2522D0u: goto label_2522d0;
            case 0x2522D4u: goto label_2522d4;
            case 0x2522D8u: goto label_2522d8;
            case 0x2522DCu: goto label_2522dc;
            case 0x2522E0u: goto label_2522e0;
            case 0x2522E4u: goto label_2522e4;
            case 0x2522E8u: goto label_2522e8;
            case 0x2522ECu: goto label_2522ec;
            case 0x2522F0u: goto label_2522f0;
            case 0x2522F4u: goto label_2522f4;
            case 0x2522F8u: goto label_2522f8;
            case 0x2522FCu: goto label_2522fc;
            case 0x252300u: goto label_252300;
            case 0x252304u: goto label_252304;
            case 0x252308u: goto label_252308;
            case 0x25230Cu: goto label_25230c;
            case 0x252310u: goto label_252310;
            case 0x252314u: goto label_252314;
            case 0x252318u: goto label_252318;
            case 0x25231Cu: goto label_25231c;
            case 0x252320u: goto label_252320;
            case 0x252324u: goto label_252324;
            case 0x252328u: goto label_252328;
            case 0x25232Cu: goto label_25232c;
            case 0x252330u: goto label_252330;
            case 0x252334u: goto label_252334;
            case 0x252338u: goto label_252338;
            case 0x25233Cu: goto label_25233c;
            case 0x252340u: goto label_252340;
            case 0x252344u: goto label_252344;
            case 0x252348u: goto label_252348;
            case 0x25234Cu: goto label_25234c;
            case 0x252350u: goto label_252350;
            case 0x252354u: goto label_252354;
            case 0x252358u: goto label_252358;
            case 0x25235Cu: goto label_25235c;
            case 0x252360u: goto label_252360;
            case 0x252364u: goto label_252364;
            case 0x252368u: goto label_252368;
            case 0x25236Cu: goto label_25236c;
            case 0x252370u: goto label_252370;
            case 0x252374u: goto label_252374;
            case 0x252378u: goto label_252378;
            case 0x25237Cu: goto label_25237c;
            case 0x252380u: goto label_252380;
            case 0x252384u: goto label_252384;
            case 0x252388u: goto label_252388;
            case 0x25238Cu: goto label_25238c;
            case 0x252390u: goto label_252390;
            case 0x252394u: goto label_252394;
            case 0x252398u: goto label_252398;
            case 0x25239Cu: goto label_25239c;
            case 0x2523A0u: goto label_2523a0;
            case 0x2523A4u: goto label_2523a4;
            case 0x2523A8u: goto label_2523a8;
            case 0x2523ACu: goto label_2523ac;
            case 0x2523B0u: goto label_2523b0;
            case 0x2523B4u: goto label_2523b4;
            case 0x2523B8u: goto label_2523b8;
            case 0x2523BCu: goto label_2523bc;
            case 0x2523C0u: goto label_2523c0;
            case 0x2523C4u: goto label_2523c4;
            case 0x2523C8u: goto label_2523c8;
            case 0x2523CCu: goto label_2523cc;
            case 0x2523D0u: goto label_2523d0;
            case 0x2523D4u: goto label_2523d4;
            case 0x2523D8u: goto label_2523d8;
            case 0x2523DCu: goto label_2523dc;
            case 0x2523E0u: goto label_2523e0;
            case 0x2523E4u: goto label_2523e4;
            case 0x2523E8u: goto label_2523e8;
            case 0x2523ECu: goto label_2523ec;
            case 0x2523F0u: goto label_2523f0;
            case 0x2523F4u: goto label_2523f4;
            case 0x2523F8u: goto label_2523f8;
            case 0x2523FCu: goto label_2523fc;
            case 0x252400u: goto label_252400;
            case 0x252404u: goto label_252404;
            case 0x252408u: goto label_252408;
            case 0x25240Cu: goto label_25240c;
            case 0x252410u: goto label_252410;
            case 0x252414u: goto label_252414;
            case 0x252418u: goto label_252418;
            case 0x25241Cu: goto label_25241c;
            case 0x252420u: goto label_252420;
            case 0x252424u: goto label_252424;
            case 0x252428u: goto label_252428;
            case 0x25242Cu: goto label_25242c;
            case 0x252430u: goto label_252430;
            case 0x252434u: goto label_252434;
            case 0x252438u: goto label_252438;
            case 0x25243Cu: goto label_25243c;
            case 0x252440u: goto label_252440;
            case 0x252444u: goto label_252444;
            case 0x252448u: goto label_252448;
            case 0x25244Cu: goto label_25244c;
            case 0x252450u: goto label_252450;
            case 0x252454u: goto label_252454;
            case 0x252458u: goto label_252458;
            case 0x25245Cu: goto label_25245c;
            case 0x252460u: goto label_252460;
            case 0x252464u: goto label_252464;
            case 0x252468u: goto label_252468;
            case 0x25246Cu: goto label_25246c;
            case 0x252470u: goto label_252470;
            case 0x252474u: goto label_252474;
            case 0x252478u: goto label_252478;
            case 0x25247Cu: goto label_25247c;
            case 0x252480u: goto label_252480;
            case 0x252484u: goto label_252484;
            case 0x252488u: goto label_252488;
            case 0x25248Cu: goto label_25248c;
            case 0x252490u: goto label_252490;
            case 0x252494u: goto label_252494;
            case 0x252498u: goto label_252498;
            case 0x25249Cu: goto label_25249c;
            case 0x2524A0u: goto label_2524a0;
            case 0x2524A4u: goto label_2524a4;
            case 0x2524A8u: goto label_2524a8;
            case 0x2524ACu: goto label_2524ac;
            case 0x2524B0u: goto label_2524b0;
            case 0x2524B4u: goto label_2524b4;
            case 0x2524B8u: goto label_2524b8;
            case 0x2524BCu: goto label_2524bc;
            case 0x2524C0u: goto label_2524c0;
            case 0x2524C4u: goto label_2524c4;
            case 0x2524C8u: goto label_2524c8;
            case 0x2524CCu: goto label_2524cc;
            case 0x2524D0u: goto label_2524d0;
            case 0x2524D4u: goto label_2524d4;
            case 0x2524D8u: goto label_2524d8;
            case 0x2524DCu: goto label_2524dc;
            case 0x2524E0u: goto label_2524e0;
            case 0x2524E4u: goto label_2524e4;
            case 0x2524E8u: goto label_2524e8;
            case 0x2524ECu: goto label_2524ec;
            case 0x2524F0u: goto label_2524f0;
            case 0x2524F4u: goto label_2524f4;
            case 0x2524F8u: goto label_2524f8;
            case 0x2524FCu: goto label_2524fc;
            case 0x252500u: goto label_252500;
            case 0x252504u: goto label_252504;
            case 0x252508u: goto label_252508;
            case 0x25250Cu: goto label_25250c;
            case 0x252510u: goto label_252510;
            case 0x252514u: goto label_252514;
            case 0x252518u: goto label_252518;
            case 0x25251Cu: goto label_25251c;
            case 0x252520u: goto label_252520;
            case 0x252524u: goto label_252524;
            case 0x252528u: goto label_252528;
            case 0x25252Cu: goto label_25252c;
            case 0x252530u: goto label_252530;
            case 0x252534u: goto label_252534;
            case 0x252538u: goto label_252538;
            case 0x25253Cu: goto label_25253c;
            case 0x252540u: goto label_252540;
            case 0x252544u: goto label_252544;
            case 0x252548u: goto label_252548;
            case 0x25254Cu: goto label_25254c;
            case 0x252550u: goto label_252550;
            case 0x252554u: goto label_252554;
            case 0x252558u: goto label_252558;
            case 0x25255Cu: goto label_25255c;
            case 0x252560u: goto label_252560;
            case 0x252564u: goto label_252564;
            case 0x252568u: goto label_252568;
            case 0x25256Cu: goto label_25256c;
            case 0x252570u: goto label_252570;
            case 0x252574u: goto label_252574;
            case 0x252578u: goto label_252578;
            case 0x25257Cu: goto label_25257c;
            case 0x252580u: goto label_252580;
            case 0x252584u: goto label_252584;
            case 0x252588u: goto label_252588;
            case 0x25258Cu: goto label_25258c;
            case 0x252590u: goto label_252590;
            case 0x252594u: goto label_252594;
            case 0x252598u: goto label_252598;
            case 0x25259Cu: goto label_25259c;
            case 0x2525A0u: goto label_2525a0;
            case 0x2525A4u: goto label_2525a4;
            case 0x2525A8u: goto label_2525a8;
            case 0x2525ACu: goto label_2525ac;
            case 0x2525B0u: goto label_2525b0;
            case 0x2525B4u: goto label_2525b4;
            case 0x2525B8u: goto label_2525b8;
            case 0x2525BCu: goto label_2525bc;
            case 0x2525C0u: goto label_2525c0;
            case 0x2525C4u: goto label_2525c4;
            case 0x2525C8u: goto label_2525c8;
            case 0x2525CCu: goto label_2525cc;
            case 0x2525D0u: goto label_2525d0;
            case 0x2525D4u: goto label_2525d4;
            case 0x2525D8u: goto label_2525d8;
            case 0x2525DCu: goto label_2525dc;
            case 0x2525E0u: goto label_2525e0;
            case 0x2525E4u: goto label_2525e4;
            case 0x2525E8u: goto label_2525e8;
            case 0x2525ECu: goto label_2525ec;
            case 0x2525F0u: goto label_2525f0;
            case 0x2525F4u: goto label_2525f4;
            case 0x2525F8u: goto label_2525f8;
            case 0x2525FCu: goto label_2525fc;
            case 0x252600u: goto label_252600;
            case 0x252604u: goto label_252604;
            case 0x252608u: goto label_252608;
            case 0x25260Cu: goto label_25260c;
            case 0x252610u: goto label_252610;
            case 0x252614u: goto label_252614;
            case 0x252618u: goto label_252618;
            case 0x25261Cu: goto label_25261c;
            case 0x252620u: goto label_252620;
            case 0x252624u: goto label_252624;
            case 0x252628u: goto label_252628;
            case 0x25262Cu: goto label_25262c;
            case 0x252630u: goto label_252630;
            case 0x252634u: goto label_252634;
            case 0x252638u: goto label_252638;
            case 0x25263Cu: goto label_25263c;
            case 0x252640u: goto label_252640;
            case 0x252644u: goto label_252644;
            case 0x252648u: goto label_252648;
            case 0x25264Cu: goto label_25264c;
            case 0x252650u: goto label_252650;
            case 0x252654u: goto label_252654;
            case 0x252658u: goto label_252658;
            case 0x25265Cu: goto label_25265c;
            case 0x252660u: goto label_252660;
            case 0x252664u: goto label_252664;
            case 0x252668u: goto label_252668;
            case 0x25266Cu: goto label_25266c;
            case 0x252670u: goto label_252670;
            case 0x252674u: goto label_252674;
            case 0x252678u: goto label_252678;
            case 0x25267Cu: goto label_25267c;
            case 0x252680u: goto label_252680;
            case 0x252684u: goto label_252684;
            case 0x252688u: goto label_252688;
            case 0x25268Cu: goto label_25268c;
            case 0x252690u: goto label_252690;
            case 0x252694u: goto label_252694;
            case 0x252698u: goto label_252698;
            case 0x25269Cu: goto label_25269c;
            case 0x2526A0u: goto label_2526a0;
            case 0x2526A4u: goto label_2526a4;
            case 0x2526A8u: goto label_2526a8;
            case 0x2526ACu: goto label_2526ac;
            case 0x2526B0u: goto label_2526b0;
            case 0x2526B4u: goto label_2526b4;
            case 0x2526B8u: goto label_2526b8;
            case 0x2526BCu: goto label_2526bc;
            case 0x2526C0u: goto label_2526c0;
            case 0x2526C4u: goto label_2526c4;
            case 0x2526C8u: goto label_2526c8;
            case 0x2526CCu: goto label_2526cc;
            case 0x2526D0u: goto label_2526d0;
            case 0x2526D4u: goto label_2526d4;
            case 0x2526D8u: goto label_2526d8;
            case 0x2526DCu: goto label_2526dc;
            case 0x2526E0u: goto label_2526e0;
            case 0x2526E4u: goto label_2526e4;
            case 0x2526E8u: goto label_2526e8;
            case 0x2526ECu: goto label_2526ec;
            case 0x2526F0u: goto label_2526f0;
            case 0x2526F4u: goto label_2526f4;
            case 0x2526F8u: goto label_2526f8;
            case 0x2526FCu: goto label_2526fc;
            case 0x252700u: goto label_252700;
            case 0x252704u: goto label_252704;
            case 0x252708u: goto label_252708;
            case 0x25270Cu: goto label_25270c;
            case 0x252710u: goto label_252710;
            case 0x252714u: goto label_252714;
            case 0x252718u: goto label_252718;
            case 0x25271Cu: goto label_25271c;
            case 0x252720u: goto label_252720;
            case 0x252724u: goto label_252724;
            case 0x252728u: goto label_252728;
            case 0x25272Cu: goto label_25272c;
            case 0x252730u: goto label_252730;
            case 0x252734u: goto label_252734;
            case 0x252738u: goto label_252738;
            case 0x25273Cu: goto label_25273c;
            case 0x252740u: goto label_252740;
            case 0x252744u: goto label_252744;
            case 0x252748u: goto label_252748;
            case 0x25274Cu: goto label_25274c;
            case 0x252750u: goto label_252750;
            case 0x252754u: goto label_252754;
            case 0x252758u: goto label_252758;
            case 0x25275Cu: goto label_25275c;
            case 0x252760u: goto label_252760;
            case 0x252764u: goto label_252764;
            case 0x252768u: goto label_252768;
            case 0x25276Cu: goto label_25276c;
            case 0x252770u: goto label_252770;
            case 0x252774u: goto label_252774;
            case 0x252778u: goto label_252778;
            case 0x25277Cu: goto label_25277c;
            case 0x252780u: goto label_252780;
            case 0x252784u: goto label_252784;
            case 0x252788u: goto label_252788;
            case 0x25278Cu: goto label_25278c;
            case 0x252790u: goto label_252790;
            case 0x252794u: goto label_252794;
            case 0x252798u: goto label_252798;
            case 0x25279Cu: goto label_25279c;
            case 0x2527A0u: goto label_2527a0;
            case 0x2527A4u: goto label_2527a4;
            case 0x2527A8u: goto label_2527a8;
            case 0x2527ACu: goto label_2527ac;
            case 0x2527B0u: goto label_2527b0;
            case 0x2527B4u: goto label_2527b4;
            case 0x2527B8u: goto label_2527b8;
            case 0x2527BCu: goto label_2527bc;
            case 0x2527C0u: goto label_2527c0;
            case 0x2527C4u: goto label_2527c4;
            case 0x2527C8u: goto label_2527c8;
            case 0x2527CCu: goto label_2527cc;
            case 0x2527D0u: goto label_2527d0;
            case 0x2527D4u: goto label_2527d4;
            case 0x2527D8u: goto label_2527d8;
            case 0x2527DCu: goto label_2527dc;
            case 0x2527E0u: goto label_2527e0;
            case 0x2527E4u: goto label_2527e4;
            case 0x2527E8u: goto label_2527e8;
            case 0x2527ECu: goto label_2527ec;
            case 0x2527F0u: goto label_2527f0;
            case 0x2527F4u: goto label_2527f4;
            case 0x2527F8u: goto label_2527f8;
            case 0x2527FCu: goto label_2527fc;
            case 0x252800u: goto label_252800;
            case 0x252804u: goto label_252804;
            case 0x252808u: goto label_252808;
            case 0x25280Cu: goto label_25280c;
            case 0x252810u: goto label_252810;
            case 0x252814u: goto label_252814;
            case 0x252818u: goto label_252818;
            case 0x25281Cu: goto label_25281c;
            case 0x252820u: goto label_252820;
            case 0x252824u: goto label_252824;
            case 0x252828u: goto label_252828;
            case 0x25282Cu: goto label_25282c;
            case 0x252830u: goto label_252830;
            case 0x252834u: goto label_252834;
            case 0x252838u: goto label_252838;
            case 0x25283Cu: goto label_25283c;
            case 0x252840u: goto label_252840;
            case 0x252844u: goto label_252844;
            case 0x252848u: goto label_252848;
            case 0x25284Cu: goto label_25284c;
            case 0x252850u: goto label_252850;
            case 0x252854u: goto label_252854;
            case 0x252858u: goto label_252858;
            case 0x25285Cu: goto label_25285c;
            case 0x252860u: goto label_252860;
            case 0x252864u: goto label_252864;
            case 0x252868u: goto label_252868;
            case 0x25286Cu: goto label_25286c;
            case 0x252870u: goto label_252870;
            case 0x252874u: goto label_252874;
            case 0x252878u: goto label_252878;
            case 0x25287Cu: goto label_25287c;
            case 0x252880u: goto label_252880;
            case 0x252884u: goto label_252884;
            case 0x252888u: goto label_252888;
            case 0x25288Cu: goto label_25288c;
            case 0x252890u: goto label_252890;
            case 0x252894u: goto label_252894;
            case 0x252898u: goto label_252898;
            case 0x25289Cu: goto label_25289c;
            case 0x2528A0u: goto label_2528a0;
            case 0x2528A4u: goto label_2528a4;
            case 0x2528A8u: goto label_2528a8;
            case 0x2528ACu: goto label_2528ac;
            case 0x2528B0u: goto label_2528b0;
            case 0x2528B4u: goto label_2528b4;
            case 0x2528B8u: goto label_2528b8;
            case 0x2528BCu: goto label_2528bc;
            case 0x2528C0u: goto label_2528c0;
            case 0x2528C4u: goto label_2528c4;
            case 0x2528C8u: goto label_2528c8;
            case 0x2528CCu: goto label_2528cc;
            case 0x2528D0u: goto label_2528d0;
            case 0x2528D4u: goto label_2528d4;
            case 0x2528D8u: goto label_2528d8;
            case 0x2528DCu: goto label_2528dc;
            case 0x2528E0u: goto label_2528e0;
            case 0x2528E4u: goto label_2528e4;
            case 0x2528E8u: goto label_2528e8;
            case 0x2528ECu: goto label_2528ec;
            case 0x2528F0u: goto label_2528f0;
            case 0x2528F4u: goto label_2528f4;
            case 0x2528F8u: goto label_2528f8;
            case 0x2528FCu: goto label_2528fc;
            case 0x252900u: goto label_252900;
            case 0x252904u: goto label_252904;
            case 0x252908u: goto label_252908;
            case 0x25290Cu: goto label_25290c;
            case 0x252910u: goto label_252910;
            case 0x252914u: goto label_252914;
            case 0x252918u: goto label_252918;
            case 0x25291Cu: goto label_25291c;
            case 0x252920u: goto label_252920;
            case 0x252924u: goto label_252924;
            case 0x252928u: goto label_252928;
            case 0x25292Cu: goto label_25292c;
            case 0x252930u: goto label_252930;
            case 0x252934u: goto label_252934;
            case 0x252938u: goto label_252938;
            case 0x25293Cu: goto label_25293c;
            case 0x252940u: goto label_252940;
            case 0x252944u: goto label_252944;
            case 0x252948u: goto label_252948;
            case 0x25294Cu: goto label_25294c;
            case 0x252950u: goto label_252950;
            case 0x252954u: goto label_252954;
            case 0x252958u: goto label_252958;
            case 0x25295Cu: goto label_25295c;
            case 0x252960u: goto label_252960;
            case 0x252964u: goto label_252964;
            case 0x252968u: goto label_252968;
            case 0x25296Cu: goto label_25296c;
            case 0x252970u: goto label_252970;
            case 0x252974u: goto label_252974;
            case 0x252978u: goto label_252978;
            case 0x25297Cu: goto label_25297c;
            case 0x252980u: goto label_252980;
            case 0x252984u: goto label_252984;
            case 0x252988u: goto label_252988;
            case 0x25298Cu: goto label_25298c;
            case 0x252990u: goto label_252990;
            case 0x252994u: goto label_252994;
            case 0x252998u: goto label_252998;
            case 0x25299Cu: goto label_25299c;
            case 0x2529A0u: goto label_2529a0;
            case 0x2529A4u: goto label_2529a4;
            case 0x2529A8u: goto label_2529a8;
            case 0x2529ACu: goto label_2529ac;
            case 0x2529B0u: goto label_2529b0;
            case 0x2529B4u: goto label_2529b4;
            case 0x2529B8u: goto label_2529b8;
            case 0x2529BCu: goto label_2529bc;
            case 0x2529C0u: goto label_2529c0;
            case 0x2529C4u: goto label_2529c4;
            case 0x2529C8u: goto label_2529c8;
            case 0x2529CCu: goto label_2529cc;
            case 0x2529D0u: goto label_2529d0;
            case 0x2529D4u: goto label_2529d4;
            case 0x2529D8u: goto label_2529d8;
            case 0x2529DCu: goto label_2529dc;
            case 0x2529E0u: goto label_2529e0;
            case 0x2529E4u: goto label_2529e4;
            case 0x2529E8u: goto label_2529e8;
            case 0x2529ECu: goto label_2529ec;
            case 0x2529F0u: goto label_2529f0;
            case 0x2529F4u: goto label_2529f4;
            case 0x2529F8u: goto label_2529f8;
            case 0x2529FCu: goto label_2529fc;
            case 0x252A00u: goto label_252a00;
            case 0x252A04u: goto label_252a04;
            case 0x252A08u: goto label_252a08;
            case 0x252A0Cu: goto label_252a0c;
            case 0x252A10u: goto label_252a10;
            case 0x252A14u: goto label_252a14;
            case 0x252A18u: goto label_252a18;
            case 0x252A1Cu: goto label_252a1c;
            case 0x252A20u: goto label_252a20;
            case 0x252A24u: goto label_252a24;
            case 0x252A28u: goto label_252a28;
            case 0x252A2Cu: goto label_252a2c;
            case 0x252A30u: goto label_252a30;
            case 0x252A34u: goto label_252a34;
            case 0x252A38u: goto label_252a38;
            case 0x252A3Cu: goto label_252a3c;
            case 0x252A40u: goto label_252a40;
            case 0x252A44u: goto label_252a44;
            case 0x252A48u: goto label_252a48;
            case 0x252A4Cu: goto label_252a4c;
            case 0x252A50u: goto label_252a50;
            case 0x252A54u: goto label_252a54;
            case 0x252A58u: goto label_252a58;
            case 0x252A5Cu: goto label_252a5c;
            case 0x252A60u: goto label_252a60;
            case 0x252A64u: goto label_252a64;
            case 0x252A68u: goto label_252a68;
            case 0x252A6Cu: goto label_252a6c;
            case 0x252A70u: goto label_252a70;
            case 0x252A74u: goto label_252a74;
            case 0x252A78u: goto label_252a78;
            case 0x252A7Cu: goto label_252a7c;
            case 0x252A80u: goto label_252a80;
            case 0x252A84u: goto label_252a84;
            case 0x252A88u: goto label_252a88;
            case 0x252A8Cu: goto label_252a8c;
            case 0x252A90u: goto label_252a90;
            case 0x252A94u: goto label_252a94;
            case 0x252A98u: goto label_252a98;
            case 0x252A9Cu: goto label_252a9c;
            case 0x252AA0u: goto label_252aa0;
            case 0x252AA4u: goto label_252aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2527C8u;
label_2527c8:
    // 0x2527c8: 0x3c020034
    ctx->pc = 0x2527c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2527cc:
    // 0x2527cc: 0x2443d1c0
    ctx->pc = 0x2527ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294955456));
label_2527d0:
    // 0x2527d0: 0xc7c00030
    ctx->pc = 0x2527d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2527d4:
    // 0x2527d4: 0xe440d1c0
    ctx->pc = 0x2527d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955456), bits); }
label_2527d8:
    // 0x2527d8: 0xc7c00034
    ctx->pc = 0x2527d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2527dc:
    // 0x2527dc: 0xe4600004
    ctx->pc = 0x2527dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2527e0:
    // 0x2527e0: 0xc7c00038
    ctx->pc = 0x2527e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2527e4:
    // 0x2527e4: 0xe4600008
    ctx->pc = 0x2527e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2527e8:
    // 0x2527e8: 0x3c020034
    ctx->pc = 0x2527e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2527ec:
    // 0x2527ec: 0x1000001f
label_2527f0:
    if (ctx->pc == 0x2527F0u) {
        ctx->pc = 0x2527F0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955468), GPR_U32(ctx, 17));
        ctx->pc = 0x2527F4u;
        goto label_2527f4;
    }
    ctx->pc = 0x2527ECu;
    {
        const bool branch_taken_0x2527ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2527F0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955468), GPR_U32(ctx, 17));
        if (branch_taken_0x2527ec) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x2527F4u;
label_2527f4:
    // 0x2527f4: 0x5260001e
label_2527f8:
    if (ctx->pc == 0x2527F8u) {
        ctx->pc = 0x2527F8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x2527FCu;
        goto label_2527fc;
    }
    ctx->pc = 0x2527F4u;
    {
        const bool branch_taken_0x2527f4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2527f4) {
            ctx->pc = 0x2527F8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->pc = 0x252870u;
            goto label_252870;
        }
    }
    ctx->pc = 0x2527FCu;
label_2527fc:
    // 0x2527fc: 0x86620030
    ctx->pc = 0x2527fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_252800:
    // 0x252800: 0x1000001a
label_252804:
    if (ctx->pc == 0x252804u) {
        ctx->pc = 0x252804u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->pc = 0x252808u;
        goto label_252808;
    }
    ctx->pc = 0x252800u;
    {
        const bool branch_taken_0x252800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252804u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x252800) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x252808u;
label_252808:
    // 0x252808: 0x52600004
label_25280c:
    if (ctx->pc == 0x25280Cu) {
        ctx->pc = 0x25280Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->pc = 0x252810u;
        goto label_252810;
    }
    ctx->pc = 0x252808u;
    {
        const bool branch_taken_0x252808 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x252808) {
            ctx->pc = 0x25280Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 244)));
            ctx->pc = 0x25281Cu;
            goto label_25281c;
        }
    }
    ctx->pc = 0x252810u;
label_252810:
    // 0x252810: 0x86620030
    ctx->pc = 0x252810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_252814:
    // 0x252814: 0xae2200f4
    ctx->pc = 0x252814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_252818:
    // 0x252818: 0x8e2200f4
    ctx->pc = 0x252818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_25281c:
    // 0x25281c: 0x5c400014
label_252820:
    if (ctx->pc == 0x252820u) {
        ctx->pc = 0x252820u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x252824u;
        goto label_252824;
    }
    ctx->pc = 0x25281Cu;
    {
        const bool branch_taken_0x25281c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x25281c) {
            ctx->pc = 0x252820u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->pc = 0x252870u;
            goto label_252870;
        }
    }
    ctx->pc = 0x252824u;
label_252824:
    // 0x252824: 0x24020001
    ctx->pc = 0x252824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_252828:
    // 0x252828: 0x10000010
label_25282c:
    if (ctx->pc == 0x25282Cu) {
        ctx->pc = 0x25282Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->pc = 0x252830u;
        goto label_252830;
    }
    ctx->pc = 0x252828u;
    {
        const bool branch_taken_0x252828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25282Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x252828) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x252830u;
label_252830:
    // 0x252830: 0x3c020033
    ctx->pc = 0x252830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_252834:
    // 0x252834: 0x24424990
    ctx->pc = 0x252834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18832));
label_252838:
    // 0x252838: 0x8e2300f4
    ctx->pc = 0x252838u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_25283c:
    // 0x25283c: 0x31880
    ctx->pc = 0x25283cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_252840:
    // 0x252840: 0x621821
    ctx->pc = 0x252840u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_252844:
    // 0x252844: 0x8c620000
    ctx->pc = 0x252844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_252848:
    // 0x252848: 0x10000008
label_25284c:
    if (ctx->pc == 0x25284Cu) {
        ctx->pc = 0x25284Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->pc = 0x252850u;
        goto label_252850;
    }
    ctx->pc = 0x252848u;
    {
        const bool branch_taken_0x252848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25284Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x252848) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x252850u;
label_252850:
    // 0x252850: 0x3c020034
    ctx->pc = 0x252850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_252854:
    // 0x252854: 0x10000005
label_252858:
    if (ctx->pc == 0x252858u) {
        ctx->pc = 0x252858u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955472), GPR_U32(ctx, 17));
        ctx->pc = 0x25285Cu;
        goto label_25285c;
    }
    ctx->pc = 0x252854u;
    {
        const bool branch_taken_0x252854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252858u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955472), GPR_U32(ctx, 17));
        if (branch_taken_0x252854) {
            ctx->pc = 0x25286Cu;
            goto label_25286c;
        }
    }
    ctx->pc = 0x25285Cu;
label_25285c:
    // 0x25285c: 0x3c030034
    ctx->pc = 0x25285cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_252860:
    // 0x252860: 0x8c62e810
    ctx->pc = 0x252860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961168)));
label_252864:
    // 0x252864: 0x24420001
    ctx->pc = 0x252864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_252868:
    // 0x252868: 0xac62e810
    ctx->pc = 0x252868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961168), GPR_U32(ctx, 2));
label_25286c:
    // 0x25286c: 0x8e220080
    ctx->pc = 0x25286cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_252870:
    // 0x252870: 0x10400005
label_252874:
    if (ctx->pc == 0x252874u) {
        ctx->pc = 0x252874u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x252878u;
        goto label_252878;
    }
    ctx->pc = 0x252870u;
    {
        const bool branch_taken_0x252870 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x252874u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x252870) {
            ctx->pc = 0x252888u;
            goto label_252888;
        }
    }
    ctx->pc = 0x252878u;
label_252878:
    // 0x252878: 0xc08496c
label_25287c:
    if (ctx->pc == 0x25287Cu) {
        ctx->pc = 0x25287Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x252880u;
        goto label_252880;
    }
    ctx->pc = 0x252878u;
    SET_GPR_U32(ctx, 31, 0x252880u);
    ctx->pc = 0x25287Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 128));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252880u; }
    }
    if (ctx->pc != 0x252880u) { return; }
    ctx->pc = 0x252880u;
label_252880:
    // 0x252880: 0xae200080
    ctx->pc = 0x252880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_252884:
    // 0x252884: 0x8fa20058
    ctx->pc = 0x252884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_252888:
    // 0x252888: 0x50400013
label_25288c:
    if (ctx->pc == 0x25288Cu) {
        ctx->pc = 0x25288Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x252890u;
        goto label_252890;
    }
    ctx->pc = 0x252888u;
    {
        const bool branch_taken_0x252888 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x252888) {
            ctx->pc = 0x25288Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x2528D8u;
            goto label_2528d8;
        }
    }
    ctx->pc = 0x252890u;
label_252890:
    // 0x252890: 0x1260000b
label_252894:
    if (ctx->pc == 0x252894u) {
        ctx->pc = 0x252894u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x252898u;
        goto label_252898;
    }
    ctx->pc = 0x252890u;
    {
        const bool branch_taken_0x252890 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x252894u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x252890) {
            ctx->pc = 0x2528C0u;
            goto label_2528c0;
        }
    }
    ctx->pc = 0x252898u;
label_252898:
    // 0x252898: 0x92620003
    ctx->pc = 0x252898u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_25289c:
    // 0x25289c: 0x30420002
    ctx->pc = 0x25289cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_2528a0:
    // 0x2528a0: 0x5440000d
label_2528a4:
    if (ctx->pc == 0x2528A4u) {
        ctx->pc = 0x2528A4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x2528A8u;
        goto label_2528a8;
    }
    ctx->pc = 0x2528A0u;
    {
        const bool branch_taken_0x2528a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2528a0) {
            ctx->pc = 0x2528A4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x2528D8u;
            goto label_2528d8;
        }
    }
    ctx->pc = 0x2528A8u;
label_2528a8:
    // 0x2528a8: 0x12600005
label_2528ac:
    if (ctx->pc == 0x2528ACu) {
        ctx->pc = 0x2528ACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        ctx->pc = 0x2528B0u;
        goto label_2528b0;
    }
    ctx->pc = 0x2528A8u;
    {
        const bool branch_taken_0x2528a8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2528ACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        if (branch_taken_0x2528a8) {
            ctx->pc = 0x2528C0u;
            goto label_2528c0;
        }
    }
    ctx->pc = 0x2528B0u;
label_2528b0:
    // 0x2528b0: 0x92620003
    ctx->pc = 0x2528b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_2528b4:
    // 0x2528b4: 0x30420004
    ctx->pc = 0x2528b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_2528b8:
    // 0x2528b8: 0x60382d
    ctx->pc = 0x2528b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2528bc:
    // 0x2528bc: 0x2380a
    ctx->pc = 0x2528bcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 0));
label_2528c0:
    // 0x2528c0: 0x220202d
    ctx->pc = 0x2528c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2528c4:
    // 0x2528c4: 0x8fa5005c
    ctx->pc = 0x2528c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2528c8:
    // 0x2528c8: 0xc0945b4
label_2528cc:
    if (ctx->pc == 0x2528CCu) {
        ctx->pc = 0x2528CCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2528D0u;
        goto label_2528d0;
    }
    ctx->pc = 0x2528C8u;
    SET_GPR_U32(ctx, 31, 0x2528D0u);
    ctx->pc = 0x2528CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2516D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetItemGeo_0x2516d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2528D0u; }
    }
    if (ctx->pc != 0x2528D0u) { return; }
    ctx->pc = 0x2528D0u;
label_2528d0:
    // 0x2528d0: 0x1000000e
label_2528d4:
    if (ctx->pc == 0x2528D4u) {
        ctx->pc = 0x2528D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2528D8u;
        goto label_2528d8;
    }
    ctx->pc = 0x2528D0u;
    {
        const bool branch_taken_0x2528d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2528D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2528d0) {
            ctx->pc = 0x25290Cu;
            goto label_25290c;
        }
    }
    ctx->pc = 0x2528D8u;
label_2528d8:
    // 0x2528d8: 0x54400009
label_2528dc:
    if (ctx->pc == 0x2528DCu) {
        ctx->pc = 0x2528DCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x2528E0u;
        goto label_2528e0;
    }
    ctx->pc = 0x2528D8u;
    {
        const bool branch_taken_0x2528d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2528d8) {
            ctx->pc = 0x2528DCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x252900u;
            goto label_252900;
        }
    }
    ctx->pc = 0x2528E0u;
label_2528e0:
    // 0x2528e0: 0x3c020034
    ctx->pc = 0x2528e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2528e4:
    // 0x2528e4: 0x8c44cd9c
    ctx->pc = 0x2528e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954396)));
label_2528e8:
    // 0x2528e8: 0x3c05003a
    ctx->pc = 0x2528e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_2528ec:
    // 0x2528ec: 0x24a52550
    ctx->pc = 0x2528ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
label_2528f0:
    // 0x2528f0: 0xc0b3ec0
label_2528f4:
    if (ctx->pc == 0x2528F4u) {
        ctx->pc = 0x2528F4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2528F8u;
        goto label_2528f8;
    }
    ctx->pc = 0x2528F0u;
    SET_GPR_U32(ctx, 31, 0x2528F8u);
    ctx->pc = 0x2528F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2528F8u; }
    }
    if (ctx->pc != 0x2528F8u) { return; }
    ctx->pc = 0x2528F8u;
label_2528f8:
    // 0x2528f8: 0x10000003
label_2528fc:
    if (ctx->pc == 0x2528FCu) {
        ctx->pc = 0x2528FCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x252900u;
        goto label_252900;
    }
    ctx->pc = 0x2528F8u;
    {
        const bool branch_taken_0x2528f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2528FCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        if (branch_taken_0x2528f8) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252900u;
label_252900:
    // 0x252900: 0x24020001
    ctx->pc = 0x252900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_252904:
    // 0x252904: 0xa0620052
    ctx->pc = 0x252904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 82), (uint8_t)GPR_U32(ctx, 2));
label_252908:
    // 0x252908: 0x3c0202d
    ctx->pc = 0x252908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_25290c:
    // 0x25290c: 0xc0b5494
label_252910:
    if (ctx->pc == 0x252910u) {
        ctx->pc = 0x252910u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x252914u;
        goto label_252914;
    }
    ctx->pc = 0x25290Cu;
    SET_GPR_U32(ctx, 31, 0x252914u);
    ctx->pc = 0x252910u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252914u; }
    }
    if (ctx->pc != 0x252914u) { return; }
    ctx->pc = 0x252914u;
label_252914:
    // 0x252914: 0x3c0202d
    ctx->pc = 0x252914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_252918:
    // 0x252918: 0xc0b5494
label_25291c:
    if (ctx->pc == 0x25291Cu) {
        ctx->pc = 0x25291Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x252920u;
        goto label_252920;
    }
    ctx->pc = 0x252918u;
    SET_GPR_U32(ctx, 31, 0x252920u);
    ctx->pc = 0x25291Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252920u; }
    }
    if (ctx->pc != 0x252920u) { return; }
    ctx->pc = 0x252920u;
label_252920:
    // 0x252920: 0x822200e1
    ctx->pc = 0x252920u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 225)));
label_252924:
    // 0x252924: 0x10400004
label_252928:
    if (ctx->pc == 0x252928u) {
        ctx->pc = 0x252928u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25292Cu;
        goto label_25292c;
    }
    ctx->pc = 0x252924u;
    {
        const bool branch_taken_0x252924 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x252928u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x252924) {
            ctx->pc = 0x252938u;
            goto label_252938;
        }
    }
    ctx->pc = 0x25292Cu;
label_25292c:
    // 0x25292c: 0x8e240070
    ctx->pc = 0x25292cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_252930:
    // 0x252930: 0xc0b41b8
label_252934:
    if (ctx->pc == 0x252934u) {
        ctx->pc = 0x252934u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x252938u;
        goto label_252938;
    }
    ctx->pc = 0x252930u;
    SET_GPR_U32(ctx, 31, 0x252938u);
    ctx->pc = 0x252934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252938u; }
    }
    if (ctx->pc != 0x252938u) { return; }
    ctx->pc = 0x252938u;
label_252938:
    // 0x252938: 0x26300010
    ctx->pc = 0x252938u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
label_25293c:
    // 0x25293c: 0xc080ce2
label_252940:
    if (ctx->pc == 0x252940u) {
        ctx->pc = 0x252940u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x252944u;
        goto label_252944;
    }
    ctx->pc = 0x25293Cu;
    SET_GPR_U32(ctx, 31, 0x252944u);
    ctx->pc = 0x252940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252944u; }
    }
    if (ctx->pc != 0x252944u) { return; }
    ctx->pc = 0x252944u;
label_252944:
    // 0x252944: 0x262600c8
    ctx->pc = 0x252944u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 200));
label_252948:
    // 0x252948: 0x200202d
    ctx->pc = 0x252948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25294c:
    // 0x25294c: 0xc080cd4
label_252950:
    if (ctx->pc == 0x252950u) {
        ctx->pc = 0x252950u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x252954u;
        goto label_252954;
    }
    ctx->pc = 0x25294Cu;
    SET_GPR_U32(ctx, 31, 0x252954u);
    ctx->pc = 0x252950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203350u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjOffsets_0x203350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252954u; }
    }
    if (ctx->pc != 0x252954u) { return; }
    ctx->pc = 0x252954u;
label_252954:
    // 0x252954: 0x8e240070
    ctx->pc = 0x252954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_252958:
    // 0x252958: 0x3c0141a0
    ctx->pc = 0x252958u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
label_25295c:
    // 0x25295c: 0x44816000
    ctx->pc = 0x25295cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_252960:
    // 0x252960: 0xc0b40fc
label_252964:
    if (ctx->pc == 0x252964u) {
        ctx->pc = 0x252964u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x252968u;
        goto label_252968;
    }
    ctx->pc = 0x252960u;
    SET_GPR_U32(ctx, 31, 0x252968u);
    ctx->pc = 0x252964u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D03F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetZsortAdd_0x2d03f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252968u; }
    }
    if (ctx->pc != 0x252968u) { return; }
    ctx->pc = 0x252968u;
label_252968:
    // 0x252968: 0x24020002
    ctx->pc = 0x252968u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_25296c:
    // 0x25296c: 0x8fa30050
    ctx->pc = 0x25296cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_252970:
    // 0x252970: 0x1062000d
label_252974:
    if (ctx->pc == 0x252974u) {
        ctx->pc = 0x252974u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        ctx->pc = 0x252978u;
        goto label_252978;
    }
    ctx->pc = 0x252970u;
    {
        const bool branch_taken_0x252970 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x252974u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x252970) {
            ctx->pc = 0x2529A8u;
            goto label_2529a8;
        }
    }
    ctx->pc = 0x252978u;
label_252978:
    // 0x252978: 0x10400005
label_25297c:
    if (ctx->pc == 0x25297Cu) {
        ctx->pc = 0x25297Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x252980u;
        goto label_252980;
    }
    ctx->pc = 0x252978u;
    {
        const bool branch_taken_0x252978 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25297Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x252978) {
            ctx->pc = 0x252990u;
            goto label_252990;
        }
    }
    ctx->pc = 0x252980u;
label_252980:
    // 0x252980: 0x1062002a
label_252984:
    if (ctx->pc == 0x252984u) {
        ctx->pc = 0x252984u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x252988u;
        goto label_252988;
    }
    ctx->pc = 0x252980u;
    {
        const bool branch_taken_0x252980 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x252984u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x252980) {
            ctx->pc = 0x252A2Cu;
            goto label_252a2c;
        }
    }
    ctx->pc = 0x252988u;
label_252988:
    // 0x252988: 0x1000003d
label_25298c:
    if (ctx->pc == 0x25298Cu) {
        ctx->pc = 0x25298Cu;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x252990u;
        goto label_252990;
    }
    ctx->pc = 0x252988u;
    {
        const bool branch_taken_0x252988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25298Cu;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x252988) {
            ctx->pc = 0x252A80u;
            goto label_252a80;
        }
    }
    ctx->pc = 0x252990u;
label_252990:
    // 0x252990: 0x24020008
    ctx->pc = 0x252990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_252994:
    // 0x252994: 0x8fa40050
    ctx->pc = 0x252994u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_252998:
    // 0x252998: 0x10820020
label_25299c:
    if (ctx->pc == 0x25299Cu) {
        ctx->pc = 0x25299Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x2529A0u;
        goto label_2529a0;
    }
    ctx->pc = 0x252998u;
    {
        const bool branch_taken_0x252998 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x25299Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x252998) {
            ctx->pc = 0x252A1Cu;
            goto label_252a1c;
        }
    }
    ctx->pc = 0x2529A0u;
label_2529a0:
    // 0x2529a0: 0x10000037
label_2529a4:
    if (ctx->pc == 0x2529A4u) {
        ctx->pc = 0x2529A4u;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x2529A8u;
        goto label_2529a8;
    }
    ctx->pc = 0x2529A0u;
    {
        const bool branch_taken_0x2529a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2529A4u;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x2529a0) {
            ctx->pc = 0x252A80u;
            goto label_252a80;
        }
    }
    ctx->pc = 0x2529A8u;
label_2529a8:
    // 0x2529a8: 0x8e220080
    ctx->pc = 0x2529a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2529ac:
    // 0x2529ac: 0x10400032
label_2529b0:
    if (ctx->pc == 0x2529B0u) {
        ctx->pc = 0x2529B0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2529B4u;
        goto label_2529b4;
    }
    ctx->pc = 0x2529ACu;
    {
        const bool branch_taken_0x2529ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2529B0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2529ac) {
            ctx->pc = 0x252A78u;
            goto label_252a78;
        }
    }
    ctx->pc = 0x2529B4u;
label_2529b4:
    // 0x2529b4: 0x200202d
    ctx->pc = 0x2529b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2529b8:
    // 0x2529b8: 0x3c05003b
    ctx->pc = 0x2529b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_2529bc:
    // 0x2529bc: 0x24a587b8
    ctx->pc = 0x2529bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936504));
label_2529c0:
    // 0x2529c0: 0xc0b6252
label_2529c4:
    if (ctx->pc == 0x2529C4u) {
        ctx->pc = 0x2529C4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2529C8u;
        goto label_2529c8;
    }
    ctx->pc = 0x2529C0u;
    SET_GPR_U32(ctx, 31, 0x2529C8u);
    ctx->pc = 0x2529C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2529C8u; }
    }
    if (ctx->pc != 0x2529C8u) { return; }
    ctx->pc = 0x2529C8u;
label_2529c8:
    // 0x2529c8: 0x3c020034
    ctx->pc = 0x2529c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2529cc:
    // 0x2529cc: 0x200202d
    ctx->pc = 0x2529ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2529d0:
    // 0x2529d0: 0x8c45cdb0
    ctx->pc = 0x2529d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954416)));
label_2529d4:
    // 0x2529d4: 0xa0302d
    ctx->pc = 0x2529d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2529d8:
    // 0x2529d8: 0xc0b19fe
label_2529dc:
    if (ctx->pc == 0x2529DCu) {
        ctx->pc = 0x2529DCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2529E0u;
        goto label_2529e0;
    }
    ctx->pc = 0x2529D8u;
    SET_GPR_U32(ctx, 31, 0x2529E0u);
    ctx->pc = 0x2529DCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2529E0u; }
    }
    if (ctx->pc != 0x2529E0u) { return; }
    ctx->pc = 0x2529E0u;
label_2529e0:
    // 0x2529e0: 0x4400026
label_2529e4:
    if (ctx->pc == 0x2529E4u) {
        ctx->pc = 0x2529E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x2529E8u;
        goto label_2529e8;
    }
    ctx->pc = 0x2529E0u;
    {
        const bool branch_taken_0x2529e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2529E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x2529e0) {
            ctx->pc = 0x252A7Cu;
            goto label_252a7c;
        }
    }
    ctx->pc = 0x2529E8u;
label_2529e8:
    // 0x2529e8: 0x8e240080
    ctx->pc = 0x2529e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2529ec:
    // 0x2529ec: 0xc084982
label_2529f0:
    if (ctx->pc == 0x2529F0u) {
        ctx->pc = 0x2529F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2529F4u;
        goto label_2529f4;
    }
    ctx->pc = 0x2529ECu;
    SET_GPR_U32(ctx, 31, 0x2529F4u);
    ctx->pc = 0x2529F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212608u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindMbidxNode_0x212608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2529F4u; }
    }
    if (ctx->pc != 0x2529F4u) { return; }
    ctx->pc = 0x2529F4u;
label_2529f4:
    // 0x2529f4: 0x40202d
    ctx->pc = 0x2529f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2529f8:
    // 0x2529f8: 0x1080001f
label_2529fc:
    if (ctx->pc == 0x2529FCu) {
        ctx->pc = 0x2529FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x252A00u;
        goto label_252a00;
    }
    ctx->pc = 0x2529F8u;
    {
        const bool branch_taken_0x2529f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2529FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2529f8) {
            ctx->pc = 0x252A78u;
            goto label_252a78;
        }
    }
    ctx->pc = 0x252A00u;
label_252a00:
    // 0x252a00: 0x8c820000
    ctx->pc = 0x252a00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_252a04:
    // 0x252a04: 0xae2200f8
    ctx->pc = 0x252a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
label_252a08:
    // 0x252a08: 0x8c840000
    ctx->pc = 0x252a08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_252a0c:
    // 0x252a0c: 0xc0b41b8
label_252a10:
    if (ctx->pc == 0x252A10u) {
        ctx->pc = 0x252A10u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x252A14u;
        goto label_252a14;
    }
    ctx->pc = 0x252A0Cu;
    SET_GPR_U32(ctx, 31, 0x252A14u);
    ctx->pc = 0x252A10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252A14u; }
    }
    if (ctx->pc != 0x252A14u) { return; }
    ctx->pc = 0x252A14u;
label_252a14:
    // 0x252a14: 0x10000019
label_252a18:
    if (ctx->pc == 0x252A18u) {
        ctx->pc = 0x252A18u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x252A1Cu;
        goto label_252a1c;
    }
    ctx->pc = 0x252A14u;
    {
        const bool branch_taken_0x252a14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252A18u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x252a14) {
            ctx->pc = 0x252A7Cu;
            goto label_252a7c;
        }
    }
    ctx->pc = 0x252A1Cu;
label_252a1c:
    // 0x252a1c: 0x92220097
    ctx->pc = 0x252a1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 151)));
label_252a20:
    // 0x252a20: 0x34420004
    ctx->pc = 0x252a20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
label_252a24:
    // 0x252a24: 0x10000014
label_252a28:
    if (ctx->pc == 0x252A28u) {
        ctx->pc = 0x252A28u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 151), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x252A2Cu;
        goto label_252a2c;
    }
    ctx->pc = 0x252A24u;
    {
        const bool branch_taken_0x252a24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x252A28u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 151), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x252a24) {
            ctx->pc = 0x252A78u;
            goto label_252a78;
        }
    }
    ctx->pc = 0x252A2Cu;
label_252a2c:
    // 0x252a2c: 0x2402000f
    ctx->pc = 0x252a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
label_252a30:
    // 0x252a30: 0x8fa30054
    ctx->pc = 0x252a30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_252a34:
    // 0x252a34: 0x14620012
label_252a38:
    if (ctx->pc == 0x252A38u) {
        ctx->pc = 0x252A38u;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x252A3Cu;
        goto label_252a3c;
    }
    ctx->pc = 0x252A34u;
    {
        const bool branch_taken_0x252a34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x252A38u;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x252a34) {
            ctx->pc = 0x252A80u;
            goto label_252a80;
        }
    }
    ctx->pc = 0x252A3Cu;
label_252a3c:
    // 0x252a3c: 0x3c020034
    ctx->pc = 0x252a3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_252a40:
    // 0x252a40: 0x8c43e7f0
    ctx->pc = 0x252a40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_252a44:
    // 0x252a44: 0x2402000d
    ctx->pc = 0x252a44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_252a48:
    // 0x252a48: 0x1462000d
label_252a4c:
    if (ctx->pc == 0x252A4Cu) {
        ctx->pc = 0x252A50u;
        goto label_252a50;
    }
    ctx->pc = 0x252A48u;
    {
        const bool branch_taken_0x252a48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x252a48) {
            ctx->pc = 0x252A80u;
            goto label_252a80;
        }
    }
    ctx->pc = 0x252A50u;
label_252a50:
    // 0x252a50: 0x3c020034
    ctx->pc = 0x252a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_252a54:
    // 0x252a54: 0x8c42fbb8
    ctx->pc = 0x252a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966200)));
label_252a58:
    // 0x252a58: 0x10400007
label_252a5c:
    if (ctx->pc == 0x252A5Cu) {
        ctx->pc = 0x252A5Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x252A60u;
        goto label_252a60;
    }
    ctx->pc = 0x252A58u;
    {
        const bool branch_taken_0x252a58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x252A5Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x252a58) {
            ctx->pc = 0x252A78u;
            goto label_252a78;
        }
    }
    ctx->pc = 0x252A60u;
label_252a60:
    // 0x252a60: 0x962200d8
    ctx->pc = 0x252a60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_252a64:
    // 0x252a64: 0x34420800
    ctx->pc = 0x252a64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
label_252a68:
    // 0x252a68: 0xa62200d8
    ctx->pc = 0x252a68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_252a6c:
    // 0x252a6c: 0x8e240070
    ctx->pc = 0x252a6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_252a70:
    // 0x252a70: 0xc0b40c0
label_252a74:
    if (ctx->pc == 0x252A74u) {
        ctx->pc = 0x252A74u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x252A78u;
        goto label_252a78;
    }
    ctx->pc = 0x252A70u;
    SET_GPR_U32(ctx, 31, 0x252A78u);
    ctx->pc = 0x252A74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252A78u; }
    }
    if (ctx->pc != 0x252A78u) { return; }
    ctx->pc = 0x252A78u;
label_252a78:
    // 0x252a78: 0xdfbf00f0
    ctx->pc = 0x252a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_252a7c:
    // 0x252a7c: 0xdfbe00e0
    ctx->pc = 0x252a7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_252a80:
    // 0x252a80: 0xdfb700d0
    ctx->pc = 0x252a80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_252a84:
    // 0x252a84: 0xdfb600c0
    ctx->pc = 0x252a84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_252a88:
    // 0x252a88: 0xdfb500b0
    ctx->pc = 0x252a88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_252a8c:
    // 0x252a8c: 0xdfb400a0
    ctx->pc = 0x252a8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_252a90:
    // 0x252a90: 0xdfb30090
    ctx->pc = 0x252a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_252a94:
    // 0x252a94: 0xdfb20080
    ctx->pc = 0x252a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_252a98:
    // 0x252a98: 0xdfb10070
    ctx->pc = 0x252a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_252a9c:
    // 0x252a9c: 0xdfb00060
    ctx->pc = 0x252a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_252aa0:
    // 0x252aa0: 0x3e00008
label_252aa4:
    if (ctx->pc == 0x252AA4u) {
        ctx->pc = 0x252AA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x252AA8u;
        goto label_fallthrough_0x252aa0;
    }
    ctx->pc = 0x252AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252AA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2518C0u: goto label_2518c0;
            case 0x2518C4u: goto label_2518c4;
            case 0x2518C8u: goto label_2518c8;
            case 0x2518CCu: goto label_2518cc;
            case 0x2518D0u: goto label_2518d0;
            case 0x2518D4u: goto label_2518d4;
            case 0x2518D8u: goto label_2518d8;
            case 0x2518DCu: goto label_2518dc;
            case 0x2518E0u: goto label_2518e0;
            case 0x2518E4u: goto label_2518e4;
            case 0x2518E8u: goto label_2518e8;
            case 0x2518ECu: goto label_2518ec;
            case 0x2518F0u: goto label_2518f0;
            case 0x2518F4u: goto label_2518f4;
            case 0x2518F8u: goto label_2518f8;
            case 0x2518FCu: goto label_2518fc;
            case 0x251900u: goto label_251900;
            case 0x251904u: goto label_251904;
            case 0x251908u: goto label_251908;
            case 0x25190Cu: goto label_25190c;
            case 0x251910u: goto label_251910;
            case 0x251914u: goto label_251914;
            case 0x251918u: goto label_251918;
            case 0x25191Cu: goto label_25191c;
            case 0x251920u: goto label_251920;
            case 0x251924u: goto label_251924;
            case 0x251928u: goto label_251928;
            case 0x25192Cu: goto label_25192c;
            case 0x251930u: goto label_251930;
            case 0x251934u: goto label_251934;
            case 0x251938u: goto label_251938;
            case 0x25193Cu: goto label_25193c;
            case 0x251940u: goto label_251940;
            case 0x251944u: goto label_251944;
            case 0x251948u: goto label_251948;
            case 0x25194Cu: goto label_25194c;
            case 0x251950u: goto label_251950;
            case 0x251954u: goto label_251954;
            case 0x251958u: goto label_251958;
            case 0x25195Cu: goto label_25195c;
            case 0x251960u: goto label_251960;
            case 0x251964u: goto label_251964;
            case 0x251968u: goto label_251968;
            case 0x25196Cu: goto label_25196c;
            case 0x251970u: goto label_251970;
            case 0x251974u: goto label_251974;
            case 0x251978u: goto label_251978;
            case 0x25197Cu: goto label_25197c;
            case 0x251980u: goto label_251980;
            case 0x251984u: goto label_251984;
            case 0x251988u: goto label_251988;
            case 0x25198Cu: goto label_25198c;
            case 0x251990u: goto label_251990;
            case 0x251994u: goto label_251994;
            case 0x251998u: goto label_251998;
            case 0x25199Cu: goto label_25199c;
            case 0x2519A0u: goto label_2519a0;
            case 0x2519A4u: goto label_2519a4;
            case 0x2519A8u: goto label_2519a8;
            case 0x2519ACu: goto label_2519ac;
            case 0x2519B0u: goto label_2519b0;
            case 0x2519B4u: goto label_2519b4;
            case 0x2519B8u: goto label_2519b8;
            case 0x2519BCu: goto label_2519bc;
            case 0x2519C0u: goto label_2519c0;
            case 0x2519C4u: goto label_2519c4;
            case 0x2519C8u: goto label_2519c8;
            case 0x2519CCu: goto label_2519cc;
            case 0x2519D0u: goto label_2519d0;
            case 0x2519D4u: goto label_2519d4;
            case 0x2519D8u: goto label_2519d8;
            case 0x2519DCu: goto label_2519dc;
            case 0x2519E0u: goto label_2519e0;
            case 0x2519E4u: goto label_2519e4;
            case 0x2519E8u: goto label_2519e8;
            case 0x2519ECu: goto label_2519ec;
            case 0x2519F0u: goto label_2519f0;
            case 0x2519F4u: goto label_2519f4;
            case 0x2519F8u: goto label_2519f8;
            case 0x2519FCu: goto label_2519fc;
            case 0x251A00u: goto label_251a00;
            case 0x251A04u: goto label_251a04;
            case 0x251A08u: goto label_251a08;
            case 0x251A0Cu: goto label_251a0c;
            case 0x251A10u: goto label_251a10;
            case 0x251A14u: goto label_251a14;
            case 0x251A18u: goto label_251a18;
            case 0x251A1Cu: goto label_251a1c;
            case 0x251A20u: goto label_251a20;
            case 0x251A24u: goto label_251a24;
            case 0x251A28u: goto label_251a28;
            case 0x251A2Cu: goto label_251a2c;
            case 0x251A30u: goto label_251a30;
            case 0x251A34u: goto label_251a34;
            case 0x251A38u: goto label_251a38;
            case 0x251A3Cu: goto label_251a3c;
            case 0x251A40u: goto label_251a40;
            case 0x251A44u: goto label_251a44;
            case 0x251A48u: goto label_251a48;
            case 0x251A4Cu: goto label_251a4c;
            case 0x251A50u: goto label_251a50;
            case 0x251A54u: goto label_251a54;
            case 0x251A58u: goto label_251a58;
            case 0x251A5Cu: goto label_251a5c;
            case 0x251A60u: goto label_251a60;
            case 0x251A64u: goto label_251a64;
            case 0x251A68u: goto label_251a68;
            case 0x251A6Cu: goto label_251a6c;
            case 0x251A70u: goto label_251a70;
            case 0x251A74u: goto label_251a74;
            case 0x251A78u: goto label_251a78;
            case 0x251A7Cu: goto label_251a7c;
            case 0x251A80u: goto label_251a80;
            case 0x251A84u: goto label_251a84;
            case 0x251A88u: goto label_251a88;
            case 0x251A8Cu: goto label_251a8c;
            case 0x251A90u: goto label_251a90;
            case 0x251A94u: goto label_251a94;
            case 0x251A98u: goto label_251a98;
            case 0x251A9Cu: goto label_251a9c;
            case 0x251AA0u: goto label_251aa0;
            case 0x251AA4u: goto label_251aa4;
            case 0x251AA8u: goto label_251aa8;
            case 0x251AACu: goto label_251aac;
            case 0x251AB0u: goto label_251ab0;
            case 0x251AB4u: goto label_251ab4;
            case 0x251AB8u: goto label_251ab8;
            case 0x251ABCu: goto label_251abc;
            case 0x251AC0u: goto label_251ac0;
            case 0x251AC4u: goto label_251ac4;
            case 0x251AC8u: goto label_251ac8;
            case 0x251ACCu: goto label_251acc;
            case 0x251AD0u: goto label_251ad0;
            case 0x251AD4u: goto label_251ad4;
            case 0x251AD8u: goto label_251ad8;
            case 0x251ADCu: goto label_251adc;
            case 0x251AE0u: goto label_251ae0;
            case 0x251AE4u: goto label_251ae4;
            case 0x251AE8u: goto label_251ae8;
            case 0x251AECu: goto label_251aec;
            case 0x251AF0u: goto label_251af0;
            case 0x251AF4u: goto label_251af4;
            case 0x251AF8u: goto label_251af8;
            case 0x251AFCu: goto label_251afc;
            case 0x251B00u: goto label_251b00;
            case 0x251B04u: goto label_251b04;
            case 0x251B08u: goto label_251b08;
            case 0x251B0Cu: goto label_251b0c;
            case 0x251B10u: goto label_251b10;
            case 0x251B14u: goto label_251b14;
            case 0x251B18u: goto label_251b18;
            case 0x251B1Cu: goto label_251b1c;
            case 0x251B20u: goto label_251b20;
            case 0x251B24u: goto label_251b24;
            case 0x251B28u: goto label_251b28;
            case 0x251B2Cu: goto label_251b2c;
            case 0x251B30u: goto label_251b30;
            case 0x251B34u: goto label_251b34;
            case 0x251B38u: goto label_251b38;
            case 0x251B3Cu: goto label_251b3c;
            case 0x251B40u: goto label_251b40;
            case 0x251B44u: goto label_251b44;
            case 0x251B48u: goto label_251b48;
            case 0x251B4Cu: goto label_251b4c;
            case 0x251B50u: goto label_251b50;
            case 0x251B54u: goto label_251b54;
            case 0x251B58u: goto label_251b58;
            case 0x251B5Cu: goto label_251b5c;
            case 0x251B60u: goto label_251b60;
            case 0x251B64u: goto label_251b64;
            case 0x251B68u: goto label_251b68;
            case 0x251B6Cu: goto label_251b6c;
            case 0x251B70u: goto label_251b70;
            case 0x251B74u: goto label_251b74;
            case 0x251B78u: goto label_251b78;
            case 0x251B7Cu: goto label_251b7c;
            case 0x251B80u: goto label_251b80;
            case 0x251B84u: goto label_251b84;
            case 0x251B88u: goto label_251b88;
            case 0x251B8Cu: goto label_251b8c;
            case 0x251B90u: goto label_251b90;
            case 0x251B94u: goto label_251b94;
            case 0x251B98u: goto label_251b98;
            case 0x251B9Cu: goto label_251b9c;
            case 0x251BA0u: goto label_251ba0;
            case 0x251BA4u: goto label_251ba4;
            case 0x251BA8u: goto label_251ba8;
            case 0x251BACu: goto label_251bac;
            case 0x251BB0u: goto label_251bb0;
            case 0x251BB4u: goto label_251bb4;
            case 0x251BB8u: goto label_251bb8;
            case 0x251BBCu: goto label_251bbc;
            case 0x251BC0u: goto label_251bc0;
            case 0x251BC4u: goto label_251bc4;
            case 0x251BC8u: goto label_251bc8;
            case 0x251BCCu: goto label_251bcc;
            case 0x251BD0u: goto label_251bd0;
            case 0x251BD4u: goto label_251bd4;
            case 0x251BD8u: goto label_251bd8;
            case 0x251BDCu: goto label_251bdc;
            case 0x251BE0u: goto label_251be0;
            case 0x251BE4u: goto label_251be4;
            case 0x251BE8u: goto label_251be8;
            case 0x251BECu: goto label_251bec;
            case 0x251BF0u: goto label_251bf0;
            case 0x251BF4u: goto label_251bf4;
            case 0x251BF8u: goto label_251bf8;
            case 0x251BFCu: goto label_251bfc;
            case 0x251C00u: goto label_251c00;
            case 0x251C04u: goto label_251c04;
            case 0x251C08u: goto label_251c08;
            case 0x251C0Cu: goto label_251c0c;
            case 0x251C10u: goto label_251c10;
            case 0x251C14u: goto label_251c14;
            case 0x251C18u: goto label_251c18;
            case 0x251C1Cu: goto label_251c1c;
            case 0x251C20u: goto label_251c20;
            case 0x251C24u: goto label_251c24;
            case 0x251C28u: goto label_251c28;
            case 0x251C2Cu: goto label_251c2c;
            case 0x251C30u: goto label_251c30;
            case 0x251C34u: goto label_251c34;
            case 0x251C38u: goto label_251c38;
            case 0x251C3Cu: goto label_251c3c;
            case 0x251C40u: goto label_251c40;
            case 0x251C44u: goto label_251c44;
            case 0x251C48u: goto label_251c48;
            case 0x251C4Cu: goto label_251c4c;
            case 0x251C50u: goto label_251c50;
            case 0x251C54u: goto label_251c54;
            case 0x251C58u: goto label_251c58;
            case 0x251C5Cu: goto label_251c5c;
            case 0x251C60u: goto label_251c60;
            case 0x251C64u: goto label_251c64;
            case 0x251C68u: goto label_251c68;
            case 0x251C6Cu: goto label_251c6c;
            case 0x251C70u: goto label_251c70;
            case 0x251C74u: goto label_251c74;
            case 0x251C78u: goto label_251c78;
            case 0x251C7Cu: goto label_251c7c;
            case 0x251C80u: goto label_251c80;
            case 0x251C84u: goto label_251c84;
            case 0x251C88u: goto label_251c88;
            case 0x251C8Cu: goto label_251c8c;
            case 0x251C90u: goto label_251c90;
            case 0x251C94u: goto label_251c94;
            case 0x251C98u: goto label_251c98;
            case 0x251C9Cu: goto label_251c9c;
            case 0x251CA0u: goto label_251ca0;
            case 0x251CA4u: goto label_251ca4;
            case 0x251CA8u: goto label_251ca8;
            case 0x251CACu: goto label_251cac;
            case 0x251CB0u: goto label_251cb0;
            case 0x251CB4u: goto label_251cb4;
            case 0x251CB8u: goto label_251cb8;
            case 0x251CBCu: goto label_251cbc;
            case 0x251CC0u: goto label_251cc0;
            case 0x251CC4u: goto label_251cc4;
            case 0x251CC8u: goto label_251cc8;
            case 0x251CCCu: goto label_251ccc;
            case 0x251CD0u: goto label_251cd0;
            case 0x251CD4u: goto label_251cd4;
            case 0x251CD8u: goto label_251cd8;
            case 0x251CDCu: goto label_251cdc;
            case 0x251CE0u: goto label_251ce0;
            case 0x251CE4u: goto label_251ce4;
            case 0x251CE8u: goto label_251ce8;
            case 0x251CECu: goto label_251cec;
            case 0x251CF0u: goto label_251cf0;
            case 0x251CF4u: goto label_251cf4;
            case 0x251CF8u: goto label_251cf8;
            case 0x251CFCu: goto label_251cfc;
            case 0x251D00u: goto label_251d00;
            case 0x251D04u: goto label_251d04;
            case 0x251D08u: goto label_251d08;
            case 0x251D0Cu: goto label_251d0c;
            case 0x251D10u: goto label_251d10;
            case 0x251D14u: goto label_251d14;
            case 0x251D18u: goto label_251d18;
            case 0x251D1Cu: goto label_251d1c;
            case 0x251D20u: goto label_251d20;
            case 0x251D24u: goto label_251d24;
            case 0x251D28u: goto label_251d28;
            case 0x251D2Cu: goto label_251d2c;
            case 0x251D30u: goto label_251d30;
            case 0x251D34u: goto label_251d34;
            case 0x251D38u: goto label_251d38;
            case 0x251D3Cu: goto label_251d3c;
            case 0x251D40u: goto label_251d40;
            case 0x251D44u: goto label_251d44;
            case 0x251D48u: goto label_251d48;
            case 0x251D4Cu: goto label_251d4c;
            case 0x251D50u: goto label_251d50;
            case 0x251D54u: goto label_251d54;
            case 0x251D58u: goto label_251d58;
            case 0x251D5Cu: goto label_251d5c;
            case 0x251D60u: goto label_251d60;
            case 0x251D64u: goto label_251d64;
            case 0x251D68u: goto label_251d68;
            case 0x251D6Cu: goto label_251d6c;
            case 0x251D70u: goto label_251d70;
            case 0x251D74u: goto label_251d74;
            case 0x251D78u: goto label_251d78;
            case 0x251D7Cu: goto label_251d7c;
            case 0x251D80u: goto label_251d80;
            case 0x251D84u: goto label_251d84;
            case 0x251D88u: goto label_251d88;
            case 0x251D8Cu: goto label_251d8c;
            case 0x251D90u: goto label_251d90;
            case 0x251D94u: goto label_251d94;
            case 0x251D98u: goto label_251d98;
            case 0x251D9Cu: goto label_251d9c;
            case 0x251DA0u: goto label_251da0;
            case 0x251DA4u: goto label_251da4;
            case 0x251DA8u: goto label_251da8;
            case 0x251DACu: goto label_251dac;
            case 0x251DB0u: goto label_251db0;
            case 0x251DB4u: goto label_251db4;
            case 0x251DB8u: goto label_251db8;
            case 0x251DBCu: goto label_251dbc;
            case 0x251DC0u: goto label_251dc0;
            case 0x251DC4u: goto label_251dc4;
            case 0x251DC8u: goto label_251dc8;
            case 0x251DCCu: goto label_251dcc;
            case 0x251DD0u: goto label_251dd0;
            case 0x251DD4u: goto label_251dd4;
            case 0x251DD8u: goto label_251dd8;
            case 0x251DDCu: goto label_251ddc;
            case 0x251DE0u: goto label_251de0;
            case 0x251DE4u: goto label_251de4;
            case 0x251DE8u: goto label_251de8;
            case 0x251DECu: goto label_251dec;
            case 0x251DF0u: goto label_251df0;
            case 0x251DF4u: goto label_251df4;
            case 0x251DF8u: goto label_251df8;
            case 0x251DFCu: goto label_251dfc;
            case 0x251E00u: goto label_251e00;
            case 0x251E04u: goto label_251e04;
            case 0x251E08u: goto label_251e08;
            case 0x251E0Cu: goto label_251e0c;
            case 0x251E10u: goto label_251e10;
            case 0x251E14u: goto label_251e14;
            case 0x251E18u: goto label_251e18;
            case 0x251E1Cu: goto label_251e1c;
            case 0x251E20u: goto label_251e20;
            case 0x251E24u: goto label_251e24;
            case 0x251E28u: goto label_251e28;
            case 0x251E2Cu: goto label_251e2c;
            case 0x251E30u: goto label_251e30;
            case 0x251E34u: goto label_251e34;
            case 0x251E38u: goto label_251e38;
            case 0x251E3Cu: goto label_251e3c;
            case 0x251E40u: goto label_251e40;
            case 0x251E44u: goto label_251e44;
            case 0x251E48u: goto label_251e48;
            case 0x251E4Cu: goto label_251e4c;
            case 0x251E50u: goto label_251e50;
            case 0x251E54u: goto label_251e54;
            case 0x251E58u: goto label_251e58;
            case 0x251E5Cu: goto label_251e5c;
            case 0x251E60u: goto label_251e60;
            case 0x251E64u: goto label_251e64;
            case 0x251E68u: goto label_251e68;
            case 0x251E6Cu: goto label_251e6c;
            case 0x251E70u: goto label_251e70;
            case 0x251E74u: goto label_251e74;
            case 0x251E78u: goto label_251e78;
            case 0x251E7Cu: goto label_251e7c;
            case 0x251E80u: goto label_251e80;
            case 0x251E84u: goto label_251e84;
            case 0x251E88u: goto label_251e88;
            case 0x251E8Cu: goto label_251e8c;
            case 0x251E90u: goto label_251e90;
            case 0x251E94u: goto label_251e94;
            case 0x251E98u: goto label_251e98;
            case 0x251E9Cu: goto label_251e9c;
            case 0x251EA0u: goto label_251ea0;
            case 0x251EA4u: goto label_251ea4;
            case 0x251EA8u: goto label_251ea8;
            case 0x251EACu: goto label_251eac;
            case 0x251EB0u: goto label_251eb0;
            case 0x251EB4u: goto label_251eb4;
            case 0x251EB8u: goto label_251eb8;
            case 0x251EBCu: goto label_251ebc;
            case 0x251EC0u: goto label_251ec0;
            case 0x251EC4u: goto label_251ec4;
            case 0x251EC8u: goto label_251ec8;
            case 0x251ECCu: goto label_251ecc;
            case 0x251ED0u: goto label_251ed0;
            case 0x251ED4u: goto label_251ed4;
            case 0x251ED8u: goto label_251ed8;
            case 0x251EDCu: goto label_251edc;
            case 0x251EE0u: goto label_251ee0;
            case 0x251EE4u: goto label_251ee4;
            case 0x251EE8u: goto label_251ee8;
            case 0x251EECu: goto label_251eec;
            case 0x251EF0u: goto label_251ef0;
            case 0x251EF4u: goto label_251ef4;
            case 0x251EF8u: goto label_251ef8;
            case 0x251EFCu: goto label_251efc;
            case 0x251F00u: goto label_251f00;
            case 0x251F04u: goto label_251f04;
            case 0x251F08u: goto label_251f08;
            case 0x251F0Cu: goto label_251f0c;
            case 0x251F10u: goto label_251f10;
            case 0x251F14u: goto label_251f14;
            case 0x251F18u: goto label_251f18;
            case 0x251F1Cu: goto label_251f1c;
            case 0x251F20u: goto label_251f20;
            case 0x251F24u: goto label_251f24;
            case 0x251F28u: goto label_251f28;
            case 0x251F2Cu: goto label_251f2c;
            case 0x251F30u: goto label_251f30;
            case 0x251F34u: goto label_251f34;
            case 0x251F38u: goto label_251f38;
            case 0x251F3Cu: goto label_251f3c;
            case 0x251F40u: goto label_251f40;
            case 0x251F44u: goto label_251f44;
            case 0x251F48u: goto label_251f48;
            case 0x251F4Cu: goto label_251f4c;
            case 0x251F50u: goto label_251f50;
            case 0x251F54u: goto label_251f54;
            case 0x251F58u: goto label_251f58;
            case 0x251F5Cu: goto label_251f5c;
            case 0x251F60u: goto label_251f60;
            case 0x251F64u: goto label_251f64;
            case 0x251F68u: goto label_251f68;
            case 0x251F6Cu: goto label_251f6c;
            case 0x251F70u: goto label_251f70;
            case 0x251F74u: goto label_251f74;
            case 0x251F78u: goto label_251f78;
            case 0x251F7Cu: goto label_251f7c;
            case 0x251F80u: goto label_251f80;
            case 0x251F84u: goto label_251f84;
            case 0x251F88u: goto label_251f88;
            case 0x251F8Cu: goto label_251f8c;
            case 0x251F90u: goto label_251f90;
            case 0x251F94u: goto label_251f94;
            case 0x251F98u: goto label_251f98;
            case 0x251F9Cu: goto label_251f9c;
            case 0x251FA0u: goto label_251fa0;
            case 0x251FA4u: goto label_251fa4;
            case 0x251FA8u: goto label_251fa8;
            case 0x251FACu: goto label_251fac;
            case 0x251FB0u: goto label_251fb0;
            case 0x251FB4u: goto label_251fb4;
            case 0x251FB8u: goto label_251fb8;
            case 0x251FBCu: goto label_251fbc;
            case 0x251FC0u: goto label_251fc0;
            case 0x251FC4u: goto label_251fc4;
            case 0x251FC8u: goto label_251fc8;
            case 0x251FCCu: goto label_251fcc;
            case 0x251FD0u: goto label_251fd0;
            case 0x251FD4u: goto label_251fd4;
            case 0x251FD8u: goto label_251fd8;
            case 0x251FDCu: goto label_251fdc;
            case 0x251FE0u: goto label_251fe0;
            case 0x251FE4u: goto label_251fe4;
            case 0x251FE8u: goto label_251fe8;
            case 0x251FECu: goto label_251fec;
            case 0x251FF0u: goto label_251ff0;
            case 0x251FF4u: goto label_251ff4;
            case 0x251FF8u: goto label_251ff8;
            case 0x251FFCu: goto label_251ffc;
            case 0x252000u: goto label_252000;
            case 0x252004u: goto label_252004;
            case 0x252008u: goto label_252008;
            case 0x25200Cu: goto label_25200c;
            case 0x252010u: goto label_252010;
            case 0x252014u: goto label_252014;
            case 0x252018u: goto label_252018;
            case 0x25201Cu: goto label_25201c;
            case 0x252020u: goto label_252020;
            case 0x252024u: goto label_252024;
            case 0x252028u: goto label_252028;
            case 0x25202Cu: goto label_25202c;
            case 0x252030u: goto label_252030;
            case 0x252034u: goto label_252034;
            case 0x252038u: goto label_252038;
            case 0x25203Cu: goto label_25203c;
            case 0x252040u: goto label_252040;
            case 0x252044u: goto label_252044;
            case 0x252048u: goto label_252048;
            case 0x25204Cu: goto label_25204c;
            case 0x252050u: goto label_252050;
            case 0x252054u: goto label_252054;
            case 0x252058u: goto label_252058;
            case 0x25205Cu: goto label_25205c;
            case 0x252060u: goto label_252060;
            case 0x252064u: goto label_252064;
            case 0x252068u: goto label_252068;
            case 0x25206Cu: goto label_25206c;
            case 0x252070u: goto label_252070;
            case 0x252074u: goto label_252074;
            case 0x252078u: goto label_252078;
            case 0x25207Cu: goto label_25207c;
            case 0x252080u: goto label_252080;
            case 0x252084u: goto label_252084;
            case 0x252088u: goto label_252088;
            case 0x25208Cu: goto label_25208c;
            case 0x252090u: goto label_252090;
            case 0x252094u: goto label_252094;
            case 0x252098u: goto label_252098;
            case 0x25209Cu: goto label_25209c;
            case 0x2520A0u: goto label_2520a0;
            case 0x2520A4u: goto label_2520a4;
            case 0x2520A8u: goto label_2520a8;
            case 0x2520ACu: goto label_2520ac;
            case 0x2520B0u: goto label_2520b0;
            case 0x2520B4u: goto label_2520b4;
            case 0x2520B8u: goto label_2520b8;
            case 0x2520BCu: goto label_2520bc;
            case 0x2520C0u: goto label_2520c0;
            case 0x2520C4u: goto label_2520c4;
            case 0x2520C8u: goto label_2520c8;
            case 0x2520CCu: goto label_2520cc;
            case 0x2520D0u: goto label_2520d0;
            case 0x2520D4u: goto label_2520d4;
            case 0x2520D8u: goto label_2520d8;
            case 0x2520DCu: goto label_2520dc;
            case 0x2520E0u: goto label_2520e0;
            case 0x2520E4u: goto label_2520e4;
            case 0x2520E8u: goto label_2520e8;
            case 0x2520ECu: goto label_2520ec;
            case 0x2520F0u: goto label_2520f0;
            case 0x2520F4u: goto label_2520f4;
            case 0x2520F8u: goto label_2520f8;
            case 0x2520FCu: goto label_2520fc;
            case 0x252100u: goto label_252100;
            case 0x252104u: goto label_252104;
            case 0x252108u: goto label_252108;
            case 0x25210Cu: goto label_25210c;
            case 0x252110u: goto label_252110;
            case 0x252114u: goto label_252114;
            case 0x252118u: goto label_252118;
            case 0x25211Cu: goto label_25211c;
            case 0x252120u: goto label_252120;
            case 0x252124u: goto label_252124;
            case 0x252128u: goto label_252128;
            case 0x25212Cu: goto label_25212c;
            case 0x252130u: goto label_252130;
            case 0x252134u: goto label_252134;
            case 0x252138u: goto label_252138;
            case 0x25213Cu: goto label_25213c;
            case 0x252140u: goto label_252140;
            case 0x252144u: goto label_252144;
            case 0x252148u: goto label_252148;
            case 0x25214Cu: goto label_25214c;
            case 0x252150u: goto label_252150;
            case 0x252154u: goto label_252154;
            case 0x252158u: goto label_252158;
            case 0x25215Cu: goto label_25215c;
            case 0x252160u: goto label_252160;
            case 0x252164u: goto label_252164;
            case 0x252168u: goto label_252168;
            case 0x25216Cu: goto label_25216c;
            case 0x252170u: goto label_252170;
            case 0x252174u: goto label_252174;
            case 0x252178u: goto label_252178;
            case 0x25217Cu: goto label_25217c;
            case 0x252180u: goto label_252180;
            case 0x252184u: goto label_252184;
            case 0x252188u: goto label_252188;
            case 0x25218Cu: goto label_25218c;
            case 0x252190u: goto label_252190;
            case 0x252194u: goto label_252194;
            case 0x252198u: goto label_252198;
            case 0x25219Cu: goto label_25219c;
            case 0x2521A0u: goto label_2521a0;
            case 0x2521A4u: goto label_2521a4;
            case 0x2521A8u: goto label_2521a8;
            case 0x2521ACu: goto label_2521ac;
            case 0x2521B0u: goto label_2521b0;
            case 0x2521B4u: goto label_2521b4;
            case 0x2521B8u: goto label_2521b8;
            case 0x2521BCu: goto label_2521bc;
            case 0x2521C0u: goto label_2521c0;
            case 0x2521C4u: goto label_2521c4;
            case 0x2521C8u: goto label_2521c8;
            case 0x2521CCu: goto label_2521cc;
            case 0x2521D0u: goto label_2521d0;
            case 0x2521D4u: goto label_2521d4;
            case 0x2521D8u: goto label_2521d8;
            case 0x2521DCu: goto label_2521dc;
            case 0x2521E0u: goto label_2521e0;
            case 0x2521E4u: goto label_2521e4;
            case 0x2521E8u: goto label_2521e8;
            case 0x2521ECu: goto label_2521ec;
            case 0x2521F0u: goto label_2521f0;
            case 0x2521F4u: goto label_2521f4;
            case 0x2521F8u: goto label_2521f8;
            case 0x2521FCu: goto label_2521fc;
            case 0x252200u: goto label_252200;
            case 0x252204u: goto label_252204;
            case 0x252208u: goto label_252208;
            case 0x25220Cu: goto label_25220c;
            case 0x252210u: goto label_252210;
            case 0x252214u: goto label_252214;
            case 0x252218u: goto label_252218;
            case 0x25221Cu: goto label_25221c;
            case 0x252220u: goto label_252220;
            case 0x252224u: goto label_252224;
            case 0x252228u: goto label_252228;
            case 0x25222Cu: goto label_25222c;
            case 0x252230u: goto label_252230;
            case 0x252234u: goto label_252234;
            case 0x252238u: goto label_252238;
            case 0x25223Cu: goto label_25223c;
            case 0x252240u: goto label_252240;
            case 0x252244u: goto label_252244;
            case 0x252248u: goto label_252248;
            case 0x25224Cu: goto label_25224c;
            case 0x252250u: goto label_252250;
            case 0x252254u: goto label_252254;
            case 0x252258u: goto label_252258;
            case 0x25225Cu: goto label_25225c;
            case 0x252260u: goto label_252260;
            case 0x252264u: goto label_252264;
            case 0x252268u: goto label_252268;
            case 0x25226Cu: goto label_25226c;
            case 0x252270u: goto label_252270;
            case 0x252274u: goto label_252274;
            case 0x252278u: goto label_252278;
            case 0x25227Cu: goto label_25227c;
            case 0x252280u: goto label_252280;
            case 0x252284u: goto label_252284;
            case 0x252288u: goto label_252288;
            case 0x25228Cu: goto label_25228c;
            case 0x252290u: goto label_252290;
            case 0x252294u: goto label_252294;
            case 0x252298u: goto label_252298;
            case 0x25229Cu: goto label_25229c;
            case 0x2522A0u: goto label_2522a0;
            case 0x2522A4u: goto label_2522a4;
            case 0x2522A8u: goto label_2522a8;
            case 0x2522ACu: goto label_2522ac;
            case 0x2522B0u: goto label_2522b0;
            case 0x2522B4u: goto label_2522b4;
            case 0x2522B8u: goto label_2522b8;
            case 0x2522BCu: goto label_2522bc;
            case 0x2522C0u: goto label_2522c0;
            case 0x2522C4u: goto label_2522c4;
            case 0x2522C8u: goto label_2522c8;
            case 0x2522CCu: goto label_2522cc;
            case 0x2522D0u: goto label_2522d0;
            case 0x2522D4u: goto label_2522d4;
            case 0x2522D8u: goto label_2522d8;
            case 0x2522DCu: goto label_2522dc;
            case 0x2522E0u: goto label_2522e0;
            case 0x2522E4u: goto label_2522e4;
            case 0x2522E8u: goto label_2522e8;
            case 0x2522ECu: goto label_2522ec;
            case 0x2522F0u: goto label_2522f0;
            case 0x2522F4u: goto label_2522f4;
            case 0x2522F8u: goto label_2522f8;
            case 0x2522FCu: goto label_2522fc;
            case 0x252300u: goto label_252300;
            case 0x252304u: goto label_252304;
            case 0x252308u: goto label_252308;
            case 0x25230Cu: goto label_25230c;
            case 0x252310u: goto label_252310;
            case 0x252314u: goto label_252314;
            case 0x252318u: goto label_252318;
            case 0x25231Cu: goto label_25231c;
            case 0x252320u: goto label_252320;
            case 0x252324u: goto label_252324;
            case 0x252328u: goto label_252328;
            case 0x25232Cu: goto label_25232c;
            case 0x252330u: goto label_252330;
            case 0x252334u: goto label_252334;
            case 0x252338u: goto label_252338;
            case 0x25233Cu: goto label_25233c;
            case 0x252340u: goto label_252340;
            case 0x252344u: goto label_252344;
            case 0x252348u: goto label_252348;
            case 0x25234Cu: goto label_25234c;
            case 0x252350u: goto label_252350;
            case 0x252354u: goto label_252354;
            case 0x252358u: goto label_252358;
            case 0x25235Cu: goto label_25235c;
            case 0x252360u: goto label_252360;
            case 0x252364u: goto label_252364;
            case 0x252368u: goto label_252368;
            case 0x25236Cu: goto label_25236c;
            case 0x252370u: goto label_252370;
            case 0x252374u: goto label_252374;
            case 0x252378u: goto label_252378;
            case 0x25237Cu: goto label_25237c;
            case 0x252380u: goto label_252380;
            case 0x252384u: goto label_252384;
            case 0x252388u: goto label_252388;
            case 0x25238Cu: goto label_25238c;
            case 0x252390u: goto label_252390;
            case 0x252394u: goto label_252394;
            case 0x252398u: goto label_252398;
            case 0x25239Cu: goto label_25239c;
            case 0x2523A0u: goto label_2523a0;
            case 0x2523A4u: goto label_2523a4;
            case 0x2523A8u: goto label_2523a8;
            case 0x2523ACu: goto label_2523ac;
            case 0x2523B0u: goto label_2523b0;
            case 0x2523B4u: goto label_2523b4;
            case 0x2523B8u: goto label_2523b8;
            case 0x2523BCu: goto label_2523bc;
            case 0x2523C0u: goto label_2523c0;
            case 0x2523C4u: goto label_2523c4;
            case 0x2523C8u: goto label_2523c8;
            case 0x2523CCu: goto label_2523cc;
            case 0x2523D0u: goto label_2523d0;
            case 0x2523D4u: goto label_2523d4;
            case 0x2523D8u: goto label_2523d8;
            case 0x2523DCu: goto label_2523dc;
            case 0x2523E0u: goto label_2523e0;
            case 0x2523E4u: goto label_2523e4;
            case 0x2523E8u: goto label_2523e8;
            case 0x2523ECu: goto label_2523ec;
            case 0x2523F0u: goto label_2523f0;
            case 0x2523F4u: goto label_2523f4;
            case 0x2523F8u: goto label_2523f8;
            case 0x2523FCu: goto label_2523fc;
            case 0x252400u: goto label_252400;
            case 0x252404u: goto label_252404;
            case 0x252408u: goto label_252408;
            case 0x25240Cu: goto label_25240c;
            case 0x252410u: goto label_252410;
            case 0x252414u: goto label_252414;
            case 0x252418u: goto label_252418;
            case 0x25241Cu: goto label_25241c;
            case 0x252420u: goto label_252420;
            case 0x252424u: goto label_252424;
            case 0x252428u: goto label_252428;
            case 0x25242Cu: goto label_25242c;
            case 0x252430u: goto label_252430;
            case 0x252434u: goto label_252434;
            case 0x252438u: goto label_252438;
            case 0x25243Cu: goto label_25243c;
            case 0x252440u: goto label_252440;
            case 0x252444u: goto label_252444;
            case 0x252448u: goto label_252448;
            case 0x25244Cu: goto label_25244c;
            case 0x252450u: goto label_252450;
            case 0x252454u: goto label_252454;
            case 0x252458u: goto label_252458;
            case 0x25245Cu: goto label_25245c;
            case 0x252460u: goto label_252460;
            case 0x252464u: goto label_252464;
            case 0x252468u: goto label_252468;
            case 0x25246Cu: goto label_25246c;
            case 0x252470u: goto label_252470;
            case 0x252474u: goto label_252474;
            case 0x252478u: goto label_252478;
            case 0x25247Cu: goto label_25247c;
            case 0x252480u: goto label_252480;
            case 0x252484u: goto label_252484;
            case 0x252488u: goto label_252488;
            case 0x25248Cu: goto label_25248c;
            case 0x252490u: goto label_252490;
            case 0x252494u: goto label_252494;
            case 0x252498u: goto label_252498;
            case 0x25249Cu: goto label_25249c;
            case 0x2524A0u: goto label_2524a0;
            case 0x2524A4u: goto label_2524a4;
            case 0x2524A8u: goto label_2524a8;
            case 0x2524ACu: goto label_2524ac;
            case 0x2524B0u: goto label_2524b0;
            case 0x2524B4u: goto label_2524b4;
            case 0x2524B8u: goto label_2524b8;
            case 0x2524BCu: goto label_2524bc;
            case 0x2524C0u: goto label_2524c0;
            case 0x2524C4u: goto label_2524c4;
            case 0x2524C8u: goto label_2524c8;
            case 0x2524CCu: goto label_2524cc;
            case 0x2524D0u: goto label_2524d0;
            case 0x2524D4u: goto label_2524d4;
            case 0x2524D8u: goto label_2524d8;
            case 0x2524DCu: goto label_2524dc;
            case 0x2524E0u: goto label_2524e0;
            case 0x2524E4u: goto label_2524e4;
            case 0x2524E8u: goto label_2524e8;
            case 0x2524ECu: goto label_2524ec;
            case 0x2524F0u: goto label_2524f0;
            case 0x2524F4u: goto label_2524f4;
            case 0x2524F8u: goto label_2524f8;
            case 0x2524FCu: goto label_2524fc;
            case 0x252500u: goto label_252500;
            case 0x252504u: goto label_252504;
            case 0x252508u: goto label_252508;
            case 0x25250Cu: goto label_25250c;
            case 0x252510u: goto label_252510;
            case 0x252514u: goto label_252514;
            case 0x252518u: goto label_252518;
            case 0x25251Cu: goto label_25251c;
            case 0x252520u: goto label_252520;
            case 0x252524u: goto label_252524;
            case 0x252528u: goto label_252528;
            case 0x25252Cu: goto label_25252c;
            case 0x252530u: goto label_252530;
            case 0x252534u: goto label_252534;
            case 0x252538u: goto label_252538;
            case 0x25253Cu: goto label_25253c;
            case 0x252540u: goto label_252540;
            case 0x252544u: goto label_252544;
            case 0x252548u: goto label_252548;
            case 0x25254Cu: goto label_25254c;
            case 0x252550u: goto label_252550;
            case 0x252554u: goto label_252554;
            case 0x252558u: goto label_252558;
            case 0x25255Cu: goto label_25255c;
            case 0x252560u: goto label_252560;
            case 0x252564u: goto label_252564;
            case 0x252568u: goto label_252568;
            case 0x25256Cu: goto label_25256c;
            case 0x252570u: goto label_252570;
            case 0x252574u: goto label_252574;
            case 0x252578u: goto label_252578;
            case 0x25257Cu: goto label_25257c;
            case 0x252580u: goto label_252580;
            case 0x252584u: goto label_252584;
            case 0x252588u: goto label_252588;
            case 0x25258Cu: goto label_25258c;
            case 0x252590u: goto label_252590;
            case 0x252594u: goto label_252594;
            case 0x252598u: goto label_252598;
            case 0x25259Cu: goto label_25259c;
            case 0x2525A0u: goto label_2525a0;
            case 0x2525A4u: goto label_2525a4;
            case 0x2525A8u: goto label_2525a8;
            case 0x2525ACu: goto label_2525ac;
            case 0x2525B0u: goto label_2525b0;
            case 0x2525B4u: goto label_2525b4;
            case 0x2525B8u: goto label_2525b8;
            case 0x2525BCu: goto label_2525bc;
            case 0x2525C0u: goto label_2525c0;
            case 0x2525C4u: goto label_2525c4;
            case 0x2525C8u: goto label_2525c8;
            case 0x2525CCu: goto label_2525cc;
            case 0x2525D0u: goto label_2525d0;
            case 0x2525D4u: goto label_2525d4;
            case 0x2525D8u: goto label_2525d8;
            case 0x2525DCu: goto label_2525dc;
            case 0x2525E0u: goto label_2525e0;
            case 0x2525E4u: goto label_2525e4;
            case 0x2525E8u: goto label_2525e8;
            case 0x2525ECu: goto label_2525ec;
            case 0x2525F0u: goto label_2525f0;
            case 0x2525F4u: goto label_2525f4;
            case 0x2525F8u: goto label_2525f8;
            case 0x2525FCu: goto label_2525fc;
            case 0x252600u: goto label_252600;
            case 0x252604u: goto label_252604;
            case 0x252608u: goto label_252608;
            case 0x25260Cu: goto label_25260c;
            case 0x252610u: goto label_252610;
            case 0x252614u: goto label_252614;
            case 0x252618u: goto label_252618;
            case 0x25261Cu: goto label_25261c;
            case 0x252620u: goto label_252620;
            case 0x252624u: goto label_252624;
            case 0x252628u: goto label_252628;
            case 0x25262Cu: goto label_25262c;
            case 0x252630u: goto label_252630;
            case 0x252634u: goto label_252634;
            case 0x252638u: goto label_252638;
            case 0x25263Cu: goto label_25263c;
            case 0x252640u: goto label_252640;
            case 0x252644u: goto label_252644;
            case 0x252648u: goto label_252648;
            case 0x25264Cu: goto label_25264c;
            case 0x252650u: goto label_252650;
            case 0x252654u: goto label_252654;
            case 0x252658u: goto label_252658;
            case 0x25265Cu: goto label_25265c;
            case 0x252660u: goto label_252660;
            case 0x252664u: goto label_252664;
            case 0x252668u: goto label_252668;
            case 0x25266Cu: goto label_25266c;
            case 0x252670u: goto label_252670;
            case 0x252674u: goto label_252674;
            case 0x252678u: goto label_252678;
            case 0x25267Cu: goto label_25267c;
            case 0x252680u: goto label_252680;
            case 0x252684u: goto label_252684;
            case 0x252688u: goto label_252688;
            case 0x25268Cu: goto label_25268c;
            case 0x252690u: goto label_252690;
            case 0x252694u: goto label_252694;
            case 0x252698u: goto label_252698;
            case 0x25269Cu: goto label_25269c;
            case 0x2526A0u: goto label_2526a0;
            case 0x2526A4u: goto label_2526a4;
            case 0x2526A8u: goto label_2526a8;
            case 0x2526ACu: goto label_2526ac;
            case 0x2526B0u: goto label_2526b0;
            case 0x2526B4u: goto label_2526b4;
            case 0x2526B8u: goto label_2526b8;
            case 0x2526BCu: goto label_2526bc;
            case 0x2526C0u: goto label_2526c0;
            case 0x2526C4u: goto label_2526c4;
            case 0x2526C8u: goto label_2526c8;
            case 0x2526CCu: goto label_2526cc;
            case 0x2526D0u: goto label_2526d0;
            case 0x2526D4u: goto label_2526d4;
            case 0x2526D8u: goto label_2526d8;
            case 0x2526DCu: goto label_2526dc;
            case 0x2526E0u: goto label_2526e0;
            case 0x2526E4u: goto label_2526e4;
            case 0x2526E8u: goto label_2526e8;
            case 0x2526ECu: goto label_2526ec;
            case 0x2526F0u: goto label_2526f0;
            case 0x2526F4u: goto label_2526f4;
            case 0x2526F8u: goto label_2526f8;
            case 0x2526FCu: goto label_2526fc;
            case 0x252700u: goto label_252700;
            case 0x252704u: goto label_252704;
            case 0x252708u: goto label_252708;
            case 0x25270Cu: goto label_25270c;
            case 0x252710u: goto label_252710;
            case 0x252714u: goto label_252714;
            case 0x252718u: goto label_252718;
            case 0x25271Cu: goto label_25271c;
            case 0x252720u: goto label_252720;
            case 0x252724u: goto label_252724;
            case 0x252728u: goto label_252728;
            case 0x25272Cu: goto label_25272c;
            case 0x252730u: goto label_252730;
            case 0x252734u: goto label_252734;
            case 0x252738u: goto label_252738;
            case 0x25273Cu: goto label_25273c;
            case 0x252740u: goto label_252740;
            case 0x252744u: goto label_252744;
            case 0x252748u: goto label_252748;
            case 0x25274Cu: goto label_25274c;
            case 0x252750u: goto label_252750;
            case 0x252754u: goto label_252754;
            case 0x252758u: goto label_252758;
            case 0x25275Cu: goto label_25275c;
            case 0x252760u: goto label_252760;
            case 0x252764u: goto label_252764;
            case 0x252768u: goto label_252768;
            case 0x25276Cu: goto label_25276c;
            case 0x252770u: goto label_252770;
            case 0x252774u: goto label_252774;
            case 0x252778u: goto label_252778;
            case 0x25277Cu: goto label_25277c;
            case 0x252780u: goto label_252780;
            case 0x252784u: goto label_252784;
            case 0x252788u: goto label_252788;
            case 0x25278Cu: goto label_25278c;
            case 0x252790u: goto label_252790;
            case 0x252794u: goto label_252794;
            case 0x252798u: goto label_252798;
            case 0x25279Cu: goto label_25279c;
            case 0x2527A0u: goto label_2527a0;
            case 0x2527A4u: goto label_2527a4;
            case 0x2527A8u: goto label_2527a8;
            case 0x2527ACu: goto label_2527ac;
            case 0x2527B0u: goto label_2527b0;
            case 0x2527B4u: goto label_2527b4;
            case 0x2527B8u: goto label_2527b8;
            case 0x2527BCu: goto label_2527bc;
            case 0x2527C0u: goto label_2527c0;
            case 0x2527C4u: goto label_2527c4;
            case 0x2527C8u: goto label_2527c8;
            case 0x2527CCu: goto label_2527cc;
            case 0x2527D0u: goto label_2527d0;
            case 0x2527D4u: goto label_2527d4;
            case 0x2527D8u: goto label_2527d8;
            case 0x2527DCu: goto label_2527dc;
            case 0x2527E0u: goto label_2527e0;
            case 0x2527E4u: goto label_2527e4;
            case 0x2527E8u: goto label_2527e8;
            case 0x2527ECu: goto label_2527ec;
            case 0x2527F0u: goto label_2527f0;
            case 0x2527F4u: goto label_2527f4;
            case 0x2527F8u: goto label_2527f8;
            case 0x2527FCu: goto label_2527fc;
            case 0x252800u: goto label_252800;
            case 0x252804u: goto label_252804;
            case 0x252808u: goto label_252808;
            case 0x25280Cu: goto label_25280c;
            case 0x252810u: goto label_252810;
            case 0x252814u: goto label_252814;
            case 0x252818u: goto label_252818;
            case 0x25281Cu: goto label_25281c;
            case 0x252820u: goto label_252820;
            case 0x252824u: goto label_252824;
            case 0x252828u: goto label_252828;
            case 0x25282Cu: goto label_25282c;
            case 0x252830u: goto label_252830;
            case 0x252834u: goto label_252834;
            case 0x252838u: goto label_252838;
            case 0x25283Cu: goto label_25283c;
            case 0x252840u: goto label_252840;
            case 0x252844u: goto label_252844;
            case 0x252848u: goto label_252848;
            case 0x25284Cu: goto label_25284c;
            case 0x252850u: goto label_252850;
            case 0x252854u: goto label_252854;
            case 0x252858u: goto label_252858;
            case 0x25285Cu: goto label_25285c;
            case 0x252860u: goto label_252860;
            case 0x252864u: goto label_252864;
            case 0x252868u: goto label_252868;
            case 0x25286Cu: goto label_25286c;
            case 0x252870u: goto label_252870;
            case 0x252874u: goto label_252874;
            case 0x252878u: goto label_252878;
            case 0x25287Cu: goto label_25287c;
            case 0x252880u: goto label_252880;
            case 0x252884u: goto label_252884;
            case 0x252888u: goto label_252888;
            case 0x25288Cu: goto label_25288c;
            case 0x252890u: goto label_252890;
            case 0x252894u: goto label_252894;
            case 0x252898u: goto label_252898;
            case 0x25289Cu: goto label_25289c;
            case 0x2528A0u: goto label_2528a0;
            case 0x2528A4u: goto label_2528a4;
            case 0x2528A8u: goto label_2528a8;
            case 0x2528ACu: goto label_2528ac;
            case 0x2528B0u: goto label_2528b0;
            case 0x2528B4u: goto label_2528b4;
            case 0x2528B8u: goto label_2528b8;
            case 0x2528BCu: goto label_2528bc;
            case 0x2528C0u: goto label_2528c0;
            case 0x2528C4u: goto label_2528c4;
            case 0x2528C8u: goto label_2528c8;
            case 0x2528CCu: goto label_2528cc;
            case 0x2528D0u: goto label_2528d0;
            case 0x2528D4u: goto label_2528d4;
            case 0x2528D8u: goto label_2528d8;
            case 0x2528DCu: goto label_2528dc;
            case 0x2528E0u: goto label_2528e0;
            case 0x2528E4u: goto label_2528e4;
            case 0x2528E8u: goto label_2528e8;
            case 0x2528ECu: goto label_2528ec;
            case 0x2528F0u: goto label_2528f0;
            case 0x2528F4u: goto label_2528f4;
            case 0x2528F8u: goto label_2528f8;
            case 0x2528FCu: goto label_2528fc;
            case 0x252900u: goto label_252900;
            case 0x252904u: goto label_252904;
            case 0x252908u: goto label_252908;
            case 0x25290Cu: goto label_25290c;
            case 0x252910u: goto label_252910;
            case 0x252914u: goto label_252914;
            case 0x252918u: goto label_252918;
            case 0x25291Cu: goto label_25291c;
            case 0x252920u: goto label_252920;
            case 0x252924u: goto label_252924;
            case 0x252928u: goto label_252928;
            case 0x25292Cu: goto label_25292c;
            case 0x252930u: goto label_252930;
            case 0x252934u: goto label_252934;
            case 0x252938u: goto label_252938;
            case 0x25293Cu: goto label_25293c;
            case 0x252940u: goto label_252940;
            case 0x252944u: goto label_252944;
            case 0x252948u: goto label_252948;
            case 0x25294Cu: goto label_25294c;
            case 0x252950u: goto label_252950;
            case 0x252954u: goto label_252954;
            case 0x252958u: goto label_252958;
            case 0x25295Cu: goto label_25295c;
            case 0x252960u: goto label_252960;
            case 0x252964u: goto label_252964;
            case 0x252968u: goto label_252968;
            case 0x25296Cu: goto label_25296c;
            case 0x252970u: goto label_252970;
            case 0x252974u: goto label_252974;
            case 0x252978u: goto label_252978;
            case 0x25297Cu: goto label_25297c;
            case 0x252980u: goto label_252980;
            case 0x252984u: goto label_252984;
            case 0x252988u: goto label_252988;
            case 0x25298Cu: goto label_25298c;
            case 0x252990u: goto label_252990;
            case 0x252994u: goto label_252994;
            case 0x252998u: goto label_252998;
            case 0x25299Cu: goto label_25299c;
            case 0x2529A0u: goto label_2529a0;
            case 0x2529A4u: goto label_2529a4;
            case 0x2529A8u: goto label_2529a8;
            case 0x2529ACu: goto label_2529ac;
            case 0x2529B0u: goto label_2529b0;
            case 0x2529B4u: goto label_2529b4;
            case 0x2529B8u: goto label_2529b8;
            case 0x2529BCu: goto label_2529bc;
            case 0x2529C0u: goto label_2529c0;
            case 0x2529C4u: goto label_2529c4;
            case 0x2529C8u: goto label_2529c8;
            case 0x2529CCu: goto label_2529cc;
            case 0x2529D0u: goto label_2529d0;
            case 0x2529D4u: goto label_2529d4;
            case 0x2529D8u: goto label_2529d8;
            case 0x2529DCu: goto label_2529dc;
            case 0x2529E0u: goto label_2529e0;
            case 0x2529E4u: goto label_2529e4;
            case 0x2529E8u: goto label_2529e8;
            case 0x2529ECu: goto label_2529ec;
            case 0x2529F0u: goto label_2529f0;
            case 0x2529F4u: goto label_2529f4;
            case 0x2529F8u: goto label_2529f8;
            case 0x2529FCu: goto label_2529fc;
            case 0x252A00u: goto label_252a00;
            case 0x252A04u: goto label_252a04;
            case 0x252A08u: goto label_252a08;
            case 0x252A0Cu: goto label_252a0c;
            case 0x252A10u: goto label_252a10;
            case 0x252A14u: goto label_252a14;
            case 0x252A18u: goto label_252a18;
            case 0x252A1Cu: goto label_252a1c;
            case 0x252A20u: goto label_252a20;
            case 0x252A24u: goto label_252a24;
            case 0x252A28u: goto label_252a28;
            case 0x252A2Cu: goto label_252a2c;
            case 0x252A30u: goto label_252a30;
            case 0x252A34u: goto label_252a34;
            case 0x252A38u: goto label_252a38;
            case 0x252A3Cu: goto label_252a3c;
            case 0x252A40u: goto label_252a40;
            case 0x252A44u: goto label_252a44;
            case 0x252A48u: goto label_252a48;
            case 0x252A4Cu: goto label_252a4c;
            case 0x252A50u: goto label_252a50;
            case 0x252A54u: goto label_252a54;
            case 0x252A58u: goto label_252a58;
            case 0x252A5Cu: goto label_252a5c;
            case 0x252A60u: goto label_252a60;
            case 0x252A64u: goto label_252a64;
            case 0x252A68u: goto label_252a68;
            case 0x252A6Cu: goto label_252a6c;
            case 0x252A70u: goto label_252a70;
            case 0x252A74u: goto label_252a74;
            case 0x252A78u: goto label_252a78;
            case 0x252A7Cu: goto label_252a7c;
            case 0x252A80u: goto label_252a80;
            case 0x252A84u: goto label_252a84;
            case 0x252A88u: goto label_252a88;
            case 0x252A8Cu: goto label_252a8c;
            case 0x252A90u: goto label_252a90;
            case 0x252A94u: goto label_252a94;
            case 0x252A98u: goto label_252a98;
            case 0x252A9Cu: goto label_252a9c;
            case 0x252AA0u: goto label_252aa0;
            case 0x252AA4u: goto label_252aa4;
            default: break;
        }
        return;
    }
label_fallthrough_0x252aa0:
    ctx->pc = 0x252AA8u;
}
