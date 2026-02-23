#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iSuspendThread
// Address: 0x155930 - 0x1559c8
void iSuspendThread_0x155930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iSuspendThread");


    ctx->pc = 0x155930u;

    // 0x155930: 0x27bdffe0
    ctx->pc = 0x155930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155934: 0xffbf0010
    ctx->pc = 0x155934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155938: 0xffb00000
    ctx->pc = 0x155938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15593c: 0x2403ffd1
    ctx->pc = 0x15593cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x155940: 0xc
    ctx->pc = 0x155940u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x155944: 0x40802d
    ctx->pc = 0x155944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155948: 0x12040005
    ctx->pc = 0x155948u;
    {
        const bool branch_taken_0x155948 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x15594Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 256));
        if (branch_taken_0x155948) {
            ctx->pc = 0x155960u;
            goto label_155960;
        }
    }
    ctx->pc = 0x155950u;
    // 0x155950: 0xc055218
    ctx->pc = 0x155950u;
    SET_GPR_U32(ctx, 31, 0x155958u);
    ctx->pc = 0x154860u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iSuspendThread_0x154860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155958u; }
        else if (ctx->pc != 0x155958u) { ctx->pc = 0x155958u; }
    }
    if (ctx->pc != 0x155958u) { return; }
    ctx->pc = 0x155958u;
    // 0x155958: 0x10000018
    ctx->pc = 0x155958u;
    {
        const bool branch_taken_0x155958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15595Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x155958) {
            ctx->pc = 0x1559BCu;
            goto label_1559bc;
        }
    }
    ctx->pc = 0x155960u;
label_155960:
    // 0x155960: 0x10400004
    ctx->pc = 0x155960u;
    {
        const bool branch_taken_0x155960 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x155964u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x155960) {
            ctx->pc = 0x155974u;
            goto label_155974;
        }
    }
    ctx->pc = 0x155968u;
    // 0x155968: 0x8c43a020
    ctx->pc = 0x155968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942752)));
    // 0x15596c: 0x14600003
    ctx->pc = 0x15596Cu;
    {
        const bool branch_taken_0x15596c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x155970u;
        SET_GPR_U32(ctx, 3, ((uint32_t)45 << 16));
        if (branch_taken_0x15596c) {
            ctx->pc = 0x15597Cu;
            goto label_15597c;
        }
    }
    ctx->pc = 0x155974u;
label_155974:
    // 0x155974: 0x10000010
    ctx->pc = 0x155974u;
    {
        const bool branch_taken_0x155974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x155978u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x155974) {
            ctx->pc = 0x1559B8u;
            goto label_1559b8;
        }
    }
    ctx->pc = 0x15597Cu;
label_15597c:
    // 0x15597c: 0x3c05002d
    ctx->pc = 0x15597cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
    // 0x155980: 0x24636fe8
    ctx->pc = 0x155980u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28648));
    // 0x155984: 0x8ca46fe0
    ctx->pc = 0x155984u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 28640)));
    // 0x155988: 0x8c620004
    ctx->pc = 0x155988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15598c: 0x24070002
    ctx->pc = 0x15598cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x155990: 0x304201ff
    ctx->pc = 0x155990u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x155994: 0x23040
    ctx->pc = 0x155994u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
    // 0x155998: 0x24420001
    ctx->pc = 0x155998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x15599c: 0x662821
    ctx->pc = 0x15599cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1559a0: 0xac620004
    ctx->pc = 0x1559a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1559a4: 0xa0a70008
    ctx->pc = 0x1559a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1559a8: 0xa0182d
    ctx->pc = 0x1559a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1559ac: 0xc055244
    ctx->pc = 0x1559ACu;
    SET_GPR_U32(ctx, 31, 0x1559B4u);
    ctx->pc = 0x1559B0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x154910u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x154910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1559B4u; }
        else if (ctx->pc != 0x1559B4u) { ctx->pc = 0x1559B4u; }
    }
    if (ctx->pc != 0x1559B4u) { return; }
    ctx->pc = 0x1559B4u;
    // 0x1559b4: 0x200102d
    ctx->pc = 0x1559b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1559b8:
    // 0x1559b8: 0xdfbf0010
    ctx->pc = 0x1559b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1559bc:
    // 0x1559bc: 0xdfb00000
    ctx->pc = 0x1559bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1559c0: 0x3e00008
    ctx->pc = 0x1559C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1559C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155960u: goto label_155960;
            case 0x155974u: goto label_155974;
            case 0x15597Cu: goto label_15597c;
            case 0x1559B8u: goto label_1559b8;
            case 0x1559BCu: goto label_1559bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1559C8u;
}
