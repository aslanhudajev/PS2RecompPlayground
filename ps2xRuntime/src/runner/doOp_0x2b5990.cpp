#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: doOp
// Address: 0x2b5990 - 0x2b5c78
void doOp_0x2b5990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5990u;

label_2b5990:
    // 0x2b5990: 0x27bdffb0
    ctx->pc = 0x2b5990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_2b5994:
    // 0x2b5994: 0xffbf0040
    ctx->pc = 0x2b5994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2b5998:
    // 0x2b5998: 0xffb30030
    ctx->pc = 0x2b5998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b599c:
    // 0x2b599c: 0xffb20020
    ctx->pc = 0x2b599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b59a0:
    // 0x2b59a0: 0xffb10010
    ctx->pc = 0x2b59a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b59a4:
    // 0x2b59a4: 0xffb00000
    ctx->pc = 0x2b59a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b59a8:
    // 0x2b59a8: 0x80902d
    ctx->pc = 0x2b59a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b59ac:
    // 0x2b59ac: 0xa0802d
    ctx->pc = 0x2b59acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b59b0:
    // 0x2b59b0: 0xc0882d
    ctx->pc = 0x2b59b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b59b4:
    // 0x2b59b4: 0x8e020000
    ctx->pc = 0x2b59b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b59b8:
    // 0x2b59b8: 0x8e230000
    ctx->pc = 0x2b59b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b59bc:
    // 0x2b59bc: 0x431025
    ctx->pc = 0x2b59bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b59c0:
    // 0x2b59c0: 0x30420020
    ctx->pc = 0x2b59c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
label_2b59c4:
    // 0x2b59c4: 0x1440009e
label_2b59c8:
    if (ctx->pc == 0x2B59C8u) {
        ctx->pc = 0x2B59C8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B59CCu;
        goto label_2b59cc;
    }
    ctx->pc = 0x2B59C4u;
    {
        const bool branch_taken_0x2b59c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B59C8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b59c4) {
            ctx->pc = 0x2B5C40u;
            goto label_2b5c40;
        }
    }
    ctx->pc = 0x2B59CCu;
label_2b59cc:
    // 0x2b59cc: 0x3c040037
    ctx->pc = 0x2b59ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
label_2b59d0:
    // 0x2b59d0: 0x8c8220b0
    ctx->pc = 0x2b59d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8368)));
label_2b59d4:
    // 0x2b59d4: 0x3c03ffff
    ctx->pc = 0x2b59d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_2b59d8:
    // 0x2b59d8: 0x3463fff1
    ctx->pc = 0x2b59d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65521));
label_2b59dc:
    // 0x2b59dc: 0x431024
    ctx->pc = 0x2b59dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b59e0:
    // 0x2b59e0: 0xac8220b0
    ctx->pc = 0x2b59e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8368), GPR_U32(ctx, 2));
label_2b59e4:
    // 0x2b59e4: 0x92620008
    ctx->pc = 0x2b59e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_2b59e8:
    // 0x2b59e8: 0x2442ff9f
    ctx->pc = 0x2b59e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967199));
label_2b59ec:
    // 0x2b59ec: 0x21600
    ctx->pc = 0x2b59ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2b59f0:
    // 0x2b59f0: 0x21e03
    ctx->pc = 0x2b59f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_2b59f4:
    // 0x2b59f4: 0x2c620013
    ctx->pc = 0x2b59f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 19));
label_2b59f8:
    // 0x2b59f8: 0x10400077
label_2b59fc:
    if (ctx->pc == 0x2B59FCu) {
        ctx->pc = 0x2B59FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B5A00u;
        goto label_2b5a00;
    }
    ctx->pc = 0x2B59F8u;
    {
        const bool branch_taken_0x2b59f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B59FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b59f8) {
            ctx->pc = 0x2B5BD8u;
            goto label_2b5bd8;
        }
    }
    ctx->pc = 0x2B5A00u;
label_2b5a00:
    // 0x2b5a00: 0x24424b90
    ctx->pc = 0x2b5a00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19344));
label_2b5a04:
    // 0x2b5a04: 0x31880
    ctx->pc = 0x2b5a04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b5a08:
    // 0x2b5a08: 0x621821
    ctx->pc = 0x2b5a08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b5a0c:
    // 0x2b5a0c: 0x8c620000
    ctx->pc = 0x2b5a0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b5a10:
    // 0x2b5a10: 0x400008
label_2b5a14:
    if (ctx->pc == 0x2B5A14u) {
        ctx->pc = 0x2B5A18u;
        goto label_2b5a18;
    }
    ctx->pc = 0x2B5A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5990u: goto label_2b5990;
            case 0x2B5994u: goto label_2b5994;
            case 0x2B5998u: goto label_2b5998;
            case 0x2B599Cu: goto label_2b599c;
            case 0x2B59A0u: goto label_2b59a0;
            case 0x2B59A4u: goto label_2b59a4;
            case 0x2B59A8u: goto label_2b59a8;
            case 0x2B59ACu: goto label_2b59ac;
            case 0x2B59B0u: goto label_2b59b0;
            case 0x2B59B4u: goto label_2b59b4;
            case 0x2B59B8u: goto label_2b59b8;
            case 0x2B59BCu: goto label_2b59bc;
            case 0x2B59C0u: goto label_2b59c0;
            case 0x2B59C4u: goto label_2b59c4;
            case 0x2B59C8u: goto label_2b59c8;
            case 0x2B59CCu: goto label_2b59cc;
            case 0x2B59D0u: goto label_2b59d0;
            case 0x2B59D4u: goto label_2b59d4;
            case 0x2B59D8u: goto label_2b59d8;
            case 0x2B59DCu: goto label_2b59dc;
            case 0x2B59E0u: goto label_2b59e0;
            case 0x2B59E4u: goto label_2b59e4;
            case 0x2B59E8u: goto label_2b59e8;
            case 0x2B59ECu: goto label_2b59ec;
            case 0x2B59F0u: goto label_2b59f0;
            case 0x2B59F4u: goto label_2b59f4;
            case 0x2B59F8u: goto label_2b59f8;
            case 0x2B59FCu: goto label_2b59fc;
            case 0x2B5A00u: goto label_2b5a00;
            case 0x2B5A04u: goto label_2b5a04;
            case 0x2B5A08u: goto label_2b5a08;
            case 0x2B5A0Cu: goto label_2b5a0c;
            case 0x2B5A10u: goto label_2b5a10;
            case 0x2B5A14u: goto label_2b5a14;
            case 0x2B5A18u: goto label_2b5a18;
            case 0x2B5A1Cu: goto label_2b5a1c;
            case 0x2B5A20u: goto label_2b5a20;
            case 0x2B5A24u: goto label_2b5a24;
            case 0x2B5A28u: goto label_2b5a28;
            case 0x2B5A2Cu: goto label_2b5a2c;
            case 0x2B5A30u: goto label_2b5a30;
            case 0x2B5A34u: goto label_2b5a34;
            case 0x2B5A38u: goto label_2b5a38;
            case 0x2B5A3Cu: goto label_2b5a3c;
            case 0x2B5A40u: goto label_2b5a40;
            case 0x2B5A44u: goto label_2b5a44;
            case 0x2B5A48u: goto label_2b5a48;
            case 0x2B5A4Cu: goto label_2b5a4c;
            case 0x2B5A50u: goto label_2b5a50;
            case 0x2B5A54u: goto label_2b5a54;
            case 0x2B5A58u: goto label_2b5a58;
            case 0x2B5A5Cu: goto label_2b5a5c;
            case 0x2B5A60u: goto label_2b5a60;
            case 0x2B5A64u: goto label_2b5a64;
            case 0x2B5A68u: goto label_2b5a68;
            case 0x2B5A6Cu: goto label_2b5a6c;
            case 0x2B5A70u: goto label_2b5a70;
            case 0x2B5A74u: goto label_2b5a74;
            case 0x2B5A78u: goto label_2b5a78;
            case 0x2B5A7Cu: goto label_2b5a7c;
            case 0x2B5A80u: goto label_2b5a80;
            case 0x2B5A84u: goto label_2b5a84;
            case 0x2B5A88u: goto label_2b5a88;
            case 0x2B5A8Cu: goto label_2b5a8c;
            case 0x2B5A90u: goto label_2b5a90;
            case 0x2B5A94u: goto label_2b5a94;
            case 0x2B5A98u: goto label_2b5a98;
            case 0x2B5A9Cu: goto label_2b5a9c;
            case 0x2B5AA0u: goto label_2b5aa0;
            case 0x2B5AA4u: goto label_2b5aa4;
            case 0x2B5AA8u: goto label_2b5aa8;
            case 0x2B5AACu: goto label_2b5aac;
            case 0x2B5AB0u: goto label_2b5ab0;
            case 0x2B5AB4u: goto label_2b5ab4;
            case 0x2B5AB8u: goto label_2b5ab8;
            case 0x2B5ABCu: goto label_2b5abc;
            case 0x2B5AC0u: goto label_2b5ac0;
            case 0x2B5AC4u: goto label_2b5ac4;
            case 0x2B5AC8u: goto label_2b5ac8;
            case 0x2B5ACCu: goto label_2b5acc;
            case 0x2B5AD0u: goto label_2b5ad0;
            case 0x2B5AD4u: goto label_2b5ad4;
            case 0x2B5AD8u: goto label_2b5ad8;
            case 0x2B5ADCu: goto label_2b5adc;
            case 0x2B5AE0u: goto label_2b5ae0;
            case 0x2B5AE4u: goto label_2b5ae4;
            case 0x2B5AE8u: goto label_2b5ae8;
            case 0x2B5AECu: goto label_2b5aec;
            case 0x2B5AF0u: goto label_2b5af0;
            case 0x2B5AF4u: goto label_2b5af4;
            case 0x2B5AF8u: goto label_2b5af8;
            case 0x2B5AFCu: goto label_2b5afc;
            case 0x2B5B00u: goto label_2b5b00;
            case 0x2B5B04u: goto label_2b5b04;
            case 0x2B5B08u: goto label_2b5b08;
            case 0x2B5B0Cu: goto label_2b5b0c;
            case 0x2B5B10u: goto label_2b5b10;
            case 0x2B5B14u: goto label_2b5b14;
            case 0x2B5B18u: goto label_2b5b18;
            case 0x2B5B1Cu: goto label_2b5b1c;
            case 0x2B5B20u: goto label_2b5b20;
            case 0x2B5B24u: goto label_2b5b24;
            case 0x2B5B28u: goto label_2b5b28;
            case 0x2B5B2Cu: goto label_2b5b2c;
            case 0x2B5B30u: goto label_2b5b30;
            case 0x2B5B34u: goto label_2b5b34;
            case 0x2B5B38u: goto label_2b5b38;
            case 0x2B5B3Cu: goto label_2b5b3c;
            case 0x2B5B40u: goto label_2b5b40;
            case 0x2B5B44u: goto label_2b5b44;
            case 0x2B5B48u: goto label_2b5b48;
            case 0x2B5B4Cu: goto label_2b5b4c;
            case 0x2B5B50u: goto label_2b5b50;
            case 0x2B5B54u: goto label_2b5b54;
            case 0x2B5B58u: goto label_2b5b58;
            case 0x2B5B5Cu: goto label_2b5b5c;
            case 0x2B5B60u: goto label_2b5b60;
            case 0x2B5B64u: goto label_2b5b64;
            case 0x2B5B68u: goto label_2b5b68;
            case 0x2B5B6Cu: goto label_2b5b6c;
            case 0x2B5B70u: goto label_2b5b70;
            case 0x2B5B74u: goto label_2b5b74;
            case 0x2B5B78u: goto label_2b5b78;
            case 0x2B5B7Cu: goto label_2b5b7c;
            case 0x2B5B80u: goto label_2b5b80;
            case 0x2B5B84u: goto label_2b5b84;
            case 0x2B5B88u: goto label_2b5b88;
            case 0x2B5B8Cu: goto label_2b5b8c;
            case 0x2B5B90u: goto label_2b5b90;
            case 0x2B5B94u: goto label_2b5b94;
            case 0x2B5B98u: goto label_2b5b98;
            case 0x2B5B9Cu: goto label_2b5b9c;
            case 0x2B5BA0u: goto label_2b5ba0;
            case 0x2B5BA4u: goto label_2b5ba4;
            case 0x2B5BA8u: goto label_2b5ba8;
            case 0x2B5BACu: goto label_2b5bac;
            case 0x2B5BB0u: goto label_2b5bb0;
            case 0x2B5BB4u: goto label_2b5bb4;
            case 0x2B5BB8u: goto label_2b5bb8;
            case 0x2B5BBCu: goto label_2b5bbc;
            case 0x2B5BC0u: goto label_2b5bc0;
            case 0x2B5BC4u: goto label_2b5bc4;
            case 0x2B5BC8u: goto label_2b5bc8;
            case 0x2B5BCCu: goto label_2b5bcc;
            case 0x2B5BD0u: goto label_2b5bd0;
            case 0x2B5BD4u: goto label_2b5bd4;
            case 0x2B5BD8u: goto label_2b5bd8;
            case 0x2B5BDCu: goto label_2b5bdc;
            case 0x2B5BE0u: goto label_2b5be0;
            case 0x2B5BE4u: goto label_2b5be4;
            case 0x2B5BE8u: goto label_2b5be8;
            case 0x2B5BECu: goto label_2b5bec;
            case 0x2B5BF0u: goto label_2b5bf0;
            case 0x2B5BF4u: goto label_2b5bf4;
            case 0x2B5BF8u: goto label_2b5bf8;
            case 0x2B5BFCu: goto label_2b5bfc;
            case 0x2B5C00u: goto label_2b5c00;
            case 0x2B5C04u: goto label_2b5c04;
            case 0x2B5C08u: goto label_2b5c08;
            case 0x2B5C0Cu: goto label_2b5c0c;
            case 0x2B5C10u: goto label_2b5c10;
            case 0x2B5C14u: goto label_2b5c14;
            case 0x2B5C18u: goto label_2b5c18;
            case 0x2B5C1Cu: goto label_2b5c1c;
            case 0x2B5C20u: goto label_2b5c20;
            case 0x2B5C24u: goto label_2b5c24;
            case 0x2B5C28u: goto label_2b5c28;
            case 0x2B5C2Cu: goto label_2b5c2c;
            case 0x2B5C30u: goto label_2b5c30;
            case 0x2B5C34u: goto label_2b5c34;
            case 0x2B5C38u: goto label_2b5c38;
            case 0x2B5C3Cu: goto label_2b5c3c;
            case 0x2B5C40u: goto label_2b5c40;
            case 0x2B5C44u: goto label_2b5c44;
            case 0x2B5C48u: goto label_2b5c48;
            case 0x2B5C4Cu: goto label_2b5c4c;
            case 0x2B5C50u: goto label_2b5c50;
            case 0x2B5C54u: goto label_2b5c54;
            case 0x2B5C58u: goto label_2b5c58;
            case 0x2B5C5Cu: goto label_2b5c5c;
            case 0x2B5C60u: goto label_2b5c60;
            case 0x2B5C64u: goto label_2b5c64;
            case 0x2B5C68u: goto label_2b5c68;
            case 0x2B5C6Cu: goto label_2b5c6c;
            case 0x2B5C70u: goto label_2b5c70;
            case 0x2B5C74u: goto label_2b5c74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5A18u;
label_2b5a18:
    // 0x2b5a18: 0xc0ad1a2
label_2b5a1c:
    if (ctx->pc == 0x2B5A1Cu) {
        ctx->pc = 0x2B5A1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A20u;
        goto label_2b5a20;
    }
    ctx->pc = 0x2B5A18u;
    SET_GPR_U32(ctx, 31, 0x2B5A20u);
    ctx->pc = 0x2B5A1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A20u; }
    }
    if (ctx->pc != 0x2B5A20u) { return; }
    ctx->pc = 0x2B5A20u;
label_2b5a20:
    // 0x2b5a20: 0xae020010
    ctx->pc = 0x2b5a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2b5a24:
    // 0x2b5a24: 0xc0ad1a2
label_2b5a28:
    if (ctx->pc == 0x2B5A28u) {
        ctx->pc = 0x2B5A28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A2Cu;
        goto label_2b5a2c;
    }
    ctx->pc = 0x2B5A24u;
    SET_GPR_U32(ctx, 31, 0x2B5A2Cu);
    ctx->pc = 0x2B5A28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A2Cu; }
    }
    if (ctx->pc != 0x2B5A2Cu) { return; }
    ctx->pc = 0x2B5A2Cu;
label_2b5a2c:
    // 0x2b5a2c: 0xae220010
    ctx->pc = 0x2b5a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2b5a30:
    // 0x2b5a30: 0x24020001
    ctx->pc = 0x2b5a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2b5a34:
    // 0x2b5a34: 0xae020000
    ctx->pc = 0x2b5a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2b5a38:
    // 0x2b5a38: 0xae220000
    ctx->pc = 0x2b5a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b5a3c:
    // 0x2b5a3c: 0x1000007b
label_2b5a40:
    if (ctx->pc == 0x2B5A40u) {
        ctx->pc = 0x2B5A40u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5A44u;
        goto label_2b5a44;
    }
    ctx->pc = 0x2B5A3Cu;
    {
        const bool branch_taken_0x2b5a3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5A40u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b5a3c) {
            ctx->pc = 0x2B5C2Cu;
            goto label_2b5c2c;
        }
    }
    ctx->pc = 0x2B5A44u;
label_2b5a44:
    // 0x2b5a44: 0x8e030000
    ctx->pc = 0x2b5a44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b5a48:
    // 0x2b5a48: 0x24020001
    ctx->pc = 0x2b5a48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2b5a4c:
    // 0x2b5a4c: 0x5462000f
label_2b5a50:
    if (ctx->pc == 0x2B5A50u) {
        ctx->pc = 0x2B5A50u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2B5A54u;
        goto label_2b5a54;
    }
    ctx->pc = 0x2B5A4Cu;
    {
        const bool branch_taken_0x2b5a4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b5a4c) {
            ctx->pc = 0x2B5A50u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B5A8Cu;
            goto label_2b5a8c;
        }
    }
    ctx->pc = 0x2B5A54u;
label_2b5a54:
    // 0x2b5a54: 0x8e220000
    ctx->pc = 0x2b5a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5a58:
    // 0x2b5a58: 0x14430003
label_2b5a5c:
    if (ctx->pc == 0x2B5A5Cu) {
        ctx->pc = 0x2B5A5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B5A60u;
        goto label_2b5a60;
    }
    ctx->pc = 0x2B5A58u;
    {
        const bool branch_taken_0x2b5a58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2B5A5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b5a58) {
            ctx->pc = 0x2B5A68u;
            goto label_2b5a68;
        }
    }
    ctx->pc = 0x2B5A60u;
label_2b5a60:
    // 0x2b5a60: 0x1000fff6
label_2b5a64:
    if (ctx->pc == 0x2B5A64u) {
        ctx->pc = 0x2B5A64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2B5A68u;
        goto label_2b5a68;
    }
    ctx->pc = 0x2B5A60u;
    {
        const bool branch_taken_0x2b5a60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5A64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x2b5a60) {
            ctx->pc = 0x2B5A3Cu;
            goto label_2b5a3c;
        }
    }
    ctx->pc = 0x2B5A68u;
label_2b5a68:
    // 0x2b5a68: 0x54620007
label_2b5a6c:
    if (ctx->pc == 0x2B5A6Cu) {
        ctx->pc = 0x2B5A6Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2B5A70u;
        goto label_2b5a70;
    }
    ctx->pc = 0x2B5A68u;
    {
        const bool branch_taken_0x2b5a68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b5a68) {
            ctx->pc = 0x2B5A6Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B5A88u;
            goto label_2b5a88;
        }
    }
    ctx->pc = 0x2B5A70u;
label_2b5a70:
    // 0x2b5a70: 0xae000000
    ctx->pc = 0x2b5a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2b5a74:
    // 0x2b5a74: 0x200202d
    ctx->pc = 0x2b5a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a78:
    // 0x2b5a78: 0xc0ad1d2
label_2b5a7c:
    if (ctx->pc == 0x2B5A7Cu) {
        ctx->pc = 0x2B5A7Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B5A80u;
        goto label_2b5a80;
    }
    ctx->pc = 0x2B5A78u;
    SET_GPR_U32(ctx, 31, 0x2B5A80u);
    ctx->pc = 0x2B5A7Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A80u; }
    }
    if (ctx->pc != 0x2B5A80u) { return; }
    ctx->pc = 0x2B5A80u;
label_2b5a80:
    // 0x2b5a80: 0xe6000010
    ctx->pc = 0x2b5a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2b5a84:
    // 0x2b5a84: 0x8e230000
    ctx->pc = 0x2b5a84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5a88:
    // 0x2b5a88: 0x24020001
    ctx->pc = 0x2b5a88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2b5a8c:
    // 0x2b5a8c: 0x54620007
label_2b5a90:
    if (ctx->pc == 0x2B5A90u) {
        ctx->pc = 0x2B5A90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2B5A94u;
        goto label_2b5a94;
    }
    ctx->pc = 0x2B5A8Cu;
    {
        const bool branch_taken_0x2b5a8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b5a8c) {
            ctx->pc = 0x2B5A90u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B5AACu;
            goto label_2b5aac;
        }
    }
    ctx->pc = 0x2B5A94u;
label_2b5a94:
    // 0x2b5a94: 0xae200000
    ctx->pc = 0x2b5a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2b5a98:
    // 0x2b5a98: 0x220202d
    ctx->pc = 0x2b5a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a9c:
    // 0x2b5a9c: 0xc0ad1d2
label_2b5aa0:
    if (ctx->pc == 0x2B5AA0u) {
        ctx->pc = 0x2B5AA0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B5AA4u;
        goto label_2b5aa4;
    }
    ctx->pc = 0x2B5A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B5AA4u);
    ctx->pc = 0x2B5AA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AA4u; }
    }
    if (ctx->pc != 0x2B5AA4u) { return; }
    ctx->pc = 0x2B5AA4u;
label_2b5aa4:
    // 0x2b5aa4: 0xe6200010
    ctx->pc = 0x2b5aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2b5aa8:
    // 0x2b5aa8: 0x8e020000
    ctx->pc = 0x2b5aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b5aac:
    // 0x2b5aac: 0x24420001
    ctx->pc = 0x2b5aacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2b5ab0:
    // 0x2b5ab0: 0x21080
    ctx->pc = 0x2b5ab0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2b5ab4:
    // 0x2b5ab4: 0x8e230000
    ctx->pc = 0x2b5ab4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5ab8:
    // 0x2b5ab8: 0x1000ffe0
label_2b5abc:
    if (ctx->pc == 0x2B5ABCu) {
        ctx->pc = 0x2B5ABCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2B5AC0u;
        goto label_2b5ac0;
    }
    ctx->pc = 0x2B5AB8u;
    {
        const bool branch_taken_0x2b5ab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5ABCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x2b5ab8) {
            ctx->pc = 0x2B5A3Cu;
            goto label_2b5a3c;
        }
    }
    ctx->pc = 0x2B5AC0u;
label_2b5ac0:
    // 0x2b5ac0: 0x8e030000
    ctx->pc = 0x2b5ac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b5ac4:
    // 0x2b5ac4: 0x24020002
    ctx->pc = 0x2b5ac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2b5ac8:
    // 0x2b5ac8: 0x14620005
label_2b5acc:
    if (ctx->pc == 0x2B5ACCu) {
        ctx->pc = 0x2B5ACCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B5AD0u;
        goto label_2b5ad0;
    }
    ctx->pc = 0x2B5AC8u;
    {
        const bool branch_taken_0x2b5ac8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B5ACCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2b5ac8) {
            ctx->pc = 0x2B5AE0u;
            goto label_2b5ae0;
        }
    }
    ctx->pc = 0x2B5AD0u;
label_2b5ad0:
    // 0x2b5ad0: 0x8e220000
    ctx->pc = 0x2b5ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5ad4:
    // 0x2b5ad4: 0x50430055
label_2b5ad8:
    if (ctx->pc == 0x2B5AD8u) {
        ctx->pc = 0x2B5AD8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5ADCu;
        goto label_2b5adc;
    }
    ctx->pc = 0x2B5AD4u;
    {
        const bool branch_taken_0x2b5ad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2b5ad4) {
            ctx->pc = 0x2B5AD8u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x2B5C2Cu;
            goto label_2b5c2c;
        }
    }
    ctx->pc = 0x2B5ADCu;
label_2b5adc:
    // 0x2b5adc: 0x24020003
    ctx->pc = 0x2b5adcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2b5ae0:
    // 0x2b5ae0: 0x54620005
label_2b5ae4:
    if (ctx->pc == 0x2B5AE4u) {
        ctx->pc = 0x2B5AE4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2B5AE8u;
        goto label_2b5ae8;
    }
    ctx->pc = 0x2B5AE0u;
    {
        const bool branch_taken_0x2b5ae0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b5ae0) {
            ctx->pc = 0x2B5AE4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B5AF8u;
            goto label_2b5af8;
        }
    }
    ctx->pc = 0x2B5AE8u;
label_2b5ae8:
    // 0x2b5ae8: 0x8e220000
    ctx->pc = 0x2b5ae8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5aec:
    // 0x2b5aec: 0x5043004f
label_2b5af0:
    if (ctx->pc == 0x2B5AF0u) {
        ctx->pc = 0x2B5AF0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5AF4u;
        goto label_2b5af4;
    }
    ctx->pc = 0x2B5AECu;
    {
        const bool branch_taken_0x2b5aec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2b5aec) {
            ctx->pc = 0x2B5AF0u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x2B5C2Cu;
            goto label_2b5c2c;
        }
    }
    ctx->pc = 0x2B5AF4u;
label_2b5af4:
    // 0x2b5af4: 0x8e040000
    ctx->pc = 0x2b5af4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b5af8:
    // 0x2b5af8: 0x24030002
    ctx->pc = 0x2b5af8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_2b5afc:
    // 0x2b5afc: 0x50830009
label_2b5b00:
    if (ctx->pc == 0x2B5B00u) {
        ctx->pc = 0x2B5B00u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B5B04u;
        goto label_2b5b04;
    }
    ctx->pc = 0x2B5AFCu;
    {
        const bool branch_taken_0x2b5afc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2b5afc) {
            ctx->pc = 0x2B5B00u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2B5B24u;
            goto label_2b5b24;
        }
    }
    ctx->pc = 0x2B5B04u;
label_2b5b04:
    // 0x2b5b04: 0x8e220000
    ctx->pc = 0x2b5b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5b08:
    // 0x2b5b08: 0x10430005
label_2b5b0c:
    if (ctx->pc == 0x2B5B0Cu) {
        ctx->pc = 0x2B5B0Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B5B10u;
        goto label_2b5b10;
    }
    ctx->pc = 0x2B5B08u;
    {
        const bool branch_taken_0x2b5b08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2B5B0Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2b5b08) {
            ctx->pc = 0x2B5B20u;
            goto label_2b5b20;
        }
    }
    ctx->pc = 0x2B5B10u;
label_2b5b10:
    // 0x2b5b10: 0x50830004
label_2b5b14:
    if (ctx->pc == 0x2B5B14u) {
        ctx->pc = 0x2B5B14u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B5B18u;
        goto label_2b5b18;
    }
    ctx->pc = 0x2B5B10u;
    {
        const bool branch_taken_0x2b5b10 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2b5b10) {
            ctx->pc = 0x2B5B14u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2B5B24u;
            goto label_2b5b24;
        }
    }
    ctx->pc = 0x2B5B18u;
label_2b5b18:
    // 0x2b5b18: 0x5443001d
label_2b5b1c:
    if (ctx->pc == 0x2B5B1Cu) {
        ctx->pc = 0x2B5B1Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2B5B20u;
        goto label_2b5b20;
    }
    ctx->pc = 0x2B5B18u;
    {
        const bool branch_taken_0x2b5b18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2b5b18) {
            ctx->pc = 0x2B5B1Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B5B90u;
            goto label_2b5b90;
        }
    }
    ctx->pc = 0x2B5B20u;
label_2b5b20:
    // 0x2b5b20: 0x3c04003b
    ctx->pc = 0x2b5b20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b5b24:
    // 0x2b5b24: 0x24844650
    ctx->pc = 0x2b5b24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b5b28:
    // 0x2b5b28: 0x24050020
    ctx->pc = 0x2b5b28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b5b2c:
    // 0x2b5b2c: 0x3c06003b
    ctx->pc = 0x2b5b2cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b5b30:
    // 0x2b5b30: 0x24c60d80
    ctx->pc = 0x2b5b30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b5b34:
    // 0x2b5b34: 0xc0ad0d6
label_2b5b38:
    if (ctx->pc == 0x2B5B38u) {
        ctx->pc = 0x2B5B38u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B5B3Cu;
        goto label_2b5b3c;
    }
    ctx->pc = 0x2B5B34u;
    SET_GPR_U32(ctx, 31, 0x2B5B3Cu);
    ctx->pc = 0x2B5B38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B3Cu; }
    }
    if (ctx->pc != 0x2B5B3Cu) { return; }
    ctx->pc = 0x2B5B3Cu;
label_2b5b3c:
    // 0x2b5b3c: 0xc0ad082
label_2b5b40:
    if (ctx->pc == 0x2B5B40u) {
        ctx->pc = 0x2B5B40u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2B5B44u;
        goto label_2b5b44;
    }
    ctx->pc = 0x2B5B3Cu;
    SET_GPR_U32(ctx, 31, 0x2B5B44u);
    ctx->pc = 0x2B5B40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B44u; }
    }
    if (ctx->pc != 0x2B5B44u) { return; }
    ctx->pc = 0x2B5B44u;
label_2b5b44:
    // 0x2b5b44: 0x40802d
    ctx->pc = 0x2b5b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5b48:
    // 0x2b5b48: 0xc0ad082
label_2b5b4c:
    if (ctx->pc == 0x2B5B4Cu) {
        ctx->pc = 0x2B5B4Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2B5B50u;
        goto label_2b5b50;
    }
    ctx->pc = 0x2B5B48u;
    SET_GPR_U32(ctx, 31, 0x2B5B50u);
    ctx->pc = 0x2B5B4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B50u; }
    }
    if (ctx->pc != 0x2B5B50u) { return; }
    ctx->pc = 0x2B5B50u;
label_2b5b50:
    // 0x2b5b50: 0x3c04003b
    ctx->pc = 0x2b5b50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b5b54:
    // 0x2b5b54: 0x24844b38
    ctx->pc = 0x2b5b54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19256));
label_2b5b58:
    // 0x2b5b58: 0x200282d
    ctx->pc = 0x2b5b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5b5c:
    // 0x2b5b5c: 0x40302d
    ctx->pc = 0x2b5b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5b60:
    // 0x2b5b60: 0xc0b4a34
label_2b5b64:
    if (ctx->pc == 0x2B5B64u) {
        ctx->pc = 0x2B5B64u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2B5B68u;
        goto label_2b5b68;
    }
    ctx->pc = 0x2B5B60u;
    SET_GPR_U32(ctx, 31, 0x2B5B68u);
    ctx->pc = 0x2B5B64u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B68u; }
    }
    if (ctx->pc != 0x2B5B68u) { return; }
    ctx->pc = 0x2B5B68u;
label_2b5b68:
    // 0x2b5b68: 0x3c04003b
    ctx->pc = 0x2b5b68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b5b6c:
    // 0x2b5b6c: 0xc0b4a34
label_2b5b70:
    if (ctx->pc == 0x2B5B70u) {
        ctx->pc = 0x2B5B70u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B5B74u;
        goto label_2b5b74;
    }
    ctx->pc = 0x2B5B6Cu;
    SET_GPR_U32(ctx, 31, 0x2B5B74u);
    ctx->pc = 0x2B5B70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B74u; }
    }
    if (ctx->pc != 0x2B5B74u) { return; }
    ctx->pc = 0x2B5B74u;
label_2b5b74:
    // 0x2b5b74: 0x3c020037
    ctx->pc = 0x2b5b74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b5b78:
    // 0x2b5b78: 0x8c4320ac
    ctx->pc = 0x2b5b78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b5b7c:
    // 0x2b5b7c: 0x8c620048
    ctx->pc = 0x2b5b7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b5b80:
    // 0x2b5b80: 0x34420001
    ctx->pc = 0x2b5b80u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b5b84:
    // 0x2b5b84: 0x1000002e
label_2b5b88:
    if (ctx->pc == 0x2B5B88u) {
        ctx->pc = 0x2B5B88u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5B8Cu;
        goto label_2b5b8c;
    }
    ctx->pc = 0x2B5B84u;
    {
        const bool branch_taken_0x2b5b84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5B88u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x2b5b84) {
            ctx->pc = 0x2B5C40u;
            goto label_2b5c40;
        }
    }
    ctx->pc = 0x2B5B8Cu;
label_2b5b8c:
    // 0x2b5b8c: 0x8e030000
    ctx->pc = 0x2b5b8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b5b90:
    // 0x2b5b90: 0x24020001
    ctx->pc = 0x2b5b90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2b5b94:
    // 0x2b5b94: 0x14620005
label_2b5b98:
    if (ctx->pc == 0x2B5B98u) {
        ctx->pc = 0x2B5B98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B9Cu;
        goto label_2b5b9c;
    }
    ctx->pc = 0x2B5B94u;
    {
        const bool branch_taken_0x2b5b94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B5B98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b94) {
            ctx->pc = 0x2B5BACu;
            goto label_2b5bac;
        }
    }
    ctx->pc = 0x2B5B9Cu;
label_2b5b9c:
    // 0x2b5b9c: 0x8e220000
    ctx->pc = 0x2b5b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5ba0:
    // 0x2b5ba0: 0x50430022
label_2b5ba4:
    if (ctx->pc == 0x2B5BA4u) {
        ctx->pc = 0x2B5BA4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5BA8u;
        goto label_2b5ba8;
    }
    ctx->pc = 0x2B5BA0u;
    {
        const bool branch_taken_0x2b5ba0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2b5ba0) {
            ctx->pc = 0x2B5BA4u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x2B5C2Cu;
            goto label_2b5c2c;
        }
    }
    ctx->pc = 0x2B5BA8u;
label_2b5ba8:
    // 0x2b5ba8: 0x200202d
    ctx->pc = 0x2b5ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5bac:
    // 0x2b5bac: 0xc0ad1d2
label_2b5bb0:
    if (ctx->pc == 0x2B5BB0u) {
        ctx->pc = 0x2B5BB0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B5BB4u;
        goto label_2b5bb4;
    }
    ctx->pc = 0x2B5BACu;
    SET_GPR_U32(ctx, 31, 0x2B5BB4u);
    ctx->pc = 0x2B5BB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5BB4u; }
    }
    if (ctx->pc != 0x2B5BB4u) { return; }
    ctx->pc = 0x2B5BB4u;
label_2b5bb4:
    // 0x2b5bb4: 0xe6000010
    ctx->pc = 0x2b5bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2b5bb8:
    // 0x2b5bb8: 0x220202d
    ctx->pc = 0x2b5bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5bbc:
    // 0x2b5bbc: 0xc0ad1d2
label_2b5bc0:
    if (ctx->pc == 0x2B5BC0u) {
        ctx->pc = 0x2B5BC0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B5BC4u;
        goto label_2b5bc4;
    }
    ctx->pc = 0x2B5BBCu;
    SET_GPR_U32(ctx, 31, 0x2B5BC4u);
    ctx->pc = 0x2B5BC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5BC4u; }
    }
    if (ctx->pc != 0x2B5BC4u) { return; }
    ctx->pc = 0x2B5BC4u;
label_2b5bc4:
    // 0x2b5bc4: 0xe6200010
    ctx->pc = 0x2b5bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2b5bc8:
    // 0x2b5bc8: 0xae000000
    ctx->pc = 0x2b5bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2b5bcc:
    // 0x2b5bcc: 0xae200000
    ctx->pc = 0x2b5bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2b5bd0:
    // 0x2b5bd0: 0x10000016
label_2b5bd4:
    if (ctx->pc == 0x2B5BD4u) {
        ctx->pc = 0x2B5BD4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2B5BD8u;
        goto label_2b5bd8;
    }
    ctx->pc = 0x2B5BD0u;
    {
        const bool branch_taken_0x2b5bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5BD4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2b5bd0) {
            ctx->pc = 0x2B5C2Cu;
            goto label_2b5c2c;
        }
    }
    ctx->pc = 0x2B5BD8u;
label_2b5bd8:
    // 0x2b5bd8: 0x3c04003b
    ctx->pc = 0x2b5bd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b5bdc:
    // 0x2b5bdc: 0x24844650
    ctx->pc = 0x2b5bdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b5be0:
    // 0x2b5be0: 0x24050020
    ctx->pc = 0x2b5be0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b5be4:
    // 0x2b5be4: 0x3c06003b
    ctx->pc = 0x2b5be4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b5be8:
    // 0x2b5be8: 0x24c60d80
    ctx->pc = 0x2b5be8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b5bec:
    // 0x2b5bec: 0xc0ad0d6
label_2b5bf0:
    if (ctx->pc == 0x2B5BF0u) {
        ctx->pc = 0x2B5BF0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B5BF4u;
        goto label_2b5bf4;
    }
    ctx->pc = 0x2B5BECu;
    SET_GPR_U32(ctx, 31, 0x2B5BF4u);
    ctx->pc = 0x2B5BF0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5BF4u; }
    }
    if (ctx->pc != 0x2B5BF4u) { return; }
    ctx->pc = 0x2B5BF4u;
label_2b5bf4:
    // 0x2b5bf4: 0x3c04003b
    ctx->pc = 0x2b5bf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b5bf8:
    // 0x2b5bf8: 0x24844b60
    ctx->pc = 0x2b5bf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19296));
label_2b5bfc:
    // 0x2b5bfc: 0x82650008
    ctx->pc = 0x2b5bfcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_2b5c00:
    // 0x2b5c00: 0xc0b4a34
label_2b5c04:
    if (ctx->pc == 0x2B5C04u) {
        ctx->pc = 0x2B5C04u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2B5C08u;
        goto label_2b5c08;
    }
    ctx->pc = 0x2B5C00u;
    SET_GPR_U32(ctx, 31, 0x2B5C08u);
    ctx->pc = 0x2B5C04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5C08u; }
    }
    if (ctx->pc != 0x2B5C08u) { return; }
    ctx->pc = 0x2B5C08u;
label_2b5c08:
    // 0x2b5c08: 0x3c04003b
    ctx->pc = 0x2b5c08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b5c0c:
    // 0x2b5c0c: 0xc0b4a34
label_2b5c10:
    if (ctx->pc == 0x2B5C10u) {
        ctx->pc = 0x2B5C10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B5C14u;
        goto label_2b5c14;
    }
    ctx->pc = 0x2B5C0Cu;
    SET_GPR_U32(ctx, 31, 0x2B5C14u);
    ctx->pc = 0x2B5C10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5C14u; }
    }
    if (ctx->pc != 0x2B5C14u) { return; }
    ctx->pc = 0x2B5C14u;
label_2b5c14:
    // 0x2b5c14: 0x3c020037
    ctx->pc = 0x2b5c14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b5c18:
    // 0x2b5c18: 0x8c4320ac
    ctx->pc = 0x2b5c18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b5c1c:
    // 0x2b5c1c: 0x8c620048
    ctx->pc = 0x2b5c1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b5c20:
    // 0x2b5c20: 0x34420001
    ctx->pc = 0x2b5c20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b5c24:
    // 0x2b5c24: 0x10000006
label_2b5c28:
    if (ctx->pc == 0x2B5C28u) {
        ctx->pc = 0x2B5C28u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5C2Cu;
        goto label_2b5c2c;
    }
    ctx->pc = 0x2B5C24u;
    {
        const bool branch_taken_0x2b5c24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5C28u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x2b5c24) {
            ctx->pc = 0x2B5C40u;
            goto label_2b5c40;
        }
    }
    ctx->pc = 0x2B5C2Cu;
label_2b5c2c:
    // 0x2b5c2c: 0x3c020037
    ctx->pc = 0x2b5c2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b5c30:
    // 0x2b5c30: 0x8c4220b0
    ctx->pc = 0x2b5c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
label_2b5c34:
    // 0x2b5c34: 0x3042000e
    ctx->pc = 0x2b5c34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 14));
label_2b5c38:
    // 0x2b5c38: 0x50400004
label_2b5c3c:
    if (ctx->pc == 0x2B5C3Cu) {
        ctx->pc = 0x2B5C3Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x2B5C40u;
        goto label_2b5c40;
    }
    ctx->pc = 0x2B5C38u;
    {
        const bool branch_taken_0x2b5c38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b5c38) {
            ctx->pc = 0x2B5C3Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->pc = 0x2B5C4Cu;
            goto label_2b5c4c;
        }
    }
    ctx->pc = 0x2B5C40u;
label_2b5c40:
    // 0x2b5c40: 0x24020020
    ctx->pc = 0x2b5c40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2b5c44:
    // 0x2b5c44: 0x10000005
label_2b5c48:
    if (ctx->pc == 0x2B5C48u) {
        ctx->pc = 0x2B5C48u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5C4Cu;
        goto label_2b5c4c;
    }
    ctx->pc = 0x2B5C44u;
    {
        const bool branch_taken_0x2b5c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5C48u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b5c44) {
            ctx->pc = 0x2B5C5Cu;
            goto label_2b5c5c;
        }
    }
    ctx->pc = 0x2B5C4Cu;
label_2b5c4c:
    // 0x2b5c4c: 0x240202d
    ctx->pc = 0x2b5c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c50:
    // 0x2b5c50: 0x200282d
    ctx->pc = 0x2b5c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c54:
    // 0x2b5c54: 0x40f809
label_2b5c58:
    if (ctx->pc == 0x2B5C58u) {
        ctx->pc = 0x2B5C58u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C5Cu;
        goto label_2b5c5c;
    }
    ctx->pc = 0x2B5C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B5C5Cu);
        ctx->pc = 0x2B5C58u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5990u: goto label_2b5990;
            case 0x2B5994u: goto label_2b5994;
            case 0x2B5998u: goto label_2b5998;
            case 0x2B599Cu: goto label_2b599c;
            case 0x2B59A0u: goto label_2b59a0;
            case 0x2B59A4u: goto label_2b59a4;
            case 0x2B59A8u: goto label_2b59a8;
            case 0x2B59ACu: goto label_2b59ac;
            case 0x2B59B0u: goto label_2b59b0;
            case 0x2B59B4u: goto label_2b59b4;
            case 0x2B59B8u: goto label_2b59b8;
            case 0x2B59BCu: goto label_2b59bc;
            case 0x2B59C0u: goto label_2b59c0;
            case 0x2B59C4u: goto label_2b59c4;
            case 0x2B59C8u: goto label_2b59c8;
            case 0x2B59CCu: goto label_2b59cc;
            case 0x2B59D0u: goto label_2b59d0;
            case 0x2B59D4u: goto label_2b59d4;
            case 0x2B59D8u: goto label_2b59d8;
            case 0x2B59DCu: goto label_2b59dc;
            case 0x2B59E0u: goto label_2b59e0;
            case 0x2B59E4u: goto label_2b59e4;
            case 0x2B59E8u: goto label_2b59e8;
            case 0x2B59ECu: goto label_2b59ec;
            case 0x2B59F0u: goto label_2b59f0;
            case 0x2B59F4u: goto label_2b59f4;
            case 0x2B59F8u: goto label_2b59f8;
            case 0x2B59FCu: goto label_2b59fc;
            case 0x2B5A00u: goto label_2b5a00;
            case 0x2B5A04u: goto label_2b5a04;
            case 0x2B5A08u: goto label_2b5a08;
            case 0x2B5A0Cu: goto label_2b5a0c;
            case 0x2B5A10u: goto label_2b5a10;
            case 0x2B5A14u: goto label_2b5a14;
            case 0x2B5A18u: goto label_2b5a18;
            case 0x2B5A1Cu: goto label_2b5a1c;
            case 0x2B5A20u: goto label_2b5a20;
            case 0x2B5A24u: goto label_2b5a24;
            case 0x2B5A28u: goto label_2b5a28;
            case 0x2B5A2Cu: goto label_2b5a2c;
            case 0x2B5A30u: goto label_2b5a30;
            case 0x2B5A34u: goto label_2b5a34;
            case 0x2B5A38u: goto label_2b5a38;
            case 0x2B5A3Cu: goto label_2b5a3c;
            case 0x2B5A40u: goto label_2b5a40;
            case 0x2B5A44u: goto label_2b5a44;
            case 0x2B5A48u: goto label_2b5a48;
            case 0x2B5A4Cu: goto label_2b5a4c;
            case 0x2B5A50u: goto label_2b5a50;
            case 0x2B5A54u: goto label_2b5a54;
            case 0x2B5A58u: goto label_2b5a58;
            case 0x2B5A5Cu: goto label_2b5a5c;
            case 0x2B5A60u: goto label_2b5a60;
            case 0x2B5A64u: goto label_2b5a64;
            case 0x2B5A68u: goto label_2b5a68;
            case 0x2B5A6Cu: goto label_2b5a6c;
            case 0x2B5A70u: goto label_2b5a70;
            case 0x2B5A74u: goto label_2b5a74;
            case 0x2B5A78u: goto label_2b5a78;
            case 0x2B5A7Cu: goto label_2b5a7c;
            case 0x2B5A80u: goto label_2b5a80;
            case 0x2B5A84u: goto label_2b5a84;
            case 0x2B5A88u: goto label_2b5a88;
            case 0x2B5A8Cu: goto label_2b5a8c;
            case 0x2B5A90u: goto label_2b5a90;
            case 0x2B5A94u: goto label_2b5a94;
            case 0x2B5A98u: goto label_2b5a98;
            case 0x2B5A9Cu: goto label_2b5a9c;
            case 0x2B5AA0u: goto label_2b5aa0;
            case 0x2B5AA4u: goto label_2b5aa4;
            case 0x2B5AA8u: goto label_2b5aa8;
            case 0x2B5AACu: goto label_2b5aac;
            case 0x2B5AB0u: goto label_2b5ab0;
            case 0x2B5AB4u: goto label_2b5ab4;
            case 0x2B5AB8u: goto label_2b5ab8;
            case 0x2B5ABCu: goto label_2b5abc;
            case 0x2B5AC0u: goto label_2b5ac0;
            case 0x2B5AC4u: goto label_2b5ac4;
            case 0x2B5AC8u: goto label_2b5ac8;
            case 0x2B5ACCu: goto label_2b5acc;
            case 0x2B5AD0u: goto label_2b5ad0;
            case 0x2B5AD4u: goto label_2b5ad4;
            case 0x2B5AD8u: goto label_2b5ad8;
            case 0x2B5ADCu: goto label_2b5adc;
            case 0x2B5AE0u: goto label_2b5ae0;
            case 0x2B5AE4u: goto label_2b5ae4;
            case 0x2B5AE8u: goto label_2b5ae8;
            case 0x2B5AECu: goto label_2b5aec;
            case 0x2B5AF0u: goto label_2b5af0;
            case 0x2B5AF4u: goto label_2b5af4;
            case 0x2B5AF8u: goto label_2b5af8;
            case 0x2B5AFCu: goto label_2b5afc;
            case 0x2B5B00u: goto label_2b5b00;
            case 0x2B5B04u: goto label_2b5b04;
            case 0x2B5B08u: goto label_2b5b08;
            case 0x2B5B0Cu: goto label_2b5b0c;
            case 0x2B5B10u: goto label_2b5b10;
            case 0x2B5B14u: goto label_2b5b14;
            case 0x2B5B18u: goto label_2b5b18;
            case 0x2B5B1Cu: goto label_2b5b1c;
            case 0x2B5B20u: goto label_2b5b20;
            case 0x2B5B24u: goto label_2b5b24;
            case 0x2B5B28u: goto label_2b5b28;
            case 0x2B5B2Cu: goto label_2b5b2c;
            case 0x2B5B30u: goto label_2b5b30;
            case 0x2B5B34u: goto label_2b5b34;
            case 0x2B5B38u: goto label_2b5b38;
            case 0x2B5B3Cu: goto label_2b5b3c;
            case 0x2B5B40u: goto label_2b5b40;
            case 0x2B5B44u: goto label_2b5b44;
            case 0x2B5B48u: goto label_2b5b48;
            case 0x2B5B4Cu: goto label_2b5b4c;
            case 0x2B5B50u: goto label_2b5b50;
            case 0x2B5B54u: goto label_2b5b54;
            case 0x2B5B58u: goto label_2b5b58;
            case 0x2B5B5Cu: goto label_2b5b5c;
            case 0x2B5B60u: goto label_2b5b60;
            case 0x2B5B64u: goto label_2b5b64;
            case 0x2B5B68u: goto label_2b5b68;
            case 0x2B5B6Cu: goto label_2b5b6c;
            case 0x2B5B70u: goto label_2b5b70;
            case 0x2B5B74u: goto label_2b5b74;
            case 0x2B5B78u: goto label_2b5b78;
            case 0x2B5B7Cu: goto label_2b5b7c;
            case 0x2B5B80u: goto label_2b5b80;
            case 0x2B5B84u: goto label_2b5b84;
            case 0x2B5B88u: goto label_2b5b88;
            case 0x2B5B8Cu: goto label_2b5b8c;
            case 0x2B5B90u: goto label_2b5b90;
            case 0x2B5B94u: goto label_2b5b94;
            case 0x2B5B98u: goto label_2b5b98;
            case 0x2B5B9Cu: goto label_2b5b9c;
            case 0x2B5BA0u: goto label_2b5ba0;
            case 0x2B5BA4u: goto label_2b5ba4;
            case 0x2B5BA8u: goto label_2b5ba8;
            case 0x2B5BACu: goto label_2b5bac;
            case 0x2B5BB0u: goto label_2b5bb0;
            case 0x2B5BB4u: goto label_2b5bb4;
            case 0x2B5BB8u: goto label_2b5bb8;
            case 0x2B5BBCu: goto label_2b5bbc;
            case 0x2B5BC0u: goto label_2b5bc0;
            case 0x2B5BC4u: goto label_2b5bc4;
            case 0x2B5BC8u: goto label_2b5bc8;
            case 0x2B5BCCu: goto label_2b5bcc;
            case 0x2B5BD0u: goto label_2b5bd0;
            case 0x2B5BD4u: goto label_2b5bd4;
            case 0x2B5BD8u: goto label_2b5bd8;
            case 0x2B5BDCu: goto label_2b5bdc;
            case 0x2B5BE0u: goto label_2b5be0;
            case 0x2B5BE4u: goto label_2b5be4;
            case 0x2B5BE8u: goto label_2b5be8;
            case 0x2B5BECu: goto label_2b5bec;
            case 0x2B5BF0u: goto label_2b5bf0;
            case 0x2B5BF4u: goto label_2b5bf4;
            case 0x2B5BF8u: goto label_2b5bf8;
            case 0x2B5BFCu: goto label_2b5bfc;
            case 0x2B5C00u: goto label_2b5c00;
            case 0x2B5C04u: goto label_2b5c04;
            case 0x2B5C08u: goto label_2b5c08;
            case 0x2B5C0Cu: goto label_2b5c0c;
            case 0x2B5C10u: goto label_2b5c10;
            case 0x2B5C14u: goto label_2b5c14;
            case 0x2B5C18u: goto label_2b5c18;
            case 0x2B5C1Cu: goto label_2b5c1c;
            case 0x2B5C20u: goto label_2b5c20;
            case 0x2B5C24u: goto label_2b5c24;
            case 0x2B5C28u: goto label_2b5c28;
            case 0x2B5C2Cu: goto label_2b5c2c;
            case 0x2B5C30u: goto label_2b5c30;
            case 0x2B5C34u: goto label_2b5c34;
            case 0x2B5C38u: goto label_2b5c38;
            case 0x2B5C3Cu: goto label_2b5c3c;
            case 0x2B5C40u: goto label_2b5c40;
            case 0x2B5C44u: goto label_2b5c44;
            case 0x2B5C48u: goto label_2b5c48;
            case 0x2B5C4Cu: goto label_2b5c4c;
            case 0x2B5C50u: goto label_2b5c50;
            case 0x2B5C54u: goto label_2b5c54;
            case 0x2B5C58u: goto label_2b5c58;
            case 0x2B5C5Cu: goto label_2b5c5c;
            case 0x2B5C60u: goto label_2b5c60;
            case 0x2B5C64u: goto label_2b5c64;
            case 0x2B5C68u: goto label_2b5c68;
            case 0x2B5C6Cu: goto label_2b5c6c;
            case 0x2B5C70u: goto label_2b5c70;
            case 0x2B5C74u: goto label_2b5c74;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B5C5Cu; }
            if (ctx->pc != 0x2B5C5Cu) { return; }
        }
    }
    ctx->pc = 0x2B5C5Cu;
label_2b5c5c:
    // 0x2b5c5c: 0xdfbf0040
    ctx->pc = 0x2b5c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b5c60:
    // 0x2b5c60: 0xdfb30030
    ctx->pc = 0x2b5c60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b5c64:
    // 0x2b5c64: 0xdfb20020
    ctx->pc = 0x2b5c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b5c68:
    // 0x2b5c68: 0xdfb10010
    ctx->pc = 0x2b5c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5c6c:
    // 0x2b5c6c: 0xdfb00000
    ctx->pc = 0x2b5c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b5c70:
    // 0x2b5c70: 0x3e00008
label_2b5c74:
    if (ctx->pc == 0x2B5C74u) {
        ctx->pc = 0x2B5C74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2B5C78u;
        goto label_fallthrough_0x2b5c70;
    }
    ctx->pc = 0x2B5C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5C74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5990u: goto label_2b5990;
            case 0x2B5994u: goto label_2b5994;
            case 0x2B5998u: goto label_2b5998;
            case 0x2B599Cu: goto label_2b599c;
            case 0x2B59A0u: goto label_2b59a0;
            case 0x2B59A4u: goto label_2b59a4;
            case 0x2B59A8u: goto label_2b59a8;
            case 0x2B59ACu: goto label_2b59ac;
            case 0x2B59B0u: goto label_2b59b0;
            case 0x2B59B4u: goto label_2b59b4;
            case 0x2B59B8u: goto label_2b59b8;
            case 0x2B59BCu: goto label_2b59bc;
            case 0x2B59C0u: goto label_2b59c0;
            case 0x2B59C4u: goto label_2b59c4;
            case 0x2B59C8u: goto label_2b59c8;
            case 0x2B59CCu: goto label_2b59cc;
            case 0x2B59D0u: goto label_2b59d0;
            case 0x2B59D4u: goto label_2b59d4;
            case 0x2B59D8u: goto label_2b59d8;
            case 0x2B59DCu: goto label_2b59dc;
            case 0x2B59E0u: goto label_2b59e0;
            case 0x2B59E4u: goto label_2b59e4;
            case 0x2B59E8u: goto label_2b59e8;
            case 0x2B59ECu: goto label_2b59ec;
            case 0x2B59F0u: goto label_2b59f0;
            case 0x2B59F4u: goto label_2b59f4;
            case 0x2B59F8u: goto label_2b59f8;
            case 0x2B59FCu: goto label_2b59fc;
            case 0x2B5A00u: goto label_2b5a00;
            case 0x2B5A04u: goto label_2b5a04;
            case 0x2B5A08u: goto label_2b5a08;
            case 0x2B5A0Cu: goto label_2b5a0c;
            case 0x2B5A10u: goto label_2b5a10;
            case 0x2B5A14u: goto label_2b5a14;
            case 0x2B5A18u: goto label_2b5a18;
            case 0x2B5A1Cu: goto label_2b5a1c;
            case 0x2B5A20u: goto label_2b5a20;
            case 0x2B5A24u: goto label_2b5a24;
            case 0x2B5A28u: goto label_2b5a28;
            case 0x2B5A2Cu: goto label_2b5a2c;
            case 0x2B5A30u: goto label_2b5a30;
            case 0x2B5A34u: goto label_2b5a34;
            case 0x2B5A38u: goto label_2b5a38;
            case 0x2B5A3Cu: goto label_2b5a3c;
            case 0x2B5A40u: goto label_2b5a40;
            case 0x2B5A44u: goto label_2b5a44;
            case 0x2B5A48u: goto label_2b5a48;
            case 0x2B5A4Cu: goto label_2b5a4c;
            case 0x2B5A50u: goto label_2b5a50;
            case 0x2B5A54u: goto label_2b5a54;
            case 0x2B5A58u: goto label_2b5a58;
            case 0x2B5A5Cu: goto label_2b5a5c;
            case 0x2B5A60u: goto label_2b5a60;
            case 0x2B5A64u: goto label_2b5a64;
            case 0x2B5A68u: goto label_2b5a68;
            case 0x2B5A6Cu: goto label_2b5a6c;
            case 0x2B5A70u: goto label_2b5a70;
            case 0x2B5A74u: goto label_2b5a74;
            case 0x2B5A78u: goto label_2b5a78;
            case 0x2B5A7Cu: goto label_2b5a7c;
            case 0x2B5A80u: goto label_2b5a80;
            case 0x2B5A84u: goto label_2b5a84;
            case 0x2B5A88u: goto label_2b5a88;
            case 0x2B5A8Cu: goto label_2b5a8c;
            case 0x2B5A90u: goto label_2b5a90;
            case 0x2B5A94u: goto label_2b5a94;
            case 0x2B5A98u: goto label_2b5a98;
            case 0x2B5A9Cu: goto label_2b5a9c;
            case 0x2B5AA0u: goto label_2b5aa0;
            case 0x2B5AA4u: goto label_2b5aa4;
            case 0x2B5AA8u: goto label_2b5aa8;
            case 0x2B5AACu: goto label_2b5aac;
            case 0x2B5AB0u: goto label_2b5ab0;
            case 0x2B5AB4u: goto label_2b5ab4;
            case 0x2B5AB8u: goto label_2b5ab8;
            case 0x2B5ABCu: goto label_2b5abc;
            case 0x2B5AC0u: goto label_2b5ac0;
            case 0x2B5AC4u: goto label_2b5ac4;
            case 0x2B5AC8u: goto label_2b5ac8;
            case 0x2B5ACCu: goto label_2b5acc;
            case 0x2B5AD0u: goto label_2b5ad0;
            case 0x2B5AD4u: goto label_2b5ad4;
            case 0x2B5AD8u: goto label_2b5ad8;
            case 0x2B5ADCu: goto label_2b5adc;
            case 0x2B5AE0u: goto label_2b5ae0;
            case 0x2B5AE4u: goto label_2b5ae4;
            case 0x2B5AE8u: goto label_2b5ae8;
            case 0x2B5AECu: goto label_2b5aec;
            case 0x2B5AF0u: goto label_2b5af0;
            case 0x2B5AF4u: goto label_2b5af4;
            case 0x2B5AF8u: goto label_2b5af8;
            case 0x2B5AFCu: goto label_2b5afc;
            case 0x2B5B00u: goto label_2b5b00;
            case 0x2B5B04u: goto label_2b5b04;
            case 0x2B5B08u: goto label_2b5b08;
            case 0x2B5B0Cu: goto label_2b5b0c;
            case 0x2B5B10u: goto label_2b5b10;
            case 0x2B5B14u: goto label_2b5b14;
            case 0x2B5B18u: goto label_2b5b18;
            case 0x2B5B1Cu: goto label_2b5b1c;
            case 0x2B5B20u: goto label_2b5b20;
            case 0x2B5B24u: goto label_2b5b24;
            case 0x2B5B28u: goto label_2b5b28;
            case 0x2B5B2Cu: goto label_2b5b2c;
            case 0x2B5B30u: goto label_2b5b30;
            case 0x2B5B34u: goto label_2b5b34;
            case 0x2B5B38u: goto label_2b5b38;
            case 0x2B5B3Cu: goto label_2b5b3c;
            case 0x2B5B40u: goto label_2b5b40;
            case 0x2B5B44u: goto label_2b5b44;
            case 0x2B5B48u: goto label_2b5b48;
            case 0x2B5B4Cu: goto label_2b5b4c;
            case 0x2B5B50u: goto label_2b5b50;
            case 0x2B5B54u: goto label_2b5b54;
            case 0x2B5B58u: goto label_2b5b58;
            case 0x2B5B5Cu: goto label_2b5b5c;
            case 0x2B5B60u: goto label_2b5b60;
            case 0x2B5B64u: goto label_2b5b64;
            case 0x2B5B68u: goto label_2b5b68;
            case 0x2B5B6Cu: goto label_2b5b6c;
            case 0x2B5B70u: goto label_2b5b70;
            case 0x2B5B74u: goto label_2b5b74;
            case 0x2B5B78u: goto label_2b5b78;
            case 0x2B5B7Cu: goto label_2b5b7c;
            case 0x2B5B80u: goto label_2b5b80;
            case 0x2B5B84u: goto label_2b5b84;
            case 0x2B5B88u: goto label_2b5b88;
            case 0x2B5B8Cu: goto label_2b5b8c;
            case 0x2B5B90u: goto label_2b5b90;
            case 0x2B5B94u: goto label_2b5b94;
            case 0x2B5B98u: goto label_2b5b98;
            case 0x2B5B9Cu: goto label_2b5b9c;
            case 0x2B5BA0u: goto label_2b5ba0;
            case 0x2B5BA4u: goto label_2b5ba4;
            case 0x2B5BA8u: goto label_2b5ba8;
            case 0x2B5BACu: goto label_2b5bac;
            case 0x2B5BB0u: goto label_2b5bb0;
            case 0x2B5BB4u: goto label_2b5bb4;
            case 0x2B5BB8u: goto label_2b5bb8;
            case 0x2B5BBCu: goto label_2b5bbc;
            case 0x2B5BC0u: goto label_2b5bc0;
            case 0x2B5BC4u: goto label_2b5bc4;
            case 0x2B5BC8u: goto label_2b5bc8;
            case 0x2B5BCCu: goto label_2b5bcc;
            case 0x2B5BD0u: goto label_2b5bd0;
            case 0x2B5BD4u: goto label_2b5bd4;
            case 0x2B5BD8u: goto label_2b5bd8;
            case 0x2B5BDCu: goto label_2b5bdc;
            case 0x2B5BE0u: goto label_2b5be0;
            case 0x2B5BE4u: goto label_2b5be4;
            case 0x2B5BE8u: goto label_2b5be8;
            case 0x2B5BECu: goto label_2b5bec;
            case 0x2B5BF0u: goto label_2b5bf0;
            case 0x2B5BF4u: goto label_2b5bf4;
            case 0x2B5BF8u: goto label_2b5bf8;
            case 0x2B5BFCu: goto label_2b5bfc;
            case 0x2B5C00u: goto label_2b5c00;
            case 0x2B5C04u: goto label_2b5c04;
            case 0x2B5C08u: goto label_2b5c08;
            case 0x2B5C0Cu: goto label_2b5c0c;
            case 0x2B5C10u: goto label_2b5c10;
            case 0x2B5C14u: goto label_2b5c14;
            case 0x2B5C18u: goto label_2b5c18;
            case 0x2B5C1Cu: goto label_2b5c1c;
            case 0x2B5C20u: goto label_2b5c20;
            case 0x2B5C24u: goto label_2b5c24;
            case 0x2B5C28u: goto label_2b5c28;
            case 0x2B5C2Cu: goto label_2b5c2c;
            case 0x2B5C30u: goto label_2b5c30;
            case 0x2B5C34u: goto label_2b5c34;
            case 0x2B5C38u: goto label_2b5c38;
            case 0x2B5C3Cu: goto label_2b5c3c;
            case 0x2B5C40u: goto label_2b5c40;
            case 0x2B5C44u: goto label_2b5c44;
            case 0x2B5C48u: goto label_2b5c48;
            case 0x2B5C4Cu: goto label_2b5c4c;
            case 0x2B5C50u: goto label_2b5c50;
            case 0x2B5C54u: goto label_2b5c54;
            case 0x2B5C58u: goto label_2b5c58;
            case 0x2B5C5Cu: goto label_2b5c5c;
            case 0x2B5C60u: goto label_2b5c60;
            case 0x2B5C64u: goto label_2b5c64;
            case 0x2B5C68u: goto label_2b5c68;
            case 0x2B5C6Cu: goto label_2b5c6c;
            case 0x2B5C70u: goto label_2b5c70;
            case 0x2B5C74u: goto label_2b5c74;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b5c70:
    ctx->pc = 0x2B5C78u;
}
