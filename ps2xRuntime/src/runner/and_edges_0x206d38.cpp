#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: and_edges
// Address: 0x206d38 - 0x206e60
void and_edges_0x206d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206d38u;

    // 0x206d38: 0x27bdff60
    ctx->pc = 0x206d38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x206d3c: 0xffbf0090
    ctx->pc = 0x206d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x206d40: 0xffbe0080
    ctx->pc = 0x206d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x206d44: 0xffb70070
    ctx->pc = 0x206d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x206d48: 0xffb60060
    ctx->pc = 0x206d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x206d4c: 0xffb50050
    ctx->pc = 0x206d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x206d50: 0xffb40040
    ctx->pc = 0x206d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x206d54: 0xffb30030
    ctx->pc = 0x206d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x206d58: 0xffb20020
    ctx->pc = 0x206d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x206d5c: 0xffb10010
    ctx->pc = 0x206d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x206d60: 0xffb00000
    ctx->pc = 0x206d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206d64: 0x80802d
    ctx->pc = 0x206d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d68: 0x902d
    ctx->pc = 0x206d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d6c: 0x3c1e0004
    ctx->pc = 0x206d6cu;
    SET_GPR_U32(ctx, 30, ((uint32_t)4 << 16));
    // 0x206d70: 0x3c140031
    ctx->pc = 0x206d70u;
    SET_GPR_U32(ctx, 20, ((uint32_t)49 << 16));
    // 0x206d74: 0x3c02003c
    ctx->pc = 0x206d74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x206d78: 0x2457b2c0
    ctx->pc = 0x206d78u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x206d7c: 0x3c02003c
    ctx->pc = 0x206d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x206d80: 0x2456b2e0
    ctx->pc = 0x206d80u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x206d84: 0x24130001
    ctx->pc = 0x206d84u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x206d88: 0x3c02003c
    ctx->pc = 0x206d88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x206d8c: 0x2455b320
    ctx->pc = 0x206d8cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294947616));
    // 0x206d90: 0x882d
    ctx->pc = 0x206d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d94: 0x0
    ctx->pc = 0x206d94u;
    // NOP
label_206d98:
    // 0x206d98: 0xc081b46
    ctx->pc = 0x206D98u;
    SET_GPR_U32(ctx, 31, 0x206DA0u);
    ctx->pc = 0x206D9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        assigned_controller_0x206d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206DA0u; }
    }
    if (ctx->pc != 0x206DA0u) { return; }
    ctx->pc = 0x206DA0u;
    // 0x206da0: 0x40182d
    ctx->pc = 0x206da0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206da4: 0x8e821b1c
    ctx->pc = 0x206da4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 6940)));
    // 0x206da8: 0x1040000d
    ctx->pc = 0x206DA8u;
    {
        const bool branch_taken_0x206da8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206DACu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 30));
        if (branch_taken_0x206da8) {
            ctx->pc = 0x206DE0u;
            goto label_206de0;
        }
    }
    ctx->pc = 0x206DB0u;
    // 0x206db0: 0x1460000c
    ctx->pc = 0x206DB0u;
    {
        const bool branch_taken_0x206db0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x206DB4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x206db0) {
            ctx->pc = 0x206DE4u;
            goto label_206de4;
        }
    }
    ctx->pc = 0x206DB8u;
    // 0x206db8: 0x121880
    ctx->pc = 0x206db8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x206dbc: 0x771021
    ctx->pc = 0x206dbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x206dc0: 0x8c420000
    ctx->pc = 0x206dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206dc4: 0x2021024
    ctx->pc = 0x206dc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x206dc8: 0x10400005
    ctx->pc = 0x206DC8u;
    {
        const bool branch_taken_0x206dc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206DCCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        if (branch_taken_0x206dc8) {
            ctx->pc = 0x206DE0u;
            goto label_206de0;
        }
    }
    ctx->pc = 0x206DD0u;
    // 0x206dd0: 0x8c420000
    ctx->pc = 0x206dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206dd4: 0x2021024
    ctx->pc = 0x206dd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x206dd8: 0x260882d
    ctx->pc = 0x206dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ddc: 0x2880b
    ctx->pc = 0x206ddcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
label_206de0:
    // 0x206de0: 0x121080
    ctx->pc = 0x206de0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_206de4:
    // 0x206de4: 0x551021
    ctx->pc = 0x206de4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x206de8: 0x8c420000
    ctx->pc = 0x206de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206dec: 0x2021024
    ctx->pc = 0x206decu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x206df0: 0x262880b
    ctx->pc = 0x206df0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 19));
    // 0x206df4: 0x12200009
    ctx->pc = 0x206DF4u;
    {
        const bool branch_taken_0x206df4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x206DF8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 6940)));
        if (branch_taken_0x206df4) {
            ctx->pc = 0x206E1Cu;
            goto label_206e1c;
        }
    }
    ctx->pc = 0x206DFCu;
    // 0x206dfc: 0x1040000c
    ctx->pc = 0x206DFCu;
    {
        const bool branch_taken_0x206dfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206E00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x206dfc) {
            ctx->pc = 0x206E30u;
            goto label_206e30;
        }
    }
    ctx->pc = 0x206E04u;
    // 0x206e04: 0xc081ae8
    ctx->pc = 0x206E04u;
    SET_GPR_U32(ctx, 31, 0x206E0Cu);
    ctx->pc = 0x206E08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        assign_controller_0x206ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E0Cu; }
    }
    if (ctx->pc != 0x206E0Cu) { return; }
    ctx->pc = 0x206E0Cu;
    // 0x206e0c: 0x40182d
    ctx->pc = 0x206e0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e10: 0x2402ffff
    ctx->pc = 0x206e10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206e14: 0x14620006
    ctx->pc = 0x206E14u;
    {
        const bool branch_taken_0x206e14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x206E18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x206e14) {
            ctx->pc = 0x206E30u;
            goto label_206e30;
        }
    }
    ctx->pc = 0x206E1Cu;
label_206e1c:
    // 0x206e1c: 0x26520001
    ctx->pc = 0x206e1cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x206e20: 0x2a420008
    ctx->pc = 0x206e20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 8));
    // 0x206e24: 0x1440ffdc
    ctx->pc = 0x206E24u;
    {
        const bool branch_taken_0x206e24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206E28u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x206e24) {
            ctx->pc = 0x206D98u;
            goto label_206d98;
        }
    }
    ctx->pc = 0x206E2Cu;
    // 0x206e2c: 0x102d
    ctx->pc = 0x206e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206e30:
    // 0x206e30: 0xdfbf0090
    ctx->pc = 0x206e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x206e34: 0xdfbe0080
    ctx->pc = 0x206e34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x206e38: 0xdfb70070
    ctx->pc = 0x206e38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x206e3c: 0xdfb60060
    ctx->pc = 0x206e3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206e40: 0xdfb50050
    ctx->pc = 0x206e40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206e44: 0xdfb40040
    ctx->pc = 0x206e44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206e48: 0xdfb30030
    ctx->pc = 0x206e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206e4c: 0xdfb20020
    ctx->pc = 0x206e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206e50: 0xdfb10010
    ctx->pc = 0x206e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206e54: 0xdfb00000
    ctx->pc = 0x206e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206e58: 0x3e00008
    ctx->pc = 0x206E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206D98u: goto label_206d98;
            case 0x206DE0u: goto label_206de0;
            case 0x206DE4u: goto label_206de4;
            case 0x206E1Cu: goto label_206e1c;
            case 0x206E30u: goto label_206e30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206E60u;
}
