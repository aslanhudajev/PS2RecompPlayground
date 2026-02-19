#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: add_target
// Address: 0x268d48 - 0x268e40
void add_target_0x268d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x268d48u;

    // 0x268d48: 0x27bdffd0
    ctx->pc = 0x268d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268d4c: 0xffbf0020
    ctx->pc = 0x268d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x268d50: 0xffb10010
    ctx->pc = 0x268d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x268d54: 0xffb00000
    ctx->pc = 0x268d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x268d58: 0x80802d
    ctx->pc = 0x268d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d5c: 0x3c020034
    ctx->pc = 0x268d5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268d60: 0x8c43f8fc
    ctx->pc = 0x268d60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x268d64: 0x2862000f
    ctx->pc = 0x268d64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 15));
    // 0x268d68: 0x10400030
    ctx->pc = 0x268D68u;
    {
        const bool branch_taken_0x268d68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x268D6Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x268d68) {
            ctx->pc = 0x268E2Cu;
            goto label_268e2c;
        }
    }
    ctx->pc = 0x268D70u;
    // 0x268d70: 0x14600004
    ctx->pc = 0x268D70u;
    {
        const bool branch_taken_0x268d70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x268D74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x268d70) {
            ctx->pc = 0x268D84u;
            goto label_268d84;
        }
    }
    ctx->pc = 0x268D78u;
    // 0x268d78: 0xc09a342
    ctx->pc = 0x268D78u;
    SET_GPR_U32(ctx, 31, 0x268D80u);
    ctx->pc = 0x268D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_targets_0x268d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D80u; }
    }
    if (ctx->pc != 0x268D80u) { return; }
    ctx->pc = 0x268D80u;
    // 0x268d80: 0x202d
    ctx->pc = 0x268d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268d84:
    // 0x268d84: 0x3c020034
    ctx->pc = 0x268d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268d88: 0x2443f530
    ctx->pc = 0x268d88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x268d8c: 0x0
    ctx->pc = 0x268d8cu;
    // NOP
label_268d90:
    // 0x268d90: 0x8c620004
    ctx->pc = 0x268d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x268d94: 0x12020025
    ctx->pc = 0x268D94u;
    {
        const bool branch_taken_0x268d94 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x268D98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x268d94) {
            ctx->pc = 0x268E2Cu;
            goto label_268e2c;
        }
    }
    ctx->pc = 0x268D9Cu;
    // 0x268d9c: 0x2882000f
    ctx->pc = 0x268d9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 15));
    // 0x268da0: 0x1440fffb
    ctx->pc = 0x268DA0u;
    {
        const bool branch_taken_0x268da0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x268DA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x268da0) {
            ctx->pc = 0x268D90u;
            goto label_268d90;
        }
    }
    ctx->pc = 0x268DA8u;
    // 0x268da8: 0x202d
    ctx->pc = 0x268da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268dac: 0x3c050034
    ctx->pc = 0x268dacu;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x268db0: 0x8ca2f530
    ctx->pc = 0x268db0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294964528)));
    // 0x268db4: 0x14400004
    ctx->pc = 0x268DB4u;
    {
        const bool branch_taken_0x268db4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x268DB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294964528));
        if (branch_taken_0x268db4) {
            ctx->pc = 0x268DC8u;
            goto label_268dc8;
        }
    }
    ctx->pc = 0x268DBCu;
    // 0x268dbc: 0x24020001
    ctx->pc = 0x268dbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x268dc0: 0x1000000a
    ctx->pc = 0x268DC0u;
    {
        const bool branch_taken_0x268dc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x268DC4u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294964528), GPR_U32(ctx, 2));
        if (branch_taken_0x268dc0) {
            ctx->pc = 0x268DECu;
            goto label_268dec;
        }
    }
    ctx->pc = 0x268DC8u;
label_268dc8:
    // 0x268dc8: 0x24840001
    ctx->pc = 0x268dc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_268dcc:
    // 0x268dcc: 0x2882000f
    ctx->pc = 0x268dccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 15));
    // 0x268dd0: 0x1040000c
    ctx->pc = 0x268DD0u;
    {
        const bool branch_taken_0x268dd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x268DD4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x268dd0) {
            ctx->pc = 0x268E04u;
            goto label_268e04;
        }
    }
    ctx->pc = 0x268DD8u;
    // 0x268dd8: 0x8c620000
    ctx->pc = 0x268dd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268ddc: 0x5440fffb
    ctx->pc = 0x268DDCu;
    {
        const bool branch_taken_0x268ddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x268ddc) {
            ctx->pc = 0x268DE0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x268DCCu;
            goto label_268dcc;
        }
    }
    ctx->pc = 0x268DE4u;
    // 0x268de4: 0x24020001
    ctx->pc = 0x268de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x268de8: 0xac620000
    ctx->pc = 0x268de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_268dec:
    // 0x268dec: 0xac700004
    ctx->pc = 0x268decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x268df0: 0x3c030034
    ctx->pc = 0x268df0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x268df4: 0x8c62f8fc
    ctx->pc = 0x268df4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965500)));
    // 0x268df8: 0x24420001
    ctx->pc = 0x268df8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x268dfc: 0xac62f8fc
    ctx->pc = 0x268dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965500), GPR_U32(ctx, 2));
    // 0x268e00: 0x24110001
    ctx->pc = 0x268e00u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_268e04:
    // 0x268e04: 0x1220000a
    ctx->pc = 0x268E04u;
    {
        const bool branch_taken_0x268e04 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x268E08u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x268e04) {
            ctx->pc = 0x268E30u;
            goto label_268e30;
        }
    }
    ctx->pc = 0x268E0Cu;
    // 0x268e0c: 0xc09aba6
    ctx->pc = 0x268E0Cu;
    SET_GPR_U32(ctx, 31, 0x268E14u);
    ctx->pc = 0x268E10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x26AE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        CameraNewPos_0x26ae98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E14u; }
    }
    if (ctx->pc != 0x268E14u) { return; }
    ctx->pc = 0x268E14u;
    // 0x268e14: 0x3c020034
    ctx->pc = 0x268e14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268e18: 0x8c45f8fc
    ctx->pc = 0x268e18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x268e1c: 0x38a50001
    ctx->pc = 0x268e1cu;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x268e20: 0x202d
    ctx->pc = 0x268e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e24: 0xc09a2fe
    ctx->pc = 0x268E24u;
    SET_GPR_U32(ctx, 31, 0x268E2Cu);
    ctx->pc = 0x268E28u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x268BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        recalc_lookat_0x268bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E2Cu; }
    }
    if (ctx->pc != 0x268E2Cu) { return; }
    ctx->pc = 0x268E2Cu;
label_268e2c:
    // 0x268e2c: 0xdfbf0020
    ctx->pc = 0x268e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_268e30:
    // 0x268e30: 0xdfb10010
    ctx->pc = 0x268e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268e34: 0xdfb00000
    ctx->pc = 0x268e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268e38: 0x3e00008
    ctx->pc = 0x268E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268E3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268D84u: goto label_268d84;
            case 0x268D90u: goto label_268d90;
            case 0x268DC8u: goto label_268dc8;
            case 0x268DCCu: goto label_268dcc;
            case 0x268DECu: goto label_268dec;
            case 0x268E04u: goto label_268e04;
            case 0x268E2Cu: goto label_268e2c;
            case 0x268E30u: goto label_268e30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268E40u;
}
