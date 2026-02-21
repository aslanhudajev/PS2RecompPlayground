#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: all_plyr_new_menu_accept
// Address: 0x207320 - 0x20736c
void all_plyr_new_menu_accept_0x207320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207320u;

    // 0x207320: 0x27bdffe0
    ctx->pc = 0x207320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207324: 0xffbf0010
    ctx->pc = 0x207324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207328: 0xffb00000
    ctx->pc = 0x207328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20732c: 0x802d
    ctx->pc = 0x20732cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207330: 0x200202d
    ctx->pc = 0x207330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207334: 0x0
    ctx->pc = 0x207334u;
    // NOP
label_207338:
    // 0x207338: 0xc081c4c
    ctx->pc = 0x207338u;
    SET_GPR_U32(ctx, 31, 0x207340u);
    ctx->pc = 0x20733Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x207130u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_menu_accept_0x207130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207340u; }
    }
    if (ctx->pc != 0x207340u) { return; }
    ctx->pc = 0x207340u;
    // 0x207340: 0x14400006
    ctx->pc = 0x207340u;
    {
        const bool branch_taken_0x207340 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x207344u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x207340) {
            ctx->pc = 0x20735Cu;
            goto label_20735c;
        }
    }
    ctx->pc = 0x207348u;
    // 0x207348: 0x26100001
    ctx->pc = 0x207348u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x20734c: 0x2a020004
    ctx->pc = 0x20734cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x207350: 0x1440fff9
    ctx->pc = 0x207350u;
    {
        const bool branch_taken_0x207350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x207354u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x207350) {
            ctx->pc = 0x207338u;
            goto label_207338;
        }
    }
    ctx->pc = 0x207358u;
    // 0x207358: 0x102d
    ctx->pc = 0x207358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20735c:
    // 0x20735c: 0xdfbf0010
    ctx->pc = 0x20735cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207360: 0xdfb00000
    ctx->pc = 0x207360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207364: 0x3e00008
    ctx->pc = 0x207364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207368u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207338u: goto label_207338;
            case 0x20735Cu: goto label_20735c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20736Cu;
}
