#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cmd_sem_init
// Address: 0x150cd0 - 0x150d64
void cmd_sem_init_0x150cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cmd_sem_init");


    ctx->pc = 0x150cd0u;

    // 0x150cd0: 0x27bdffb0
    ctx->pc = 0x150cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x150cd4: 0x2403ffff
    ctx->pc = 0x150cd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150cd8: 0xffb10030
    ctx->pc = 0x150cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x150cdc: 0x3c110022
    ctx->pc = 0x150cdcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)34 << 16));
    // 0x150ce0: 0xffbf0040
    ctx->pc = 0x150ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x150ce4: 0x8e227ca8
    ctx->pc = 0x150ce4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 31912)));
    // 0x150ce8: 0x10430007
    ctx->pc = 0x150CE8u;
    {
        const bool branch_taken_0x150ce8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x150CECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        if (branch_taken_0x150ce8) {
            ctx->pc = 0x150D08u;
            goto label_150d08;
        }
    }
    ctx->pc = 0x150CF0u;
    // 0x150cf0: 0x3c100022
    ctx->pc = 0x150cf0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x150cf4: 0x8e027cac
    ctx->pc = 0x150cf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 31916)));
    // 0x150cf8: 0x14430016
    ctx->pc = 0x150CF8u;
    {
        const bool branch_taken_0x150cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x150CFCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x150cf8) {
            ctx->pc = 0x150D54u;
            goto label_150d54;
        }
    }
    ctx->pc = 0x150D00u;
    // 0x150d00: 0x10000003
    ctx->pc = 0x150D00u;
    {
        const bool branch_taken_0x150d00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150D04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x150d00) {
            ctx->pc = 0x150D10u;
            goto label_150d10;
        }
    }
    ctx->pc = 0x150D08u;
label_150d08:
    // 0x150d08: 0x3c100022
    ctx->pc = 0x150d08u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x150d0c: 0x24020001
    ctx->pc = 0x150d0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_150d10:
    // 0x150d10: 0xafa00014
    ctx->pc = 0x150d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x150d14: 0xafa20004
    ctx->pc = 0x150d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x150d18: 0x3a0202d
    ctx->pc = 0x150d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d1c: 0xc055238
    ctx->pc = 0x150D1Cu;
    SET_GPR_U32(ctx, 31, 0x150D24u);
    ctx->pc = 0x150D20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1548E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1548e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D24u; }
        else if (ctx->pc != 0x150D24u) { ctx->pc = 0x150D24u; }
    }
    if (ctx->pc != 0x150D24u) { return; }
    ctx->pc = 0x150D24u;
    // 0x150d24: 0x3a0202d
    ctx->pc = 0x150d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d28: 0xc055238
    ctx->pc = 0x150D28u;
    SET_GPR_U32(ctx, 31, 0x150D30u);
    ctx->pc = 0x150D2Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 31912), GPR_U32(ctx, 2));
    ctx->pc = 0x1548E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1548e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D30u; }
        else if (ctx->pc != 0x150D30u) { ctx->pc = 0x150D30u; }
    }
    if (ctx->pc != 0x150D30u) { return; }
    ctx->pc = 0x150D30u;
    // 0x150d30: 0xae027cac
    ctx->pc = 0x150d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31916), GPR_U32(ctx, 2));
    // 0x150d34: 0x3a0202d
    ctx->pc = 0x150d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d38: 0xc055238
    ctx->pc = 0x150D38u;
    SET_GPR_U32(ctx, 31, 0x150D40u);
    ctx->pc = 0x150D3Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1548E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1548e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D40u; }
        else if (ctx->pc != 0x150D40u) { ctx->pc = 0x150D40u; }
    }
    if (ctx->pc != 0x150D40u) { return; }
    ctx->pc = 0x150D40u;
    // 0x150d40: 0x3c030022
    ctx->pc = 0x150d40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x150d44: 0xac627ca0
    ctx->pc = 0x150d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31904), GPR_U32(ctx, 2));
    // 0x150d48: 0x3c020022
    ctx->pc = 0x150d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x150d4c: 0xac407cb0
    ctx->pc = 0x150d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31920), GPR_U32(ctx, 0));
    // 0x150d50: 0xdfbf0040
    ctx->pc = 0x150d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_150d54:
    // 0x150d54: 0xdfb10030
    ctx->pc = 0x150d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150d58: 0xdfb00020
    ctx->pc = 0x150d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150d5c: 0x3e00008
    ctx->pc = 0x150D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150D60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150D08u: goto label_150d08;
            case 0x150D10u: goto label_150d10;
            case 0x150D54u: goto label_150d54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150D64u;
}
