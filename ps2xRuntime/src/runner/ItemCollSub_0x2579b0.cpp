#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ItemCollSub
// Address: 0x2579b0 - 0x258428
void ItemCollSub_0x2579b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2579b0u;

label_2579b0:
    // 0x2579b0: 0x27bdff10
    ctx->pc = 0x2579b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
label_2579b4:
    // 0x2579b4: 0xffbf00c0
    ctx->pc = 0x2579b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2579b8:
    // 0x2579b8: 0xffb600b0
    ctx->pc = 0x2579b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_2579bc:
    // 0x2579bc: 0xffb500a0
    ctx->pc = 0x2579bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_2579c0:
    // 0x2579c0: 0xffb40090
    ctx->pc = 0x2579c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2579c4:
    // 0x2579c4: 0xffb30080
    ctx->pc = 0x2579c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_2579c8:
    // 0x2579c8: 0xffb20070
    ctx->pc = 0x2579c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2579cc:
    // 0x2579cc: 0xffb10060
    ctx->pc = 0x2579ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_2579d0:
    // 0x2579d0: 0xffb00050
    ctx->pc = 0x2579d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2579d4:
    // 0x2579d4: 0xe7b700e8
    ctx->pc = 0x2579d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2579d8:
    // 0x2579d8: 0xe7b600e0
    ctx->pc = 0x2579d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2579dc:
    // 0x2579dc: 0xe7b500d8
    ctx->pc = 0x2579dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2579e0:
    // 0x2579e0: 0xe7b400d0
    ctx->pc = 0x2579e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2579e4:
    // 0x2579e4: 0x80802d
    ctx->pc = 0x2579e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2579e8:
    // 0x2579e8: 0xa0a82d
    ctx->pc = 0x2579e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2579ec:
    // 0x2579ec: 0xc0882d
    ctx->pc = 0x2579ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2579f0:
    // 0x2579f0: 0xe0902d
    ctx->pc = 0x2579f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2579f4:
    // 0x2579f4: 0x46006586
    ctx->pc = 0x2579f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_2579f8:
    // 0x2579f8: 0x860300d8
    ctx->pc = 0x2579f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_2579fc:
    // 0x2579fc: 0x2402ffff
    ctx->pc = 0x2579fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_257a00:
    // 0x257a00: 0x10620196
label_257a04:
    if (ctx->pc == 0x257A04u) {
        ctx->pc = 0x257A04u;
        ctx->f[23] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x257A08u;
        goto label_257a08;
    }
    ctx->pc = 0x257A00u;
    {
        const bool branch_taken_0x257a00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x257A04u;
        ctx->f[23] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x257a00) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257A08u;
label_257a08:
    // 0x257a08: 0x860200d8
    ctx->pc = 0x257a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_257a0c:
    // 0x257a0c: 0x30428100
    ctx->pc = 0x257a0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 33024));
label_257a10:
    // 0x257a10: 0x14400192
label_257a14:
    if (ctx->pc == 0x257A14u) {
        ctx->pc = 0x257A18u;
        goto label_257a18;
    }
    ctx->pc = 0x257A10u;
    {
        const bool branch_taken_0x257a10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x257a10) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257A18u;
label_257a18:
    // 0x257a18: 0x8e020000
    ctx->pc = 0x257a18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_257a1c:
    // 0x257a1c: 0x8c430000
    ctx->pc = 0x257a1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_257a20:
    // 0x257a20: 0x2402ffff
    ctx->pc = 0x257a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_257a24:
    // 0x257a24: 0x1062018d
label_257a28:
    if (ctx->pc == 0x257A28u) {
        ctx->pc = 0x257A2Cu;
        goto label_257a2c;
    }
    ctx->pc = 0x257A24u;
    {
        const bool branch_taken_0x257a24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x257a24) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257A2Cu;
label_257a2c:
    // 0x257a2c: 0x820200e1
    ctx->pc = 0x257a2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 225)));
label_257a30:
    // 0x257a30: 0x1440018a
label_257a34:
    if (ctx->pc == 0x257A34u) {
        ctx->pc = 0x257A38u;
        goto label_257a38;
    }
    ctx->pc = 0x257A30u;
    {
        const bool branch_taken_0x257a30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x257a30) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257A38u;
label_257a38:
    // 0x257a38: 0x8e020000
    ctx->pc = 0x257a38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_257a3c:
    // 0x257a3c: 0x24560004
    ctx->pc = 0x257a3cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4));
label_257a40:
    // 0x257a40: 0x86d30004
    ctx->pc = 0x257a40u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_257a44:
    // 0x257a44: 0x12600185
label_257a48:
    if (ctx->pc == 0x257A48u) {
        ctx->pc = 0x257A48u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x257A4Cu;
        goto label_257a4c;
    }
    ctx->pc = 0x257A44u;
    {
        const bool branch_taken_0x257a44 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x257A48u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x257a44) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257A4Cu;
label_257a4c:
    // 0x257a4c: 0xde0200d8
    ctx->pc = 0x257a4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 216)));
label_257a50:
    // 0x257a50: 0x30424040
    ctx->pc = 0x257a50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16448));
label_257a54:
    // 0x257a54: 0x10400181
label_257a58:
    if (ctx->pc == 0x257A58u) {
        ctx->pc = 0x257A5Cu;
        goto label_257a5c;
    }
    ctx->pc = 0x257A54u;
    {
        const bool branch_taken_0x257a54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x257a54) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257A5Cu;
label_257a5c:
    // 0x257a5c: 0x8e020000
    ctx->pc = 0x257a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_257a60:
    // 0x257a60: 0x8c420000
    ctx->pc = 0x257a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_257a64:
    // 0x257a64: 0x2443ffff
    ctx->pc = 0x257a64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_257a68:
    // 0x257a68: 0x2c62000d
    ctx->pc = 0x257a68u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 13));
label_257a6c:
    // 0x257a6c: 0x1040006d
label_257a70:
    if (ctx->pc == 0x257A70u) {
        ctx->pc = 0x257A70u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x257A74u;
        goto label_257a74;
    }
    ctx->pc = 0x257A6Cu;
    {
        const bool branch_taken_0x257a6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x257A70u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x257a6c) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257A74u;
label_257a74:
    // 0x257a74: 0x3c02003b
    ctx->pc = 0x257a74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_257a78:
    // 0x257a78: 0x24428ba0
    ctx->pc = 0x257a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937504));
label_257a7c:
    // 0x257a7c: 0x31880
    ctx->pc = 0x257a7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_257a80:
    // 0x257a80: 0x621821
    ctx->pc = 0x257a80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_257a84:
    // 0x257a84: 0x8c620000
    ctx->pc = 0x257a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257a88:
    // 0x257a88: 0x400008
label_257a8c:
    if (ctx->pc == 0x257A8Cu) {
        ctx->pc = 0x257A90u;
        goto label_257a90;
    }
    ctx->pc = 0x257A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2579B0u: goto label_2579b0;
            case 0x2579B4u: goto label_2579b4;
            case 0x2579B8u: goto label_2579b8;
            case 0x2579BCu: goto label_2579bc;
            case 0x2579C0u: goto label_2579c0;
            case 0x2579C4u: goto label_2579c4;
            case 0x2579C8u: goto label_2579c8;
            case 0x2579CCu: goto label_2579cc;
            case 0x2579D0u: goto label_2579d0;
            case 0x2579D4u: goto label_2579d4;
            case 0x2579D8u: goto label_2579d8;
            case 0x2579DCu: goto label_2579dc;
            case 0x2579E0u: goto label_2579e0;
            case 0x2579E4u: goto label_2579e4;
            case 0x2579E8u: goto label_2579e8;
            case 0x2579ECu: goto label_2579ec;
            case 0x2579F0u: goto label_2579f0;
            case 0x2579F4u: goto label_2579f4;
            case 0x2579F8u: goto label_2579f8;
            case 0x2579FCu: goto label_2579fc;
            case 0x257A00u: goto label_257a00;
            case 0x257A04u: goto label_257a04;
            case 0x257A08u: goto label_257a08;
            case 0x257A0Cu: goto label_257a0c;
            case 0x257A10u: goto label_257a10;
            case 0x257A14u: goto label_257a14;
            case 0x257A18u: goto label_257a18;
            case 0x257A1Cu: goto label_257a1c;
            case 0x257A20u: goto label_257a20;
            case 0x257A24u: goto label_257a24;
            case 0x257A28u: goto label_257a28;
            case 0x257A2Cu: goto label_257a2c;
            case 0x257A30u: goto label_257a30;
            case 0x257A34u: goto label_257a34;
            case 0x257A38u: goto label_257a38;
            case 0x257A3Cu: goto label_257a3c;
            case 0x257A40u: goto label_257a40;
            case 0x257A44u: goto label_257a44;
            case 0x257A48u: goto label_257a48;
            case 0x257A4Cu: goto label_257a4c;
            case 0x257A50u: goto label_257a50;
            case 0x257A54u: goto label_257a54;
            case 0x257A58u: goto label_257a58;
            case 0x257A5Cu: goto label_257a5c;
            case 0x257A60u: goto label_257a60;
            case 0x257A64u: goto label_257a64;
            case 0x257A68u: goto label_257a68;
            case 0x257A6Cu: goto label_257a6c;
            case 0x257A70u: goto label_257a70;
            case 0x257A74u: goto label_257a74;
            case 0x257A78u: goto label_257a78;
            case 0x257A7Cu: goto label_257a7c;
            case 0x257A80u: goto label_257a80;
            case 0x257A84u: goto label_257a84;
            case 0x257A88u: goto label_257a88;
            case 0x257A8Cu: goto label_257a8c;
            case 0x257A90u: goto label_257a90;
            case 0x257A94u: goto label_257a94;
            case 0x257A98u: goto label_257a98;
            case 0x257A9Cu: goto label_257a9c;
            case 0x257AA0u: goto label_257aa0;
            case 0x257AA4u: goto label_257aa4;
            case 0x257AA8u: goto label_257aa8;
            case 0x257AACu: goto label_257aac;
            case 0x257AB0u: goto label_257ab0;
            case 0x257AB4u: goto label_257ab4;
            case 0x257AB8u: goto label_257ab8;
            case 0x257ABCu: goto label_257abc;
            case 0x257AC0u: goto label_257ac0;
            case 0x257AC4u: goto label_257ac4;
            case 0x257AC8u: goto label_257ac8;
            case 0x257ACCu: goto label_257acc;
            case 0x257AD0u: goto label_257ad0;
            case 0x257AD4u: goto label_257ad4;
            case 0x257AD8u: goto label_257ad8;
            case 0x257ADCu: goto label_257adc;
            case 0x257AE0u: goto label_257ae0;
            case 0x257AE4u: goto label_257ae4;
            case 0x257AE8u: goto label_257ae8;
            case 0x257AECu: goto label_257aec;
            case 0x257AF0u: goto label_257af0;
            case 0x257AF4u: goto label_257af4;
            case 0x257AF8u: goto label_257af8;
            case 0x257AFCu: goto label_257afc;
            case 0x257B00u: goto label_257b00;
            case 0x257B04u: goto label_257b04;
            case 0x257B08u: goto label_257b08;
            case 0x257B0Cu: goto label_257b0c;
            case 0x257B10u: goto label_257b10;
            case 0x257B14u: goto label_257b14;
            case 0x257B18u: goto label_257b18;
            case 0x257B1Cu: goto label_257b1c;
            case 0x257B20u: goto label_257b20;
            case 0x257B24u: goto label_257b24;
            case 0x257B28u: goto label_257b28;
            case 0x257B2Cu: goto label_257b2c;
            case 0x257B30u: goto label_257b30;
            case 0x257B34u: goto label_257b34;
            case 0x257B38u: goto label_257b38;
            case 0x257B3Cu: goto label_257b3c;
            case 0x257B40u: goto label_257b40;
            case 0x257B44u: goto label_257b44;
            case 0x257B48u: goto label_257b48;
            case 0x257B4Cu: goto label_257b4c;
            case 0x257B50u: goto label_257b50;
            case 0x257B54u: goto label_257b54;
            case 0x257B58u: goto label_257b58;
            case 0x257B5Cu: goto label_257b5c;
            case 0x257B60u: goto label_257b60;
            case 0x257B64u: goto label_257b64;
            case 0x257B68u: goto label_257b68;
            case 0x257B6Cu: goto label_257b6c;
            case 0x257B70u: goto label_257b70;
            case 0x257B74u: goto label_257b74;
            case 0x257B78u: goto label_257b78;
            case 0x257B7Cu: goto label_257b7c;
            case 0x257B80u: goto label_257b80;
            case 0x257B84u: goto label_257b84;
            case 0x257B88u: goto label_257b88;
            case 0x257B8Cu: goto label_257b8c;
            case 0x257B90u: goto label_257b90;
            case 0x257B94u: goto label_257b94;
            case 0x257B98u: goto label_257b98;
            case 0x257B9Cu: goto label_257b9c;
            case 0x257BA0u: goto label_257ba0;
            case 0x257BA4u: goto label_257ba4;
            case 0x257BA8u: goto label_257ba8;
            case 0x257BACu: goto label_257bac;
            case 0x257BB0u: goto label_257bb0;
            case 0x257BB4u: goto label_257bb4;
            case 0x257BB8u: goto label_257bb8;
            case 0x257BBCu: goto label_257bbc;
            case 0x257BC0u: goto label_257bc0;
            case 0x257BC4u: goto label_257bc4;
            case 0x257BC8u: goto label_257bc8;
            case 0x257BCCu: goto label_257bcc;
            case 0x257BD0u: goto label_257bd0;
            case 0x257BD4u: goto label_257bd4;
            case 0x257BD8u: goto label_257bd8;
            case 0x257BDCu: goto label_257bdc;
            case 0x257BE0u: goto label_257be0;
            case 0x257BE4u: goto label_257be4;
            case 0x257BE8u: goto label_257be8;
            case 0x257BECu: goto label_257bec;
            case 0x257BF0u: goto label_257bf0;
            case 0x257BF4u: goto label_257bf4;
            case 0x257BF8u: goto label_257bf8;
            case 0x257BFCu: goto label_257bfc;
            case 0x257C00u: goto label_257c00;
            case 0x257C04u: goto label_257c04;
            case 0x257C08u: goto label_257c08;
            case 0x257C0Cu: goto label_257c0c;
            case 0x257C10u: goto label_257c10;
            case 0x257C14u: goto label_257c14;
            case 0x257C18u: goto label_257c18;
            case 0x257C1Cu: goto label_257c1c;
            case 0x257C20u: goto label_257c20;
            case 0x257C24u: goto label_257c24;
            case 0x257C28u: goto label_257c28;
            case 0x257C2Cu: goto label_257c2c;
            case 0x257C30u: goto label_257c30;
            case 0x257C34u: goto label_257c34;
            case 0x257C38u: goto label_257c38;
            case 0x257C3Cu: goto label_257c3c;
            case 0x257C40u: goto label_257c40;
            case 0x257C44u: goto label_257c44;
            case 0x257C48u: goto label_257c48;
            case 0x257C4Cu: goto label_257c4c;
            case 0x257C50u: goto label_257c50;
            case 0x257C54u: goto label_257c54;
            case 0x257C58u: goto label_257c58;
            case 0x257C5Cu: goto label_257c5c;
            case 0x257C60u: goto label_257c60;
            case 0x257C64u: goto label_257c64;
            case 0x257C68u: goto label_257c68;
            case 0x257C6Cu: goto label_257c6c;
            case 0x257C70u: goto label_257c70;
            case 0x257C74u: goto label_257c74;
            case 0x257C78u: goto label_257c78;
            case 0x257C7Cu: goto label_257c7c;
            case 0x257C80u: goto label_257c80;
            case 0x257C84u: goto label_257c84;
            case 0x257C88u: goto label_257c88;
            case 0x257C8Cu: goto label_257c8c;
            case 0x257C90u: goto label_257c90;
            case 0x257C94u: goto label_257c94;
            case 0x257C98u: goto label_257c98;
            case 0x257C9Cu: goto label_257c9c;
            case 0x257CA0u: goto label_257ca0;
            case 0x257CA4u: goto label_257ca4;
            case 0x257CA8u: goto label_257ca8;
            case 0x257CACu: goto label_257cac;
            case 0x257CB0u: goto label_257cb0;
            case 0x257CB4u: goto label_257cb4;
            case 0x257CB8u: goto label_257cb8;
            case 0x257CBCu: goto label_257cbc;
            case 0x257CC0u: goto label_257cc0;
            case 0x257CC4u: goto label_257cc4;
            case 0x257CC8u: goto label_257cc8;
            case 0x257CCCu: goto label_257ccc;
            case 0x257CD0u: goto label_257cd0;
            case 0x257CD4u: goto label_257cd4;
            case 0x257CD8u: goto label_257cd8;
            case 0x257CDCu: goto label_257cdc;
            case 0x257CE0u: goto label_257ce0;
            case 0x257CE4u: goto label_257ce4;
            case 0x257CE8u: goto label_257ce8;
            case 0x257CECu: goto label_257cec;
            case 0x257CF0u: goto label_257cf0;
            case 0x257CF4u: goto label_257cf4;
            case 0x257CF8u: goto label_257cf8;
            case 0x257CFCu: goto label_257cfc;
            case 0x257D00u: goto label_257d00;
            case 0x257D04u: goto label_257d04;
            case 0x257D08u: goto label_257d08;
            case 0x257D0Cu: goto label_257d0c;
            case 0x257D10u: goto label_257d10;
            case 0x257D14u: goto label_257d14;
            case 0x257D18u: goto label_257d18;
            case 0x257D1Cu: goto label_257d1c;
            case 0x257D20u: goto label_257d20;
            case 0x257D24u: goto label_257d24;
            case 0x257D28u: goto label_257d28;
            case 0x257D2Cu: goto label_257d2c;
            case 0x257D30u: goto label_257d30;
            case 0x257D34u: goto label_257d34;
            case 0x257D38u: goto label_257d38;
            case 0x257D3Cu: goto label_257d3c;
            case 0x257D40u: goto label_257d40;
            case 0x257D44u: goto label_257d44;
            case 0x257D48u: goto label_257d48;
            case 0x257D4Cu: goto label_257d4c;
            case 0x257D50u: goto label_257d50;
            case 0x257D54u: goto label_257d54;
            case 0x257D58u: goto label_257d58;
            case 0x257D5Cu: goto label_257d5c;
            case 0x257D60u: goto label_257d60;
            case 0x257D64u: goto label_257d64;
            case 0x257D68u: goto label_257d68;
            case 0x257D6Cu: goto label_257d6c;
            case 0x257D70u: goto label_257d70;
            case 0x257D74u: goto label_257d74;
            case 0x257D78u: goto label_257d78;
            case 0x257D7Cu: goto label_257d7c;
            case 0x257D80u: goto label_257d80;
            case 0x257D84u: goto label_257d84;
            case 0x257D88u: goto label_257d88;
            case 0x257D8Cu: goto label_257d8c;
            case 0x257D90u: goto label_257d90;
            case 0x257D94u: goto label_257d94;
            case 0x257D98u: goto label_257d98;
            case 0x257D9Cu: goto label_257d9c;
            case 0x257DA0u: goto label_257da0;
            case 0x257DA4u: goto label_257da4;
            case 0x257DA8u: goto label_257da8;
            case 0x257DACu: goto label_257dac;
            case 0x257DB0u: goto label_257db0;
            case 0x257DB4u: goto label_257db4;
            case 0x257DB8u: goto label_257db8;
            case 0x257DBCu: goto label_257dbc;
            case 0x257DC0u: goto label_257dc0;
            case 0x257DC4u: goto label_257dc4;
            case 0x257DC8u: goto label_257dc8;
            case 0x257DCCu: goto label_257dcc;
            case 0x257DD0u: goto label_257dd0;
            case 0x257DD4u: goto label_257dd4;
            case 0x257DD8u: goto label_257dd8;
            case 0x257DDCu: goto label_257ddc;
            case 0x257DE0u: goto label_257de0;
            case 0x257DE4u: goto label_257de4;
            case 0x257DE8u: goto label_257de8;
            case 0x257DECu: goto label_257dec;
            case 0x257DF0u: goto label_257df0;
            case 0x257DF4u: goto label_257df4;
            case 0x257DF8u: goto label_257df8;
            case 0x257DFCu: goto label_257dfc;
            case 0x257E00u: goto label_257e00;
            case 0x257E04u: goto label_257e04;
            case 0x257E08u: goto label_257e08;
            case 0x257E0Cu: goto label_257e0c;
            case 0x257E10u: goto label_257e10;
            case 0x257E14u: goto label_257e14;
            case 0x257E18u: goto label_257e18;
            case 0x257E1Cu: goto label_257e1c;
            case 0x257E20u: goto label_257e20;
            case 0x257E24u: goto label_257e24;
            case 0x257E28u: goto label_257e28;
            case 0x257E2Cu: goto label_257e2c;
            case 0x257E30u: goto label_257e30;
            case 0x257E34u: goto label_257e34;
            case 0x257E38u: goto label_257e38;
            case 0x257E3Cu: goto label_257e3c;
            case 0x257E40u: goto label_257e40;
            case 0x257E44u: goto label_257e44;
            case 0x257E48u: goto label_257e48;
            case 0x257E4Cu: goto label_257e4c;
            case 0x257E50u: goto label_257e50;
            case 0x257E54u: goto label_257e54;
            case 0x257E58u: goto label_257e58;
            case 0x257E5Cu: goto label_257e5c;
            case 0x257E60u: goto label_257e60;
            case 0x257E64u: goto label_257e64;
            case 0x257E68u: goto label_257e68;
            case 0x257E6Cu: goto label_257e6c;
            case 0x257E70u: goto label_257e70;
            case 0x257E74u: goto label_257e74;
            case 0x257E78u: goto label_257e78;
            case 0x257E7Cu: goto label_257e7c;
            case 0x257E80u: goto label_257e80;
            case 0x257E84u: goto label_257e84;
            case 0x257E88u: goto label_257e88;
            case 0x257E8Cu: goto label_257e8c;
            case 0x257E90u: goto label_257e90;
            case 0x257E94u: goto label_257e94;
            case 0x257E98u: goto label_257e98;
            case 0x257E9Cu: goto label_257e9c;
            case 0x257EA0u: goto label_257ea0;
            case 0x257EA4u: goto label_257ea4;
            case 0x257EA8u: goto label_257ea8;
            case 0x257EACu: goto label_257eac;
            case 0x257EB0u: goto label_257eb0;
            case 0x257EB4u: goto label_257eb4;
            case 0x257EB8u: goto label_257eb8;
            case 0x257EBCu: goto label_257ebc;
            case 0x257EC0u: goto label_257ec0;
            case 0x257EC4u: goto label_257ec4;
            case 0x257EC8u: goto label_257ec8;
            case 0x257ECCu: goto label_257ecc;
            case 0x257ED0u: goto label_257ed0;
            case 0x257ED4u: goto label_257ed4;
            case 0x257ED8u: goto label_257ed8;
            case 0x257EDCu: goto label_257edc;
            case 0x257EE0u: goto label_257ee0;
            case 0x257EE4u: goto label_257ee4;
            case 0x257EE8u: goto label_257ee8;
            case 0x257EECu: goto label_257eec;
            case 0x257EF0u: goto label_257ef0;
            case 0x257EF4u: goto label_257ef4;
            case 0x257EF8u: goto label_257ef8;
            case 0x257EFCu: goto label_257efc;
            case 0x257F00u: goto label_257f00;
            case 0x257F04u: goto label_257f04;
            case 0x257F08u: goto label_257f08;
            case 0x257F0Cu: goto label_257f0c;
            case 0x257F10u: goto label_257f10;
            case 0x257F14u: goto label_257f14;
            case 0x257F18u: goto label_257f18;
            case 0x257F1Cu: goto label_257f1c;
            case 0x257F20u: goto label_257f20;
            case 0x257F24u: goto label_257f24;
            case 0x257F28u: goto label_257f28;
            case 0x257F2Cu: goto label_257f2c;
            case 0x257F30u: goto label_257f30;
            case 0x257F34u: goto label_257f34;
            case 0x257F38u: goto label_257f38;
            case 0x257F3Cu: goto label_257f3c;
            case 0x257F40u: goto label_257f40;
            case 0x257F44u: goto label_257f44;
            case 0x257F48u: goto label_257f48;
            case 0x257F4Cu: goto label_257f4c;
            case 0x257F50u: goto label_257f50;
            case 0x257F54u: goto label_257f54;
            case 0x257F58u: goto label_257f58;
            case 0x257F5Cu: goto label_257f5c;
            case 0x257F60u: goto label_257f60;
            case 0x257F64u: goto label_257f64;
            case 0x257F68u: goto label_257f68;
            case 0x257F6Cu: goto label_257f6c;
            case 0x257F70u: goto label_257f70;
            case 0x257F74u: goto label_257f74;
            case 0x257F78u: goto label_257f78;
            case 0x257F7Cu: goto label_257f7c;
            case 0x257F80u: goto label_257f80;
            case 0x257F84u: goto label_257f84;
            case 0x257F88u: goto label_257f88;
            case 0x257F8Cu: goto label_257f8c;
            case 0x257F90u: goto label_257f90;
            case 0x257F94u: goto label_257f94;
            case 0x257F98u: goto label_257f98;
            case 0x257F9Cu: goto label_257f9c;
            case 0x257FA0u: goto label_257fa0;
            case 0x257FA4u: goto label_257fa4;
            case 0x257FA8u: goto label_257fa8;
            case 0x257FACu: goto label_257fac;
            case 0x257FB0u: goto label_257fb0;
            case 0x257FB4u: goto label_257fb4;
            case 0x257FB8u: goto label_257fb8;
            case 0x257FBCu: goto label_257fbc;
            case 0x257FC0u: goto label_257fc0;
            case 0x257FC4u: goto label_257fc4;
            case 0x257FC8u: goto label_257fc8;
            case 0x257FCCu: goto label_257fcc;
            case 0x257FD0u: goto label_257fd0;
            case 0x257FD4u: goto label_257fd4;
            case 0x257FD8u: goto label_257fd8;
            case 0x257FDCu: goto label_257fdc;
            case 0x257FE0u: goto label_257fe0;
            case 0x257FE4u: goto label_257fe4;
            case 0x257FE8u: goto label_257fe8;
            case 0x257FECu: goto label_257fec;
            case 0x257FF0u: goto label_257ff0;
            case 0x257FF4u: goto label_257ff4;
            case 0x257FF8u: goto label_257ff8;
            case 0x257FFCu: goto label_257ffc;
            case 0x258000u: goto label_258000;
            case 0x258004u: goto label_258004;
            case 0x258008u: goto label_258008;
            case 0x25800Cu: goto label_25800c;
            case 0x258010u: goto label_258010;
            case 0x258014u: goto label_258014;
            case 0x258018u: goto label_258018;
            case 0x25801Cu: goto label_25801c;
            case 0x258020u: goto label_258020;
            case 0x258024u: goto label_258024;
            case 0x258028u: goto label_258028;
            case 0x25802Cu: goto label_25802c;
            case 0x258030u: goto label_258030;
            case 0x258034u: goto label_258034;
            case 0x258038u: goto label_258038;
            case 0x25803Cu: goto label_25803c;
            case 0x258040u: goto label_258040;
            case 0x258044u: goto label_258044;
            case 0x258048u: goto label_258048;
            case 0x25804Cu: goto label_25804c;
            case 0x258050u: goto label_258050;
            case 0x258054u: goto label_258054;
            case 0x258058u: goto label_258058;
            case 0x25805Cu: goto label_25805c;
            case 0x258060u: goto label_258060;
            case 0x258064u: goto label_258064;
            case 0x258068u: goto label_258068;
            case 0x25806Cu: goto label_25806c;
            case 0x258070u: goto label_258070;
            case 0x258074u: goto label_258074;
            case 0x258078u: goto label_258078;
            case 0x25807Cu: goto label_25807c;
            case 0x258080u: goto label_258080;
            case 0x258084u: goto label_258084;
            case 0x258088u: goto label_258088;
            case 0x25808Cu: goto label_25808c;
            case 0x258090u: goto label_258090;
            case 0x258094u: goto label_258094;
            case 0x258098u: goto label_258098;
            case 0x25809Cu: goto label_25809c;
            case 0x2580A0u: goto label_2580a0;
            case 0x2580A4u: goto label_2580a4;
            case 0x2580A8u: goto label_2580a8;
            case 0x2580ACu: goto label_2580ac;
            case 0x2580B0u: goto label_2580b0;
            case 0x2580B4u: goto label_2580b4;
            case 0x2580B8u: goto label_2580b8;
            case 0x2580BCu: goto label_2580bc;
            case 0x2580C0u: goto label_2580c0;
            case 0x2580C4u: goto label_2580c4;
            case 0x2580C8u: goto label_2580c8;
            case 0x2580CCu: goto label_2580cc;
            case 0x2580D0u: goto label_2580d0;
            case 0x2580D4u: goto label_2580d4;
            case 0x2580D8u: goto label_2580d8;
            case 0x2580DCu: goto label_2580dc;
            case 0x2580E0u: goto label_2580e0;
            case 0x2580E4u: goto label_2580e4;
            case 0x2580E8u: goto label_2580e8;
            case 0x2580ECu: goto label_2580ec;
            case 0x2580F0u: goto label_2580f0;
            case 0x2580F4u: goto label_2580f4;
            case 0x2580F8u: goto label_2580f8;
            case 0x2580FCu: goto label_2580fc;
            case 0x258100u: goto label_258100;
            case 0x258104u: goto label_258104;
            case 0x258108u: goto label_258108;
            case 0x25810Cu: goto label_25810c;
            case 0x258110u: goto label_258110;
            case 0x258114u: goto label_258114;
            case 0x258118u: goto label_258118;
            case 0x25811Cu: goto label_25811c;
            case 0x258120u: goto label_258120;
            case 0x258124u: goto label_258124;
            case 0x258128u: goto label_258128;
            case 0x25812Cu: goto label_25812c;
            case 0x258130u: goto label_258130;
            case 0x258134u: goto label_258134;
            case 0x258138u: goto label_258138;
            case 0x25813Cu: goto label_25813c;
            case 0x258140u: goto label_258140;
            case 0x258144u: goto label_258144;
            case 0x258148u: goto label_258148;
            case 0x25814Cu: goto label_25814c;
            case 0x258150u: goto label_258150;
            case 0x258154u: goto label_258154;
            case 0x258158u: goto label_258158;
            case 0x25815Cu: goto label_25815c;
            case 0x258160u: goto label_258160;
            case 0x258164u: goto label_258164;
            case 0x258168u: goto label_258168;
            case 0x25816Cu: goto label_25816c;
            case 0x258170u: goto label_258170;
            case 0x258174u: goto label_258174;
            case 0x258178u: goto label_258178;
            case 0x25817Cu: goto label_25817c;
            case 0x258180u: goto label_258180;
            case 0x258184u: goto label_258184;
            case 0x258188u: goto label_258188;
            case 0x25818Cu: goto label_25818c;
            case 0x258190u: goto label_258190;
            case 0x258194u: goto label_258194;
            case 0x258198u: goto label_258198;
            case 0x25819Cu: goto label_25819c;
            case 0x2581A0u: goto label_2581a0;
            case 0x2581A4u: goto label_2581a4;
            case 0x2581A8u: goto label_2581a8;
            case 0x2581ACu: goto label_2581ac;
            case 0x2581B0u: goto label_2581b0;
            case 0x2581B4u: goto label_2581b4;
            case 0x2581B8u: goto label_2581b8;
            case 0x2581BCu: goto label_2581bc;
            case 0x2581C0u: goto label_2581c0;
            case 0x2581C4u: goto label_2581c4;
            case 0x2581C8u: goto label_2581c8;
            case 0x2581CCu: goto label_2581cc;
            case 0x2581D0u: goto label_2581d0;
            case 0x2581D4u: goto label_2581d4;
            case 0x2581D8u: goto label_2581d8;
            case 0x2581DCu: goto label_2581dc;
            case 0x2581E0u: goto label_2581e0;
            case 0x2581E4u: goto label_2581e4;
            case 0x2581E8u: goto label_2581e8;
            case 0x2581ECu: goto label_2581ec;
            case 0x2581F0u: goto label_2581f0;
            case 0x2581F4u: goto label_2581f4;
            case 0x2581F8u: goto label_2581f8;
            case 0x2581FCu: goto label_2581fc;
            case 0x258200u: goto label_258200;
            case 0x258204u: goto label_258204;
            case 0x258208u: goto label_258208;
            case 0x25820Cu: goto label_25820c;
            case 0x258210u: goto label_258210;
            case 0x258214u: goto label_258214;
            case 0x258218u: goto label_258218;
            case 0x25821Cu: goto label_25821c;
            case 0x258220u: goto label_258220;
            case 0x258224u: goto label_258224;
            case 0x258228u: goto label_258228;
            case 0x25822Cu: goto label_25822c;
            case 0x258230u: goto label_258230;
            case 0x258234u: goto label_258234;
            case 0x258238u: goto label_258238;
            case 0x25823Cu: goto label_25823c;
            case 0x258240u: goto label_258240;
            case 0x258244u: goto label_258244;
            case 0x258248u: goto label_258248;
            case 0x25824Cu: goto label_25824c;
            case 0x258250u: goto label_258250;
            case 0x258254u: goto label_258254;
            case 0x258258u: goto label_258258;
            case 0x25825Cu: goto label_25825c;
            case 0x258260u: goto label_258260;
            case 0x258264u: goto label_258264;
            case 0x258268u: goto label_258268;
            case 0x25826Cu: goto label_25826c;
            case 0x258270u: goto label_258270;
            case 0x258274u: goto label_258274;
            case 0x258278u: goto label_258278;
            case 0x25827Cu: goto label_25827c;
            case 0x258280u: goto label_258280;
            case 0x258284u: goto label_258284;
            case 0x258288u: goto label_258288;
            case 0x25828Cu: goto label_25828c;
            case 0x258290u: goto label_258290;
            case 0x258294u: goto label_258294;
            case 0x258298u: goto label_258298;
            case 0x25829Cu: goto label_25829c;
            case 0x2582A0u: goto label_2582a0;
            case 0x2582A4u: goto label_2582a4;
            case 0x2582A8u: goto label_2582a8;
            case 0x2582ACu: goto label_2582ac;
            case 0x2582B0u: goto label_2582b0;
            case 0x2582B4u: goto label_2582b4;
            case 0x2582B8u: goto label_2582b8;
            case 0x2582BCu: goto label_2582bc;
            case 0x2582C0u: goto label_2582c0;
            case 0x2582C4u: goto label_2582c4;
            case 0x2582C8u: goto label_2582c8;
            case 0x2582CCu: goto label_2582cc;
            case 0x2582D0u: goto label_2582d0;
            case 0x2582D4u: goto label_2582d4;
            case 0x2582D8u: goto label_2582d8;
            case 0x2582DCu: goto label_2582dc;
            case 0x2582E0u: goto label_2582e0;
            case 0x2582E4u: goto label_2582e4;
            case 0x2582E8u: goto label_2582e8;
            case 0x2582ECu: goto label_2582ec;
            case 0x2582F0u: goto label_2582f0;
            case 0x2582F4u: goto label_2582f4;
            case 0x2582F8u: goto label_2582f8;
            case 0x2582FCu: goto label_2582fc;
            case 0x258300u: goto label_258300;
            case 0x258304u: goto label_258304;
            case 0x258308u: goto label_258308;
            case 0x25830Cu: goto label_25830c;
            case 0x258310u: goto label_258310;
            case 0x258314u: goto label_258314;
            case 0x258318u: goto label_258318;
            case 0x25831Cu: goto label_25831c;
            case 0x258320u: goto label_258320;
            case 0x258324u: goto label_258324;
            case 0x258328u: goto label_258328;
            case 0x25832Cu: goto label_25832c;
            case 0x258330u: goto label_258330;
            case 0x258334u: goto label_258334;
            case 0x258338u: goto label_258338;
            case 0x25833Cu: goto label_25833c;
            case 0x258340u: goto label_258340;
            case 0x258344u: goto label_258344;
            case 0x258348u: goto label_258348;
            case 0x25834Cu: goto label_25834c;
            case 0x258350u: goto label_258350;
            case 0x258354u: goto label_258354;
            case 0x258358u: goto label_258358;
            case 0x25835Cu: goto label_25835c;
            case 0x258360u: goto label_258360;
            case 0x258364u: goto label_258364;
            case 0x258368u: goto label_258368;
            case 0x25836Cu: goto label_25836c;
            case 0x258370u: goto label_258370;
            case 0x258374u: goto label_258374;
            case 0x258378u: goto label_258378;
            case 0x25837Cu: goto label_25837c;
            case 0x258380u: goto label_258380;
            case 0x258384u: goto label_258384;
            case 0x258388u: goto label_258388;
            case 0x25838Cu: goto label_25838c;
            case 0x258390u: goto label_258390;
            case 0x258394u: goto label_258394;
            case 0x258398u: goto label_258398;
            case 0x25839Cu: goto label_25839c;
            case 0x2583A0u: goto label_2583a0;
            case 0x2583A4u: goto label_2583a4;
            case 0x2583A8u: goto label_2583a8;
            case 0x2583ACu: goto label_2583ac;
            case 0x2583B0u: goto label_2583b0;
            case 0x2583B4u: goto label_2583b4;
            case 0x2583B8u: goto label_2583b8;
            case 0x2583BCu: goto label_2583bc;
            case 0x2583C0u: goto label_2583c0;
            case 0x2583C4u: goto label_2583c4;
            case 0x2583C8u: goto label_2583c8;
            case 0x2583CCu: goto label_2583cc;
            case 0x2583D0u: goto label_2583d0;
            case 0x2583D4u: goto label_2583d4;
            case 0x2583D8u: goto label_2583d8;
            case 0x2583DCu: goto label_2583dc;
            case 0x2583E0u: goto label_2583e0;
            case 0x2583E4u: goto label_2583e4;
            case 0x2583E8u: goto label_2583e8;
            case 0x2583ECu: goto label_2583ec;
            case 0x2583F0u: goto label_2583f0;
            case 0x2583F4u: goto label_2583f4;
            case 0x2583F8u: goto label_2583f8;
            case 0x2583FCu: goto label_2583fc;
            case 0x258400u: goto label_258400;
            case 0x258404u: goto label_258404;
            case 0x258408u: goto label_258408;
            case 0x25840Cu: goto label_25840c;
            case 0x258410u: goto label_258410;
            case 0x258414u: goto label_258414;
            case 0x258418u: goto label_258418;
            case 0x25841Cu: goto label_25841c;
            case 0x258420u: goto label_258420;
            case 0x258424u: goto label_258424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x257A90u;
label_257a90:
    // 0x257a90: 0x820300dc
    ctx->pc = 0x257a90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_257a94:
    // 0x257a94: 0x28620002
    ctx->pc = 0x257a94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
label_257a98:
    // 0x257a98: 0x10400028
label_257a9c:
    if (ctx->pc == 0x257A9Cu) {
        ctx->pc = 0x257A9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x257AA0u;
        goto label_257aa0;
    }
    ctx->pc = 0x257A98u;
    {
        const bool branch_taken_0x257a98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x257A9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x257a98) {
            ctx->pc = 0x257B3Cu;
            goto label_257b3c;
        }
    }
    ctx->pc = 0x257AA0u;
label_257aa0:
    // 0x257aa0: 0x14620060
label_257aa4:
    if (ctx->pc == 0x257AA4u) {
        ctx->pc = 0x257AA8u;
        goto label_257aa8;
    }
    ctx->pc = 0x257AA0u;
    {
        const bool branch_taken_0x257aa0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x257aa0) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257AA8u;
label_257aa8:
    // 0x257aa8: 0x860200da
    ctx->pc = 0x257aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 218)));
label_257aac:
    // 0x257aac: 0x2842001f
    ctx->pc = 0x257aacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 31));
label_257ab0:
    // 0x257ab0: 0x1440005c
label_257ab4:
    if (ctx->pc == 0x257AB4u) {
        ctx->pc = 0x257AB8u;
        goto label_257ab8;
    }
    ctx->pc = 0x257AB0u;
    {
        const bool branch_taken_0x257ab0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x257ab0) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257AB8u;
label_257ab8:
    // 0x257ab8: 0x1000005a
label_257abc:
    if (ctx->pc == 0x257ABCu) {
        ctx->pc = 0x257ABCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257AC0u;
        goto label_257ac0;
    }
    ctx->pc = 0x257AB8u;
    {
        const bool branch_taken_0x257ab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257ABCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x257ab8) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257AC0u;
label_257ac0:
    // 0x257ac0: 0x8e020000
    ctx->pc = 0x257ac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_257ac4:
    // 0x257ac4: 0x8c430004
    ctx->pc = 0x257ac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_257ac8:
    // 0x257ac8: 0x24020032
    ctx->pc = 0x257ac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
label_257acc:
    // 0x257acc: 0x10620055
label_257ad0:
    if (ctx->pc == 0x257AD0u) {
        ctx->pc = 0x257AD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x257AD4u;
        goto label_257ad4;
    }
    ctx->pc = 0x257ACCu;
    {
        const bool branch_taken_0x257acc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x257AD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x257acc) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257AD4u;
label_257ad4:
    // 0x257ad4: 0xc440002c
    ctx->pc = 0x257ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ad8:
    // 0x257ad8: 0x46800020
    ctx->pc = 0x257ad8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_257adc:
    // 0x257adc: 0x3c013f80
    ctx->pc = 0x257adcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_257ae0:
    // 0x257ae0: 0x44810800
    ctx->pc = 0x257ae0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_257ae4:
    // 0x257ae4: 0x46010001
    ctx->pc = 0x257ae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_257ae8:
    // 0x257ae8: 0x1000004e
label_257aec:
    if (ctx->pc == 0x257AECu) {
        ctx->pc = 0x257AECu;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x257AF0u;
        goto label_257af0;
    }
    ctx->pc = 0x257AE8u;
    {
        const bool branch_taken_0x257ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257AECu;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x257ae8) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257AF0u;
label_257af0:
    // 0x257af0: 0x8e020000
    ctx->pc = 0x257af0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_257af4:
    // 0x257af4: 0x8c430004
    ctx->pc = 0x257af4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_257af8:
    // 0x257af8: 0x2402002b
    ctx->pc = 0x257af8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_257afc:
    // 0x257afc: 0x14620049
label_257b00:
    if (ctx->pc == 0x257B00u) {
        ctx->pc = 0x257B04u;
        goto label_257b04;
    }
    ctx->pc = 0x257AFCu;
    {
        const bool branch_taken_0x257afc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x257afc) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257B04u;
label_257b04:
    // 0x257b04: 0x820200dc
    ctx->pc = 0x257b04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_257b08:
    // 0x257b08: 0x38420002
    ctx->pc = 0x257b08u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
label_257b0c:
    // 0x257b0c: 0x10000045
label_257b10:
    if (ctx->pc == 0x257B10u) {
        ctx->pc = 0x257B10u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
        ctx->pc = 0x257B14u;
        goto label_257b14;
    }
    ctx->pc = 0x257B0Cu;
    {
        const bool branch_taken_0x257b0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257B10u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
        if (branch_taken_0x257b0c) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257B14u;
label_257b14:
    // 0x257b14: 0x820200e3
    ctx->pc = 0x257b14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 227)));
label_257b18:
    // 0x257b18: 0x4410042
label_257b1c:
    if (ctx->pc == 0x257B1Cu) {
        ctx->pc = 0x257B20u;
        goto label_257b20;
    }
    ctx->pc = 0x257B18u;
    {
        const bool branch_taken_0x257b18 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x257b18) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257B20u;
label_257b20:
    // 0x257b20: 0x8e020000
    ctx->pc = 0x257b20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_257b24:
    // 0x257b24: 0xc4410010
    ctx->pc = 0x257b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257b28:
    // 0x257b28: 0x3c014040
    ctx->pc = 0x257b28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_257b2c:
    // 0x257b2c: 0x44810000
    ctx->pc = 0x257b2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_257b30:
    // 0x257b30: 0x46000836
    ctx->pc = 0x257b30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257b34:
    // 0x257b34: 0x4500003b
label_257b38:
    if (ctx->pc == 0x257B38u) {
        ctx->pc = 0x257B3Cu;
        goto label_257b3c;
    }
    ctx->pc = 0x257B34u;
    {
        const bool branch_taken_0x257b34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257b34) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257B3Cu;
label_257b3c:
    // 0x257b3c: 0x10000039
label_257b40:
    if (ctx->pc == 0x257B40u) {
        ctx->pc = 0x257B40u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257B44u;
        goto label_257b44;
    }
    ctx->pc = 0x257B3Cu;
    {
        const bool branch_taken_0x257b3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257B40u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x257b3c) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257B44u;
label_257b44:
    // 0x257b44: 0xc60100fc
    ctx->pc = 0x257b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257b48:
    // 0x257b48: 0x44800000
    ctx->pc = 0x257b48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_257b4c:
    // 0x257b4c: 0x46010036
    ctx->pc = 0x257b4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257b50:
    // 0x257b50: 0x0
    ctx->pc = 0x257b50u;
    // NOP
label_257b54:
    // 0x257b54: 0x45000003
label_257b58:
    if (ctx->pc == 0x257B58u) {
        ctx->pc = 0x257B58u;
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x257B5Cu;
        goto label_257b5c;
    }
    ctx->pc = 0x257B54u;
    {
        const bool branch_taken_0x257b54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257B58u;
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x257b54) {
            ctx->pc = 0x257B64u;
            goto label_257b64;
        }
    }
    ctx->pc = 0x257B5Cu;
label_257b5c:
    // 0x257b5c: 0x10000031
label_257b60:
    if (ctx->pc == 0x257B60u) {
        ctx->pc = 0x257B60u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x257B64u;
        goto label_257b64;
    }
    ctx->pc = 0x257B5Cu;
    {
        const bool branch_taken_0x257b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257B60u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x257b5c) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257B64u;
label_257b64:
    // 0x257b64: 0x3c014040
    ctx->pc = 0x257b64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_257b68:
    // 0x257b68: 0x4481a000
    ctx->pc = 0x257b68u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_257b6c:
    // 0x257b6c: 0x1000002d
label_257b70:
    if (ctx->pc == 0x257B70u) {
        ctx->pc = 0x257B70u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x257B74u;
        goto label_257b74;
    }
    ctx->pc = 0x257B6Cu;
    {
        const bool branch_taken_0x257b6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257B70u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x257b6c) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257B74u;
label_257b74:
    // 0x257b74: 0x8e020000
    ctx->pc = 0x257b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_257b78:
    // 0x257b78: 0x8c430004
    ctx->pc = 0x257b78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_257b7c:
    // 0x257b7c: 0x2c62002e
    ctx->pc = 0x257b7cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 46));
label_257b80:
    // 0x257b80: 0x10400028
label_257b84:
    if (ctx->pc == 0x257B84u) {
        ctx->pc = 0x257B84u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 43));
        ctx->pc = 0x257B88u;
        goto label_257b88;
    }
    ctx->pc = 0x257B80u;
    {
        const bool branch_taken_0x257b80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x257B84u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 43));
        if (branch_taken_0x257b80) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257B88u;
label_257b88:
    // 0x257b88: 0x14400026
label_257b8c:
    if (ctx->pc == 0x257B8Cu) {
        ctx->pc = 0x257B90u;
        goto label_257b90;
    }
    ctx->pc = 0x257B88u;
    {
        const bool branch_taken_0x257b88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x257b88) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257B90u;
label_257b90:
    // 0x257b90: 0x820200dc
    ctx->pc = 0x257b90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_257b94:
    // 0x257b94: 0x28420001
    ctx->pc = 0x257b94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
label_257b98:
    // 0x257b98: 0x10000022
label_257b9c:
    if (ctx->pc == 0x257B9Cu) {
        ctx->pc = 0x257B9Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
        ctx->pc = 0x257BA0u;
        goto label_257ba0;
    }
    ctx->pc = 0x257B98u;
    {
        const bool branch_taken_0x257b98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257B9Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
        if (branch_taken_0x257b98) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257BA0u;
label_257ba0:
    // 0x257ba0: 0x960200d8
    ctx->pc = 0x257ba0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_257ba4:
    // 0x257ba4: 0x30420400
    ctx->pc = 0x257ba4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
label_257ba8:
    // 0x257ba8: 0x5440001e
label_257bac:
    if (ctx->pc == 0x257BACu) {
        ctx->pc = 0x257BACu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257BB0u;
        goto label_257bb0;
    }
    ctx->pc = 0x257BA8u;
    {
        const bool branch_taken_0x257ba8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x257ba8) {
            ctx->pc = 0x257BACu;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257BB0u;
label_257bb0:
    // 0x257bb0: 0xc60100fc
    ctx->pc = 0x257bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257bb4:
    // 0x257bb4: 0x44800000
    ctx->pc = 0x257bb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_257bb8:
    // 0x257bb8: 0x46010034
    ctx->pc = 0x257bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257bbc:
    // 0x257bbc: 0x0
    ctx->pc = 0x257bbcu;
    // NOP
label_257bc0:
    // 0x257bc0: 0x45020003
label_257bc4:
    if (ctx->pc == 0x257BC4u) {
        ctx->pc = 0x257BC4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x257BC8u;
        goto label_257bc8;
    }
    ctx->pc = 0x257BC0u;
    {
        const bool branch_taken_0x257bc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257bc0) {
            ctx->pc = 0x257BC4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->pc = 0x257BD0u;
            goto label_257bd0;
        }
    }
    ctx->pc = 0x257BC8u;
label_257bc8:
    // 0x257bc8: 0x10000005
label_257bcc:
    if (ctx->pc == 0x257BCCu) {
        ctx->pc = 0x257BCCu;
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x257BD0u;
        goto label_257bd0;
    }
    ctx->pc = 0x257BC8u;
    {
        const bool branch_taken_0x257bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257BCCu;
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x257bc8) {
            ctx->pc = 0x257BE0u;
            goto label_257be0;
        }
    }
    ctx->pc = 0x257BD0u;
label_257bd0:
    // 0x257bd0: 0x2402001b
    ctx->pc = 0x257bd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
label_257bd4:
    // 0x257bd4: 0x54620004
label_257bd8:
    if (ctx->pc == 0x257BD8u) {
        ctx->pc = 0x257BD8u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->pc = 0x257BDCu;
        goto label_257bdc;
    }
    ctx->pc = 0x257BD4u;
    {
        const bool branch_taken_0x257bd4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x257bd4) {
            ctx->pc = 0x257BD8u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->pc = 0x257BE8u;
            goto label_257be8;
        }
    }
    ctx->pc = 0x257BDCu;
label_257bdc:
    // 0x257bdc: 0x4614a500
    ctx->pc = 0x257bdcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_257be0:
    // 0x257be0: 0x24130001
    ctx->pc = 0x257be0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_257be4:
    // 0x257be4: 0x960200f4
    ctx->pc = 0x257be4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
label_257be8:
    // 0x257be8: 0x30420200
    ctx->pc = 0x257be8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
label_257bec:
    // 0x257bec: 0x5440000d
label_257bf0:
    if (ctx->pc == 0x257BF0u) {
        ctx->pc = 0x257BF0u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257BF4u;
        goto label_257bf4;
    }
    ctx->pc = 0x257BECu;
    {
        const bool branch_taken_0x257bec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x257bec) {
            ctx->pc = 0x257BF0u;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257BF4u;
label_257bf4:
    // 0x257bf4: 0x960200f4
    ctx->pc = 0x257bf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
label_257bf8:
    // 0x257bf8: 0x30420040
    ctx->pc = 0x257bf8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
label_257bfc:
    // 0x257bfc: 0x10400009
label_257c00:
    if (ctx->pc == 0x257C00u) {
        ctx->pc = 0x257C04u;
        goto label_257c04;
    }
    ctx->pc = 0x257BFCu;
    {
        const bool branch_taken_0x257bfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x257bfc) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257C04u;
label_257c04:
    // 0x257c04: 0x820400f6
    ctx->pc = 0x257c04u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
label_257c08:
    // 0x257c08: 0x28820064
    ctx->pc = 0x257c08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 100));
label_257c0c:
    // 0x257c0c: 0x10400005
label_257c10:
    if (ctx->pc == 0x257C10u) {
        ctx->pc = 0x257C14u;
        goto label_257c14;
    }
    ctx->pc = 0x257C0Cu;
    {
        const bool branch_taken_0x257c0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x257c0c) {
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257C14u;
label_257c14:
    // 0x257c14: 0xc09dbb2
label_257c18:
    if (ctx->pc == 0x257C18u) {
        ctx->pc = 0x257C1Cu;
        goto label_257c1c;
    }
    ctx->pc = 0x257C14u;
    SET_GPR_U32(ctx, 31, 0x257C1Cu);
    ctx->pc = 0x276EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnyPlayerHasAllCrystals_0x276ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257C1Cu; }
    }
    if (ctx->pc != 0x257C1Cu) { return; }
    ctx->pc = 0x257C1Cu;
label_257c1c:
    // 0x257c1c: 0x54400001
label_257c20:
    if (ctx->pc == 0x257C20u) {
        ctx->pc = 0x257C20u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        ctx->pc = 0x257C24u;
        goto label_257c24;
    }
    ctx->pc = 0x257C1Cu;
    {
        const bool branch_taken_0x257c1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x257c1c) {
            ctx->pc = 0x257C20u;
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
            ctx->pc = 0x257C24u;
            goto label_257c24;
        }
    }
    ctx->pc = 0x257C24u;
label_257c24:
    // 0x257c24: 0x1280010d
label_257c28:
    if (ctx->pc == 0x257C28u) {
        ctx->pc = 0x257C2Cu;
        goto label_257c2c;
    }
    ctx->pc = 0x257C24u;
    {
        const bool branch_taken_0x257c24 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x257c24) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257C2Cu;
label_257c2c:
    // 0x257c2c: 0x4614b540
    ctx->pc = 0x257c2cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_257c30:
    // 0x257c30: 0xc6010060
    ctx->pc = 0x257c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257c34:
    // 0x257c34: 0xc6200000
    ctx->pc = 0x257c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c38:
    // 0x257c38: 0x46000841
    ctx->pc = 0x257c38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_257c3c:
    // 0x257c3c: 0xc6000068
    ctx->pc = 0x257c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c40:
    // 0x257c40: 0xc6220008
    ctx->pc = 0x257c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257c44:
    // 0x257c44: 0x46020001
    ctx->pc = 0x257c44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_257c48:
    // 0x257c48: 0x46010842
    ctx->pc = 0x257c48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_257c4c:
    // 0x257c4c: 0x46000002
    ctx->pc = 0x257c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_257c50:
    // 0x257c50: 0x46000840
    ctx->pc = 0x257c50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257c54:
    // 0x257c54: 0x4615a802
    ctx->pc = 0x257c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_257c58:
    // 0x257c58: 0x46010034
    ctx->pc = 0x257c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257c5c:
    // 0x257c5c: 0x450100ff
label_257c60:
    if (ctx->pc == 0x257C60u) {
        ctx->pc = 0x257C64u;
        goto label_257c64;
    }
    ctx->pc = 0x257C5Cu;
    {
        const bool branch_taken_0x257c5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257c5c) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257C64u;
label_257c64:
    // 0x257c64: 0x200202d
    ctx->pc = 0x257c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257c68:
    // 0x257c68: 0xc094e70
label_257c6c:
    if (ctx->pc == 0x257C6Cu) {
        ctx->pc = 0x257C6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257C70u;
        goto label_257c70;
    }
    ctx->pc = 0x257C68u;
    SET_GPR_U32(ctx, 31, 0x257C70u);
    ctx->pc = 0x257C6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2539C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos_0x2539c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257C70u; }
    }
    if (ctx->pc != 0x257C70u) { return; }
    ctx->pc = 0x257C70u;
label_257c70:
    // 0x257c70: 0xc6200000
    ctx->pc = 0x257c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c74:
    // 0x257c74: 0xc7a10000
    ctx->pc = 0x257c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257c78:
    // 0x257c78: 0x46010001
    ctx->pc = 0x257c78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_257c7c:
    // 0x257c7c: 0xe7a00010
    ctx->pc = 0x257c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_257c80:
    // 0x257c80: 0xc6210004
    ctx->pc = 0x257c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257c84:
    // 0x257c84: 0xc7a00004
    ctx->pc = 0x257c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c88:
    // 0x257c88: 0x46000881
    ctx->pc = 0x257c88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_257c8c:
    // 0x257c8c: 0xe7a20014
    ctx->pc = 0x257c8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_257c90:
    // 0x257c90: 0xc6200008
    ctx->pc = 0x257c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257c94:
    // 0x257c94: 0xc7a10008
    ctx->pc = 0x257c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257c98:
    // 0x257c98: 0x46010001
    ctx->pc = 0x257c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_257c9c:
    // 0x257c9c: 0x24020002
    ctx->pc = 0x257c9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_257ca0:
    // 0x257ca0: 0x12620007
label_257ca4:
    if (ctx->pc == 0x257CA4u) {
        ctx->pc = 0x257CA4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x257CA8u;
        goto label_257ca8;
    }
    ctx->pc = 0x257CA0u;
    {
        const bool branch_taken_0x257ca0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x257CA4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x257ca0) {
            ctx->pc = 0x257CC0u;
            goto label_257cc0;
        }
    }
    ctx->pc = 0x257CA8u;
label_257ca8:
    // 0x257ca8: 0x46001045
    ctx->pc = 0x257ca8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
label_257cac:
    // 0x257cac: 0xc6c0000c
    ctx->pc = 0x257cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257cb0:
    // 0x257cb0: 0x4600b800
    ctx->pc = 0x257cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_257cb4:
    // 0x257cb4: 0x46010034
    ctx->pc = 0x257cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257cb8:
    // 0x257cb8: 0x450100e8
label_257cbc:
    if (ctx->pc == 0x257CBCu) {
        ctx->pc = 0x257CC0u;
        goto label_257cc0;
    }
    ctx->pc = 0x257CB8u;
    {
        const bool branch_taken_0x257cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257cb8) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257CC0u;
label_257cc0:
    // 0x257cc0: 0xc7ac0010
    ctx->pc = 0x257cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_257cc4:
    // 0x257cc4: 0xc0b5c34
label_257cc8:
    if (ctx->pc == 0x257CC8u) {
        ctx->pc = 0x257CC8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x257CCCu;
        goto label_257ccc;
    }
    ctx->pc = 0x257CC4u;
    SET_GPR_U32(ctx, 31, 0x257CCCu);
    ctx->pc = 0x257CC8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257CCCu; }
    }
    if (ctx->pc != 0x257CCCu) { return; }
    ctx->pc = 0x257CCCu;
label_257ccc:
    // 0x257ccc: 0x460005c6
    ctx->pc = 0x257cccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_257cd0:
    // 0x257cd0: 0x4617a834
    ctx->pc = 0x257cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257cd4:
    // 0x257cd4: 0x0
    ctx->pc = 0x257cd4u;
    // NOP
label_257cd8:
    // 0x257cd8: 0x450100e0
label_257cdc:
    if (ctx->pc == 0x257CDCu) {
        ctx->pc = 0x257CDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x257CE0u;
        goto label_257ce0;
    }
    ctx->pc = 0x257CD8u;
    {
        const bool branch_taken_0x257cd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x257CDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x257cd8) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257CE0u;
label_257ce0:
    // 0x257ce0: 0x1262000e
label_257ce4:
    if (ctx->pc == 0x257CE4u) {
        ctx->pc = 0x257CE4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 3));
        ctx->pc = 0x257CE8u;
        goto label_257ce8;
    }
    ctx->pc = 0x257CE0u;
    {
        const bool branch_taken_0x257ce0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x257CE4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 3));
        if (branch_taken_0x257ce0) {
            ctx->pc = 0x257D1Cu;
            goto label_257d1c;
        }
    }
    ctx->pc = 0x257CE8u;
label_257ce8:
    // 0x257ce8: 0x10400005
label_257cec:
    if (ctx->pc == 0x257CECu) {
        ctx->pc = 0x257CECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x257CF0u;
        goto label_257cf0;
    }
    ctx->pc = 0x257CE8u;
    {
        const bool branch_taken_0x257ce8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x257CECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x257ce8) {
            ctx->pc = 0x257D00u;
            goto label_257d00;
        }
    }
    ctx->pc = 0x257CF0u;
label_257cf0:
    // 0x257cf0: 0x12620036
label_257cf4:
    if (ctx->pc == 0x257CF4u) {
        ctx->pc = 0x257CF8u;
        goto label_257cf8;
    }
    ctx->pc = 0x257CF0u;
    {
        const bool branch_taken_0x257cf0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        if (branch_taken_0x257cf0) {
            ctx->pc = 0x257DCCu;
            goto label_257dcc;
        }
    }
    ctx->pc = 0x257CF8u;
label_257cf8:
    // 0x257cf8: 0x10000034
label_257cfc:
    if (ctx->pc == 0x257CFCu) {
        ctx->pc = 0x257CFCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257D00u;
        goto label_257d00;
    }
    ctx->pc = 0x257CF8u;
    {
        const bool branch_taken_0x257cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257CFCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x257cf8) {
            ctx->pc = 0x257DCCu;
            goto label_257dcc;
        }
    }
    ctx->pc = 0x257D00u;
label_257d00:
    // 0x257d00: 0x24020003
    ctx->pc = 0x257d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_257d04:
    // 0x257d04: 0x1262000b
label_257d08:
    if (ctx->pc == 0x257D08u) {
        ctx->pc = 0x257D08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x257D0Cu;
        goto label_257d0c;
    }
    ctx->pc = 0x257D04u;
    {
        const bool branch_taken_0x257d04 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x257D08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x257d04) {
            ctx->pc = 0x257D34u;
            goto label_257d34;
        }
    }
    ctx->pc = 0x257D0Cu;
label_257d0c:
    // 0x257d0c: 0x12620024
label_257d10:
    if (ctx->pc == 0x257D10u) {
        ctx->pc = 0x257D10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257D14u;
        goto label_257d14;
    }
    ctx->pc = 0x257D0Cu;
    {
        const bool branch_taken_0x257d0c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x257D10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x257d0c) {
            ctx->pc = 0x257DA0u;
            goto label_257da0;
        }
    }
    ctx->pc = 0x257D14u;
label_257d14:
    // 0x257d14: 0x1000002d
label_257d18:
    if (ctx->pc == 0x257D18u) {
        ctx->pc = 0x257D18u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257D1Cu;
        goto label_257d1c;
    }
    ctx->pc = 0x257D14u;
    {
        const bool branch_taken_0x257d14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257D18u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x257d14) {
            ctx->pc = 0x257DCCu;
            goto label_257dcc;
        }
    }
    ctx->pc = 0x257D1Cu;
label_257d1c:
    // 0x257d1c: 0x4600bb06
    ctx->pc = 0x257d1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_257d20:
    // 0x257d20: 0xc0b5c34
label_257d24:
    if (ctx->pc == 0x257D24u) {
        ctx->pc = 0x257D24u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x257D28u;
        goto label_257d28;
    }
    ctx->pc = 0x257D20u;
    SET_GPR_U32(ctx, 31, 0x257D28u);
    ctx->pc = 0x257D24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257D28u; }
    }
    if (ctx->pc != 0x257D28u) { return; }
    ctx->pc = 0x257D28u;
label_257d28:
    // 0x257d28: 0x4600a834
    ctx->pc = 0x257d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257d2c:
    // 0x257d2c: 0x10000025
label_257d30:
    if (ctx->pc == 0x257D30u) {
        ctx->pc = 0x257D34u;
        goto label_257d34;
    }
    ctx->pc = 0x257D2Cu;
    {
        const bool branch_taken_0x257d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x257d2c) {
            ctx->pc = 0x257DC4u;
            goto label_257dc4;
        }
    }
    ctx->pc = 0x257D34u;
label_257d34:
    // 0x257d34: 0xc7a10010
    ctx->pc = 0x257d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257d38:
    // 0x257d38: 0xc6000010
    ctx->pc = 0x257d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257d3c:
    // 0x257d3c: 0x460008c2
    ctx->pc = 0x257d3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_257d40:
    // 0x257d40: 0xc7a00018
    ctx->pc = 0x257d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257d44:
    // 0x257d44: 0xc6010018
    ctx->pc = 0x257d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257d48:
    // 0x257d48: 0x46010002
    ctx->pc = 0x257d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257d4c:
    // 0x257d4c: 0x460018c0
    ctx->pc = 0x257d4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_257d50:
    // 0x257d50: 0x46001845
    ctx->pc = 0x257d50u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
label_257d54:
    // 0x257d54: 0xc6c00010
    ctx->pc = 0x257d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257d58:
    // 0x257d58: 0x4600b000
    ctx->pc = 0x257d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_257d5c:
    // 0x257d5c: 0x46010034
    ctx->pc = 0x257d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257d60:
    // 0x257d60: 0x0
    ctx->pc = 0x257d60u;
    // NOP
label_257d64:
    // 0x257d64: 0x45030019
label_257d68:
    if (ctx->pc == 0x257D68u) {
        ctx->pc = 0x257D68u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257D6Cu;
        goto label_257d6c;
    }
    ctx->pc = 0x257D64u;
    {
        const bool branch_taken_0x257d64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257d64) {
            ctx->pc = 0x257D68u;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x257DCCu;
            goto label_257dcc;
        }
    }
    ctx->pc = 0x257D6Cu;
label_257d6c:
    // 0x257d6c: 0xc7a10010
    ctx->pc = 0x257d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257d70:
    // 0x257d70: 0xc6000030
    ctx->pc = 0x257d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257d74:
    // 0x257d74: 0x46000902
    ctx->pc = 0x257d74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_257d78:
    // 0x257d78: 0xc7a00018
    ctx->pc = 0x257d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257d7c:
    // 0x257d7c: 0xc6010038
    ctx->pc = 0x257d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257d80:
    // 0x257d80: 0x46010002
    ctx->pc = 0x257d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257d84:
    // 0x257d84: 0x46002100
    ctx->pc = 0x257d84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_257d88:
    // 0x257d88: 0x46002045
    ctx->pc = 0x257d88u;
    ctx->f[1] = FPU_ABS_S(ctx->f[4]);
label_257d8c:
    // 0x257d8c: 0xc6c00014
    ctx->pc = 0x257d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257d90:
    // 0x257d90: 0x4600b000
    ctx->pc = 0x257d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_257d94:
    // 0x257d94: 0x46010034
    ctx->pc = 0x257d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257d98:
    // 0x257d98: 0x1000000a
label_257d9c:
    if (ctx->pc == 0x257D9Cu) {
        ctx->pc = 0x257DA0u;
        goto label_257da0;
    }
    ctx->pc = 0x257D98u;
    {
        const bool branch_taken_0x257d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x257d98) {
            ctx->pc = 0x257DC4u;
            goto label_257dc4;
        }
    }
    ctx->pc = 0x257DA0u;
label_257da0:
    // 0x257da0: 0x2a0282d
    ctx->pc = 0x257da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_257da4:
    // 0x257da4: 0x220302d
    ctx->pc = 0x257da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257da8:
    // 0x257da8: 0x4600b306
    ctx->pc = 0x257da8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_257dac:
    // 0x257dac: 0x27a70040
    ctx->pc = 0x257dacu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 64));
label_257db0:
    // 0x257db0: 0xc095d4e
label_257db4:
    if (ctx->pc == 0x257DB4u) {
        ctx->pc = 0x257DB4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x257DB8u;
        goto label_257db8;
    }
    ctx->pc = 0x257DB0u;
    SET_GPR_U32(ctx, 31, 0x257DB8u);
    ctx->pc = 0x257DB4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x257538u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemObjectCol_0x257538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257DB8u; }
    }
    if (ctx->pc != 0x257DB8u) { return; }
    ctx->pc = 0x257DB8u;
label_257db8:
    // 0x257db8: 0x44800800
    ctx->pc = 0x257db8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_257dbc:
    // 0x257dbc: 0x46010034
    ctx->pc = 0x257dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257dc0:
    // 0x257dc0: 0x0
    ctx->pc = 0x257dc0u;
    // NOP
label_257dc4:
    // 0x257dc4: 0x45030001
label_257dc8:
    if (ctx->pc == 0x257DC8u) {
        ctx->pc = 0x257DC8u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257DCCu;
        goto label_257dcc;
    }
    ctx->pc = 0x257DC4u;
    {
        const bool branch_taken_0x257dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257dc4) {
            ctx->pc = 0x257DC8u;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x257DCCu;
            goto label_257dcc;
        }
    }
    ctx->pc = 0x257DCCu;
label_257dcc:
    // 0x257dcc: 0x128000a3
label_257dd0:
    if (ctx->pc == 0x257DD0u) {
        ctx->pc = 0x257DD4u;
        goto label_257dd4;
    }
    ctx->pc = 0x257DCCu;
    {
        const bool branch_taken_0x257dcc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x257dcc) {
            ctx->pc = 0x25805Cu;
            goto label_25805c;
        }
    }
    ctx->pc = 0x257DD4u;
label_257dd4:
    // 0x257dd4: 0x4614bdc1
    ctx->pc = 0x257dd4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
label_257dd8:
    // 0x257dd8: 0x44800000
    ctx->pc = 0x257dd8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_257ddc:
    // 0x257ddc: 0x4600b834
    ctx->pc = 0x257ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257de0:
    // 0x257de0: 0x0
    ctx->pc = 0x257de0u;
    // NOP
label_257de4:
    // 0x257de4: 0x45030001
label_257de8:
    if (ctx->pc == 0x257DE8u) {
        ctx->pc = 0x257DE8u;
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x257DECu;
        goto label_257dec;
    }
    ctx->pc = 0x257DE4u;
    {
        const bool branch_taken_0x257de4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257de4) {
            ctx->pc = 0x257DE8u;
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x257DECu;
            goto label_257dec;
        }
    }
    ctx->pc = 0x257DECu;
label_257dec:
    // 0x257dec: 0x8e020000
    ctx->pc = 0x257decu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_257df0:
    // 0x257df0: 0x8c430000
    ctx->pc = 0x257df0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_257df4:
    // 0x257df4: 0x2862000a
    ctx->pc = 0x257df4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 10));
label_257df8:
    // 0x257df8: 0x10400007
label_257dfc:
    if (ctx->pc == 0x257DFCu) {
        ctx->pc = 0x257DFCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
        ctx->pc = 0x257E00u;
        goto label_257e00;
    }
    ctx->pc = 0x257DF8u;
    {
        const bool branch_taken_0x257df8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x257DFCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
        if (branch_taken_0x257df8) {
            ctx->pc = 0x257E18u;
            goto label_257e18;
        }
    }
    ctx->pc = 0x257E00u;
label_257e00:
    // 0x257e00: 0x10400008
label_257e04:
    if (ctx->pc == 0x257E04u) {
        ctx->pc = 0x257E04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x257E08u;
        goto label_257e08;
    }
    ctx->pc = 0x257E00u;
    {
        const bool branch_taken_0x257e00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x257E04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x257e00) {
            ctx->pc = 0x257E24u;
            goto label_257e24;
        }
    }
    ctx->pc = 0x257E08u;
label_257e08:
    // 0x257e08: 0x10620006
label_257e0c:
    if (ctx->pc == 0x257E0Cu) {
        ctx->pc = 0x257E0Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257E10u;
        goto label_257e10;
    }
    ctx->pc = 0x257E08u;
    {
        const bool branch_taken_0x257e08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x257E0Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x257e08) {
            ctx->pc = 0x257E24u;
            goto label_257e24;
        }
    }
    ctx->pc = 0x257E10u;
label_257e10:
    // 0x257e10: 0x1000000e
label_257e14:
    if (ctx->pc == 0x257E14u) {
        ctx->pc = 0x257E14u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x257E18u;
        goto label_257e18;
    }
    ctx->pc = 0x257E10u;
    {
        const bool branch_taken_0x257e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257E14u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x257e10) {
            ctx->pc = 0x257E4Cu;
            goto label_257e4c;
        }
    }
    ctx->pc = 0x257E18u;
label_257e18:
    // 0x257e18: 0x2402000b
    ctx->pc = 0x257e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_257e1c:
    // 0x257e1c: 0x1462000a
label_257e20:
    if (ctx->pc == 0x257E20u) {
        ctx->pc = 0x257E20u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257E24u;
        goto label_257e24;
    }
    ctx->pc = 0x257E1Cu;
    {
        const bool branch_taken_0x257e1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x257E20u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x257e1c) {
            ctx->pc = 0x257E48u;
            goto label_257e48;
        }
    }
    ctx->pc = 0x257E24u;
label_257e24:
    // 0x257e24: 0x12400172
label_257e28:
    if (ctx->pc == 0x257E28u) {
        ctx->pc = 0x257E28u;
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x257E2Cu;
        goto label_257e2c;
    }
    ctx->pc = 0x257E24u;
    {
        const bool branch_taken_0x257e24 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x257E28u;
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        if (branch_taken_0x257e24) {
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x257E2Cu;
label_257e2c:
    // 0x257e2c: 0xc6200000
    ctx->pc = 0x257e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e30:
    // 0x257e30: 0xe6400000
    ctx->pc = 0x257e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_257e34:
    // 0x257e34: 0xc6200004
    ctx->pc = 0x257e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e38:
    // 0x257e38: 0xe6400004
    ctx->pc = 0x257e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_257e3c:
    // 0x257e3c: 0xc6200008
    ctx->pc = 0x257e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e40:
    // 0x257e40: 0x1000016a
label_257e44:
    if (ctx->pc == 0x257E44u) {
        ctx->pc = 0x257E44u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->pc = 0x257E48u;
        goto label_257e48;
    }
    ctx->pc = 0x257E40u;
    {
        const bool branch_taken_0x257e40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257E44u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        if (branch_taken_0x257e40) {
            ctx->pc = 0x2583ECu;
            goto label_2583ec;
        }
    }
    ctx->pc = 0x257E48u;
label_257e48:
    // 0x257e48: 0xc6a00000
    ctx->pc = 0x257e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e4c:
    // 0x257e4c: 0xc7a10000
    ctx->pc = 0x257e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257e50:
    // 0x257e50: 0x46010001
    ctx->pc = 0x257e50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_257e54:
    // 0x257e54: 0xe7a00010
    ctx->pc = 0x257e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_257e58:
    // 0x257e58: 0xafa00014
    ctx->pc = 0x257e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_257e5c:
    // 0x257e5c: 0xc6a00008
    ctx->pc = 0x257e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257e60:
    // 0x257e60: 0xc7a10008
    ctx->pc = 0x257e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257e64:
    // 0x257e64: 0x46010001
    ctx->pc = 0x257e64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_257e68:
    // 0x257e68: 0x24020003
    ctx->pc = 0x257e68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_257e6c:
    // 0x257e6c: 0x1262000d
label_257e70:
    if (ctx->pc == 0x257E70u) {
        ctx->pc = 0x257E70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x257E74u;
        goto label_257e74;
    }
    ctx->pc = 0x257E6Cu;
    {
        const bool branch_taken_0x257e6c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x257E70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x257e6c) {
            ctx->pc = 0x257EA4u;
            goto label_257ea4;
        }
    }
    ctx->pc = 0x257E74u;
label_257e74:
    // 0x257e74: 0x2a620004
    ctx->pc = 0x257e74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_257e78:
    // 0x257e78: 0x10400005
label_257e7c:
    if (ctx->pc == 0x257E7Cu) {
        ctx->pc = 0x257E7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x257E80u;
        goto label_257e80;
    }
    ctx->pc = 0x257E78u;
    {
        const bool branch_taken_0x257e78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x257E7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x257e78) {
            ctx->pc = 0x257E90u;
            goto label_257e90;
        }
    }
    ctx->pc = 0x257E80u;
label_257e80:
    // 0x257e80: 0x12620054
label_257e84:
    if (ctx->pc == 0x257E84u) {
        ctx->pc = 0x257E84u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x257E88u;
        goto label_257e88;
    }
    ctx->pc = 0x257E80u;
    {
        const bool branch_taken_0x257e80 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x257E84u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x257e80) {
            ctx->pc = 0x257FD4u;
            goto label_257fd4;
        }
    }
    ctx->pc = 0x257E88u;
label_257e88:
    // 0x257e88: 0x1000004d
label_257e8c:
    if (ctx->pc == 0x257E8Cu) {
        ctx->pc = 0x257E90u;
        goto label_257e90;
    }
    ctx->pc = 0x257E88u;
    {
        const bool branch_taken_0x257e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x257e88) {
            ctx->pc = 0x257FC0u;
            goto label_257fc0;
        }
    }
    ctx->pc = 0x257E90u;
label_257e90:
    // 0x257e90: 0x24020004
    ctx->pc = 0x257e90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_257e94:
    // 0x257e94: 0x12620050
label_257e98:
    if (ctx->pc == 0x257E98u) {
        ctx->pc = 0x257E98u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x257E9Cu;
        goto label_257e9c;
    }
    ctx->pc = 0x257E94u;
    {
        const bool branch_taken_0x257e94 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x257E98u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x257e94) {
            ctx->pc = 0x257FD8u;
            goto label_257fd8;
        }
    }
    ctx->pc = 0x257E9Cu;
label_257e9c:
    // 0x257e9c: 0x10000048
label_257ea0:
    if (ctx->pc == 0x257EA0u) {
        ctx->pc = 0x257EA4u;
        goto label_257ea4;
    }
    ctx->pc = 0x257E9Cu;
    {
        const bool branch_taken_0x257e9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x257e9c) {
            ctx->pc = 0x257FC0u;
            goto label_257fc0;
        }
    }
    ctx->pc = 0x257EA4u;
label_257ea4:
    // 0x257ea4: 0xc7a20010
    ctx->pc = 0x257ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257ea8:
    // 0x257ea8: 0xc6070010
    ctx->pc = 0x257ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_257eac:
    // 0x257eac: 0x460710c2
    ctx->pc = 0x257eacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_257eb0:
    // 0x257eb0: 0xc7a50018
    ctx->pc = 0x257eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_257eb4:
    // 0x257eb4: 0xc6060018
    ctx->pc = 0x257eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_257eb8:
    // 0x257eb8: 0x46062802
    ctx->pc = 0x257eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_257ebc:
    // 0x257ebc: 0x460018c0
    ctx->pc = 0x257ebcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_257ec0:
    // 0x257ec0: 0x46001845
    ctx->pc = 0x257ec0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
label_257ec4:
    // 0x257ec4: 0xc6c00010
    ctx->pc = 0x257ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ec8:
    // 0x257ec8: 0x4600b000
    ctx->pc = 0x257ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_257ecc:
    // 0x257ecc: 0x46010034
    ctx->pc = 0x257eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257ed0:
    // 0x257ed0: 0x45010041
label_257ed4:
    if (ctx->pc == 0x257ED4u) {
        ctx->pc = 0x257ED8u;
        goto label_257ed8;
    }
    ctx->pc = 0x257ED0u;
    {
        const bool branch_taken_0x257ed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257ed0) {
            ctx->pc = 0x257FD8u;
            goto label_257fd8;
        }
    }
    ctx->pc = 0x257ED8u;
label_257ed8:
    // 0x257ed8: 0xc6000030
    ctx->pc = 0x257ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257edc:
    // 0x257edc: 0x46001102
    ctx->pc = 0x257edcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_257ee0:
    // 0x257ee0: 0xc6000038
    ctx->pc = 0x257ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ee4:
    // 0x257ee4: 0x46002802
    ctx->pc = 0x257ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_257ee8:
    // 0x257ee8: 0x46002100
    ctx->pc = 0x257ee8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_257eec:
    // 0x257eec: 0x46002045
    ctx->pc = 0x257eecu;
    ctx->f[1] = FPU_ABS_S(ctx->f[4]);
label_257ef0:
    // 0x257ef0: 0xc6c00014
    ctx->pc = 0x257ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ef4:
    // 0x257ef4: 0x4600b000
    ctx->pc = 0x257ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_257ef8:
    // 0x257ef8: 0x46010034
    ctx->pc = 0x257ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257efc:
    // 0x257efc: 0x0
    ctx->pc = 0x257efcu;
    // NOP
label_257f00:
    // 0x257f00: 0x45010035
label_257f04:
    if (ctx->pc == 0x257F04u) {
        ctx->pc = 0x257F04u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x257F08u;
        goto label_257f08;
    }
    ctx->pc = 0x257F00u;
    {
        const bool branch_taken_0x257f00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x257F04u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x257f00) {
            ctx->pc = 0x257FD8u;
            goto label_257fd8;
        }
    }
    ctx->pc = 0x257F08u;
label_257f08:
    // 0x257f08: 0xc6220000
    ctx->pc = 0x257f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257f0c:
    // 0x257f0c: 0x46001081
    ctx->pc = 0x257f0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_257f10:
    // 0x257f10: 0xe7a20010
    ctx->pc = 0x257f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_257f14:
    // 0x257f14: 0xafa00014
    ctx->pc = 0x257f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_257f18:
    // 0x257f18: 0xc6200008
    ctx->pc = 0x257f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257f1c:
    // 0x257f1c: 0xc7a10008
    ctx->pc = 0x257f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257f20:
    // 0x257f20: 0x46010001
    ctx->pc = 0x257f20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_257f24:
    // 0x257f24: 0xe7a00018
    ctx->pc = 0x257f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_257f28:
    // 0x257f28: 0x46071082
    ctx->pc = 0x257f28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_257f2c:
    // 0x257f2c: 0x46060002
    ctx->pc = 0x257f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_257f30:
    // 0x257f30: 0x46001080
    ctx->pc = 0x257f30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_257f34:
    // 0x257f34: 0xc7a00014
    ctx->pc = 0x257f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257f38:
    // 0x257f38: 0x46001834
    ctx->pc = 0x257f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257f3c:
    // 0x257f3c: 0x45000004
label_257f40:
    if (ctx->pc == 0x257F40u) {
        ctx->pc = 0x257F44u;
        goto label_257f44;
    }
    ctx->pc = 0x257F3Cu;
    {
        const bool branch_taken_0x257f3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257f3c) {
            ctx->pc = 0x257F50u;
            goto label_257f50;
        }
    }
    ctx->pc = 0x257F44u;
label_257f44:
    // 0x257f44: 0x46021834
    ctx->pc = 0x257f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257f48:
    // 0x257f48: 0x45010023
label_257f4c:
    if (ctx->pc == 0x257F4Cu) {
        ctx->pc = 0x257F50u;
        goto label_257f50;
    }
    ctx->pc = 0x257F48u;
    {
        const bool branch_taken_0x257f48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257f48) {
            ctx->pc = 0x257FD8u;
            goto label_257fd8;
        }
    }
    ctx->pc = 0x257F50u;
label_257f50:
    // 0x257f50: 0x44800000
    ctx->pc = 0x257f50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_257f54:
    // 0x257f54: 0x46030034
    ctx->pc = 0x257f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257f58:
    // 0x257f58: 0x0
    ctx->pc = 0x257f58u;
    // NOP
label_257f5c:
    // 0x257f5c: 0x45000004
label_257f60:
    if (ctx->pc == 0x257F60u) {
        ctx->pc = 0x257F60u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x257F64u;
        goto label_257f64;
    }
    ctx->pc = 0x257F5Cu;
    {
        const bool branch_taken_0x257f5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257F60u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x257f5c) {
            ctx->pc = 0x257F70u;
            goto label_257f70;
        }
    }
    ctx->pc = 0x257F64u;
label_257f64:
    // 0x257f64: 0x46031034
    ctx->pc = 0x257f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257f68:
    // 0x257f68: 0x4501001b
label_257f6c:
    if (ctx->pc == 0x257F6Cu) {
        ctx->pc = 0x257F70u;
        goto label_257f70;
    }
    ctx->pc = 0x257F68u;
    {
        const bool branch_taken_0x257f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257f68) {
            ctx->pc = 0x257FD8u;
            goto label_257fd8;
        }
    }
    ctx->pc = 0x257F70u;
label_257f70:
    // 0x257f70: 0xc6000030
    ctx->pc = 0x257f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257f74:
    // 0x257f74: 0x46000882
    ctx->pc = 0x257f74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_257f78:
    // 0x257f78: 0xc7a00018
    ctx->pc = 0x257f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257f7c:
    // 0x257f7c: 0xc6010038
    ctx->pc = 0x257f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257f80:
    // 0x257f80: 0x46010002
    ctx->pc = 0x257f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257f84:
    // 0x257f84: 0x46001080
    ctx->pc = 0x257f84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_257f88:
    // 0x257f88: 0x44800000
    ctx->pc = 0x257f88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_257f8c:
    // 0x257f8c: 0x46002034
    ctx->pc = 0x257f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257f90:
    // 0x257f90: 0x45000004
label_257f94:
    if (ctx->pc == 0x257F94u) {
        ctx->pc = 0x257F98u;
        goto label_257f98;
    }
    ctx->pc = 0x257F90u;
    {
        const bool branch_taken_0x257f90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257f90) {
            ctx->pc = 0x257FA4u;
            goto label_257fa4;
        }
    }
    ctx->pc = 0x257F98u;
label_257f98:
    // 0x257f98: 0x46022034
    ctx->pc = 0x257f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257f9c:
    // 0x257f9c: 0x4501000e
label_257fa0:
    if (ctx->pc == 0x257FA0u) {
        ctx->pc = 0x257FA4u;
        goto label_257fa4;
    }
    ctx->pc = 0x257F9Cu;
    {
        const bool branch_taken_0x257f9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257f9c) {
            ctx->pc = 0x257FD8u;
            goto label_257fd8;
        }
    }
    ctx->pc = 0x257FA4u;
label_257fa4:
    // 0x257fa4: 0x46040034
    ctx->pc = 0x257fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257fa8:
    // 0x257fa8: 0x0
    ctx->pc = 0x257fa8u;
    // NOP
label_257fac:
    // 0x257fac: 0x4502000a
label_257fb0:
    if (ctx->pc == 0x257FB0u) {
        ctx->pc = 0x257FB0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x257FB4u;
        goto label_257fb4;
    }
    ctx->pc = 0x257FACu;
    {
        const bool branch_taken_0x257fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257fac) {
            ctx->pc = 0x257FB0u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x257FD8u;
            goto label_257fd8;
        }
    }
    ctx->pc = 0x257FB4u;
label_257fb4:
    // 0x257fb4: 0x46041034
    ctx->pc = 0x257fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257fb8:
    // 0x257fb8: 0x10000004
label_257fbc:
    if (ctx->pc == 0x257FBCu) {
        ctx->pc = 0x257FC0u;
        goto label_257fc0;
    }
    ctx->pc = 0x257FB8u;
    {
        const bool branch_taken_0x257fb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x257fb8) {
            ctx->pc = 0x257FCCu;
            goto label_257fcc;
        }
    }
    ctx->pc = 0x257FC0u;
label_257fc0:
    // 0x257fc0: 0xc0b5c34
label_257fc4:
    if (ctx->pc == 0x257FC4u) {
        ctx->pc = 0x257FC4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x257FC8u;
        goto label_257fc8;
    }
    ctx->pc = 0x257FC0u;
    SET_GPR_U32(ctx, 31, 0x257FC8u);
    ctx->pc = 0x257FC4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257FC8u; }
    }
    if (ctx->pc != 0x257FC8u) { return; }
    ctx->pc = 0x257FC8u;
label_257fc8:
    // 0x257fc8: 0x4600a834
    ctx->pc = 0x257fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257fcc:
    // 0x257fcc: 0x45010002
label_257fd0:
    if (ctx->pc == 0x257FD0u) {
        ctx->pc = 0x257FD4u;
        goto label_257fd4;
    }
    ctx->pc = 0x257FCCu;
    {
        const bool branch_taken_0x257fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257fcc) {
            ctx->pc = 0x257FD8u;
            goto label_257fd8;
        }
    }
    ctx->pc = 0x257FD4u;
label_257fd4:
    // 0x257fd4: 0x24140001
    ctx->pc = 0x257fd4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_257fd8:
    // 0x257fd8: 0x12800024
label_257fdc:
    if (ctx->pc == 0x257FDCu) {
        ctx->pc = 0x257FE0u;
        goto label_257fe0;
    }
    ctx->pc = 0x257FD8u;
    {
        const bool branch_taken_0x257fd8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x257fd8) {
            ctx->pc = 0x25806Cu;
            goto label_25806c;
        }
    }
    ctx->pc = 0x257FE0u;
label_257fe0:
    // 0x257fe0: 0xc6200000
    ctx->pc = 0x257fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257fe4:
    // 0x257fe4: 0xc6a20000
    ctx->pc = 0x257fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257fe8:
    // 0x257fe8: 0x46020001
    ctx->pc = 0x257fe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_257fec:
    // 0x257fec: 0xe7a00010
    ctx->pc = 0x257fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_257ff0:
    // 0x257ff0: 0xafa00014
    ctx->pc = 0x257ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_257ff4:
    // 0x257ff4: 0xc6200008
    ctx->pc = 0x257ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257ff8:
    // 0x257ff8: 0xc6a10008
    ctx->pc = 0x257ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257ffc:
    // 0x257ffc: 0x46010001
    ctx->pc = 0x257ffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_258000:
    // 0x258000: 0xe7a00018
    ctx->pc = 0x258000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_258004:
    // 0x258004: 0xc7a00000
    ctx->pc = 0x258004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258008:
    // 0x258008: 0x46020001
    ctx->pc = 0x258008u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_25800c:
    // 0x25800c: 0xe7a00020
    ctx->pc = 0x25800cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_258010:
    // 0x258010: 0xafa00024
    ctx->pc = 0x258010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_258014:
    // 0x258014: 0xc7a00008
    ctx->pc = 0x258014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258018:
    // 0x258018: 0x46010001
    ctx->pc = 0x258018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25801c:
    // 0x25801c: 0xe7a00028
    ctx->pc = 0x25801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_258020:
    // 0x258020: 0xc0b58fc
label_258024:
    if (ctx->pc == 0x258024u) {
        ctx->pc = 0x258024u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x258028u;
        goto label_258028;
    }
    ctx->pc = 0x258020u;
    SET_GPR_U32(ctx, 31, 0x258028u);
    ctx->pc = 0x258024u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258028u; }
    }
    if (ctx->pc != 0x258028u) { return; }
    ctx->pc = 0x258028u;
label_258028:
    // 0x258028: 0xc0b58fc
label_25802c:
    if (ctx->pc == 0x25802Cu) {
        ctx->pc = 0x25802Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x258030u;
        goto label_258030;
    }
    ctx->pc = 0x258028u;
    SET_GPR_U32(ctx, 31, 0x258030u);
    ctx->pc = 0x25802Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258030u; }
    }
    if (ctx->pc != 0x258030u) { return; }
    ctx->pc = 0x258030u;
label_258030:
    // 0x258030: 0xc7a10010
    ctx->pc = 0x258030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258034:
    // 0x258034: 0xc7a00020
    ctx->pc = 0x258034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258038:
    // 0x258038: 0x460008c2
    ctx->pc = 0x258038u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25803c:
    // 0x25803c: 0xc7a00018
    ctx->pc = 0x25803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258040:
    // 0x258040: 0xc7a10028
    ctx->pc = 0x258040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258044:
    // 0x258044: 0x46010002
    ctx->pc = 0x258044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_258048:
    // 0x258048: 0x460018c0
    ctx->pc = 0x258048u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_25804c:
    // 0x25804c: 0x44800000
    ctx->pc = 0x25804cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_258050:
    // 0x258050: 0x46001834
    ctx->pc = 0x258050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258054:
    // 0x258054: 0x45000005
label_258058:
    if (ctx->pc == 0x258058u) {
        ctx->pc = 0x25805Cu;
        goto label_25805c;
    }
    ctx->pc = 0x258054u;
    {
        const bool branch_taken_0x258054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258054) {
            ctx->pc = 0x25806Cu;
            goto label_25806c;
        }
    }
    ctx->pc = 0x25805Cu;
label_25805c:
    // 0x25805c: 0x3c01bf80
    ctx->pc = 0x25805cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_258060:
    // 0x258060: 0x44810000
    ctx->pc = 0x258060u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_258064:
    // 0x258064: 0x100000e3
label_258068:
    if (ctx->pc == 0x258068u) {
        ctx->pc = 0x258068u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x25806Cu;
        goto label_25806c;
    }
    ctx->pc = 0x258064u;
    {
        const bool branch_taken_0x258064 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258068u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x258064) {
            ctx->pc = 0x2583F4u;
            goto label_2583f4;
        }
    }
    ctx->pc = 0x25806Cu;
label_25806c:
    // 0x25806c: 0x124000df
label_258070:
    if (ctx->pc == 0x258070u) {
        ctx->pc = 0x258070u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x258074u;
        goto label_258074;
    }
    ctx->pc = 0x25806Cu;
    {
        const bool branch_taken_0x25806c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x258070u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x25806c) {
            ctx->pc = 0x2583ECu;
            goto label_2583ec;
        }
    }
    ctx->pc = 0x258074u;
label_258074:
    // 0x258074: 0x12620007
label_258078:
    if (ctx->pc == 0x258078u) {
        ctx->pc = 0x258078u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
        ctx->pc = 0x25807Cu;
        goto label_25807c;
    }
    ctx->pc = 0x258074u;
    {
        const bool branch_taken_0x258074 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x258078u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
        if (branch_taken_0x258074) {
            ctx->pc = 0x258094u;
            goto label_258094;
        }
    }
    ctx->pc = 0x25807Cu;
label_25807c:
    // 0x25807c: 0x1440009f
label_258080:
    if (ctx->pc == 0x258080u) {
        ctx->pc = 0x258080u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x258084u;
        goto label_258084;
    }
    ctx->pc = 0x25807Cu;
    {
        const bool branch_taken_0x25807c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x258080u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x25807c) {
            ctx->pc = 0x2582FCu;
            goto label_2582fc;
        }
    }
    ctx->pc = 0x258084u;
label_258084:
    // 0x258084: 0x1262007c
label_258088:
    if (ctx->pc == 0x258088u) {
        ctx->pc = 0x258088u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x25808Cu;
        goto label_25808c;
    }
    ctx->pc = 0x258084u;
    {
        const bool branch_taken_0x258084 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x258088u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x258084) {
            ctx->pc = 0x258278u;
            goto label_258278;
        }
    }
    ctx->pc = 0x25808Cu;
label_25808c:
    // 0x25808c: 0x1000009b
label_258090:
    if (ctx->pc == 0x258090u) {
        ctx->pc = 0x258094u;
        goto label_258094;
    }
    ctx->pc = 0x25808Cu;
    {
        const bool branch_taken_0x25808c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25808c) {
            ctx->pc = 0x2582FCu;
            goto label_2582fc;
        }
    }
    ctx->pc = 0x258094u;
label_258094:
    // 0x258094: 0xc6220000
    ctx->pc = 0x258094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_258098:
    // 0x258098: 0xc7a00000
    ctx->pc = 0x258098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25809c:
    // 0x25809c: 0x46001081
    ctx->pc = 0x25809cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2580a0:
    // 0x2580a0: 0xe7a20010
    ctx->pc = 0x2580a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2580a4:
    // 0x2580a4: 0xafa00014
    ctx->pc = 0x2580a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2580a8:
    // 0x2580a8: 0xc6210008
    ctx->pc = 0x2580a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2580ac:
    // 0x2580ac: 0xc7a00008
    ctx->pc = 0x2580acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2580b0:
    // 0x2580b0: 0x46000841
    ctx->pc = 0x2580b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2580b4:
    // 0x2580b4: 0xe7a10018
    ctx->pc = 0x2580b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2580b8:
    // 0x2580b8: 0xc6000010
    ctx->pc = 0x2580b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2580bc:
    // 0x2580bc: 0x460010c2
    ctx->pc = 0x2580bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2580c0:
    // 0x2580c0: 0xc6000018
    ctx->pc = 0x2580c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2580c4:
    // 0x2580c4: 0x46000802
    ctx->pc = 0x2580c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2580c8:
    // 0x2580c8: 0x460018c0
    ctx->pc = 0x2580c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2580cc:
    // 0x2580cc: 0xc6000030
    ctx->pc = 0x2580ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2580d0:
    // 0x2580d0: 0x46001102
    ctx->pc = 0x2580d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2580d4:
    // 0x2580d4: 0xc6000038
    ctx->pc = 0x2580d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2580d8:
    // 0x2580d8: 0x46000842
    ctx->pc = 0x2580d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2580dc:
    // 0x2580dc: 0x46012100
    ctx->pc = 0x2580dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2580e0:
    // 0x2580e0: 0xc6c00010
    ctx->pc = 0x2580e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2580e4:
    // 0x2580e4: 0x4600b080
    ctx->pc = 0x2580e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2580e8:
    // 0x2580e8: 0x46001805
    ctx->pc = 0x2580e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
label_2580ec:
    // 0x2580ec: 0x46001081
    ctx->pc = 0x2580ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2580f0:
    // 0x2580f0: 0xc6c00014
    ctx->pc = 0x2580f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2580f4:
    // 0x2580f4: 0x4600b300
    ctx->pc = 0x2580f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2580f8:
    // 0x2580f8: 0x46002005
    ctx->pc = 0x2580f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
label_2580fc:
    // 0x2580fc: 0x46006301
    ctx->pc = 0x2580fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_258100:
    // 0x258100: 0xc7a00014
    ctx->pc = 0x258100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258104:
    // 0x258104: 0x46020034
    ctx->pc = 0x258104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258108:
    // 0x258108: 0x45010005
label_25810c:
    if (ctx->pc == 0x25810Cu) {
        ctx->pc = 0x258110u;
        goto label_258110;
    }
    ctx->pc = 0x258108u;
    {
        const bool branch_taken_0x258108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x258108) {
            ctx->pc = 0x258120u;
            goto label_258120;
        }
    }
    ctx->pc = 0x258110u;
label_258110:
    // 0x258110: 0x460c0034
    ctx->pc = 0x258110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258114:
    // 0x258114: 0x0
    ctx->pc = 0x258114u;
    // NOP
label_258118:
    // 0x258118: 0x45020051
label_25811c:
    if (ctx->pc == 0x25811Cu) {
        ctx->pc = 0x25811Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x258120u;
        goto label_258120;
    }
    ctx->pc = 0x258118u;
    {
        const bool branch_taken_0x258118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258118) {
            ctx->pc = 0x25811Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x258260u;
            goto label_258260;
        }
    }
    ctx->pc = 0x258120u;
label_258120:
    // 0x258120: 0x460c1034
    ctx->pc = 0x258120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258124:
    // 0x258124: 0x45000025
label_258128:
    if (ctx->pc == 0x258128u) {
        ctx->pc = 0x25812Cu;
        goto label_25812c;
    }
    ctx->pc = 0x258124u;
    {
        const bool branch_taken_0x258124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258124) {
            ctx->pc = 0x2581BCu;
            goto label_2581bc;
        }
    }
    ctx->pc = 0x25812Cu;
label_25812c:
    // 0x25812c: 0x44800000
    ctx->pc = 0x25812cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_258130:
    // 0x258130: 0x46020034
    ctx->pc = 0x258130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258134:
    // 0x258134: 0x45000021
label_258138:
    if (ctx->pc == 0x258138u) {
        ctx->pc = 0x25813Cu;
        goto label_25813c;
    }
    ctx->pc = 0x258134u;
    {
        const bool branch_taken_0x258134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258134) {
            ctx->pc = 0x2581BCu;
            goto label_2581bc;
        }
    }
    ctx->pc = 0x25813Cu;
label_25813c:
    // 0x25813c: 0x46030034
    ctx->pc = 0x25813cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258140:
    // 0x258140: 0x0
    ctx->pc = 0x258140u;
    // NOP
label_258144:
    // 0x258144: 0x4502000f
label_258148:
    if (ctx->pc == 0x258148u) {
        ctx->pc = 0x258148u;
        ctx->f[2] = FPU_NEG_S(ctx->f[2]);
        ctx->pc = 0x25814Cu;
        goto label_25814c;
    }
    ctx->pc = 0x258144u;
    {
        const bool branch_taken_0x258144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258144) {
            ctx->pc = 0x258148u;
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->pc = 0x258184u;
            goto label_258184;
        }
    }
    ctx->pc = 0x25814Cu;
label_25814c:
    // 0x25814c: 0xc6000010
    ctx->pc = 0x25814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258150:
    // 0x258150: 0x46001002
    ctx->pc = 0x258150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_258154:
    // 0x258154: 0xc6210000
    ctx->pc = 0x258154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258158:
    // 0x258158: 0x46010000
    ctx->pc = 0x258158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25815c:
    // 0x25815c: 0xe6400000
    ctx->pc = 0x25815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_258160:
    // 0x258160: 0xc6000014
    ctx->pc = 0x258160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258164:
    // 0x258164: 0x46001002
    ctx->pc = 0x258164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_258168:
    // 0x258168: 0xc6210004
    ctx->pc = 0x258168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25816c:
    // 0x25816c: 0x46010000
    ctx->pc = 0x25816cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_258170:
    // 0x258170: 0xe6400004
    ctx->pc = 0x258170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_258174:
    // 0x258174: 0xc6000018
    ctx->pc = 0x258174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258178:
    // 0x258178: 0x46001002
    ctx->pc = 0x258178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_25817c:
    // 0x25817c: 0x1000005c
label_258180:
    if (ctx->pc == 0x258180u) {
        ctx->pc = 0x258180u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x258184u;
        goto label_258184;
    }
    ctx->pc = 0x25817Cu;
    {
        const bool branch_taken_0x25817c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258180u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x25817c) {
            ctx->pc = 0x2582F0u;
            goto label_2582f0;
        }
    }
    ctx->pc = 0x258184u;
label_258184:
    // 0x258184: 0xc6000010
    ctx->pc = 0x258184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258188:
    // 0x258188: 0x46001002
    ctx->pc = 0x258188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_25818c:
    // 0x25818c: 0xc6210000
    ctx->pc = 0x25818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258190:
    // 0x258190: 0x46010000
    ctx->pc = 0x258190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_258194:
    // 0x258194: 0xe6400000
    ctx->pc = 0x258194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_258198:
    // 0x258198: 0xc6000014
    ctx->pc = 0x258198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25819c:
    // 0x25819c: 0x46001002
    ctx->pc = 0x25819cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2581a0:
    // 0x2581a0: 0xc6210004
    ctx->pc = 0x2581a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2581a4:
    // 0x2581a4: 0x46010000
    ctx->pc = 0x2581a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2581a8:
    // 0x2581a8: 0xe6400004
    ctx->pc = 0x2581a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2581ac:
    // 0x2581ac: 0xc6000018
    ctx->pc = 0x2581acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2581b0:
    // 0x2581b0: 0x46001082
    ctx->pc = 0x2581b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2581b4:
    // 0x2581b4: 0x1000008b
label_2581b8:
    if (ctx->pc == 0x2581B8u) {
        ctx->pc = 0x2581B8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2581BCu;
        goto label_2581bc;
    }
    ctx->pc = 0x2581B4u;
    {
        const bool branch_taken_0x2581b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2581B8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2581b4) {
            ctx->pc = 0x2583E4u;
            goto label_2583e4;
        }
    }
    ctx->pc = 0x2581BCu;
label_2581bc:
    // 0x2581bc: 0x46026034
    ctx->pc = 0x2581bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2581c0:
    // 0x2581c0: 0x0
    ctx->pc = 0x2581c0u;
    // NOP
label_2581c4:
    // 0x2581c4: 0x45020026
label_2581c8:
    if (ctx->pc == 0x2581C8u) {
        ctx->pc = 0x2581C8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2581CCu;
        goto label_2581cc;
    }
    ctx->pc = 0x2581C4u;
    {
        const bool branch_taken_0x2581c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2581c4) {
            ctx->pc = 0x2581C8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x258260u;
            goto label_258260;
        }
    }
    ctx->pc = 0x2581CCu;
label_2581cc:
    // 0x2581cc: 0x44800000
    ctx->pc = 0x2581ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2581d0:
    // 0x2581d0: 0x460c0034
    ctx->pc = 0x2581d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2581d4:
    // 0x2581d4: 0x0
    ctx->pc = 0x2581d4u;
    // NOP
label_2581d8:
    // 0x2581d8: 0x45020021
label_2581dc:
    if (ctx->pc == 0x2581DCu) {
        ctx->pc = 0x2581DCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2581E0u;
        goto label_2581e0;
    }
    ctx->pc = 0x2581D8u;
    {
        const bool branch_taken_0x2581d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2581d8) {
            ctx->pc = 0x2581DCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x258260u;
            goto label_258260;
        }
    }
    ctx->pc = 0x2581E0u;
label_2581e0:
    // 0x2581e0: 0x46040034
    ctx->pc = 0x2581e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2581e4:
    // 0x2581e4: 0x0
    ctx->pc = 0x2581e4u;
    // NOP
label_2581e8:
    // 0x2581e8: 0x4502000f
label_2581ec:
    if (ctx->pc == 0x2581ECu) {
        ctx->pc = 0x2581ECu;
        ctx->f[2] = FPU_NEG_S(ctx->f[12]);
        ctx->pc = 0x2581F0u;
        goto label_2581f0;
    }
    ctx->pc = 0x2581E8u;
    {
        const bool branch_taken_0x2581e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2581e8) {
            ctx->pc = 0x2581ECu;
            ctx->f[2] = FPU_NEG_S(ctx->f[12]);
            ctx->pc = 0x258228u;
            goto label_258228;
        }
    }
    ctx->pc = 0x2581F0u;
label_2581f0:
    // 0x2581f0: 0xc6000030
    ctx->pc = 0x2581f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2581f4:
    // 0x2581f4: 0x46006002
    ctx->pc = 0x2581f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2581f8:
    // 0x2581f8: 0xc6210000
    ctx->pc = 0x2581f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2581fc:
    // 0x2581fc: 0x46010000
    ctx->pc = 0x2581fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_258200:
    // 0x258200: 0xe6400000
    ctx->pc = 0x258200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_258204:
    // 0x258204: 0xc6000034
    ctx->pc = 0x258204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258208:
    // 0x258208: 0x46006002
    ctx->pc = 0x258208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_25820c:
    // 0x25820c: 0xc6210004
    ctx->pc = 0x25820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258210:
    // 0x258210: 0x46010000
    ctx->pc = 0x258210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_258214:
    // 0x258214: 0xe6400004
    ctx->pc = 0x258214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_258218:
    // 0x258218: 0xc6000038
    ctx->pc = 0x258218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25821c:
    // 0x25821c: 0x46006002
    ctx->pc = 0x25821cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_258220:
    // 0x258220: 0x10000033
label_258224:
    if (ctx->pc == 0x258224u) {
        ctx->pc = 0x258224u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x258228u;
        goto label_258228;
    }
    ctx->pc = 0x258220u;
    {
        const bool branch_taken_0x258220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258224u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x258220) {
            ctx->pc = 0x2582F0u;
            goto label_2582f0;
        }
    }
    ctx->pc = 0x258228u;
label_258228:
    // 0x258228: 0xc6000030
    ctx->pc = 0x258228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25822c:
    // 0x25822c: 0x46001002
    ctx->pc = 0x25822cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_258230:
    // 0x258230: 0xc6210000
    ctx->pc = 0x258230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258234:
    // 0x258234: 0x46010000
    ctx->pc = 0x258234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_258238:
    // 0x258238: 0xe6400000
    ctx->pc = 0x258238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_25823c:
    // 0x25823c: 0xc6000034
    ctx->pc = 0x25823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258240:
    // 0x258240: 0x46001002
    ctx->pc = 0x258240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_258244:
    // 0x258244: 0xc6210004
    ctx->pc = 0x258244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258248:
    // 0x258248: 0x46010000
    ctx->pc = 0x258248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25824c:
    // 0x25824c: 0xe6400004
    ctx->pc = 0x25824cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_258250:
    // 0x258250: 0xc6000038
    ctx->pc = 0x258250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258254:
    // 0x258254: 0x46001082
    ctx->pc = 0x258254u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_258258:
    // 0x258258: 0x10000062
label_25825c:
    if (ctx->pc == 0x25825Cu) {
        ctx->pc = 0x25825Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x258260u;
        goto label_258260;
    }
    ctx->pc = 0x258258u;
    {
        const bool branch_taken_0x258258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25825Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x258258) {
            ctx->pc = 0x2583E4u;
            goto label_2583e4;
        }
    }
    ctx->pc = 0x258260u;
label_258260:
    // 0x258260: 0xe6400000
    ctx->pc = 0x258260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_258264:
    // 0x258264: 0xc6a00004
    ctx->pc = 0x258264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258268:
    // 0x258268: 0xe6400004
    ctx->pc = 0x258268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_25826c:
    // 0x25826c: 0xc6a00008
    ctx->pc = 0x25826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258270:
    // 0x258270: 0x1000005e
label_258274:
    if (ctx->pc == 0x258274u) {
        ctx->pc = 0x258274u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->pc = 0x258278u;
        goto label_258278;
    }
    ctx->pc = 0x258270u;
    {
        const bool branch_taken_0x258270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258274u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        if (branch_taken_0x258270) {
            ctx->pc = 0x2583ECu;
            goto label_2583ec;
        }
    }
    ctx->pc = 0x258278u;
label_258278:
    // 0x258278: 0xc6230000
    ctx->pc = 0x258278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25827c:
    // 0x25827c: 0x46031081
    ctx->pc = 0x25827cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_258280:
    // 0x258280: 0xe7a20010
    ctx->pc = 0x258280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_258284:
    // 0x258284: 0xc7a00044
    ctx->pc = 0x258284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258288:
    // 0x258288: 0xc6210004
    ctx->pc = 0x258288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25828c:
    // 0x25828c: 0x46010001
    ctx->pc = 0x25828cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_258290:
    // 0x258290: 0xe7a00014
    ctx->pc = 0x258290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_258294:
    // 0x258294: 0xc7a10048
    ctx->pc = 0x258294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258298:
    // 0x258298: 0xc6200008
    ctx->pc = 0x258298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25829c:
    // 0x25829c: 0x46000841
    ctx->pc = 0x25829cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2582a0:
    // 0x2582a0: 0xe7a10018
    ctx->pc = 0x2582a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2582a4:
    // 0x2582a4: 0xc7a40030
    ctx->pc = 0x2582a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2582a8:
    // 0x2582a8: 0x46041082
    ctx->pc = 0x2582a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2582ac:
    // 0x2582ac: 0xc7a50038
    ctx->pc = 0x2582acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2582b0:
    // 0x2582b0: 0x46050842
    ctx->pc = 0x2582b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2582b4:
    // 0x2582b4: 0x46011080
    ctx->pc = 0x2582b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2582b8:
    // 0x2582b8: 0x46161080
    ctx->pc = 0x2582b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_2582bc:
    // 0x2582bc: 0xe6430000
    ctx->pc = 0x2582bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2582c0:
    // 0x2582c0: 0xc6200004
    ctx->pc = 0x2582c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2582c4:
    // 0x2582c4: 0xe6400004
    ctx->pc = 0x2582c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2582c8:
    // 0x2582c8: 0xc6210008
    ctx->pc = 0x2582c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2582cc:
    // 0x2582cc: 0x44800000
    ctx->pc = 0x2582ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2582d0:
    // 0x2582d0: 0x46020034
    ctx->pc = 0x2582d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2582d4:
    // 0x2582d4: 0x0
    ctx->pc = 0x2582d4u;
    // NOP
label_2582d8:
    // 0x2582d8: 0x45000044
label_2582dc:
    if (ctx->pc == 0x2582DCu) {
        ctx->pc = 0x2582DCu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->pc = 0x2582E0u;
        goto label_2582e0;
    }
    ctx->pc = 0x2582D8u;
    {
        const bool branch_taken_0x2582d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2582DCu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        if (branch_taken_0x2582d8) {
            ctx->pc = 0x2583ECu;
            goto label_2583ec;
        }
    }
    ctx->pc = 0x2582E0u;
label_2582e0:
    // 0x2582e0: 0x46041002
    ctx->pc = 0x2582e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2582e4:
    // 0x2582e4: 0x46030000
    ctx->pc = 0x2582e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2582e8:
    // 0x2582e8: 0xe6400000
    ctx->pc = 0x2582e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2582ec:
    // 0x2582ec: 0x46051002
    ctx->pc = 0x2582ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_2582f0:
    // 0x2582f0: 0x46010000
    ctx->pc = 0x2582f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2582f4:
    // 0x2582f4: 0x1000003d
label_2582f8:
    if (ctx->pc == 0x2582F8u) {
        ctx->pc = 0x2582F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->pc = 0x2582FCu;
        goto label_2582fc;
    }
    ctx->pc = 0x2582F4u;
    {
        const bool branch_taken_0x2582f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2582F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        if (branch_taken_0x2582f4) {
            ctx->pc = 0x2583ECu;
            goto label_2583ec;
        }
    }
    ctx->pc = 0x2582FCu;
label_2582fc:
    // 0x2582fc: 0x16800012
label_258300:
    if (ctx->pc == 0x258300u) {
        ctx->pc = 0x258300u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x258304u;
        goto label_258304;
    }
    ctx->pc = 0x2582FCu;
    {
        const bool branch_taken_0x2582fc = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x258300u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2582fc) {
            ctx->pc = 0x258348u;
            goto label_258348;
        }
    }
    ctx->pc = 0x258304u;
label_258304:
    // 0x258304: 0xc6200000
    ctx->pc = 0x258304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258308:
    // 0x258308: 0xc6a20000
    ctx->pc = 0x258308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25830c:
    // 0x25830c: 0x46020001
    ctx->pc = 0x25830cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_258310:
    // 0x258310: 0xe7a00010
    ctx->pc = 0x258310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_258314:
    // 0x258314: 0xafa00014
    ctx->pc = 0x258314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_258318:
    // 0x258318: 0xc6200008
    ctx->pc = 0x258318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25831c:
    // 0x25831c: 0xc6a10008
    ctx->pc = 0x25831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258320:
    // 0x258320: 0x46010001
    ctx->pc = 0x258320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_258324:
    // 0x258324: 0xe7a00018
    ctx->pc = 0x258324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_258328:
    // 0x258328: 0xc7a00000
    ctx->pc = 0x258328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25832c:
    // 0x25832c: 0x46020001
    ctx->pc = 0x25832cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_258330:
    // 0x258330: 0xe7a00020
    ctx->pc = 0x258330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_258334:
    // 0x258334: 0xafa00024
    ctx->pc = 0x258334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_258338:
    // 0x258338: 0xc7a00008
    ctx->pc = 0x258338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25833c:
    // 0x25833c: 0x46010001
    ctx->pc = 0x25833cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_258340:
    // 0x258340: 0xe7a00028
    ctx->pc = 0x258340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_258344:
    // 0x258344: 0xc7a00018
    ctx->pc = 0x258344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258348:
    // 0x258348: 0xc7a30020
    ctx->pc = 0x258348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25834c:
    // 0x25834c: 0x46030002
    ctx->pc = 0x25834cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_258350:
    // 0x258350: 0xc7a10010
    ctx->pc = 0x258350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258354:
    // 0x258354: 0xc7a20028
    ctx->pc = 0x258354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_258358:
    // 0x258358: 0x46020842
    ctx->pc = 0x258358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25835c:
    // 0x25835c: 0x46010001
    ctx->pc = 0x25835cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_258360:
    // 0x258360: 0x44800800
    ctx->pc = 0x258360u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_258364:
    // 0x258364: 0x46000834
    ctx->pc = 0x258364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_258368:
    // 0x258368: 0x0
    ctx->pc = 0x258368u;
    // NOP
label_25836c:
    // 0x25836c: 0x45000005
label_258370:
    if (ctx->pc == 0x258370u) {
        ctx->pc = 0x258370u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x258374u;
        goto label_258374;
    }
    ctx->pc = 0x25836Cu;
    {
        const bool branch_taken_0x25836c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258370u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x25836c) {
            ctx->pc = 0x258384u;
            goto label_258384;
        }
    }
    ctx->pc = 0x258374u;
label_258374:
    // 0x258374: 0x46001007
    ctx->pc = 0x258374u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_258378:
    // 0x258378: 0xe7a00020
    ctx->pc = 0x258378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_25837c:
    // 0x25837c: 0x10000005
label_258380:
    if (ctx->pc == 0x258380u) {
        ctx->pc = 0x258380u;
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x258384u;
        goto label_258384;
    }
    ctx->pc = 0x25837Cu;
    {
        const bool branch_taken_0x25837c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258380u;
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        if (branch_taken_0x25837c) {
            ctx->pc = 0x258394u;
            goto label_258394;
        }
    }
    ctx->pc = 0x258384u;
label_258384:
    // 0x258384: 0xc7a00028
    ctx->pc = 0x258384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258388:
    // 0x258388: 0xe7a00020
    ctx->pc = 0x258388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_25838c:
    // 0x25838c: 0x46000807
    ctx->pc = 0x25838cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_258390:
    // 0x258390: 0xe7a00028
    ctx->pc = 0x258390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_258394:
    // 0x258394: 0xc0b58fc
label_258398:
    if (ctx->pc == 0x258398u) {
        ctx->pc = 0x258398u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25839Cu;
        goto label_25839c;
    }
    ctx->pc = 0x258394u;
    SET_GPR_U32(ctx, 31, 0x25839Cu);
    ctx->pc = 0x258398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25839Cu; }
    }
    if (ctx->pc != 0x25839Cu) { return; }
    ctx->pc = 0x25839Cu;
label_25839c:
    // 0x25839c: 0xc7a00010
    ctx->pc = 0x25839cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2583a0:
    // 0x2583a0: 0xc7a10020
    ctx->pc = 0x2583a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2583a4:
    // 0x2583a4: 0x460100c2
    ctx->pc = 0x2583a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2583a8:
    // 0x2583a8: 0xc7a00018
    ctx->pc = 0x2583a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2583ac:
    // 0x2583ac: 0xc7a20028
    ctx->pc = 0x2583acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2583b0:
    // 0x2583b0: 0x46020002
    ctx->pc = 0x2583b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2583b4:
    // 0x2583b4: 0x460018c0
    ctx->pc = 0x2583b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2583b8:
    // 0x2583b8: 0x46011842
    ctx->pc = 0x2583b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2583bc:
    // 0x2583bc: 0xc6a00000
    ctx->pc = 0x2583bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2583c0:
    // 0x2583c0: 0x46000840
    ctx->pc = 0x2583c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2583c4:
    // 0x2583c4: 0xe6410000
    ctx->pc = 0x2583c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2583c8:
    // 0x2583c8: 0xc7a00024
    ctx->pc = 0x2583c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2583cc:
    // 0x2583cc: 0x46001802
    ctx->pc = 0x2583ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2583d0:
    // 0x2583d0: 0xc6a10004
    ctx->pc = 0x2583d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2583d4:
    // 0x2583d4: 0x46010000
    ctx->pc = 0x2583d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2583d8:
    // 0x2583d8: 0xe6400004
    ctx->pc = 0x2583d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2583dc:
    // 0x2583dc: 0x46021882
    ctx->pc = 0x2583dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2583e0:
    // 0x2583e0: 0xc6a00008
    ctx->pc = 0x2583e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2583e4:
    // 0x2583e4: 0x46001080
    ctx->pc = 0x2583e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2583e8:
    // 0x2583e8: 0xe6420008
    ctx->pc = 0x2583e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2583ec:
    // 0x2583ec: 0x4600b806
    ctx->pc = 0x2583ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
label_2583f0:
    // 0x2583f0: 0xdfbf00c0
    ctx->pc = 0x2583f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2583f4:
    // 0x2583f4: 0xdfb600b0
    ctx->pc = 0x2583f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2583f8:
    // 0x2583f8: 0xdfb500a0
    ctx->pc = 0x2583f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2583fc:
    // 0x2583fc: 0xdfb40090
    ctx->pc = 0x2583fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_258400:
    // 0x258400: 0xdfb30080
    ctx->pc = 0x258400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_258404:
    // 0x258404: 0xdfb20070
    ctx->pc = 0x258404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_258408:
    // 0x258408: 0xdfb10060
    ctx->pc = 0x258408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25840c:
    // 0x25840c: 0xdfb00050
    ctx->pc = 0x25840cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_258410:
    // 0x258410: 0xc7b700e8
    ctx->pc = 0x258410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_258414:
    // 0x258414: 0xc7b600e0
    ctx->pc = 0x258414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_258418:
    // 0x258418: 0xc7b500d8
    ctx->pc = 0x258418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_25841c:
    // 0x25841c: 0xc7b400d0
    ctx->pc = 0x25841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_258420:
    // 0x258420: 0x3e00008
label_258424:
    if (ctx->pc == 0x258424u) {
        ctx->pc = 0x258424u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x258428u;
        goto label_fallthrough_0x258420;
    }
    ctx->pc = 0x258420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258424u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2579B0u: goto label_2579b0;
            case 0x2579B4u: goto label_2579b4;
            case 0x2579B8u: goto label_2579b8;
            case 0x2579BCu: goto label_2579bc;
            case 0x2579C0u: goto label_2579c0;
            case 0x2579C4u: goto label_2579c4;
            case 0x2579C8u: goto label_2579c8;
            case 0x2579CCu: goto label_2579cc;
            case 0x2579D0u: goto label_2579d0;
            case 0x2579D4u: goto label_2579d4;
            case 0x2579D8u: goto label_2579d8;
            case 0x2579DCu: goto label_2579dc;
            case 0x2579E0u: goto label_2579e0;
            case 0x2579E4u: goto label_2579e4;
            case 0x2579E8u: goto label_2579e8;
            case 0x2579ECu: goto label_2579ec;
            case 0x2579F0u: goto label_2579f0;
            case 0x2579F4u: goto label_2579f4;
            case 0x2579F8u: goto label_2579f8;
            case 0x2579FCu: goto label_2579fc;
            case 0x257A00u: goto label_257a00;
            case 0x257A04u: goto label_257a04;
            case 0x257A08u: goto label_257a08;
            case 0x257A0Cu: goto label_257a0c;
            case 0x257A10u: goto label_257a10;
            case 0x257A14u: goto label_257a14;
            case 0x257A18u: goto label_257a18;
            case 0x257A1Cu: goto label_257a1c;
            case 0x257A20u: goto label_257a20;
            case 0x257A24u: goto label_257a24;
            case 0x257A28u: goto label_257a28;
            case 0x257A2Cu: goto label_257a2c;
            case 0x257A30u: goto label_257a30;
            case 0x257A34u: goto label_257a34;
            case 0x257A38u: goto label_257a38;
            case 0x257A3Cu: goto label_257a3c;
            case 0x257A40u: goto label_257a40;
            case 0x257A44u: goto label_257a44;
            case 0x257A48u: goto label_257a48;
            case 0x257A4Cu: goto label_257a4c;
            case 0x257A50u: goto label_257a50;
            case 0x257A54u: goto label_257a54;
            case 0x257A58u: goto label_257a58;
            case 0x257A5Cu: goto label_257a5c;
            case 0x257A60u: goto label_257a60;
            case 0x257A64u: goto label_257a64;
            case 0x257A68u: goto label_257a68;
            case 0x257A6Cu: goto label_257a6c;
            case 0x257A70u: goto label_257a70;
            case 0x257A74u: goto label_257a74;
            case 0x257A78u: goto label_257a78;
            case 0x257A7Cu: goto label_257a7c;
            case 0x257A80u: goto label_257a80;
            case 0x257A84u: goto label_257a84;
            case 0x257A88u: goto label_257a88;
            case 0x257A8Cu: goto label_257a8c;
            case 0x257A90u: goto label_257a90;
            case 0x257A94u: goto label_257a94;
            case 0x257A98u: goto label_257a98;
            case 0x257A9Cu: goto label_257a9c;
            case 0x257AA0u: goto label_257aa0;
            case 0x257AA4u: goto label_257aa4;
            case 0x257AA8u: goto label_257aa8;
            case 0x257AACu: goto label_257aac;
            case 0x257AB0u: goto label_257ab0;
            case 0x257AB4u: goto label_257ab4;
            case 0x257AB8u: goto label_257ab8;
            case 0x257ABCu: goto label_257abc;
            case 0x257AC0u: goto label_257ac0;
            case 0x257AC4u: goto label_257ac4;
            case 0x257AC8u: goto label_257ac8;
            case 0x257ACCu: goto label_257acc;
            case 0x257AD0u: goto label_257ad0;
            case 0x257AD4u: goto label_257ad4;
            case 0x257AD8u: goto label_257ad8;
            case 0x257ADCu: goto label_257adc;
            case 0x257AE0u: goto label_257ae0;
            case 0x257AE4u: goto label_257ae4;
            case 0x257AE8u: goto label_257ae8;
            case 0x257AECu: goto label_257aec;
            case 0x257AF0u: goto label_257af0;
            case 0x257AF4u: goto label_257af4;
            case 0x257AF8u: goto label_257af8;
            case 0x257AFCu: goto label_257afc;
            case 0x257B00u: goto label_257b00;
            case 0x257B04u: goto label_257b04;
            case 0x257B08u: goto label_257b08;
            case 0x257B0Cu: goto label_257b0c;
            case 0x257B10u: goto label_257b10;
            case 0x257B14u: goto label_257b14;
            case 0x257B18u: goto label_257b18;
            case 0x257B1Cu: goto label_257b1c;
            case 0x257B20u: goto label_257b20;
            case 0x257B24u: goto label_257b24;
            case 0x257B28u: goto label_257b28;
            case 0x257B2Cu: goto label_257b2c;
            case 0x257B30u: goto label_257b30;
            case 0x257B34u: goto label_257b34;
            case 0x257B38u: goto label_257b38;
            case 0x257B3Cu: goto label_257b3c;
            case 0x257B40u: goto label_257b40;
            case 0x257B44u: goto label_257b44;
            case 0x257B48u: goto label_257b48;
            case 0x257B4Cu: goto label_257b4c;
            case 0x257B50u: goto label_257b50;
            case 0x257B54u: goto label_257b54;
            case 0x257B58u: goto label_257b58;
            case 0x257B5Cu: goto label_257b5c;
            case 0x257B60u: goto label_257b60;
            case 0x257B64u: goto label_257b64;
            case 0x257B68u: goto label_257b68;
            case 0x257B6Cu: goto label_257b6c;
            case 0x257B70u: goto label_257b70;
            case 0x257B74u: goto label_257b74;
            case 0x257B78u: goto label_257b78;
            case 0x257B7Cu: goto label_257b7c;
            case 0x257B80u: goto label_257b80;
            case 0x257B84u: goto label_257b84;
            case 0x257B88u: goto label_257b88;
            case 0x257B8Cu: goto label_257b8c;
            case 0x257B90u: goto label_257b90;
            case 0x257B94u: goto label_257b94;
            case 0x257B98u: goto label_257b98;
            case 0x257B9Cu: goto label_257b9c;
            case 0x257BA0u: goto label_257ba0;
            case 0x257BA4u: goto label_257ba4;
            case 0x257BA8u: goto label_257ba8;
            case 0x257BACu: goto label_257bac;
            case 0x257BB0u: goto label_257bb0;
            case 0x257BB4u: goto label_257bb4;
            case 0x257BB8u: goto label_257bb8;
            case 0x257BBCu: goto label_257bbc;
            case 0x257BC0u: goto label_257bc0;
            case 0x257BC4u: goto label_257bc4;
            case 0x257BC8u: goto label_257bc8;
            case 0x257BCCu: goto label_257bcc;
            case 0x257BD0u: goto label_257bd0;
            case 0x257BD4u: goto label_257bd4;
            case 0x257BD8u: goto label_257bd8;
            case 0x257BDCu: goto label_257bdc;
            case 0x257BE0u: goto label_257be0;
            case 0x257BE4u: goto label_257be4;
            case 0x257BE8u: goto label_257be8;
            case 0x257BECu: goto label_257bec;
            case 0x257BF0u: goto label_257bf0;
            case 0x257BF4u: goto label_257bf4;
            case 0x257BF8u: goto label_257bf8;
            case 0x257BFCu: goto label_257bfc;
            case 0x257C00u: goto label_257c00;
            case 0x257C04u: goto label_257c04;
            case 0x257C08u: goto label_257c08;
            case 0x257C0Cu: goto label_257c0c;
            case 0x257C10u: goto label_257c10;
            case 0x257C14u: goto label_257c14;
            case 0x257C18u: goto label_257c18;
            case 0x257C1Cu: goto label_257c1c;
            case 0x257C20u: goto label_257c20;
            case 0x257C24u: goto label_257c24;
            case 0x257C28u: goto label_257c28;
            case 0x257C2Cu: goto label_257c2c;
            case 0x257C30u: goto label_257c30;
            case 0x257C34u: goto label_257c34;
            case 0x257C38u: goto label_257c38;
            case 0x257C3Cu: goto label_257c3c;
            case 0x257C40u: goto label_257c40;
            case 0x257C44u: goto label_257c44;
            case 0x257C48u: goto label_257c48;
            case 0x257C4Cu: goto label_257c4c;
            case 0x257C50u: goto label_257c50;
            case 0x257C54u: goto label_257c54;
            case 0x257C58u: goto label_257c58;
            case 0x257C5Cu: goto label_257c5c;
            case 0x257C60u: goto label_257c60;
            case 0x257C64u: goto label_257c64;
            case 0x257C68u: goto label_257c68;
            case 0x257C6Cu: goto label_257c6c;
            case 0x257C70u: goto label_257c70;
            case 0x257C74u: goto label_257c74;
            case 0x257C78u: goto label_257c78;
            case 0x257C7Cu: goto label_257c7c;
            case 0x257C80u: goto label_257c80;
            case 0x257C84u: goto label_257c84;
            case 0x257C88u: goto label_257c88;
            case 0x257C8Cu: goto label_257c8c;
            case 0x257C90u: goto label_257c90;
            case 0x257C94u: goto label_257c94;
            case 0x257C98u: goto label_257c98;
            case 0x257C9Cu: goto label_257c9c;
            case 0x257CA0u: goto label_257ca0;
            case 0x257CA4u: goto label_257ca4;
            case 0x257CA8u: goto label_257ca8;
            case 0x257CACu: goto label_257cac;
            case 0x257CB0u: goto label_257cb0;
            case 0x257CB4u: goto label_257cb4;
            case 0x257CB8u: goto label_257cb8;
            case 0x257CBCu: goto label_257cbc;
            case 0x257CC0u: goto label_257cc0;
            case 0x257CC4u: goto label_257cc4;
            case 0x257CC8u: goto label_257cc8;
            case 0x257CCCu: goto label_257ccc;
            case 0x257CD0u: goto label_257cd0;
            case 0x257CD4u: goto label_257cd4;
            case 0x257CD8u: goto label_257cd8;
            case 0x257CDCu: goto label_257cdc;
            case 0x257CE0u: goto label_257ce0;
            case 0x257CE4u: goto label_257ce4;
            case 0x257CE8u: goto label_257ce8;
            case 0x257CECu: goto label_257cec;
            case 0x257CF0u: goto label_257cf0;
            case 0x257CF4u: goto label_257cf4;
            case 0x257CF8u: goto label_257cf8;
            case 0x257CFCu: goto label_257cfc;
            case 0x257D00u: goto label_257d00;
            case 0x257D04u: goto label_257d04;
            case 0x257D08u: goto label_257d08;
            case 0x257D0Cu: goto label_257d0c;
            case 0x257D10u: goto label_257d10;
            case 0x257D14u: goto label_257d14;
            case 0x257D18u: goto label_257d18;
            case 0x257D1Cu: goto label_257d1c;
            case 0x257D20u: goto label_257d20;
            case 0x257D24u: goto label_257d24;
            case 0x257D28u: goto label_257d28;
            case 0x257D2Cu: goto label_257d2c;
            case 0x257D30u: goto label_257d30;
            case 0x257D34u: goto label_257d34;
            case 0x257D38u: goto label_257d38;
            case 0x257D3Cu: goto label_257d3c;
            case 0x257D40u: goto label_257d40;
            case 0x257D44u: goto label_257d44;
            case 0x257D48u: goto label_257d48;
            case 0x257D4Cu: goto label_257d4c;
            case 0x257D50u: goto label_257d50;
            case 0x257D54u: goto label_257d54;
            case 0x257D58u: goto label_257d58;
            case 0x257D5Cu: goto label_257d5c;
            case 0x257D60u: goto label_257d60;
            case 0x257D64u: goto label_257d64;
            case 0x257D68u: goto label_257d68;
            case 0x257D6Cu: goto label_257d6c;
            case 0x257D70u: goto label_257d70;
            case 0x257D74u: goto label_257d74;
            case 0x257D78u: goto label_257d78;
            case 0x257D7Cu: goto label_257d7c;
            case 0x257D80u: goto label_257d80;
            case 0x257D84u: goto label_257d84;
            case 0x257D88u: goto label_257d88;
            case 0x257D8Cu: goto label_257d8c;
            case 0x257D90u: goto label_257d90;
            case 0x257D94u: goto label_257d94;
            case 0x257D98u: goto label_257d98;
            case 0x257D9Cu: goto label_257d9c;
            case 0x257DA0u: goto label_257da0;
            case 0x257DA4u: goto label_257da4;
            case 0x257DA8u: goto label_257da8;
            case 0x257DACu: goto label_257dac;
            case 0x257DB0u: goto label_257db0;
            case 0x257DB4u: goto label_257db4;
            case 0x257DB8u: goto label_257db8;
            case 0x257DBCu: goto label_257dbc;
            case 0x257DC0u: goto label_257dc0;
            case 0x257DC4u: goto label_257dc4;
            case 0x257DC8u: goto label_257dc8;
            case 0x257DCCu: goto label_257dcc;
            case 0x257DD0u: goto label_257dd0;
            case 0x257DD4u: goto label_257dd4;
            case 0x257DD8u: goto label_257dd8;
            case 0x257DDCu: goto label_257ddc;
            case 0x257DE0u: goto label_257de0;
            case 0x257DE4u: goto label_257de4;
            case 0x257DE8u: goto label_257de8;
            case 0x257DECu: goto label_257dec;
            case 0x257DF0u: goto label_257df0;
            case 0x257DF4u: goto label_257df4;
            case 0x257DF8u: goto label_257df8;
            case 0x257DFCu: goto label_257dfc;
            case 0x257E00u: goto label_257e00;
            case 0x257E04u: goto label_257e04;
            case 0x257E08u: goto label_257e08;
            case 0x257E0Cu: goto label_257e0c;
            case 0x257E10u: goto label_257e10;
            case 0x257E14u: goto label_257e14;
            case 0x257E18u: goto label_257e18;
            case 0x257E1Cu: goto label_257e1c;
            case 0x257E20u: goto label_257e20;
            case 0x257E24u: goto label_257e24;
            case 0x257E28u: goto label_257e28;
            case 0x257E2Cu: goto label_257e2c;
            case 0x257E30u: goto label_257e30;
            case 0x257E34u: goto label_257e34;
            case 0x257E38u: goto label_257e38;
            case 0x257E3Cu: goto label_257e3c;
            case 0x257E40u: goto label_257e40;
            case 0x257E44u: goto label_257e44;
            case 0x257E48u: goto label_257e48;
            case 0x257E4Cu: goto label_257e4c;
            case 0x257E50u: goto label_257e50;
            case 0x257E54u: goto label_257e54;
            case 0x257E58u: goto label_257e58;
            case 0x257E5Cu: goto label_257e5c;
            case 0x257E60u: goto label_257e60;
            case 0x257E64u: goto label_257e64;
            case 0x257E68u: goto label_257e68;
            case 0x257E6Cu: goto label_257e6c;
            case 0x257E70u: goto label_257e70;
            case 0x257E74u: goto label_257e74;
            case 0x257E78u: goto label_257e78;
            case 0x257E7Cu: goto label_257e7c;
            case 0x257E80u: goto label_257e80;
            case 0x257E84u: goto label_257e84;
            case 0x257E88u: goto label_257e88;
            case 0x257E8Cu: goto label_257e8c;
            case 0x257E90u: goto label_257e90;
            case 0x257E94u: goto label_257e94;
            case 0x257E98u: goto label_257e98;
            case 0x257E9Cu: goto label_257e9c;
            case 0x257EA0u: goto label_257ea0;
            case 0x257EA4u: goto label_257ea4;
            case 0x257EA8u: goto label_257ea8;
            case 0x257EACu: goto label_257eac;
            case 0x257EB0u: goto label_257eb0;
            case 0x257EB4u: goto label_257eb4;
            case 0x257EB8u: goto label_257eb8;
            case 0x257EBCu: goto label_257ebc;
            case 0x257EC0u: goto label_257ec0;
            case 0x257EC4u: goto label_257ec4;
            case 0x257EC8u: goto label_257ec8;
            case 0x257ECCu: goto label_257ecc;
            case 0x257ED0u: goto label_257ed0;
            case 0x257ED4u: goto label_257ed4;
            case 0x257ED8u: goto label_257ed8;
            case 0x257EDCu: goto label_257edc;
            case 0x257EE0u: goto label_257ee0;
            case 0x257EE4u: goto label_257ee4;
            case 0x257EE8u: goto label_257ee8;
            case 0x257EECu: goto label_257eec;
            case 0x257EF0u: goto label_257ef0;
            case 0x257EF4u: goto label_257ef4;
            case 0x257EF8u: goto label_257ef8;
            case 0x257EFCu: goto label_257efc;
            case 0x257F00u: goto label_257f00;
            case 0x257F04u: goto label_257f04;
            case 0x257F08u: goto label_257f08;
            case 0x257F0Cu: goto label_257f0c;
            case 0x257F10u: goto label_257f10;
            case 0x257F14u: goto label_257f14;
            case 0x257F18u: goto label_257f18;
            case 0x257F1Cu: goto label_257f1c;
            case 0x257F20u: goto label_257f20;
            case 0x257F24u: goto label_257f24;
            case 0x257F28u: goto label_257f28;
            case 0x257F2Cu: goto label_257f2c;
            case 0x257F30u: goto label_257f30;
            case 0x257F34u: goto label_257f34;
            case 0x257F38u: goto label_257f38;
            case 0x257F3Cu: goto label_257f3c;
            case 0x257F40u: goto label_257f40;
            case 0x257F44u: goto label_257f44;
            case 0x257F48u: goto label_257f48;
            case 0x257F4Cu: goto label_257f4c;
            case 0x257F50u: goto label_257f50;
            case 0x257F54u: goto label_257f54;
            case 0x257F58u: goto label_257f58;
            case 0x257F5Cu: goto label_257f5c;
            case 0x257F60u: goto label_257f60;
            case 0x257F64u: goto label_257f64;
            case 0x257F68u: goto label_257f68;
            case 0x257F6Cu: goto label_257f6c;
            case 0x257F70u: goto label_257f70;
            case 0x257F74u: goto label_257f74;
            case 0x257F78u: goto label_257f78;
            case 0x257F7Cu: goto label_257f7c;
            case 0x257F80u: goto label_257f80;
            case 0x257F84u: goto label_257f84;
            case 0x257F88u: goto label_257f88;
            case 0x257F8Cu: goto label_257f8c;
            case 0x257F90u: goto label_257f90;
            case 0x257F94u: goto label_257f94;
            case 0x257F98u: goto label_257f98;
            case 0x257F9Cu: goto label_257f9c;
            case 0x257FA0u: goto label_257fa0;
            case 0x257FA4u: goto label_257fa4;
            case 0x257FA8u: goto label_257fa8;
            case 0x257FACu: goto label_257fac;
            case 0x257FB0u: goto label_257fb0;
            case 0x257FB4u: goto label_257fb4;
            case 0x257FB8u: goto label_257fb8;
            case 0x257FBCu: goto label_257fbc;
            case 0x257FC0u: goto label_257fc0;
            case 0x257FC4u: goto label_257fc4;
            case 0x257FC8u: goto label_257fc8;
            case 0x257FCCu: goto label_257fcc;
            case 0x257FD0u: goto label_257fd0;
            case 0x257FD4u: goto label_257fd4;
            case 0x257FD8u: goto label_257fd8;
            case 0x257FDCu: goto label_257fdc;
            case 0x257FE0u: goto label_257fe0;
            case 0x257FE4u: goto label_257fe4;
            case 0x257FE8u: goto label_257fe8;
            case 0x257FECu: goto label_257fec;
            case 0x257FF0u: goto label_257ff0;
            case 0x257FF4u: goto label_257ff4;
            case 0x257FF8u: goto label_257ff8;
            case 0x257FFCu: goto label_257ffc;
            case 0x258000u: goto label_258000;
            case 0x258004u: goto label_258004;
            case 0x258008u: goto label_258008;
            case 0x25800Cu: goto label_25800c;
            case 0x258010u: goto label_258010;
            case 0x258014u: goto label_258014;
            case 0x258018u: goto label_258018;
            case 0x25801Cu: goto label_25801c;
            case 0x258020u: goto label_258020;
            case 0x258024u: goto label_258024;
            case 0x258028u: goto label_258028;
            case 0x25802Cu: goto label_25802c;
            case 0x258030u: goto label_258030;
            case 0x258034u: goto label_258034;
            case 0x258038u: goto label_258038;
            case 0x25803Cu: goto label_25803c;
            case 0x258040u: goto label_258040;
            case 0x258044u: goto label_258044;
            case 0x258048u: goto label_258048;
            case 0x25804Cu: goto label_25804c;
            case 0x258050u: goto label_258050;
            case 0x258054u: goto label_258054;
            case 0x258058u: goto label_258058;
            case 0x25805Cu: goto label_25805c;
            case 0x258060u: goto label_258060;
            case 0x258064u: goto label_258064;
            case 0x258068u: goto label_258068;
            case 0x25806Cu: goto label_25806c;
            case 0x258070u: goto label_258070;
            case 0x258074u: goto label_258074;
            case 0x258078u: goto label_258078;
            case 0x25807Cu: goto label_25807c;
            case 0x258080u: goto label_258080;
            case 0x258084u: goto label_258084;
            case 0x258088u: goto label_258088;
            case 0x25808Cu: goto label_25808c;
            case 0x258090u: goto label_258090;
            case 0x258094u: goto label_258094;
            case 0x258098u: goto label_258098;
            case 0x25809Cu: goto label_25809c;
            case 0x2580A0u: goto label_2580a0;
            case 0x2580A4u: goto label_2580a4;
            case 0x2580A8u: goto label_2580a8;
            case 0x2580ACu: goto label_2580ac;
            case 0x2580B0u: goto label_2580b0;
            case 0x2580B4u: goto label_2580b4;
            case 0x2580B8u: goto label_2580b8;
            case 0x2580BCu: goto label_2580bc;
            case 0x2580C0u: goto label_2580c0;
            case 0x2580C4u: goto label_2580c4;
            case 0x2580C8u: goto label_2580c8;
            case 0x2580CCu: goto label_2580cc;
            case 0x2580D0u: goto label_2580d0;
            case 0x2580D4u: goto label_2580d4;
            case 0x2580D8u: goto label_2580d8;
            case 0x2580DCu: goto label_2580dc;
            case 0x2580E0u: goto label_2580e0;
            case 0x2580E4u: goto label_2580e4;
            case 0x2580E8u: goto label_2580e8;
            case 0x2580ECu: goto label_2580ec;
            case 0x2580F0u: goto label_2580f0;
            case 0x2580F4u: goto label_2580f4;
            case 0x2580F8u: goto label_2580f8;
            case 0x2580FCu: goto label_2580fc;
            case 0x258100u: goto label_258100;
            case 0x258104u: goto label_258104;
            case 0x258108u: goto label_258108;
            case 0x25810Cu: goto label_25810c;
            case 0x258110u: goto label_258110;
            case 0x258114u: goto label_258114;
            case 0x258118u: goto label_258118;
            case 0x25811Cu: goto label_25811c;
            case 0x258120u: goto label_258120;
            case 0x258124u: goto label_258124;
            case 0x258128u: goto label_258128;
            case 0x25812Cu: goto label_25812c;
            case 0x258130u: goto label_258130;
            case 0x258134u: goto label_258134;
            case 0x258138u: goto label_258138;
            case 0x25813Cu: goto label_25813c;
            case 0x258140u: goto label_258140;
            case 0x258144u: goto label_258144;
            case 0x258148u: goto label_258148;
            case 0x25814Cu: goto label_25814c;
            case 0x258150u: goto label_258150;
            case 0x258154u: goto label_258154;
            case 0x258158u: goto label_258158;
            case 0x25815Cu: goto label_25815c;
            case 0x258160u: goto label_258160;
            case 0x258164u: goto label_258164;
            case 0x258168u: goto label_258168;
            case 0x25816Cu: goto label_25816c;
            case 0x258170u: goto label_258170;
            case 0x258174u: goto label_258174;
            case 0x258178u: goto label_258178;
            case 0x25817Cu: goto label_25817c;
            case 0x258180u: goto label_258180;
            case 0x258184u: goto label_258184;
            case 0x258188u: goto label_258188;
            case 0x25818Cu: goto label_25818c;
            case 0x258190u: goto label_258190;
            case 0x258194u: goto label_258194;
            case 0x258198u: goto label_258198;
            case 0x25819Cu: goto label_25819c;
            case 0x2581A0u: goto label_2581a0;
            case 0x2581A4u: goto label_2581a4;
            case 0x2581A8u: goto label_2581a8;
            case 0x2581ACu: goto label_2581ac;
            case 0x2581B0u: goto label_2581b0;
            case 0x2581B4u: goto label_2581b4;
            case 0x2581B8u: goto label_2581b8;
            case 0x2581BCu: goto label_2581bc;
            case 0x2581C0u: goto label_2581c0;
            case 0x2581C4u: goto label_2581c4;
            case 0x2581C8u: goto label_2581c8;
            case 0x2581CCu: goto label_2581cc;
            case 0x2581D0u: goto label_2581d0;
            case 0x2581D4u: goto label_2581d4;
            case 0x2581D8u: goto label_2581d8;
            case 0x2581DCu: goto label_2581dc;
            case 0x2581E0u: goto label_2581e0;
            case 0x2581E4u: goto label_2581e4;
            case 0x2581E8u: goto label_2581e8;
            case 0x2581ECu: goto label_2581ec;
            case 0x2581F0u: goto label_2581f0;
            case 0x2581F4u: goto label_2581f4;
            case 0x2581F8u: goto label_2581f8;
            case 0x2581FCu: goto label_2581fc;
            case 0x258200u: goto label_258200;
            case 0x258204u: goto label_258204;
            case 0x258208u: goto label_258208;
            case 0x25820Cu: goto label_25820c;
            case 0x258210u: goto label_258210;
            case 0x258214u: goto label_258214;
            case 0x258218u: goto label_258218;
            case 0x25821Cu: goto label_25821c;
            case 0x258220u: goto label_258220;
            case 0x258224u: goto label_258224;
            case 0x258228u: goto label_258228;
            case 0x25822Cu: goto label_25822c;
            case 0x258230u: goto label_258230;
            case 0x258234u: goto label_258234;
            case 0x258238u: goto label_258238;
            case 0x25823Cu: goto label_25823c;
            case 0x258240u: goto label_258240;
            case 0x258244u: goto label_258244;
            case 0x258248u: goto label_258248;
            case 0x25824Cu: goto label_25824c;
            case 0x258250u: goto label_258250;
            case 0x258254u: goto label_258254;
            case 0x258258u: goto label_258258;
            case 0x25825Cu: goto label_25825c;
            case 0x258260u: goto label_258260;
            case 0x258264u: goto label_258264;
            case 0x258268u: goto label_258268;
            case 0x25826Cu: goto label_25826c;
            case 0x258270u: goto label_258270;
            case 0x258274u: goto label_258274;
            case 0x258278u: goto label_258278;
            case 0x25827Cu: goto label_25827c;
            case 0x258280u: goto label_258280;
            case 0x258284u: goto label_258284;
            case 0x258288u: goto label_258288;
            case 0x25828Cu: goto label_25828c;
            case 0x258290u: goto label_258290;
            case 0x258294u: goto label_258294;
            case 0x258298u: goto label_258298;
            case 0x25829Cu: goto label_25829c;
            case 0x2582A0u: goto label_2582a0;
            case 0x2582A4u: goto label_2582a4;
            case 0x2582A8u: goto label_2582a8;
            case 0x2582ACu: goto label_2582ac;
            case 0x2582B0u: goto label_2582b0;
            case 0x2582B4u: goto label_2582b4;
            case 0x2582B8u: goto label_2582b8;
            case 0x2582BCu: goto label_2582bc;
            case 0x2582C0u: goto label_2582c0;
            case 0x2582C4u: goto label_2582c4;
            case 0x2582C8u: goto label_2582c8;
            case 0x2582CCu: goto label_2582cc;
            case 0x2582D0u: goto label_2582d0;
            case 0x2582D4u: goto label_2582d4;
            case 0x2582D8u: goto label_2582d8;
            case 0x2582DCu: goto label_2582dc;
            case 0x2582E0u: goto label_2582e0;
            case 0x2582E4u: goto label_2582e4;
            case 0x2582E8u: goto label_2582e8;
            case 0x2582ECu: goto label_2582ec;
            case 0x2582F0u: goto label_2582f0;
            case 0x2582F4u: goto label_2582f4;
            case 0x2582F8u: goto label_2582f8;
            case 0x2582FCu: goto label_2582fc;
            case 0x258300u: goto label_258300;
            case 0x258304u: goto label_258304;
            case 0x258308u: goto label_258308;
            case 0x25830Cu: goto label_25830c;
            case 0x258310u: goto label_258310;
            case 0x258314u: goto label_258314;
            case 0x258318u: goto label_258318;
            case 0x25831Cu: goto label_25831c;
            case 0x258320u: goto label_258320;
            case 0x258324u: goto label_258324;
            case 0x258328u: goto label_258328;
            case 0x25832Cu: goto label_25832c;
            case 0x258330u: goto label_258330;
            case 0x258334u: goto label_258334;
            case 0x258338u: goto label_258338;
            case 0x25833Cu: goto label_25833c;
            case 0x258340u: goto label_258340;
            case 0x258344u: goto label_258344;
            case 0x258348u: goto label_258348;
            case 0x25834Cu: goto label_25834c;
            case 0x258350u: goto label_258350;
            case 0x258354u: goto label_258354;
            case 0x258358u: goto label_258358;
            case 0x25835Cu: goto label_25835c;
            case 0x258360u: goto label_258360;
            case 0x258364u: goto label_258364;
            case 0x258368u: goto label_258368;
            case 0x25836Cu: goto label_25836c;
            case 0x258370u: goto label_258370;
            case 0x258374u: goto label_258374;
            case 0x258378u: goto label_258378;
            case 0x25837Cu: goto label_25837c;
            case 0x258380u: goto label_258380;
            case 0x258384u: goto label_258384;
            case 0x258388u: goto label_258388;
            case 0x25838Cu: goto label_25838c;
            case 0x258390u: goto label_258390;
            case 0x258394u: goto label_258394;
            case 0x258398u: goto label_258398;
            case 0x25839Cu: goto label_25839c;
            case 0x2583A0u: goto label_2583a0;
            case 0x2583A4u: goto label_2583a4;
            case 0x2583A8u: goto label_2583a8;
            case 0x2583ACu: goto label_2583ac;
            case 0x2583B0u: goto label_2583b0;
            case 0x2583B4u: goto label_2583b4;
            case 0x2583B8u: goto label_2583b8;
            case 0x2583BCu: goto label_2583bc;
            case 0x2583C0u: goto label_2583c0;
            case 0x2583C4u: goto label_2583c4;
            case 0x2583C8u: goto label_2583c8;
            case 0x2583CCu: goto label_2583cc;
            case 0x2583D0u: goto label_2583d0;
            case 0x2583D4u: goto label_2583d4;
            case 0x2583D8u: goto label_2583d8;
            case 0x2583DCu: goto label_2583dc;
            case 0x2583E0u: goto label_2583e0;
            case 0x2583E4u: goto label_2583e4;
            case 0x2583E8u: goto label_2583e8;
            case 0x2583ECu: goto label_2583ec;
            case 0x2583F0u: goto label_2583f0;
            case 0x2583F4u: goto label_2583f4;
            case 0x2583F8u: goto label_2583f8;
            case 0x2583FCu: goto label_2583fc;
            case 0x258400u: goto label_258400;
            case 0x258404u: goto label_258404;
            case 0x258408u: goto label_258408;
            case 0x25840Cu: goto label_25840c;
            case 0x258410u: goto label_258410;
            case 0x258414u: goto label_258414;
            case 0x258418u: goto label_258418;
            case 0x25841Cu: goto label_25841c;
            case 0x258420u: goto label_258420;
            case 0x258424u: goto label_258424;
            default: break;
        }
        return;
    }
label_fallthrough_0x258420:
    ctx->pc = 0x258428u;
}
