#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBlitSetDrawRegs
// Address: 0x2c1990 - 0x2c1e18
void pbBlitSetDrawRegs_0x2c1990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c1990u;

    // 0x2c1990: 0x27bdffb0
    ctx->pc = 0x2c1990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c1994: 0xffbf0040
    ctx->pc = 0x2c1994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c1998: 0xffb30030
    ctx->pc = 0x2c1998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c199c: 0xffb20020
    ctx->pc = 0x2c199cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c19a0: 0xffb10010
    ctx->pc = 0x2c19a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c19a4: 0xffb00000
    ctx->pc = 0x2c19a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c19a8: 0x80882d
    ctx->pc = 0x2c19a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19ac: 0xa0902d
    ctx->pc = 0x2c19acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19b0: 0x3c020036
    ctx->pc = 0x2c19b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c19b4: 0x8c50dee0
    ctx->pc = 0x2c19b4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c19b8: 0x3c020037
    ctx->pc = 0x2c19b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c19bc: 0x8c4231a4
    ctx->pc = 0x2c19bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12708)));
    // 0x2c19c0: 0x16220005
    ctx->pc = 0x2C19C0u;
    {
        const bool branch_taken_0x2c19c0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C19C4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c19c0) {
            ctx->pc = 0x2C19D8u;
            goto label_2c19d8;
        }
    }
    ctx->pc = 0x2C19C8u;
    // 0x2c19c8: 0x3c020037
    ctx->pc = 0x2c19c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c19cc: 0x8c4231a8
    ctx->pc = 0x2c19ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12712)));
    // 0x2c19d0: 0x1242010b
    ctx->pc = 0x2C19D0u;
    {
        const bool branch_taken_0x2c19d0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C19D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2c19d0) {
            ctx->pc = 0x2C1E00u;
            goto label_2c1e00;
        }
    }
    ctx->pc = 0x2C19D8u;
label_2c19d8:
    // 0x2c19d8: 0xc0a9518
    ctx->pc = 0x2C19D8u;
    SET_GPR_U32(ctx, 31, 0x2C19E0u);
    ctx->pc = 0x2A5460u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPBufMallocBlit_0x2a5460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19E0u; }
    }
    if (ctx->pc != 0x2C19E0u) { return; }
    ctx->pc = 0x2C19E0u;
    // 0x2c19e0: 0xc0b056a
    ctx->pc = 0x2C19E0u;
    SET_GPR_U32(ctx, 31, 0x2C19E8u);
    ctx->pc = 0x2C19E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C15A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBlitSetupDrawRegs_0x2c15a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19E8u; }
    }
    if (ctx->pc != 0x2C19E8u) { return; }
    ctx->pc = 0x2C19E8u;
    // 0x2c19e8: 0x40282d
    ctx->pc = 0x2c19e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19ec: 0x3c020037
    ctx->pc = 0x2c19ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c19f0: 0xac5131a4
    ctx->pc = 0x2c19f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12708), GPR_U32(ctx, 17));
    // 0x2c19f4: 0x3c020037
    ctx->pc = 0x2c19f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c19f8: 0xac5231a8
    ctx->pc = 0x2c19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12712), GPR_U32(ctx, 18));
    // 0x2c19fc: 0x3c020003
    ctx->pc = 0x2c19fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
    // 0x2c1a00: 0x2221024
    ctx->pc = 0x2c1a00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c1a04: 0x10400010
    ctx->pc = 0x2C1A04u;
    {
        const bool branch_taken_0x2c1a04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1A08u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967263));
        if (branch_taken_0x2c1a04) {
            ctx->pc = 0x2C1A48u;
            goto label_2c1a48;
        }
    }
    ctx->pc = 0x2C1A0Cu;
    // 0x2c1a0c: 0xdca20010
    ctx->pc = 0x2c1a0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c1a10: 0x431024
    ctx->pc = 0x2c1a10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1a14: 0xfca20010
    ctx->pc = 0x2c1a14u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x2c1a18: 0x8e030048
    ctx->pc = 0x2c1a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c1a1c: 0x8c63036c
    ctx->pc = 0x2c1a1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x2c1a20: 0x30630001
    ctx->pc = 0x2c1a20u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2c1a24: 0x319b8
    ctx->pc = 0x2c1a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x2c1a28: 0x2404fe3f
    ctx->pc = 0x2c1a28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x2c1a2c: 0x441024
    ctx->pc = 0x2c1a2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c1a30: 0x431025
    ctx->pc = 0x2c1a30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1a34: 0xfca20010
    ctx->pc = 0x2c1a34u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x2c1a38: 0x3c02ffff
    ctx->pc = 0x2c1a38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2c1a3c: 0x3442ffff
    ctx->pc = 0x2c1a3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2c1a40: 0x10000036
    ctx->pc = 0x2C1A40u;
    {
        const bool branch_taken_0x2c1a40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1A44u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
        if (branch_taken_0x2c1a40) {
            ctx->pc = 0x2C1B1Cu;
            goto label_2c1b1c;
        }
    }
    ctx->pc = 0x2C1A48u;
label_2c1a48:
    // 0x2c1a48: 0x8e020048
    ctx->pc = 0x2c1a48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c1a4c: 0x8c420370
    ctx->pc = 0x2c1a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x2c1a50: 0x30420001
    ctx->pc = 0x2c1a50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2c1a54: 0x21178
    ctx->pc = 0x2c1a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x2c1a58: 0xdca40010
    ctx->pc = 0x2c1a58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c1a5c: 0x832024
    ctx->pc = 0x2c1a5cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c1a60: 0x822025
    ctx->pc = 0x2c1a60u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c1a64: 0x32220200
    ctx->pc = 0x2c1a64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 512));
    // 0x2c1a68: 0x10400022
    ctx->pc = 0x2C1A68u;
    {
        const bool branch_taken_0x2c1a68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1A6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
        if (branch_taken_0x2c1a68) {
            ctx->pc = 0x2C1AF4u;
            goto label_2c1af4;
        }
    }
    ctx->pc = 0x2C1A70u;
    // 0x2c1a70: 0x2402fffe
    ctx->pc = 0x2c1a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c1a74: 0x821024
    ctx->pc = 0x2c1a74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c1a78: 0x2403ffe3
    ctx->pc = 0x2c1a78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x2c1a7c: 0x431024
    ctx->pc = 0x2c1a7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1a80: 0x24030018
    ctx->pc = 0x2c1a80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c1a84: 0x431025
    ctx->pc = 0x2c1a84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1a88: 0x2403fdff
    ctx->pc = 0x2c1a88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2c1a8c: 0x431024
    ctx->pc = 0x2c1a8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1a90: 0xfca20010
    ctx->pc = 0x2c1a90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x2c1a94: 0x8e030048
    ctx->pc = 0x2c1a94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c1a98: 0x8c63036c
    ctx->pc = 0x2c1a98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x2c1a9c: 0x30630007
    ctx->pc = 0x2c1a9cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 7));
    // 0x2c1aa0: 0x319b8
    ctx->pc = 0x2c1aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x2c1aa4: 0x2404fe3f
    ctx->pc = 0x2c1aa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x2c1aa8: 0x441024
    ctx->pc = 0x2c1aa8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c1aac: 0x431025
    ctx->pc = 0x2c1aacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1ab0: 0xfca20010
    ctx->pc = 0x2c1ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x2c1ab4: 0x8e030048
    ctx->pc = 0x2c1ab4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c1ab8: 0x8c630368
    ctx->pc = 0x2c1ab8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2c1abc: 0x30630003
    ctx->pc = 0x2c1abcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x2c1ac0: 0x31cf8
    ctx->pc = 0x2c1ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x2c1ac4: 0x3c04ffe7
    ctx->pc = 0x2c1ac4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65511 << 16));
    // 0x2c1ac8: 0x3484ffff
    ctx->pc = 0x2c1ac8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2c1acc: 0x441024
    ctx->pc = 0x2c1accu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c1ad0: 0x431025
    ctx->pc = 0x2c1ad0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1ad4: 0x32630fff
    ctx->pc = 0x2c1ad4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 4095));
    // 0x2c1ad8: 0x2404f000
    ctx->pc = 0x2c1ad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2c1adc: 0x42438
    ctx->pc = 0x2c1adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2c1ae0: 0x3484ffff
    ctx->pc = 0x2c1ae0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2c1ae4: 0x42438
    ctx->pc = 0x2c1ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2c1ae8: 0x3484ffff
    ctx->pc = 0x2c1ae8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2c1aec: 0x10000007
    ctx->pc = 0x2C1AECu;
    {
        const bool branch_taken_0x2c1aec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1AF0u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x2c1aec) {
            ctx->pc = 0x2C1B0Cu;
            goto label_2c1b0c;
        }
    }
    ctx->pc = 0x2C1AF4u;
label_2c1af4:
    // 0x2c1af4: 0x8e020048
    ctx->pc = 0x2c1af4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c1af8: 0x8c43036c
    ctx->pc = 0x2c1af8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x2c1afc: 0x30630001
    ctx->pc = 0x2c1afcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2c1b00: 0x319b8
    ctx->pc = 0x2c1b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x2c1b04: 0xdca20010
    ctx->pc = 0x2c1b04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c1b08: 0x2404fe3f
    ctx->pc = 0x2c1b08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966847));
label_2c1b0c:
    // 0x2c1b0c: 0x441024
    ctx->pc = 0x2c1b0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c1b10: 0x431025
    ctx->pc = 0x2c1b10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b14: 0xfca20010
    ctx->pc = 0x2c1b14u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x2c1b18: 0xaca00044
    ctx->pc = 0x2c1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
label_2c1b1c:
    // 0x2c1b1c: 0x3c020001
    ctx->pc = 0x2c1b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x2c1b20: 0x2221024
    ctx->pc = 0x2c1b20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c1b24: 0x10400017
    ctx->pc = 0x2C1B24u;
    {
        const bool branch_taken_0x2c1b24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1B28u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967281));
        if (branch_taken_0x2c1b24) {
            ctx->pc = 0x2C1B84u;
            goto label_2c1b84;
        }
    }
    ctx->pc = 0x2C1B2Cu;
    // 0x2c1b2c: 0xdca20030
    ctx->pc = 0x2c1b2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c1b30: 0x431024
    ctx->pc = 0x2c1b30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b34: 0x24030008
    ctx->pc = 0x2c1b34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1b38: 0x431025
    ctx->pc = 0x2c1b38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b3c: 0x2403f00f
    ctx->pc = 0x2c1b3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x2c1b40: 0x431024
    ctx->pc = 0x2c1b40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b44: 0x2403cfff
    ctx->pc = 0x2c1b44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x2c1b48: 0x431024
    ctx->pc = 0x2c1b48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b4c: 0xfca20030
    ctx->pc = 0x2c1b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
    // 0x2c1b50: 0xdca20020
    ctx->pc = 0x2c1b50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2c1b54: 0x2403fffc
    ctx->pc = 0x2c1b54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2c1b58: 0x431024
    ctx->pc = 0x2c1b58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b5c: 0x2403fff3
    ctx->pc = 0x2c1b5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2c1b60: 0x431024
    ctx->pc = 0x2c1b60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b64: 0x24030004
    ctx->pc = 0x2c1b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1b68: 0x431025
    ctx->pc = 0x2c1b68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b6c: 0x2403ffcf
    ctx->pc = 0x2c1b6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2c1b70: 0x431024
    ctx->pc = 0x2c1b70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b74: 0x2403ff3f
    ctx->pc = 0x2c1b74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x2c1b78: 0x431024
    ctx->pc = 0x2c1b78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b7c: 0x10000037
    ctx->pc = 0x2C1B7Cu;
    {
        const bool branch_taken_0x2c1b7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1B80u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x2c1b7c) {
            ctx->pc = 0x2C1C5Cu;
            goto label_2c1c5c;
        }
    }
    ctx->pc = 0x2C1B84u;
label_2c1b84:
    // 0x2c1b84: 0x3c020002
    ctx->pc = 0x2c1b84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x2c1b88: 0x2221024
    ctx->pc = 0x2c1b88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c1b8c: 0x10400019
    ctx->pc = 0x2C1B8Cu;
    {
        const bool branch_taken_0x2c1b8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1B90u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
        if (branch_taken_0x2c1b8c) {
            ctx->pc = 0x2C1BF4u;
            goto label_2c1bf4;
        }
    }
    ctx->pc = 0x2C1B94u;
    // 0x2c1b94: 0xdca20030
    ctx->pc = 0x2c1b94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c1b98: 0x431024
    ctx->pc = 0x2c1b98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b9c: 0x24030008
    ctx->pc = 0x2c1b9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1ba0: 0x431025
    ctx->pc = 0x2c1ba0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1ba4: 0x2403f00f
    ctx->pc = 0x2c1ba4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x2c1ba8: 0x431024
    ctx->pc = 0x2c1ba8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1bac: 0x24030800
    ctx->pc = 0x2c1bacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2c1bb0: 0x431025
    ctx->pc = 0x2c1bb0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1bb4: 0x2403cfff
    ctx->pc = 0x2c1bb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x2c1bb8: 0x431024
    ctx->pc = 0x2c1bb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1bbc: 0xfca20030
    ctx->pc = 0x2c1bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
    // 0x2c1bc0: 0xdca20020
    ctx->pc = 0x2c1bc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2c1bc4: 0x2403fffc
    ctx->pc = 0x2c1bc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2c1bc8: 0x431024
    ctx->pc = 0x2c1bc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1bcc: 0x2403fff3
    ctx->pc = 0x2c1bccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2c1bd0: 0x431024
    ctx->pc = 0x2c1bd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1bd4: 0x24030004
    ctx->pc = 0x2c1bd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1bd8: 0x431025
    ctx->pc = 0x2c1bd8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1bdc: 0x2403ffcf
    ctx->pc = 0x2c1bdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2c1be0: 0x431024
    ctx->pc = 0x2c1be0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1be4: 0x2403ff3f
    ctx->pc = 0x2c1be4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x2c1be8: 0x431024
    ctx->pc = 0x2c1be8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1bec: 0x1000001b
    ctx->pc = 0x2C1BECu;
    {
        const bool branch_taken_0x2c1bec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1BF0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x2c1bec) {
            ctx->pc = 0x2C1C5Cu;
            goto label_2c1c5c;
        }
    }
    ctx->pc = 0x2C1BF4u;
label_2c1bf4:
    // 0x2c1bf4: 0x2221024
    ctx->pc = 0x2c1bf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c1bf8: 0x1040001b
    ctx->pc = 0x2C1BF8u;
    {
        const bool branch_taken_0x2c1bf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1BFCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967281));
        if (branch_taken_0x2c1bf8) {
            ctx->pc = 0x2C1C68u;
            goto label_2c1c68;
        }
    }
    ctx->pc = 0x2C1C00u;
    // 0x2c1c00: 0xdca20030
    ctx->pc = 0x2c1c00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c1c04: 0x431024
    ctx->pc = 0x2c1c04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c08: 0x24030002
    ctx->pc = 0x2c1c08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1c0c: 0x431025
    ctx->pc = 0x2c1c0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c10: 0x2403f00f
    ctx->pc = 0x2c1c10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x2c1c14: 0x431024
    ctx->pc = 0x2c1c14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c18: 0x24030010
    ctx->pc = 0x2c1c18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c1c1c: 0x431025
    ctx->pc = 0x2c1c1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c20: 0x2403cfff
    ctx->pc = 0x2c1c20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x2c1c24: 0x431024
    ctx->pc = 0x2c1c24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c28: 0xfca20030
    ctx->pc = 0x2c1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
    // 0x2c1c2c: 0xdca20020
    ctx->pc = 0x2c1c2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2c1c30: 0x2403fffc
    ctx->pc = 0x2c1c30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2c1c34: 0x431024
    ctx->pc = 0x2c1c34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c38: 0x2403fff3
    ctx->pc = 0x2c1c38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2c1c3c: 0x431024
    ctx->pc = 0x2c1c3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c40: 0x24030008
    ctx->pc = 0x2c1c40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1c44: 0x431025
    ctx->pc = 0x2c1c44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c48: 0x2403ffcf
    ctx->pc = 0x2c1c48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2c1c4c: 0x431024
    ctx->pc = 0x2c1c4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c50: 0x2403ff3f
    ctx->pc = 0x2c1c50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x2c1c54: 0x431024
    ctx->pc = 0x2c1c54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c58: 0x24030080
    ctx->pc = 0x2c1c58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
label_2c1c5c:
    // 0x2c1c5c: 0x431025
    ctx->pc = 0x2c1c5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c60: 0x1000003f
    ctx->pc = 0x2C1C60u;
    {
        const bool branch_taken_0x2c1c60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1C64u;
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
        if (branch_taken_0x2c1c60) {
            ctx->pc = 0x2C1D60u;
            goto label_2c1d60;
        }
    }
    ctx->pc = 0x2C1C68u;
label_2c1c68:
    // 0x2c1c68: 0xdca20030
    ctx->pc = 0x2c1c68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c1c6c: 0x431024
    ctx->pc = 0x2c1c6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c70: 0x2403000c
    ctx->pc = 0x2c1c70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c1c74: 0x431025
    ctx->pc = 0x2c1c74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c78: 0x2403f00f
    ctx->pc = 0x2c1c78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x2c1c7c: 0x431024
    ctx->pc = 0x2c1c7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c80: 0x24030010
    ctx->pc = 0x2c1c80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c1c84: 0x431025
    ctx->pc = 0x2c1c84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c88: 0x2403cfff
    ctx->pc = 0x2c1c88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x2c1c8c: 0x431024
    ctx->pc = 0x2c1c8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c90: 0xfca20030
    ctx->pc = 0x2c1c90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
    // 0x2c1c94: 0x3c020080
    ctx->pc = 0x2c1c94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x2c1c98: 0x2421024
    ctx->pc = 0x2c1c98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c1c9c: 0x10400007
    ctx->pc = 0x2C1C9Cu;
    {
        const bool branch_taken_0x2c1c9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1CA0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x2c1c9c) {
            ctx->pc = 0x2C1CBCu;
            goto label_2c1cbc;
        }
    }
    ctx->pc = 0x2C1CA4u;
    // 0x2c1ca4: 0xdca20020
    ctx->pc = 0x2c1ca4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2c1ca8: 0x431024
    ctx->pc = 0x2c1ca8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1cac: 0x2403fff3
    ctx->pc = 0x2c1cacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2c1cb0: 0x431024
    ctx->pc = 0x2c1cb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1cb4: 0x10000017
    ctx->pc = 0x2C1CB4u;
    {
        const bool branch_taken_0x2c1cb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1CB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2c1cb4) {
            ctx->pc = 0x2C1D14u;
            goto label_2c1d14;
        }
    }
    ctx->pc = 0x2C1CBCu;
label_2c1cbc:
    // 0x2c1cbc: 0x3c020020
    ctx->pc = 0x2c1cbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x2c1cc0: 0x2221024
    ctx->pc = 0x2c1cc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c1cc4: 0x1040000e
    ctx->pc = 0x2C1CC4u;
    {
        const bool branch_taken_0x2c1cc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1CC8u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
        if (branch_taken_0x2c1cc4) {
            ctx->pc = 0x2C1D00u;
            goto label_2c1d00;
        }
    }
    ctx->pc = 0x2C1CCCu;
    // 0x2c1ccc: 0x431024
    ctx->pc = 0x2c1cccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1cd0: 0x24030001
    ctx->pc = 0x2c1cd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1cd4: 0x431025
    ctx->pc = 0x2c1cd4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1cd8: 0x2403fff3
    ctx->pc = 0x2c1cd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2c1cdc: 0x431024
    ctx->pc = 0x2c1cdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1ce0: 0x24030008
    ctx->pc = 0x2c1ce0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1ce4: 0x431025
    ctx->pc = 0x2c1ce4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1ce8: 0x2403ffcf
    ctx->pc = 0x2c1ce8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2c1cec: 0x431024
    ctx->pc = 0x2c1cecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1cf0: 0x2403ff3f
    ctx->pc = 0x2c1cf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x2c1cf4: 0x431024
    ctx->pc = 0x2c1cf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1cf8: 0x1000000c
    ctx->pc = 0x2C1CF8u;
    {
        const bool branch_taken_0x2c1cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1CFCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x2c1cf8) {
            ctx->pc = 0x2C1D2Cu;
            goto label_2c1d2c;
        }
    }
    ctx->pc = 0x2C1D00u;
label_2c1d00:
    // 0x2c1d00: 0x2403fffc
    ctx->pc = 0x2c1d00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2c1d04: 0x431024
    ctx->pc = 0x2c1d04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d08: 0x2403fff3
    ctx->pc = 0x2c1d08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2c1d0c: 0x431024
    ctx->pc = 0x2c1d0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d10: 0x24030004
    ctx->pc = 0x2c1d10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_2c1d14:
    // 0x2c1d14: 0x431025
    ctx->pc = 0x2c1d14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d18: 0x2403ffcf
    ctx->pc = 0x2c1d18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2c1d1c: 0x431024
    ctx->pc = 0x2c1d1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d20: 0x2403ff3f
    ctx->pc = 0x2c1d20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x2c1d24: 0x431024
    ctx->pc = 0x2c1d24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d28: 0x24030040
    ctx->pc = 0x2c1d28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
label_2c1d2c:
    // 0x2c1d2c: 0x431025
    ctx->pc = 0x2c1d2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d30: 0xfca20020
    ctx->pc = 0x2c1d30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x2c1d34: 0x3c020010
    ctx->pc = 0x2c1d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x2c1d38: 0x2221024
    ctx->pc = 0x2c1d38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c1d3c: 0x10400008
    ctx->pc = 0x2C1D3Cu;
    {
        const bool branch_taken_0x2c1d3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1D40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967247));
        if (branch_taken_0x2c1d3c) {
            ctx->pc = 0x2C1D60u;
            goto label_2c1d60;
        }
    }
    ctx->pc = 0x2C1D44u;
    // 0x2c1d44: 0xdca20020
    ctx->pc = 0x2c1d44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2c1d48: 0x431024
    ctx->pc = 0x2c1d48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d4c: 0x24030020
    ctx->pc = 0x2c1d4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c1d50: 0x431025
    ctx->pc = 0x2c1d50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d54: 0xfca20020
    ctx->pc = 0x2c1d54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x2c1d58: 0x24020080
    ctx->pc = 0x2c1d58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c1d5c: 0xa0a20024
    ctx->pc = 0x2c1d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 2));
label_2c1d60:
    // 0x2c1d60: 0x32420040
    ctx->pc = 0x2c1d60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 64));
    // 0x2c1d64: 0x54400004
    ctx->pc = 0x2C1D64u;
    {
        const bool branch_taken_0x2c1d64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c1d64) {
            ctx->pc = 0x2C1D68u;
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->pc = 0x2C1D78u;
            goto label_2c1d78;
        }
    }
    ctx->pc = 0x2C1D6Cu;
    // 0x2c1d6c: 0x32222000
    ctx->pc = 0x2c1d6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 8192));
    // 0x2c1d70: 0x10400006
    ctx->pc = 0x2C1D70u;
    {
        const bool branch_taken_0x2c1d70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1D74u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
        if (branch_taken_0x2c1d70) {
            ctx->pc = 0x2C1D8Cu;
            goto label_2c1d8c;
        }
    }
    ctx->pc = 0x2C1D78u;
label_2c1d78:
    // 0x2c1d78: 0x3c03fff9
    ctx->pc = 0x2c1d78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65529 << 16));
    // 0x2c1d7c: 0x3463ffff
    ctx->pc = 0x2c1d7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1d80: 0x431024
    ctx->pc = 0x2c1d80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d84: 0x10000005
    ctx->pc = 0x2C1D84u;
    {
        const bool branch_taken_0x2c1d84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1D88u;
        SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
        if (branch_taken_0x2c1d84) {
            ctx->pc = 0x2C1D9Cu;
            goto label_2c1d9c;
        }
    }
    ctx->pc = 0x2C1D8Cu;
label_2c1d8c:
    // 0x2c1d8c: 0x3c03fff9
    ctx->pc = 0x2c1d8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65529 << 16));
    // 0x2c1d90: 0x3463ffff
    ctx->pc = 0x2c1d90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1d94: 0x431024
    ctx->pc = 0x2c1d94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d98: 0x3c030004
    ctx->pc = 0x2c1d98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
label_2c1d9c:
    // 0x2c1d9c: 0x431025
    ctx->pc = 0x2c1d9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1da0: 0xfca20030
    ctx->pc = 0x2c1da0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
    // 0x2c1da4: 0x32420080
    ctx->pc = 0x2c1da4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 128));
    // 0x2c1da8: 0x10400005
    ctx->pc = 0x2C1DA8u;
    {
        const bool branch_taken_0x2c1da8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1DACu;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 80)));
        if (branch_taken_0x2c1da8) {
            ctx->pc = 0x2C1DC0u;
            goto label_2c1dc0;
        }
    }
    ctx->pc = 0x2C1DB0u;
    // 0x2c1db0: 0x34038000
    ctx->pc = 0x2c1db0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2c1db4: 0x31c78
    ctx->pc = 0x2c1db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x2c1db8: 0x10000007
    ctx->pc = 0x2C1DB8u;
    {
        const bool branch_taken_0x2c1db8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1DBCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x2c1db8) {
            ctx->pc = 0x2C1DD8u;
            goto label_2c1dd8;
        }
    }
    ctx->pc = 0x2C1DC0u;
label_2c1dc0:
    // 0x2c1dc0: 0x2403fffe
    ctx->pc = 0x2c1dc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c1dc4: 0x31c38
    ctx->pc = 0x2c1dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c1dc8: 0x3463ffff
    ctx->pc = 0x2c1dc8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1dcc: 0x31c38
    ctx->pc = 0x2c1dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c1dd0: 0x3463ffff
    ctx->pc = 0x2c1dd0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1dd4: 0x431024
    ctx->pc = 0x2c1dd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c1dd8:
    // 0x2c1dd8: 0xfca20050
    ctx->pc = 0x2c1dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    // 0x2c1ddc: 0xa0202d
    ctx->pc = 0x2c1ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1de0: 0x24050006
    ctx->pc = 0x2c1de0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1de4: 0xdfbf0040
    ctx->pc = 0x2c1de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1de8: 0xdfb30030
    ctx->pc = 0x2c1de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1dec: 0xdfb20020
    ctx->pc = 0x2c1decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1df0: 0xdfb10010
    ctx->pc = 0x2c1df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1df4: 0xdfb00000
    ctx->pc = 0x2c1df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1df8: 0x80a9a7c
    ctx->pc = 0x2C1DF8u;
    ctx->pc = 0x2C1DFCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2A69F0u;
    pbDmaBlit_0x2a69f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C1E00u;
label_2c1e00:
    // 0x2c1e00: 0xdfb30030
    ctx->pc = 0x2c1e00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1e04: 0xdfb20020
    ctx->pc = 0x2c1e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1e08: 0xdfb10010
    ctx->pc = 0x2c1e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1e0c: 0xdfb00000
    ctx->pc = 0x2c1e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1e10: 0x3e00008
    ctx->pc = 0x2C1E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1E14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C19D8u: goto label_2c19d8;
            case 0x2C1A48u: goto label_2c1a48;
            case 0x2C1AF4u: goto label_2c1af4;
            case 0x2C1B0Cu: goto label_2c1b0c;
            case 0x2C1B1Cu: goto label_2c1b1c;
            case 0x2C1B84u: goto label_2c1b84;
            case 0x2C1BF4u: goto label_2c1bf4;
            case 0x2C1C5Cu: goto label_2c1c5c;
            case 0x2C1C68u: goto label_2c1c68;
            case 0x2C1CBCu: goto label_2c1cbc;
            case 0x2C1D00u: goto label_2c1d00;
            case 0x2C1D14u: goto label_2c1d14;
            case 0x2C1D2Cu: goto label_2c1d2c;
            case 0x2C1D60u: goto label_2c1d60;
            case 0x2C1D78u: goto label_2c1d78;
            case 0x2C1D8Cu: goto label_2c1d8c;
            case 0x2C1D9Cu: goto label_2c1d9c;
            case 0x2C1DC0u: goto label_2c1dc0;
            case 0x2C1DD8u: goto label_2c1dd8;
            case 0x2C1E00u: goto label_2c1e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C1E18u;
}
