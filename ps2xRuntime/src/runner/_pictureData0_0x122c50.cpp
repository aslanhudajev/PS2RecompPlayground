#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureData0
// Address: 0x122c50 - 0x122d74
void _pictureData0_0x122c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122c50u;

    // 0x122c50: 0x3c020017
    ctx->pc = 0x122c50u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x122c54: 0x3c030017
    ctx->pc = 0x122c54u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x122c58: 0x27bdff90
    ctx->pc = 0x122c58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x122c5c: 0x8c471928
    ctx->pc = 0x122c5cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 6440)));
    // 0x122c60: 0x8c66192c
    ctx->pc = 0x122c60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 6444)));
    // 0x122c64: 0x3c050017
    ctx->pc = 0x122c64u;
    SET_GPR_S32(ctx, 5, ((uint32_t)23 << 16));
    // 0x122c68: 0xffb10010
    ctx->pc = 0x122c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x122c6c: 0xffb50050
    ctx->pc = 0x122c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x122c70: 0xe68818
    ctx->pc = 0x122c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
    // 0x122c74: 0x3c150017
    ctx->pc = 0x122c74u;
    SET_GPR_S32(ctx, 21, ((uint32_t)23 << 16));
    // 0x122c78: 0xffb40040
    ctx->pc = 0x122c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x122c7c: 0xffb30030
    ctx->pc = 0x122c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x122c80: 0x26a21df8
    ctx->pc = 0x122c80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 7672));
    // 0x122c84: 0xffb20020
    ctx->pc = 0x122c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x122c88: 0x24140001
    ctx->pc = 0x122c88u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x122c8c: 0x8ca319ac
    ctx->pc = 0x122c8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 6572)));
    // 0x122c90: 0x80902d
    ctx->pc = 0x122c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c94: 0xffbf0060
    ctx->pc = 0x122c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x122c98: 0x24130003
    ctx->pc = 0x122c98u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
    // 0x122c9c: 0xffb00000
    ctx->pc = 0x122c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122ca0: 0x38630003
    ctx->pc = 0x122ca0u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 3));
    // 0x122ca4: 0xac400284
    ctx->pc = 0x122ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
    // 0x122ca8: 0xac400280
    ctx->pc = 0x122ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
    // 0x122cac: 0x111043
    ctx->pc = 0x122cacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x122cb0: 0x43880b
    ctx->pc = 0x122cb0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x122cb4: 0x0
    ctx->pc = 0x122cb4u;
    // NOP
label_122cb8:
    // 0x122cb8: 0x240202d
    ctx->pc = 0x122cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_122cbc:
    // 0x122cbc: 0xc048ba8
    ctx->pc = 0x122CBCu;
    SET_GPR_U32(ctx, 31, 0x122CC4u);
    ctx->pc = 0x122CC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x122EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _slice0_0x122ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122CC4u; }
    }
    if (ctx->pc != 0x122CC4u) { return; }
    ctx->pc = 0x122CC4u;
    // 0x122cc4: 0x40802d
    ctx->pc = 0x122cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cc8: 0x1214fffc
    ctx->pc = 0x122CC8u;
    {
        const bool branch_taken_0x122cc8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 20));
        ctx->pc = 0x122CCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122cc8) {
            ctx->pc = 0x122CBCu;
            goto label_122cbc;
        }
    }
    ctx->pc = 0x122CD0u;
    // 0x122cd0: 0x1213fff9
    ctx->pc = 0x122CD0u;
    {
        const bool branch_taken_0x122cd0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 19));
        if (branch_taken_0x122cd0) {
            ctx->pc = 0x122CB8u;
            goto label_122cb8;
        }
    }
    ctx->pc = 0x122CD8u;
    // 0x122cd8: 0xc048e84
    ctx->pc = 0x122CD8u;
    SET_GPR_U32(ctx, 31, 0x122CE0u);
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122CE0u; }
    }
    if (ctx->pc != 0x122CE0u) { return; }
    ctx->pc = 0x122CE0u;
    // 0x122ce0: 0xc0489ec
    ctx->pc = 0x122CE0u;
    SET_GPR_U32(ctx, 31, 0x122CE8u);
    ctx->pc = 0x1227B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x1227b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122CE8u; }
    }
    if (ctx->pc != 0x122CE8u) { return; }
    ctx->pc = 0x122CE8u;
    // 0x122ce8: 0x24030002
    ctx->pc = 0x122ce8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x122cec: 0x3c041000
    ctx->pc = 0x122cecu;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x122cf0: 0x62800a
    ctx->pc = 0x122cf0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x122cf4: 0x3484d400
    ctx->pc = 0x122cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)54272);
    // 0x122cf8: 0x2611ffff
    ctx->pc = 0x122cf8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x122cfc: 0x2e120001
    ctx->pc = 0x122cfcu;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 16), 1));
label_122d00:
    // 0x122d00: 0x8c820000
    ctx->pc = 0x122d00u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x122d04: 0x21202
    ctx->pc = 0x122d04u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x122d08: 0x30420001
    ctx->pc = 0x122d08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x122d0c: 0x0
    ctx->pc = 0x122d0cu;
    // NOP
    // 0x122d10: 0x0
    ctx->pc = 0x122d10u;
    // NOP
    // 0x122d14: 0x1440fffa
    ctx->pc = 0x122D14u;
    {
        const bool branch_taken_0x122d14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x122d14) {
            ctx->pc = 0x122D00u;
            goto label_122d00;
        }
    }
    ctx->pc = 0x122D1Cu;
    // 0x122d1c: 0x16000006
    ctx->pc = 0x122D1Cu;
    {
        const bool branch_taken_0x122d1c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x122D20u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x122d1c) {
            ctx->pc = 0x122D38u;
            goto label_122d38;
        }
    }
    ctx->pc = 0x122D24u;
    // 0x122d24: 0x26a21df8
    ctx->pc = 0x122d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 7672));
    // 0x122d28: 0x8c440280
    ctx->pc = 0x122d28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x122d2c: 0xc04860a
    ctx->pc = 0x122D2Cu;
    SET_GPR_U32(ctx, 31, 0x122D34u);
    ctx->pc = 0x122D30u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x121828u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x121828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D34u; }
    }
    if (ctx->pc != 0x122D34u) { return; }
    ctx->pc = 0x122D34u;
    // 0x122d34: 0x2e220002
    ctx->pc = 0x122d34u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 2));
label_122d38:
    // 0x122d38: 0x10400005
    ctx->pc = 0x122D38u;
    {
        const bool branch_taken_0x122d38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122D3Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122d38) {
            ctx->pc = 0x122D50u;
            goto label_122d50;
        }
    }
    ctx->pc = 0x122D40u;
    // 0x122d40: 0x3c040017
    ctx->pc = 0x122d40u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x122d44: 0xc048006
    ctx->pc = 0x122D44u;
    SET_GPR_U32(ctx, 31, 0x122D4Cu);
    ctx->pc = 0x122D48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20216));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D4Cu; }
    }
    if (ctx->pc != 0x122D4Cu) { return; }
    ctx->pc = 0x122D4Cu;
    // 0x122d4c: 0x240102d
    ctx->pc = 0x122d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_122d50:
    // 0x122d50: 0xdfbf0060
    ctx->pc = 0x122d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122d54: 0xdfb50050
    ctx->pc = 0x122d54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122d58: 0xdfb40040
    ctx->pc = 0x122d58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122d5c: 0xdfb30030
    ctx->pc = 0x122d5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122d60: 0xdfb20020
    ctx->pc = 0x122d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122d64: 0xdfb10010
    ctx->pc = 0x122d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d68: 0xdfb00000
    ctx->pc = 0x122d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122d6c: 0x3e00008
    ctx->pc = 0x122D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122D70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122CB8u: goto label_122cb8;
            case 0x122CBCu: goto label_122cbc;
            case 0x122D00u: goto label_122d00;
            case 0x122D38u: goto label_122d38;
            case 0x122D50u: goto label_122d50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122D74u;
}
