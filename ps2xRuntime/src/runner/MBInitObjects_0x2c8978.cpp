#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitObjects
// Address: 0x2c8978 - 0x2c8acc
void MBInitObjects_0x2c8978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8978u;

    // 0x2c8978: 0x27bdffa0
    ctx->pc = 0x2c8978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c897c: 0xffbf0050
    ctx->pc = 0x2c897cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c8980: 0xffb40040
    ctx->pc = 0x2c8980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c8984: 0xffb30030
    ctx->pc = 0x2c8984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c8988: 0xffb20020
    ctx->pc = 0x2c8988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c898c: 0xffb10010
    ctx->pc = 0x2c898cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c8990: 0x1080003a
    ctx->pc = 0x2C8990u;
    {
        const bool branch_taken_0x2c8990 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8994u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x2c8990) {
            ctx->pc = 0x2C8A7Cu;
            goto label_2c8a7c;
        }
    }
    ctx->pc = 0x2C8998u;
    // 0x2c8998: 0x202d
    ctx->pc = 0x2c8998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c899c: 0x3c10003a
    ctx->pc = 0x2c899cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2c89a0: 0x26052550
    ctx->pc = 0x2c89a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 9552));
    // 0x2c89a4: 0xc0b3ec0
    ctx->pc = 0x2C89A4u;
    SET_GPR_U32(ctx, 31, 0x2C89ACu);
    ctx->pc = 0x2C89A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C89ACu; }
    }
    if (ctx->pc != 0x2C89ACu) { return; }
    ctx->pc = 0x2C89ACu;
    // 0x2c89ac: 0x3c140038
    ctx->pc = 0x2c89acu;
    SET_GPR_U32(ctx, 20, ((uint32_t)56 << 16));
    // 0x2c89b0: 0xae82c99c
    ctx->pc = 0x2c89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953372), GPR_U32(ctx, 2));
    // 0x2c89b4: 0x202d
    ctx->pc = 0x2c89b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89b8: 0x26052550
    ctx->pc = 0x2c89b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 9552));
    // 0x2c89bc: 0xc0b3ec0
    ctx->pc = 0x2C89BCu;
    SET_GPR_U32(ctx, 31, 0x2C89C4u);
    ctx->pc = 0x2C89C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C89C4u; }
    }
    if (ctx->pc != 0x2C89C4u) { return; }
    ctx->pc = 0x2C89C4u;
    // 0x2c89c4: 0x3c130038
    ctx->pc = 0x2c89c4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)56 << 16));
    // 0x2c89c8: 0xae62c9a0
    ctx->pc = 0x2c89c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294953376), GPR_U32(ctx, 2));
    // 0x2c89cc: 0x202d
    ctx->pc = 0x2c89ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89d0: 0x26052550
    ctx->pc = 0x2c89d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 9552));
    // 0x2c89d4: 0xc0b3ec0
    ctx->pc = 0x2C89D4u;
    SET_GPR_U32(ctx, 31, 0x2C89DCu);
    ctx->pc = 0x2C89D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C89DCu; }
    }
    if (ctx->pc != 0x2C89DCu) { return; }
    ctx->pc = 0x2C89DCu;
    // 0x2c89dc: 0x3c030038
    ctx->pc = 0x2c89dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c89e0: 0xac62c9a4
    ctx->pc = 0x2c89e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953380), GPR_U32(ctx, 2));
    // 0x2c89e4: 0x202d
    ctx->pc = 0x2c89e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89e8: 0x26052550
    ctx->pc = 0x2c89e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 9552));
    // 0x2c89ec: 0xc0b3ec0
    ctx->pc = 0x2C89ECu;
    SET_GPR_U32(ctx, 31, 0x2C89F4u);
    ctx->pc = 0x2C89F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C89F4u; }
    }
    if (ctx->pc != 0x2C89F4u) { return; }
    ctx->pc = 0x2C89F4u;
    // 0x2c89f4: 0x3c120038
    ctx->pc = 0x2c89f4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)56 << 16));
    // 0x2c89f8: 0xae42c9a8
    ctx->pc = 0x2c89f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294953384), GPR_U32(ctx, 2));
    // 0x2c89fc: 0x202d
    ctx->pc = 0x2c89fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a00: 0x26052550
    ctx->pc = 0x2c8a00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 9552));
    // 0x2c8a04: 0xc0b3ec0
    ctx->pc = 0x2C8A04u;
    SET_GPR_U32(ctx, 31, 0x2C8A0Cu);
    ctx->pc = 0x2C8A08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8A0Cu; }
    }
    if (ctx->pc != 0x2C8A0Cu) { return; }
    ctx->pc = 0x2C8A0Cu;
    // 0x2c8a0c: 0x3c110038
    ctx->pc = 0x2c8a0cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
    // 0x2c8a10: 0xae22c9ac
    ctx->pc = 0x2c8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953388), GPR_U32(ctx, 2));
    // 0x2c8a14: 0x202d
    ctx->pc = 0x2c8a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a18: 0x26052550
    ctx->pc = 0x2c8a18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 9552));
    // 0x2c8a1c: 0xc0b3ec0
    ctx->pc = 0x2C8A1Cu;
    SET_GPR_U32(ctx, 31, 0x2C8A24u);
    ctx->pc = 0x2C8A20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8A24u; }
    }
    if (ctx->pc != 0x2C8A24u) { return; }
    ctx->pc = 0x2C8A24u;
    // 0x2c8a24: 0x3c030038
    ctx->pc = 0x2c8a24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c8a28: 0xac62c9b0
    ctx->pc = 0x2c8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953392), GPR_U32(ctx, 2));
    // 0x2c8a2c: 0x8e64c9a0
    ctx->pc = 0x2c8a2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294953376)));
    // 0x2c8a30: 0x8c830060
    ctx->pc = 0x2c8a30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2c8a34: 0x34630004
    ctx->pc = 0x2c8a34u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c8a38: 0xac830060
    ctx->pc = 0x2c8a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x2c8a3c: 0x8e84c99c
    ctx->pc = 0x2c8a3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294953372)));
    // 0x2c8a40: 0x8c830060
    ctx->pc = 0x2c8a40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2c8a44: 0x34630004
    ctx->pc = 0x2c8a44u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c8a48: 0xac830060
    ctx->pc = 0x2c8a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x2c8a4c: 0x8e44c9a8
    ctx->pc = 0x2c8a4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294953384)));
    // 0x2c8a50: 0x8c830060
    ctx->pc = 0x2c8a50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2c8a54: 0x34630004
    ctx->pc = 0x2c8a54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c8a58: 0xac830060
    ctx->pc = 0x2c8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x2c8a5c: 0x8e24c9ac
    ctx->pc = 0x2c8a5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x2c8a60: 0x8c830060
    ctx->pc = 0x2c8a60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2c8a64: 0x34630004
    ctx->pc = 0x2c8a64u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c8a68: 0xac830060
    ctx->pc = 0x2c8a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x2c8a6c: 0x8c430060
    ctx->pc = 0x2c8a6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c8a70: 0x34630004
    ctx->pc = 0x2c8a70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c8a74: 0x1000000d
    ctx->pc = 0x2C8A74u;
    {
        const bool branch_taken_0x2c8a74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8A78u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
        if (branch_taken_0x2c8a74) {
            ctx->pc = 0x2C8AACu;
            goto label_2c8aac;
        }
    }
    ctx->pc = 0x2C8A7Cu;
label_2c8a7c:
    // 0x2c8a7c: 0x3c020038
    ctx->pc = 0x2c8a7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c8a80: 0xac40c99c
    ctx->pc = 0x2c8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953372), GPR_U32(ctx, 0));
    // 0x2c8a84: 0x3c020038
    ctx->pc = 0x2c8a84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c8a88: 0xac40c9a0
    ctx->pc = 0x2c8a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953376), GPR_U32(ctx, 0));
    // 0x2c8a8c: 0x3c020038
    ctx->pc = 0x2c8a8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c8a90: 0xac40c9a4
    ctx->pc = 0x2c8a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953380), GPR_U32(ctx, 0));
    // 0x2c8a94: 0x3c020038
    ctx->pc = 0x2c8a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c8a98: 0xac40c9a8
    ctx->pc = 0x2c8a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953384), GPR_U32(ctx, 0));
    // 0x2c8a9c: 0x3c020038
    ctx->pc = 0x2c8a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c8aa0: 0xac40c9ac
    ctx->pc = 0x2c8aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953388), GPR_U32(ctx, 0));
    // 0x2c8aa4: 0x3c020038
    ctx->pc = 0x2c8aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c8aa8: 0xac40c9b0
    ctx->pc = 0x2c8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953392), GPR_U32(ctx, 0));
label_2c8aac:
    // 0x2c8aac: 0xdfbf0050
    ctx->pc = 0x2c8aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c8ab0: 0xdfb40040
    ctx->pc = 0x2c8ab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8ab4: 0xdfb30030
    ctx->pc = 0x2c8ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8ab8: 0xdfb20020
    ctx->pc = 0x2c8ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8abc: 0xdfb10010
    ctx->pc = 0x2c8abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8ac0: 0xdfb00000
    ctx->pc = 0x2c8ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8ac4: 0x3e00008
    ctx->pc = 0x2C8AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8AC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8A7Cu: goto label_2c8a7c;
            case 0x2C8AACu: goto label_2c8aac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C8ACCu;
}
