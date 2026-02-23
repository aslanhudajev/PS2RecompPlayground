#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_stricmp
// Address: 0x179440 - 0x1794e0
void htci_stricmp_0x179440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_stricmp");


    ctx->pc = 0x179440u;

    // 0x179440: 0x27bdffa0
    ctx->pc = 0x179440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x179444: 0xffb40040
    ctx->pc = 0x179444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x179448: 0xffb00000
    ctx->pc = 0x179448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17944c: 0x80a02d
    ctx->pc = 0x17944cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179450: 0xffb30030
    ctx->pc = 0x179450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x179454: 0xa0802d
    ctx->pc = 0x179454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179458: 0xffbf0050
    ctx->pc = 0x179458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17945c: 0xffb20020
    ctx->pc = 0x17945cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x179460: 0xc051554
    ctx->pc = 0x179460u;
    SET_GPR_U32(ctx, 31, 0x179468u);
    ctx->pc = 0x179464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179468u; }
        else if (ctx->pc != 0x179468u) { ctx->pc = 0x179468u; }
    }
    if (ctx->pc != 0x179468u) { return; }
    ctx->pc = 0x179468u;
    // 0x179468: 0x40982d
    ctx->pc = 0x179468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17946c: 0xc051554
    ctx->pc = 0x17946Cu;
    SET_GPR_U32(ctx, 31, 0x179474u);
    ctx->pc = 0x179470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179474u; }
        else if (ctx->pc != 0x179474u) { ctx->pc = 0x179474u; }
    }
    if (ctx->pc != 0x179474u) { return; }
    ctx->pc = 0x179474u;
    // 0x179474: 0x12620003
    ctx->pc = 0x179474u;
    {
        const bool branch_taken_0x179474 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        if (branch_taken_0x179474) {
            ctx->pc = 0x179484u;
            goto label_179484;
        }
    }
    ctx->pc = 0x17947Cu;
label_17947c:
    // 0x17947c: 0x10000010
    ctx->pc = 0x17947Cu;
    {
        const bool branch_taken_0x17947c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179480u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17947c) {
            ctx->pc = 0x1794C0u;
            goto label_1794c0;
        }
    }
    ctx->pc = 0x179484u;
label_179484:
    // 0x179484: 0x1a60000d
    ctx->pc = 0x179484u;
    {
        const bool branch_taken_0x179484 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x179488u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179484) {
            ctx->pc = 0x1794BCu;
            goto label_1794bc;
        }
    }
    ctx->pc = 0x17948Cu;
    // 0x17948c: 0x200882d
    ctx->pc = 0x17948cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179490: 0x280802d
    ctx->pc = 0x179490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179494: 0x0
    ctx->pc = 0x179494u;
    // NOP
label_179498:
    // 0x179498: 0x82040000
    ctx->pc = 0x179498u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17949c: 0xc05e4fc
    ctx->pc = 0x17949Cu;
    SET_GPR_U32(ctx, 31, 0x1794A4u);
    ctx->pc = 0x1794A0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1793F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_charicmp_0x1793f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1794A4u; }
        else if (ctx->pc != 0x1794A4u) { ctx->pc = 0x1794A4u; }
    }
    if (ctx->pc != 0x1794A4u) { return; }
    ctx->pc = 0x1794A4u;
    // 0x1794a4: 0x1440fff5
    ctx->pc = 0x1794A4u;
    {
        const bool branch_taken_0x1794a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1794A8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1794a4) {
            ctx->pc = 0x17947Cu;
            goto label_17947c;
        }
    }
    ctx->pc = 0x1794ACu;
    // 0x1794ac: 0x26310001
    ctx->pc = 0x1794acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1794b0: 0x253102a
    ctx->pc = 0x1794b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x1794b4: 0x1440fff8
    ctx->pc = 0x1794B4u;
    {
        const bool branch_taken_0x1794b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1794B8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1794b4) {
            ctx->pc = 0x179498u;
            goto label_179498;
        }
    }
    ctx->pc = 0x1794BCu;
label_1794bc:
    // 0x1794bc: 0x102d
    ctx->pc = 0x1794bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1794c0:
    // 0x1794c0: 0xdfbf0050
    ctx->pc = 0x1794c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1794c4: 0xdfb40040
    ctx->pc = 0x1794c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1794c8: 0xdfb30030
    ctx->pc = 0x1794c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1794cc: 0xdfb20020
    ctx->pc = 0x1794ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1794d0: 0xdfb10010
    ctx->pc = 0x1794d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1794d4: 0xdfb00000
    ctx->pc = 0x1794d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1794d8: 0x3e00008
    ctx->pc = 0x1794D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1794DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17947Cu: goto label_17947c;
            case 0x179484u: goto label_179484;
            case 0x179498u: goto label_179498;
            case 0x1794BCu: goto label_1794bc;
            case 0x1794C0u: goto label_1794c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1794E0u;
}
