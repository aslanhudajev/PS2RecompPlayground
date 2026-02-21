#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_panel_blits
// Address: 0x229d98 - 0x229e74
void init_panel_blits_0x229d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x229d98u;

    // 0x229d98: 0x27bdff70
    ctx->pc = 0x229d98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x229d9c: 0xffbf0080
    ctx->pc = 0x229d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x229da0: 0xffb60070
    ctx->pc = 0x229da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x229da4: 0xffb50060
    ctx->pc = 0x229da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x229da8: 0xffb40050
    ctx->pc = 0x229da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x229dac: 0xffb30040
    ctx->pc = 0x229dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x229db0: 0xffb20030
    ctx->pc = 0x229db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x229db4: 0xffb10020
    ctx->pc = 0x229db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x229db8: 0xffb00010
    ctx->pc = 0x229db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x229dbc: 0x3c020032
    ctx->pc = 0x229dbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229dc0: 0x24421188
    ctx->pc = 0x229dc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4488));
    // 0x229dc4: 0x41900
    ctx->pc = 0x229dc4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x229dc8: 0x621821
    ctx->pc = 0x229dc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229dcc: 0x8c620000
    ctx->pc = 0x229dccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229dd0: 0x1440001e
    ctx->pc = 0x229DD0u;
    {
        const bool branch_taken_0x229dd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229DD4u;
        SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 4), 7));
        if (branch_taken_0x229dd0) {
            ctx->pc = 0x229E4Cu;
            goto label_229e4c;
        }
    }
    ctx->pc = 0x229DD8u;
    // 0x229dd8: 0x802d
    ctx->pc = 0x229dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ddc: 0x24920031
    ctx->pc = 0x229ddcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 4), 49));
    // 0x229de0: 0x24160024
    ctx->pc = 0x229de0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 36));
    // 0x229de4: 0x3c020032
    ctx->pc = 0x229de4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229de8: 0x24550df8
    ctx->pc = 0x229de8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 3576));
    // 0x229dec: 0x3c020032
    ctx->pc = 0x229decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229df0: 0x24541188
    ctx->pc = 0x229df0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4488));
    // 0x229df4: 0x48900
    ctx->pc = 0x229df4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 4), 4));
    // 0x229df8: 0x2602fffe
    ctx->pc = 0x229df8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x229dfc: 0x0
    ctx->pc = 0x229dfcu;
    // NOP
label_229e00:
    // 0x229e00: 0x2c420002
    ctx->pc = 0x229e00u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x229e04: 0x50400003
    ctx->pc = 0x229E04u;
    {
        const bool branch_taken_0x229e04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x229e04) {
            ctx->pc = 0x229E08u;
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 18));
            ctx->pc = 0x229E14u;
            goto label_229e14;
        }
    }
    ctx->pc = 0x229E0Cu;
    // 0x229e0c: 0x10000002
    ctx->pc = 0x229E0Cu;
    {
        const bool branch_taken_0x229e0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229E10u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x229e0c) {
            ctx->pc = 0x229E18u;
            goto label_229e18;
        }
    }
    ctx->pc = 0x229E14u;
label_229e14:
    // 0x229e14: 0xa3a00001
    ctx->pc = 0x229e14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
label_229e18:
    // 0x229e18: 0x2161018
    ctx->pc = 0x229e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229e1c: 0x552021
    ctx->pc = 0x229e1cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x229e20: 0x260282d
    ctx->pc = 0x229e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e24: 0xc08a508
    ctx->pc = 0x229E24u;
    SET_GPR_U32(ctx, 31, 0x229E2Cu);
    ctx->pc = 0x229E28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229420u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_piece_0x229420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229E2Cu; }
    }
    if (ctx->pc != 0x229E2Cu) { return; }
    ctx->pc = 0x229E2Cu;
    // 0x229e2c: 0x101880
    ctx->pc = 0x229e2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x229e30: 0x711821
    ctx->pc = 0x229e30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x229e34: 0x741821
    ctx->pc = 0x229e34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x229e38: 0xac620000
    ctx->pc = 0x229e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x229e3c: 0x26100001
    ctx->pc = 0x229e3cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x229e40: 0x2a020004
    ctx->pc = 0x229e40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x229e44: 0x1440ffee
    ctx->pc = 0x229E44u;
    {
        const bool branch_taken_0x229e44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229E48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967294));
        if (branch_taken_0x229e44) {
            ctx->pc = 0x229E00u;
            goto label_229e00;
        }
    }
    ctx->pc = 0x229E4Cu;
label_229e4c:
    // 0x229e4c: 0xdfbf0080
    ctx->pc = 0x229e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x229e50: 0xdfb60070
    ctx->pc = 0x229e50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229e54: 0xdfb50060
    ctx->pc = 0x229e54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229e58: 0xdfb40050
    ctx->pc = 0x229e58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229e5c: 0xdfb30040
    ctx->pc = 0x229e5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229e60: 0xdfb20030
    ctx->pc = 0x229e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229e64: 0xdfb10020
    ctx->pc = 0x229e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229e68: 0xdfb00010
    ctx->pc = 0x229e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229e6c: 0x3e00008
    ctx->pc = 0x229E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229E70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229E00u: goto label_229e00;
            case 0x229E14u: goto label_229e14;
            case 0x229E18u: goto label_229e18;
            case 0x229E4Cu: goto label_229e4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229E74u;
}
