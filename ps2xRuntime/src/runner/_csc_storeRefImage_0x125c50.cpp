#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _csc_storeRefImage
// Address: 0x125c50 - 0x125ea4
void _csc_storeRefImage_0x125c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125c50u;

    // 0x125c50: 0x27bdff40
    ctx->pc = 0x125c50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x125c54: 0x24030002
    ctx->pc = 0x125c54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x125c58: 0xffbe00a0
    ctx->pc = 0x125c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x125c5c: 0x3a0282d
    ctx->pc = 0x125c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c60: 0xffb10030
    ctx->pc = 0x125c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x125c64: 0x3c1e0017
    ctx->pc = 0x125c64u;
    SET_GPR_S32(ctx, 30, ((uint32_t)23 << 16));
    // 0x125c68: 0xffb00020
    ctx->pc = 0x125c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x125c6c: 0xffbf00b0
    ctx->pc = 0x125c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x125c70: 0x80802d
    ctx->pc = 0x125c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c74: 0xffb70090
    ctx->pc = 0x125c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x125c78: 0xffb60080
    ctx->pc = 0x125c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x125c7c: 0xffb50070
    ctx->pc = 0x125c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x125c80: 0xffb40060
    ctx->pc = 0x125c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x125c84: 0xffb30050
    ctx->pc = 0x125c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x125c88: 0xffb20040
    ctx->pc = 0x125c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x125c8c: 0x8fc417bc
    ctx->pc = 0x125c8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 6076)));
    // 0x125c90: 0x8e06000c
    ctx->pc = 0x125c90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x125c94: 0x8e020010
    ctx->pc = 0x125c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x125c98: 0x8c930040
    ctx->pc = 0x125c98u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x125c9c: 0xafa30000
    ctx->pc = 0x125c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x125ca0: 0xc047de0
    ctx->pc = 0x125CA0u;
    SET_GPR_U32(ctx, 31, 0x125CA8u);
    ctx->pc = 0x125CA4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
    ctx->pc = 0x11F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125CA8u; }
    }
    if (ctx->pc != 0x125CA8u) { return; }
    ctx->pc = 0x125CA8u;
    // 0x125ca8: 0x3c031000
    ctx->pc = 0x125ca8u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x125cac: 0x34632010
    ctx->pc = 0x125cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)8208);
    // 0x125cb0: 0x8c620000
    ctx->pc = 0x125cb0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x125cb4: 0x30424000
    ctx->pc = 0x125cb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x125cb8: 0x10400003
    ctx->pc = 0x125CB8u;
    {
        const bool branch_taken_0x125cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x125CBCu;
        SET_GPR_S32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x125cb8) {
            ctx->pc = 0x125CC8u;
            goto label_125cc8;
        }
    }
    ctx->pc = 0x125CC0u;
    // 0x125cc0: 0x3c011000
    ctx->pc = 0x125cc0u;
    SET_GPR_S32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x125cc4: 0xac222010
    ctx->pc = 0x125cc4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_125cc8:
    // 0x125cc8: 0x3c031000
    ctx->pc = 0x125cc8u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x125ccc: 0x3c140075
    ctx->pc = 0x125cccu;
    SET_GPR_S32(ctx, 20, ((uint32_t)117 << 16));
    // 0x125cd0: 0x3c150075
    ctx->pc = 0x125cd0u;
    SET_GPR_S32(ctx, 21, ((uint32_t)117 << 16));
    // 0x125cd4: 0x2a370400
    ctx->pc = 0x125cd4u;
    SET_GPR_U32(ctx, 23, SLT32(GPR_S32(ctx, 17), 1024));
    // 0x125cd8: 0x34632010
    ctx->pc = 0x125cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)8208);
    // 0x125cdc: 0x0
    ctx->pc = 0x125cdcu;
    // NOP
label_125ce0:
    // 0x125ce0: 0x8c620000
    ctx->pc = 0x125ce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x125ce4: 0x0
    ctx->pc = 0x125ce4u;
    // NOP
    // 0x125ce8: 0x0
    ctx->pc = 0x125ce8u;
    // NOP
    // 0x125cec: 0x0
    ctx->pc = 0x125cecu;
    // NOP
    // 0x125cf0: 0x0
    ctx->pc = 0x125cf0u;
    // NOP
    // 0x125cf4: 0x440fffa
    ctx->pc = 0x125CF4u;
    {
        const bool branch_taken_0x125cf4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x125cf4) {
            ctx->pc = 0x125CE0u;
            goto label_125ce0;
        }
    }
    ctx->pc = 0x125CFCu;
    // 0x125cfc: 0xc048e78
    ctx->pc = 0x125CFCu;
    SET_GPR_U32(ctx, 31, 0x125D04u);
    ctx->pc = 0x125D00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1239E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D04u; }
    }
    if (ctx->pc != 0x125D04u) { return; }
    ctx->pc = 0x125D04u;
    // 0x125d04: 0x3c031000
    ctx->pc = 0x125d04u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x125d08: 0x8e040000
    ctx->pc = 0x125d08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125d0c: 0x34632010
    ctx->pc = 0x125d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)8208);
label_125d10:
    // 0x125d10: 0x8c620000
    ctx->pc = 0x125d10u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x125d14: 0x0
    ctx->pc = 0x125d14u;
    // NOP
    // 0x125d18: 0x0
    ctx->pc = 0x125d18u;
    // NOP
    // 0x125d1c: 0x0
    ctx->pc = 0x125d1cu;
    // NOP
    // 0x125d20: 0x0
    ctx->pc = 0x125d20u;
    // NOP
    // 0x125d24: 0x440fffa
    ctx->pc = 0x125D24u;
    {
        const bool branch_taken_0x125d24 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x125d24) {
            ctx->pc = 0x125D10u;
            goto label_125d10;
        }
    }
    ctx->pc = 0x125D2Cu;
    // 0x125d2c: 0x24020018
    ctx->pc = 0x125d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x125d30: 0x3c100fff
    ctx->pc = 0x125d30u;
    SET_GPR_S32(ctx, 16, ((uint32_t)4095 << 16));
    // 0x125d34: 0x2222818
    ctx->pc = 0x125d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x125d38: 0x3610ffff
    ctx->pc = 0x125d38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)65535);
    // 0x125d3c: 0x901824
    ctx->pc = 0x125d3cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x125d40: 0x3412ffff
    ctx->pc = 0x125d40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)65535);
    // 0x125d44: 0xaea3e4e4
    ctx->pc = 0x125d44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294960356), GPR_U32(ctx, 3));
    // 0x125d48: 0x245102b
    ctx->pc = 0x125d48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x125d4c: 0x10400030
    ctx->pc = 0x125D4Cu;
    {
        const bool branch_taken_0x125d4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x125D50u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960352), GPR_U32(ctx, 5));
        if (branch_taken_0x125d4c) {
            ctx->pc = 0x125E10u;
            goto label_125e10;
        }
    }
    ctx->pc = 0x125D54u;
    // 0x125d54: 0x3c050012
    ctx->pc = 0x125d54u;
    SET_GPR_S32(ctx, 5, ((uint32_t)18 << 16));
    // 0x125d58: 0x24040004
    ctx->pc = 0x125d58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x125d5c: 0x24a55b78
    ctx->pc = 0x125d5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 23416));
    // 0x125d60: 0xc0437ec
    ctx->pc = 0x125D60u;
    SET_GPR_U32(ctx, 31, 0x125D68u);
    ctx->pc = 0x125D64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x10dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D68u; }
    }
    if (ctx->pc != 0x125D68u) { return; }
    ctx->pc = 0x125D68u;
    // 0x125d68: 0x40b02d
    ctx->pc = 0x125d68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d6c: 0x24030010
    ctx->pc = 0x125d6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x125d70: 0x3c021000
    ctx->pc = 0x125d70u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x125d74: 0x24040004
    ctx->pc = 0x125d74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x125d78: 0x3442e010
    ctx->pc = 0x125d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)57360);
    // 0x125d7c: 0xc043ae0
    ctx->pc = 0x125D7Cu;
    SET_GPR_U32(ctx, 31, 0x125D84u);
    ctx->pc = 0x125D80u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x10EB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x10eb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D84u; }
    }
    if (ctx->pc != 0x125D84u) { return; }
    ctx->pc = 0x125D84u;
    // 0x125d84: 0x8ea5e4e4
    ctx->pc = 0x125d84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 4294960356)));
    // 0x125d88: 0x3c021000
    ctx->pc = 0x125d88u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x125d8c: 0x3442b410
    ctx->pc = 0x125d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)46096);
    // 0x125d90: 0x3c031000
    ctx->pc = 0x125d90u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x125d94: 0xac450000
    ctx->pc = 0x125d94u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x125d98: 0x3463b420
    ctx->pc = 0x125d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)46112);
    // 0x125d9c: 0xac720000
    ctx->pc = 0x125d9cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x125da0: 0x3c041000
    ctx->pc = 0x125da0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x125da4: 0x24030101
    ctx->pc = 0x125da4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x125da8: 0x3484b400
    ctx->pc = 0x125da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)46080);
    // 0x125dac: 0xac830000
    ctx->pc = 0x125dacu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x125db0: 0x3c02000f
    ctx->pc = 0x125db0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)15 << 16));
    // 0x125db4: 0x3442fff0
    ctx->pc = 0x125db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65520);
    // 0x125db8: 0x8e83e4e0
    ctx->pc = 0x125db8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4294960352)));
    // 0x125dbc: 0xa22821
    ctx->pc = 0x125dbcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x125dc0: 0xb02824
    ctx->pc = 0x125dc0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x125dc4: 0x721823
    ctx->pc = 0x125dc4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x125dc8: 0xaea5e4e4
    ctx->pc = 0x125dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294960356), GPR_U32(ctx, 5));
    // 0x125dcc: 0x12e00006
    ctx->pc = 0x125DCCu;
    {
        const bool branch_taken_0x125dcc = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x125DD0u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960352), GPR_U32(ctx, 3));
        if (branch_taken_0x125dcc) {
            ctx->pc = 0x125DE8u;
            goto label_125de8;
        }
    }
    ctx->pc = 0x125DD4u;
    // 0x125dd4: 0x8e6400d8
    ctx->pc = 0x125dd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x125dd8: 0xc0495e2
    ctx->pc = 0x125DD8u;
    SET_GPR_U32(ctx, 31, 0x125DE0u);
    ctx->pc = 0x125DDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125788u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x125788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DE0u; }
    }
    if (ctx->pc != 0x125DE0u) { return; }
    ctx->pc = 0x125DE0u;
    // 0x125de0: 0x10000004
    ctx->pc = 0x125DE0u;
    {
        const bool branch_taken_0x125de0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x125de0) {
            ctx->pc = 0x125DF4u;
            goto label_125df4;
        }
    }
    ctx->pc = 0x125DE8u;
label_125de8:
    // 0x125de8: 0x8e6400d8
    ctx->pc = 0x125de8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x125dec: 0xc04966e
    ctx->pc = 0x125DECu;
    SET_GPR_U32(ctx, 31, 0x125DF4u);
    ctx->pc = 0x125DF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1259B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x1259b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DF4u; }
    }
    if (ctx->pc != 0x125DF4u) { return; }
    ctx->pc = 0x125DF4u;
label_125df4:
    // 0x125df4: 0xc043ac6
    ctx->pc = 0x125DF4u;
    SET_GPR_U32(ctx, 31, 0x125DFCu);
    ctx->pc = 0x125DF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x10EB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x10eb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DFCu; }
    }
    if (ctx->pc != 0x125DFCu) { return; }
    ctx->pc = 0x125DFCu;
    // 0x125dfc: 0x2c0282d
    ctx->pc = 0x125dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e00: 0xc0437f4
    ctx->pc = 0x125E00u;
    SET_GPR_U32(ctx, 31, 0x125E08u);
    ctx->pc = 0x125E04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x10DFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x10dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E08u; }
    }
    if (ctx->pc != 0x125E08u) { return; }
    ctx->pc = 0x125E08u;
    // 0x125e08: 0x10000016
    ctx->pc = 0x125E08u;
    {
        const bool branch_taken_0x125e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125E0Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 6076)));
        if (branch_taken_0x125e08) {
            ctx->pc = 0x125E64u;
            goto label_125e64;
        }
    }
    ctx->pc = 0x125E10u;
label_125e10:
    // 0x125e10: 0x3c021000
    ctx->pc = 0x125e10u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x125e14: 0x3c041000
    ctx->pc = 0x125e14u;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x125e18: 0x3442b410
    ctx->pc = 0x125e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)46096);
    // 0x125e1c: 0x3484b420
    ctx->pc = 0x125e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)46112);
    // 0x125e20: 0xac430000
    ctx->pc = 0x125e20u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x125e24: 0x3c031000
    ctx->pc = 0x125e24u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x125e28: 0xac850000
    ctx->pc = 0x125e28u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x125e2c: 0x3463b400
    ctx->pc = 0x125e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)46080);
    // 0x125e30: 0x24020101
    ctx->pc = 0x125e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
    // 0x125e34: 0xac620000
    ctx->pc = 0x125e34u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x125e38: 0x12e00006
    ctx->pc = 0x125E38u;
    {
        const bool branch_taken_0x125e38 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x125E3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960352), GPR_U32(ctx, 0));
        if (branch_taken_0x125e38) {
            ctx->pc = 0x125E54u;
            goto label_125e54;
        }
    }
    ctx->pc = 0x125E40u;
    // 0x125e40: 0x8e6400d8
    ctx->pc = 0x125e40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x125e44: 0xc0495e2
    ctx->pc = 0x125E44u;
    SET_GPR_U32(ctx, 31, 0x125E4Cu);
    ctx->pc = 0x125E48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125788u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x125788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E4Cu; }
    }
    if (ctx->pc != 0x125E4Cu) { return; }
    ctx->pc = 0x125E4Cu;
    // 0x125e4c: 0x10000005
    ctx->pc = 0x125E4Cu;
    {
        const bool branch_taken_0x125e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125E50u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 6076)));
        if (branch_taken_0x125e4c) {
            ctx->pc = 0x125E64u;
            goto label_125e64;
        }
    }
    ctx->pc = 0x125E54u;
label_125e54:
    // 0x125e54: 0x8e6400d8
    ctx->pc = 0x125e54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x125e58: 0xc04966e
    ctx->pc = 0x125E58u;
    SET_GPR_U32(ctx, 31, 0x125E60u);
    ctx->pc = 0x125E5Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1259B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x1259b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E60u; }
    }
    if (ctx->pc != 0x125E60u) { return; }
    ctx->pc = 0x125E60u;
    // 0x125e60: 0x8fc417bc
    ctx->pc = 0x125e60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 6076)));
label_125e64:
    // 0x125e64: 0x24020003
    ctx->pc = 0x125e64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x125e68: 0xafa20000
    ctx->pc = 0x125e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x125e6c: 0xc047de0
    ctx->pc = 0x125E6Cu;
    SET_GPR_U32(ctx, 31, 0x125E74u);
    ctx->pc = 0x125E70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E74u; }
    }
    if (ctx->pc != 0x125E74u) { return; }
    ctx->pc = 0x125E74u;
    // 0x125e74: 0xdfbf00b0
    ctx->pc = 0x125e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x125e78: 0xdfbe00a0
    ctx->pc = 0x125e78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x125e7c: 0xdfb70090
    ctx->pc = 0x125e7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x125e80: 0xdfb60080
    ctx->pc = 0x125e80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125e84: 0xdfb50070
    ctx->pc = 0x125e84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125e88: 0xdfb40060
    ctx->pc = 0x125e88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x125e8c: 0xdfb30050
    ctx->pc = 0x125e8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125e90: 0xdfb20040
    ctx->pc = 0x125e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125e94: 0xdfb10030
    ctx->pc = 0x125e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125e98: 0xdfb00020
    ctx->pc = 0x125e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125e9c: 0x3e00008
    ctx->pc = 0x125E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125EA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125CC8u: goto label_125cc8;
            case 0x125CE0u: goto label_125ce0;
            case 0x125D10u: goto label_125d10;
            case 0x125DE8u: goto label_125de8;
            case 0x125DF4u: goto label_125df4;
            case 0x125E10u: goto label_125e10;
            case 0x125E54u: goto label_125e54;
            case 0x125E64u: goto label_125e64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125EA4u;
}
