#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _peepBit
// Address: 0x123d20 - 0x123e54
void _peepBit_0x123d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123d20u;

    // 0x123d20: 0x27bdffa0
    ctx->pc = 0x123d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x123d24: 0xffb40040
    ctx->pc = 0x123d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x123d28: 0x3c140017
    ctx->pc = 0x123d28u;
    SET_GPR_U32(ctx, 20, ((uint32_t)23 << 16));
    // 0x123d2c: 0xffb10010
    ctx->pc = 0x123d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123d30: 0x8e821824
    ctx->pc = 0x123d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 6180)));
    // 0x123d34: 0x80882d
    ctx->pc = 0x123d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d38: 0xffbf0050
    ctx->pc = 0x123d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x123d3c: 0xffb30030
    ctx->pc = 0x123d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x123d40: 0xffb20020
    ctx->pc = 0x123d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x123d44: 0x14400008
    ctx->pc = 0x123D44u;
    {
        const bool branch_taken_0x123d44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x123D48u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x123d44) {
            ctx->pc = 0x123D68u;
            goto label_123d68;
        }
    }
    ctx->pc = 0x123D4Cu;
    // 0x123d4c: 0x3c130017
    ctx->pc = 0x123d4cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)23 << 16));
    // 0x123d50: 0x8e62209c
    ctx->pc = 0x123d50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8348)));
    // 0x123d54: 0x51102a
    ctx->pc = 0x123d54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x123d58: 0x10400032
    ctx->pc = 0x123D58u;
    {
        const bool branch_taken_0x123d58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123D5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x123d58) {
            ctx->pc = 0x123E24u;
            goto label_123e24;
        }
    }
    ctx->pc = 0x123D60u;
    // 0x123d60: 0x10000003
    ctx->pc = 0x123D60u;
    {
        const bool branch_taken_0x123d60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x123d60) {
            ctx->pc = 0x123D70u;
            goto label_123d70;
        }
    }
    ctx->pc = 0x123D68u;
label_123d68:
    // 0x123d68: 0x3c130017
    ctx->pc = 0x123d68u;
    SET_GPR_U32(ctx, 19, ((uint32_t)23 << 16));
    // 0x123d6c: 0x3c021000
    ctx->pc = 0x123d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_123d70:
    // 0x123d70: 0x3c048000
    ctx->pc = 0x123d70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x123d74: 0x34422010
    ctx->pc = 0x123d74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x123d78: 0x34844000
    ctx->pc = 0x123d78u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x123d7c: 0x8c430000
    ctx->pc = 0x123d7cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x123d80: 0x3c028000
    ctx->pc = 0x123d80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x123d84: 0x641824
    ctx->pc = 0x123d84u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x123d88: 0x14620016
    ctx->pc = 0x123D88u;
    {
        const bool branch_taken_0x123d88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x123D8Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123d88) {
            ctx->pc = 0x123DE4u;
            goto label_123de4;
        }
    }
    ctx->pc = 0x123D90u;
    // 0x123d90: 0x3c100017
    ctx->pc = 0x123d90u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x123d94: 0x3c120017
    ctx->pc = 0x123d94u;
    SET_GPR_U32(ctx, 18, ((uint32_t)23 << 16));
label_123d98:
    // 0x123d98: 0xc0102d
    ctx->pc = 0x123d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d9c: 0x28421389
    ctx->pc = 0x123d9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x123da0: 0x14400005
    ctx->pc = 0x123DA0u;
    {
        const bool branch_taken_0x123da0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x123DA4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x123da0) {
            ctx->pc = 0x123DB8u;
            goto label_123db8;
        }
    }
    ctx->pc = 0x123DA8u;
    // 0x123da8: 0x3c020017
    ctx->pc = 0x123da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x123dac: 0xc047df4
    ctx->pc = 0x123DACu;
    SET_GPR_U32(ctx, 31, 0x123DB4u);
    ctx->pc = 0x123DB0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123DB4u; }
    }
    if (ctx->pc != 0x123DB4u) { return; }
    ctx->pc = 0x123DB4u;
    // 0x123db4: 0x302d
    ctx->pc = 0x123db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123db8:
    // 0x123db8: 0x3c031000
    ctx->pc = 0x123db8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x123dbc: 0x3c048000
    ctx->pc = 0x123dbcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x123dc0: 0x34632010
    ctx->pc = 0x123dc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x123dc4: 0x34844000
    ctx->pc = 0x123dc4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x123dc8: 0x8c620000
    ctx->pc = 0x123dc8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x123dcc: 0x3c058000
    ctx->pc = 0x123dccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x123dd0: 0x441024
    ctx->pc = 0x123dd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x123dd4: 0x1045fff0
    ctx->pc = 0x123DD4u;
    {
        const bool branch_taken_0x123dd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x123DD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x123dd4) {
            ctx->pc = 0x123D98u;
            goto label_123d98;
        }
    }
    ctx->pc = 0x123DDCu;
    // 0x123ddc: 0x10000005
    ctx->pc = 0x123DDCu;
    {
        const bool branch_taken_0x123ddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123DE0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
        if (branch_taken_0x123ddc) {
            ctx->pc = 0x123DF4u;
            goto label_123df4;
        }
    }
    ctx->pc = 0x123DE4u;
label_123de4:
    // 0x123de4: 0x3c100017
    ctx->pc = 0x123de4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x123de8: 0x3c120017
    ctx->pc = 0x123de8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)23 << 16));
    // 0x123dec: 0x3c021000
    ctx->pc = 0x123decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x123df0: 0x3c054000
    ctx->pc = 0x123df0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
label_123df4:
    // 0x123df4: 0x34422000
    ctx->pc = 0x123df4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x123df8: 0x26042108
    ctx->pc = 0x123df8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8456));
    // 0x123dfc: 0xac450000
    ctx->pc = 0x123dfcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x123e00: 0x8c830010
    ctx->pc = 0x123e00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x123e04: 0xc048eae
    ctx->pc = 0x123E04u;
    SET_GPR_U32(ctx, 31, 0x123E0Cu);
    ctx->pc = 0x123E08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6180), GPR_U32(ctx, 3));
    ctx->pc = 0x123AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x123ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E0Cu; }
    }
    if (ctx->pc != 0x123E0Cu) { return; }
    ctx->pc = 0x123E0Cu;
    // 0x123e0c: 0x2103c
    ctx->pc = 0x123e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x123e10: 0x2103f
    ctx->pc = 0x123e10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x123e14: 0x24030020
    ctx->pc = 0x123e14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x123e18: 0xae63209c
    ctx->pc = 0x123e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8348), GPR_U32(ctx, 3));
    // 0x123e1c: 0x10000002
    ctx->pc = 0x123E1Cu;
    {
        const bool branch_taken_0x123e1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123E20u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8344), GPR_U32(ctx, 2));
        if (branch_taken_0x123e1c) {
            ctx->pc = 0x123E28u;
            goto label_123e28;
        }
    }
    ctx->pc = 0x123E24u;
label_123e24:
    // 0x123e24: 0x3c120017
    ctx->pc = 0x123e24u;
    SET_GPR_U32(ctx, 18, ((uint32_t)23 << 16));
label_123e28:
    // 0x123e28: 0x8e432098
    ctx->pc = 0x123e28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8344)));
    // 0x123e2c: 0x111023
    ctx->pc = 0x123e2cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x123e30: 0xdfbf0050
    ctx->pc = 0x123e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123e34: 0xdfb40040
    ctx->pc = 0x123e34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123e38: 0x431006
    ctx->pc = 0x123e38u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x123e3c: 0xdfb30030
    ctx->pc = 0x123e3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123e40: 0xdfb20020
    ctx->pc = 0x123e40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123e44: 0xdfb10010
    ctx->pc = 0x123e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123e48: 0xdfb00000
    ctx->pc = 0x123e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123e4c: 0x3e00008
    ctx->pc = 0x123E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123E50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123D68u: goto label_123d68;
            case 0x123D70u: goto label_123d70;
            case 0x123D98u: goto label_123d98;
            case 0x123DB8u: goto label_123db8;
            case 0x123DE4u: goto label_123de4;
            case 0x123DF4u: goto label_123df4;
            case 0x123E24u: goto label_123e24;
            case 0x123E28u: goto label_123e28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123E54u;
}
