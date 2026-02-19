#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: check_active_players
// Address: 0x285ec8 - 0x285f68
void check_active_players_0x285ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x285ec8u;

    // 0x285ec8: 0x27bdffa0
    ctx->pc = 0x285ec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x285ecc: 0xffbf0050
    ctx->pc = 0x285eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x285ed0: 0xffb40040
    ctx->pc = 0x285ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x285ed4: 0xffb30030
    ctx->pc = 0x285ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x285ed8: 0xffb20020
    ctx->pc = 0x285ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x285edc: 0xffb10010
    ctx->pc = 0x285edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x285ee0: 0xffb00000
    ctx->pc = 0x285ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285ee4: 0x902d
    ctx->pc = 0x285ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ee8: 0x2404ffff
    ctx->pc = 0x285ee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285eec: 0xc081c4c
    ctx->pc = 0x285EECu;
    SET_GPR_U32(ctx, 31, 0x285EF4u);
    ctx->pc = 0x285EF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x207130u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_menu_accept_0x207130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285EF4u; }
    }
    if (ctx->pc != 0x285EF4u) { return; }
    ctx->pc = 0x285EF4u;
    // 0x285ef4: 0x802d
    ctx->pc = 0x285ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ef8: 0x3c020032
    ctx->pc = 0x285ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x285efc: 0x24511bc0
    ctx->pc = 0x285efcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x285f00: 0x3c140032
    ctx->pc = 0x285f00u;
    SET_GPR_U32(ctx, 20, ((uint32_t)50 << 16));
    // 0x285f04: 0x24130001
    ctx->pc = 0x285f04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_285f08:
    // 0x285f08: 0x8e2200fc
    ctx->pc = 0x285f08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x285f0c: 0x5440000a
    ctx->pc = 0x285F0Cu;
    {
        const bool branch_taken_0x285f0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x285f0c) {
            ctx->pc = 0x285F10u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x285F38u;
            goto label_285f38;
        }
    }
    ctx->pc = 0x285F14u;
    // 0x285f14: 0x2131004
    ctx->pc = 0x285f14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 16) & 0x1F));
    // 0x285f18: 0x8e8307b4
    ctx->pc = 0x285f18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 1972)));
    // 0x285f1c: 0x431024
    ctx->pc = 0x285f1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285f20: 0x50400005
    ctx->pc = 0x285F20u;
    {
        const bool branch_taken_0x285f20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x285f20) {
            ctx->pc = 0x285F24u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x285F38u;
            goto label_285f38;
        }
    }
    ctx->pc = 0x285F28u;
    // 0x285f28: 0xc08c516
    ctx->pc = 0x285F28u;
    SET_GPR_U32(ctx, 31, 0x285F30u);
    ctx->pc = 0x285F2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231458u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_player_0x231458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F30u; }
    }
    if (ctx->pc != 0x285F30u) { return; }
    ctx->pc = 0x285F30u;
    // 0x285f30: 0x26520001
    ctx->pc = 0x285f30u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x285f34: 0x26100001
    ctx->pc = 0x285f34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_285f38:
    // 0x285f38: 0x2a020004
    ctx->pc = 0x285f38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x285f3c: 0x1440fff2
    ctx->pc = 0x285F3Cu;
    {
        const bool branch_taken_0x285f3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x285F40u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x285f3c) {
            ctx->pc = 0x285F08u;
            goto label_285f08;
        }
    }
    ctx->pc = 0x285F44u;
    // 0x285f44: 0x240102d
    ctx->pc = 0x285f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285f48: 0xdfbf0050
    ctx->pc = 0x285f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285f4c: 0xdfb40040
    ctx->pc = 0x285f4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285f50: 0xdfb30030
    ctx->pc = 0x285f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285f54: 0xdfb20020
    ctx->pc = 0x285f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285f58: 0xdfb10010
    ctx->pc = 0x285f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285f5c: 0xdfb00000
    ctx->pc = 0x285f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285f60: 0x3e00008
    ctx->pc = 0x285F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285F08u: goto label_285f08;
            case 0x285F38u: goto label_285f38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285F68u;
}
