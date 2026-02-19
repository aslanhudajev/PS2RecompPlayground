#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCameraUpdate
// Address: 0x2a1d20 - 0x2a2104
void BossCameraUpdate_0x2a1d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a1d20u;

    // 0x2a1d20: 0x27bdffd0
    ctx->pc = 0x2a1d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a1d24: 0xffbf0020
    ctx->pc = 0x2a1d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a1d28: 0xffb10010
    ctx->pc = 0x2a1d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a1d2c: 0xffb00000
    ctx->pc = 0x2a1d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1d30: 0x3c020032
    ctx->pc = 0x2a1d30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2a1d34: 0x8c42080c
    ctx->pc = 0x2a1d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x2a1d38: 0x14400004
    ctx->pc = 0x2A1D38u;
    {
        const bool branch_taken_0x2a1d38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A1D3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2a1d38) {
            ctx->pc = 0x2A1D4Cu;
            goto label_2a1d4c;
        }
    }
    ctx->pc = 0x2A1D40u;
    // 0x2a1d40: 0x3c020032
    ctx->pc = 0x2a1d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2a1d44: 0xac400808
    ctx->pc = 0x2a1d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
    // 0x2a1d48: 0x3c020034
    ctx->pc = 0x2a1d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2a1d4c:
    // 0x2a1d4c: 0xac40f94c
    ctx->pc = 0x2a1d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965580), GPR_U32(ctx, 0));
    // 0x2a1d50: 0x3c020036
    ctx->pc = 0x2a1d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1d54: 0x8c42db68
    ctx->pc = 0x2a1d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957928)));
    // 0x2a1d58: 0x14400004
    ctx->pc = 0x2A1D58u;
    {
        const bool branch_taken_0x2a1d58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A1D5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2a1d58) {
            ctx->pc = 0x2A1D6Cu;
            goto label_2a1d6c;
        }
    }
    ctx->pc = 0x2A1D60u;
    // 0x2a1d60: 0xc0a7ff2
    ctx->pc = 0x2A1D60u;
    SET_GPR_U32(ctx, 31, 0x2A1D68u);
    ctx->pc = 0x29FFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCameraStart_0x29ffc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D68u; }
    }
    if (ctx->pc != 0x2A1D68u) { return; }
    ctx->pc = 0x2A1D68u;
    // 0x2a1d68: 0x3c020031
    ctx->pc = 0x2a1d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2a1d6c:
    // 0x2a1d6c: 0x8c430018
    ctx->pc = 0x2a1d6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a1d70: 0x24024013
    ctx->pc = 0x2a1d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
    // 0x2a1d74: 0x10620005
    ctx->pc = 0x2A1D74u;
    {
        const bool branch_taken_0x2a1d74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A1D78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        if (branch_taken_0x2a1d74) {
            ctx->pc = 0x2A1D8Cu;
            goto label_2a1d8c;
        }
    }
    ctx->pc = 0x2A1D7Cu;
    // 0x2a1d7c: 0x10620003
    ctx->pc = 0x2A1D7Cu;
    {
        const bool branch_taken_0x2a1d7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A1D80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        if (branch_taken_0x2a1d7c) {
            ctx->pc = 0x2A1D8Cu;
            goto label_2a1d8c;
        }
    }
    ctx->pc = 0x2A1D84u;
    // 0x2a1d84: 0x14620005
    ctx->pc = 0x2A1D84u;
    {
        const bool branch_taken_0x2a1d84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2A1D88u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1d84) {
            ctx->pc = 0x2A1D9Cu;
            goto label_2a1d9c;
        }
    }
    ctx->pc = 0x2A1D8Cu;
label_2a1d8c:
    // 0x2a1d8c: 0xc0a830e
    ctx->pc = 0x2A1D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D94u);
    ctx->pc = 0x2A0C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCamSelectCalc_0x2a0c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D94u; }
    }
    if (ctx->pc != 0x2A1D94u) { return; }
    ctx->pc = 0x2A1D94u;
    // 0x2a1d94: 0x1000001b
    ctx->pc = 0x2A1D94u;
    {
        const bool branch_taken_0x2a1d94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1D98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1d94) {
            ctx->pc = 0x2A1E04u;
            goto label_2a1e04;
        }
    }
    ctx->pc = 0x2A1D9Cu;
label_2a1d9c:
    // 0x2a1d9c: 0x8c42dd80
    ctx->pc = 0x2a1d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a1da0: 0x14400003
    ctx->pc = 0x2A1DA0u;
    {
        const bool branch_taken_0x2a1da0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A1DA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1da0) {
            ctx->pc = 0x2A1DB0u;
            goto label_2a1db0;
        }
    }
    ctx->pc = 0x2A1DA8u;
    // 0x2a1da8: 0x100000d1
    ctx->pc = 0x2A1DA8u;
    {
        const bool branch_taken_0x2a1da8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1DACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a1da8) {
            ctx->pc = 0x2A20F0u;
            goto label_2a20f0;
        }
    }
    ctx->pc = 0x2A1DB0u;
label_2a1db0:
    // 0x2a1db0: 0x8c42db68
    ctx->pc = 0x2a1db0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957928)));
    // 0x2a1db4: 0x14400005
    ctx->pc = 0x2A1DB4u;
    {
        const bool branch_taken_0x2a1db4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A1DB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2a1db4) {
            ctx->pc = 0x2A1DCCu;
            goto label_2a1dcc;
        }
    }
    ctx->pc = 0x2A1DBCu;
    // 0x2a1dbc: 0xc0a82be
    ctx->pc = 0x2A1DBCu;
    SET_GPR_U32(ctx, 31, 0x2A1DC4u);
    ctx->pc = 0x2A0AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCamStartCalc_0x2a0af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1DC4u; }
    }
    if (ctx->pc != 0x2A1DC4u) { return; }
    ctx->pc = 0x2A1DC4u;
    // 0x2a1dc4: 0x1000000f
    ctx->pc = 0x2A1DC4u;
    {
        const bool branch_taken_0x2a1dc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1DC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1dc4) {
            ctx->pc = 0x2A1E04u;
            goto label_2a1e04;
        }
    }
    ctx->pc = 0x2A1DCCu;
label_2a1dcc:
    // 0x2a1dcc: 0x8c42e7c8
    ctx->pc = 0x2a1dccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2a1dd0: 0x8c42006c
    ctx->pc = 0x2a1dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2a1dd4: 0x1040000a
    ctx->pc = 0x2A1DD4u;
    {
        const bool branch_taken_0x2a1dd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1DD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1dd4) {
            ctx->pc = 0x2A1E00u;
            goto label_2a1e00;
        }
    }
    ctx->pc = 0x2A1DDCu;
    // 0x2a1ddc: 0x8c42d800
    ctx->pc = 0x2a1ddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957056)));
    // 0x2a1de0: 0x14400005
    ctx->pc = 0x2A1DE0u;
    {
        const bool branch_taken_0x2a1de0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a1de0) {
            ctx->pc = 0x2A1DF8u;
            goto label_2a1df8;
        }
    }
    ctx->pc = 0x2A1DE8u;
    // 0x2a1de8: 0xc0a8316
    ctx->pc = 0x2A1DE8u;
    SET_GPR_U32(ctx, 31, 0x2A1DF0u);
    ctx->pc = 0x2A0C58u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCamPlayerCalc_0x2a0c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1DF0u; }
    }
    if (ctx->pc != 0x2A1DF0u) { return; }
    ctx->pc = 0x2A1DF0u;
    // 0x2a1df0: 0x10000004
    ctx->pc = 0x2A1DF0u;
    {
        const bool branch_taken_0x2a1df0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1DF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1df0) {
            ctx->pc = 0x2A1E04u;
            goto label_2a1e04;
        }
    }
    ctx->pc = 0x2A1DF8u;
label_2a1df8:
    // 0x2a1df8: 0xc0a83fc
    ctx->pc = 0x2A1DF8u;
    SET_GPR_U32(ctx, 31, 0x2A1E00u);
    ctx->pc = 0x2A0FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCamBossCalc_0x2a0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E00u; }
    }
    if (ctx->pc != 0x2A1E00u) { return; }
    ctx->pc = 0x2A1E00u;
label_2a1e00:
    // 0x2a1e00: 0x3c020036
    ctx->pc = 0x2a1e00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a1e04:
    // 0x2a1e04: 0x8c43dbc0
    ctx->pc = 0x2a1e04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1e08: 0xc46100ec
    ctx->pc = 0x2a1e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1e0c: 0x3c014049
    ctx->pc = 0x2a1e0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2a1e10: 0x34210fdb
    ctx->pc = 0x2a1e10u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1e14: 0x44810000
    ctx->pc = 0x2a1e14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1e18: 0x46010034
    ctx->pc = 0x2a1e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1e1c: 0x0
    ctx->pc = 0x2a1e1cu;
    // NOP
    // 0x2a1e20: 0x45000006
    ctx->pc = 0x2A1E20u;
    {
        const bool branch_taken_0x2a1e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1E24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1e20) {
            ctx->pc = 0x2A1E3Cu;
            goto label_2a1e3c;
        }
    }
    ctx->pc = 0x2A1E28u;
    // 0x2a1e28: 0x3c0140c9
    ctx->pc = 0x2a1e28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2a1e2c: 0x34210fdb
    ctx->pc = 0x2a1e2cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1e30: 0x44810000
    ctx->pc = 0x2a1e30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1e34: 0x10000011
    ctx->pc = 0x2A1E34u;
    {
        const bool branch_taken_0x2a1e34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1E38u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2a1e34) {
            ctx->pc = 0x2A1E7Cu;
            goto label_2a1e7c;
        }
    }
    ctx->pc = 0x2A1E3Cu;
label_2a1e3c:
    // 0x2a1e3c: 0x8c42dbc0
    ctx->pc = 0x2a1e3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1e40: 0xc44100ec
    ctx->pc = 0x2a1e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1e44: 0x3c01c049
    ctx->pc = 0x2a1e44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2a1e48: 0x34210fdb
    ctx->pc = 0x2a1e48u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1e4c: 0x44810000
    ctx->pc = 0x2a1e4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1e50: 0x46000836
    ctx->pc = 0x2a1e50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1e54: 0x0
    ctx->pc = 0x2a1e54u;
    // NOP
    // 0x2a1e58: 0x45000006
    ctx->pc = 0x2A1E58u;
    {
        const bool branch_taken_0x2a1e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1E5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1e58) {
            ctx->pc = 0x2A1E74u;
            goto label_2a1e74;
        }
    }
    ctx->pc = 0x2A1E60u;
    // 0x2a1e60: 0x3c0140c9
    ctx->pc = 0x2a1e60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2a1e64: 0x34210fdb
    ctx->pc = 0x2a1e64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1e68: 0x44810000
    ctx->pc = 0x2a1e68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1e6c: 0x10000003
    ctx->pc = 0x2A1E6Cu;
    {
        const bool branch_taken_0x2a1e6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1E70u;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2a1e6c) {
            ctx->pc = 0x2A1E7Cu;
            goto label_2a1e7c;
        }
    }
    ctx->pc = 0x2A1E74u;
label_2a1e74:
    // 0x2a1e74: 0x8c42dbc0
    ctx->pc = 0x2a1e74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1e78: 0xc44000ec
    ctx->pc = 0x2a1e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1e7c:
    // 0x2a1e7c: 0xe46000ec
    ctx->pc = 0x2a1e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x2a1e80: 0x3c020036
    ctx->pc = 0x2a1e80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a1e84: 0x8c43dbc0
    ctx->pc = 0x2a1e84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1e88: 0xc4610104
    ctx->pc = 0x2a1e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1e8c: 0x3c014049
    ctx->pc = 0x2a1e8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2a1e90: 0x34210fdb
    ctx->pc = 0x2a1e90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1e94: 0x44810000
    ctx->pc = 0x2a1e94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1e98: 0x46010034
    ctx->pc = 0x2a1e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1e9c: 0x0
    ctx->pc = 0x2a1e9cu;
    // NOP
    // 0x2a1ea0: 0x45000006
    ctx->pc = 0x2A1EA0u;
    {
        const bool branch_taken_0x2a1ea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1EA4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
        if (branch_taken_0x2a1ea0) {
            ctx->pc = 0x2A1EBCu;
            goto label_2a1ebc;
        }
    }
    ctx->pc = 0x2A1EA8u;
    // 0x2a1ea8: 0x3c0140c9
    ctx->pc = 0x2a1ea8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2a1eac: 0x34210fdb
    ctx->pc = 0x2a1eacu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1eb0: 0x44810000
    ctx->pc = 0x2a1eb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1eb4: 0x10000010
    ctx->pc = 0x2A1EB4u;
    {
        const bool branch_taken_0x2a1eb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1EB8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2a1eb4) {
            ctx->pc = 0x2A1EF8u;
            goto label_2a1ef8;
        }
    }
    ctx->pc = 0x2A1EBCu;
label_2a1ebc:
    // 0x2a1ebc: 0xc4410104
    ctx->pc = 0x2a1ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1ec0: 0x3c01c049
    ctx->pc = 0x2a1ec0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2a1ec4: 0x34210fdb
    ctx->pc = 0x2a1ec4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1ec8: 0x44810000
    ctx->pc = 0x2a1ec8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1ecc: 0x46000836
    ctx->pc = 0x2a1eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1ed0: 0x0
    ctx->pc = 0x2a1ed0u;
    // NOP
    // 0x2a1ed4: 0x45000006
    ctx->pc = 0x2A1ED4u;
    {
        const bool branch_taken_0x2a1ed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1ED8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a1ed4) {
            ctx->pc = 0x2A1EF0u;
            goto label_2a1ef0;
        }
    }
    ctx->pc = 0x2A1EDCu;
    // 0x2a1edc: 0x3c0140c9
    ctx->pc = 0x2a1edcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2a1ee0: 0x34210fdb
    ctx->pc = 0x2a1ee0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1ee4: 0x44810000
    ctx->pc = 0x2a1ee4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a1ee8: 0x10000003
    ctx->pc = 0x2A1EE8u;
    {
        const bool branch_taken_0x2a1ee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A1EECu;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2a1ee8) {
            ctx->pc = 0x2A1EF8u;
            goto label_2a1ef8;
        }
    }
    ctx->pc = 0x2A1EF0u;
label_2a1ef0:
    // 0x2a1ef0: 0x8c42dbc0
    ctx->pc = 0x2a1ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a1ef4: 0xc4400104
    ctx->pc = 0x2a1ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a1ef8:
    // 0x2a1ef8: 0xe4600104
    ctx->pc = 0x2a1ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2a1efc: 0x3c110036
    ctx->pc = 0x2a1efcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)54 << 16));
    // 0x2a1f00: 0x8e25dbc0
    ctx->pc = 0x2a1f00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294958016)));
    // 0x2a1f04: 0xc4ac00ec
    ctx->pc = 0x2a1f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1f08: 0x3c04003a
    ctx->pc = 0x2a1f08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2a1f0c: 0x24842520
    ctx->pc = 0x2a1f0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9504));
    // 0x2a1f10: 0x24a500e0
    ctx->pc = 0x2a1f10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 224));
    // 0x2a1f14: 0xc0b57e6
    ctx->pc = 0x2A1F14u;
    SET_GPR_U32(ctx, 31, 0x2A1F1Cu);
    ctx->pc = 0x2A1F18u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F1Cu; }
    }
    if (ctx->pc != 0x2A1F1Cu) { return; }
    ctx->pc = 0x2A1F1Cu;
    // 0x2a1f1c: 0x8e22dbc0
    ctx->pc = 0x2a1f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294958016)));
    // 0x2a1f20: 0x244500e0
    ctx->pc = 0x2a1f20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 224));
    // 0x2a1f24: 0xc44c0104
    ctx->pc = 0x2a1f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1f28: 0xa0202d
    ctx->pc = 0x2a1f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f2c: 0xc0b580a
    ctx->pc = 0x2A1F2Cu;
    SET_GPR_U32(ctx, 31, 0x2A1F34u);
    ctx->pc = 0x2A1F30u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->pc = 0x2D6028u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchVec3_0x2d6028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F34u; }
    }
    if (ctx->pc != 0x2A1F34u) { return; }
    ctx->pc = 0x2A1F34u;
    // 0x2a1f34: 0x8e25dbc0
    ctx->pc = 0x2a1f34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294958016)));
    // 0x2a1f38: 0x24a40030
    ctx->pc = 0x2a1f38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 48));
    // 0x2a1f3c: 0xc09bef0
    ctx->pc = 0x2A1F3Cu;
    SET_GPR_U32(ctx, 31, 0x2A1F44u);
    ctx->pc = 0x2A1F40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 164));
    ctx->pc = 0x26FBC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoShake_0x26fbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F44u; }
    }
    if (ctx->pc != 0x2A1F44u) { return; }
    ctx->pc = 0x2A1F44u;
    // 0x2a1f44: 0x8e25dbc0
    ctx->pc = 0x2a1f44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294958016)));
    // 0x2a1f48: 0xc4a200f4
    ctx->pc = 0x2a1f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a1f4c: 0x46001087
    ctx->pc = 0x2a1f4cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2a1f50: 0xc4a000e0
    ctx->pc = 0x2a1f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1f54: 0x46001002
    ctx->pc = 0x2a1f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a1f58: 0xc4a100a4
    ctx->pc = 0x2a1f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1f5c: 0x46010000
    ctx->pc = 0x2a1f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1f60: 0xe4a00030
    ctx->pc = 0x2a1f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x2a1f64: 0xc4a000e4
    ctx->pc = 0x2a1f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1f68: 0x46001002
    ctx->pc = 0x2a1f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a1f6c: 0xc4a100a8
    ctx->pc = 0x2a1f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1f70: 0x46010000
    ctx->pc = 0x2a1f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1f74: 0xe4a00034
    ctx->pc = 0x2a1f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x2a1f78: 0xc4a000e8
    ctx->pc = 0x2a1f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1f7c: 0x46001082
    ctx->pc = 0x2a1f7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a1f80: 0xc4a000ac
    ctx->pc = 0x2a1f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1f84: 0x46001080
    ctx->pc = 0x2a1f84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a1f88: 0xe4a20038
    ctx->pc = 0x2a1f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x2a1f8c: 0xc09cf00
    ctx->pc = 0x2A1F8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1F94u);
    ctx->pc = 0x2A1F90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 224));
    ctx->pc = 0x273C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        LookInDirection_0x273c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F94u; }
    }
    if (ctx->pc != 0x2A1F94u) { return; }
    ctx->pc = 0x2A1F94u;
    // 0x2a1f94: 0x3c020034
    ctx->pc = 0x2a1f94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2a1f98: 0xac40f520
    ctx->pc = 0x2a1f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964512), GPR_U32(ctx, 0));
    // 0x2a1f9c: 0x3c100034
    ctx->pc = 0x2a1f9cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x2a1fa0: 0x2610eb60
    ctx->pc = 0x2a1fa0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294962016));
    // 0x2a1fa4: 0x8e24dbc0
    ctx->pc = 0x2a1fa4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294958016)));
    // 0x2a1fa8: 0xc48000a4
    ctx->pc = 0x2a1fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1fac: 0xe6000140
    ctx->pc = 0x2a1facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x2a1fb0: 0xc48000a8
    ctx->pc = 0x2a1fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1fb4: 0xe6000144
    ctx->pc = 0x2a1fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x2a1fb8: 0xc48000ac
    ctx->pc = 0x2a1fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1fbc: 0xe6000148
    ctx->pc = 0x2a1fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x2a1fc0: 0xc4800030
    ctx->pc = 0x2a1fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1fc4: 0xe6000070
    ctx->pc = 0x2a1fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2a1fc8: 0xc4800034
    ctx->pc = 0x2a1fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1fcc: 0xe6000074
    ctx->pc = 0x2a1fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2a1fd0: 0xc4800038
    ctx->pc = 0x2a1fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1fd4: 0xe6000078
    ctx->pc = 0x2a1fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2a1fd8: 0xc0b5b9e
    ctx->pc = 0x2A1FD8u;
    SET_GPR_U32(ctx, 31, 0x2A1FE0u);
    ctx->pc = 0x2A1FDCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExtractYPR_0x2d6e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FE0u; }
    }
    if (ctx->pc != 0x2A1FE0u) { return; }
    ctx->pc = 0x2A1FE0u;
    // 0x2a1fe0: 0xc60000b4
    ctx->pc = 0x2a1fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1fe4: 0x3c014049
    ctx->pc = 0x2a1fe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2a1fe8: 0x34210fdb
    ctx->pc = 0x2a1fe8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a1fec: 0x44810800
    ctx->pc = 0x2a1fecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a1ff0: 0x46010080
    ctx->pc = 0x2a1ff0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1ff4: 0x46020834
    ctx->pc = 0x2a1ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1ff8: 0x0
    ctx->pc = 0x2a1ff8u;
    // NOP
    // 0x2a1ffc: 0x45000006
    ctx->pc = 0x2A1FFCu;
    {
        const bool branch_taken_0x2a1ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2000u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x2a1ffc) {
            ctx->pc = 0x2A2018u;
            goto label_2a2018;
        }
    }
    ctx->pc = 0x2A2004u;
    // 0x2a2004: 0x3c0140c9
    ctx->pc = 0x2a2004u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2a2008: 0x34210fdb
    ctx->pc = 0x2a2008u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a200c: 0x44810000
    ctx->pc = 0x2a200cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a2010: 0x1000000e
    ctx->pc = 0x2A2010u;
    {
        const bool branch_taken_0x2a2010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2014u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x2a2010) {
            ctx->pc = 0x2A204Cu;
            goto label_2a204c;
        }
    }
    ctx->pc = 0x2A2018u;
label_2a2018:
    // 0x2a2018: 0x3c020034
    ctx->pc = 0x2a2018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2a201c: 0xc441ec14
    ctx->pc = 0x2a201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2020: 0x3c01c049
    ctx->pc = 0x2a2020u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2a2024: 0x34210fdb
    ctx->pc = 0x2a2024u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a2028: 0x44810000
    ctx->pc = 0x2a2028u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a202c: 0x46000836
    ctx->pc = 0x2a202cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2030: 0x0
    ctx->pc = 0x2a2030u;
    // NOP
    // 0x2a2034: 0x45020005
    ctx->pc = 0x2A2034u;
    {
        const bool branch_taken_0x2a2034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2034) {
            ctx->pc = 0x2A2038u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2A204Cu;
            goto label_2a204c;
        }
    }
    ctx->pc = 0x2A203Cu;
    // 0x2a203c: 0x3c0140c9
    ctx->pc = 0x2a203cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2a2040: 0x34210fdb
    ctx->pc = 0x2a2040u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a2044: 0x44810000
    ctx->pc = 0x2a2044u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a2048: 0x46000800
    ctx->pc = 0x2a2048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a204c:
    // 0x2a204c: 0xe60000b4
    ctx->pc = 0x2a204cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x2a2050: 0x3c100036
    ctx->pc = 0x2a2050u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a2054: 0x8e05dbc0
    ctx->pc = 0x2a2054u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a2058: 0xc0b0f84
    ctx->pc = 0x2A2058u;
    SET_GPR_U32(ctx, 31, 0x2A2060u);
    ctx->pc = 0x2A205Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 48));
    ctx->pc = 0x2C3E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCameraUpdate_0x2c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2060u; }
    }
    if (ctx->pc != 0x2A2060u) { return; }
    ctx->pc = 0x2A2060u;
    // 0x2a2060: 0x3c030036
    ctx->pc = 0x2a2060u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a2064: 0x24020001
    ctx->pc = 0x2a2064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2068: 0xac62db68
    ctx->pc = 0x2a2068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957928), GPR_U32(ctx, 2));
    // 0x2a206c: 0x3c020031
    ctx->pc = 0x2a206cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a2070: 0xdc430e28
    ctx->pc = 0x2a2070u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2a2074: 0x30620001
    ctx->pc = 0x2a2074u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a2078: 0x2103c
    ctx->pc = 0x2a2078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a207c: 0x2103f
    ctx->pc = 0x2a207cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a2080: 0x1040001a
    ctx->pc = 0x2A2080u;
    {
        const bool branch_taken_0x2a2080 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2084u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x2a2080) {
            ctx->pc = 0x2A20ECu;
            goto label_2a20ec;
        }
    }
    ctx->pc = 0x2A2088u;
    // 0x2a2088: 0x10400018
    ctx->pc = 0x2A2088u;
    {
        const bool branch_taken_0x2a2088 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A208Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
        if (branch_taken_0x2a2088) {
            ctx->pc = 0x2A20ECu;
            goto label_2a20ec;
        }
    }
    ctx->pc = 0x2A2090u;
    // 0x2a2090: 0xc44c00ec
    ctx->pc = 0x2a2090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2094: 0x3c014334
    ctx->pc = 0x2a2094u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x2a2098: 0x44810000
    ctx->pc = 0x2a2098u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a209c: 0x46006302
    ctx->pc = 0x2a209cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2a20a0: 0x3c013ea2
    ctx->pc = 0x2a20a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x2a20a4: 0x3421f983
    ctx->pc = 0x2a20a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x2a20a8: 0x44810800
    ctx->pc = 0x2a20a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a20ac: 0xc44d0104
    ctx->pc = 0x2a20acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a20b0: 0x46006b42
    ctx->pc = 0x2a20b0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2a20b4: 0x3c0400ff
    ctx->pc = 0x2a20b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2a20b8: 0x3484ff00
    ctx->pc = 0x2a20b8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x2a20bc: 0x24050001
    ctx->pc = 0x2a20bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a20c0: 0x24060020
    ctx->pc = 0x2a20c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a20c4: 0x3c07003b
    ctx->pc = 0x2a20c4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
    // 0x2a20c8: 0x24e7e5b0
    ctx->pc = 0x2a20c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294960560));
    // 0x2a20cc: 0x46016302
    ctx->pc = 0x2a20ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2a20d0: 0x46016b42
    ctx->pc = 0x2a20d0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2a20d4: 0xc44e00f4
    ctx->pc = 0x2a20d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a20d8: 0xc44f0100
    ctx->pc = 0x2a20d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a20dc: 0xc45000a4
    ctx->pc = 0x2a20dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2a20e0: 0xc45100a8
    ctx->pc = 0x2a20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2a20e4: 0xc0b4822
    ctx->pc = 0x2A20E4u;
    SET_GPR_U32(ctx, 31, 0x2A20ECu);
    ctx->pc = 0x2A20E8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    ctx->pc = 0x2D2088u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintfc_0x2d2088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A20ECu; }
    }
    if (ctx->pc != 0x2A20ECu) { return; }
    ctx->pc = 0x2A20ECu;
label_2a20ec:
    // 0x2a20ec: 0x24020001
    ctx->pc = 0x2a20ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2a20f0:
    // 0x2a20f0: 0xdfbf0020
    ctx->pc = 0x2a20f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a20f4: 0xdfb10010
    ctx->pc = 0x2a20f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a20f8: 0xdfb00000
    ctx->pc = 0x2a20f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a20fc: 0x3e00008
    ctx->pc = 0x2A20FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2100u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A1D4Cu: goto label_2a1d4c;
            case 0x2A1D6Cu: goto label_2a1d6c;
            case 0x2A1D8Cu: goto label_2a1d8c;
            case 0x2A1D9Cu: goto label_2a1d9c;
            case 0x2A1DB0u: goto label_2a1db0;
            case 0x2A1DCCu: goto label_2a1dcc;
            case 0x2A1DF8u: goto label_2a1df8;
            case 0x2A1E00u: goto label_2a1e00;
            case 0x2A1E04u: goto label_2a1e04;
            case 0x2A1E3Cu: goto label_2a1e3c;
            case 0x2A1E74u: goto label_2a1e74;
            case 0x2A1E7Cu: goto label_2a1e7c;
            case 0x2A1EBCu: goto label_2a1ebc;
            case 0x2A1EF0u: goto label_2a1ef0;
            case 0x2A1EF8u: goto label_2a1ef8;
            case 0x2A2018u: goto label_2a2018;
            case 0x2A204Cu: goto label_2a204c;
            case 0x2A20ECu: goto label_2a20ec;
            case 0x2A20F0u: goto label_2a20f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A2104u;
}
