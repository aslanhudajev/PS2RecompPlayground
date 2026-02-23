#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyCalcWorkSfd
// Address: 0x18ea58 - 0x18ea9c
void mwPlyCalcWorkSfd_0x18ea58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyCalcWorkSfd");


    ctx->pc = 0x18ea58u;

    // 0x18ea58: 0x27bdfff0
    ctx->pc = 0x18ea58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ea5c: 0x80182d
    ctx->pc = 0x18ea5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea60: 0xffbf0000
    ctx->pc = 0x18ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ea64: 0x8c62001c
    ctx->pc = 0x18ea64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x18ea68: 0x28420007
    ctx->pc = 0x18ea68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 7));
    // 0x18ea6c: 0x54400003
    ctx->pc = 0x18EA6Cu;
    {
        const bool branch_taken_0x18ea6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18ea6c) {
            ctx->pc = 0x18EA70u;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->pc = 0x18EA7Cu;
            goto label_18ea7c;
        }
    }
    ctx->pc = 0x18EA74u;
    // 0x18ea74: 0x8c62000c
    ctx->pc = 0x18ea74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18ea78: 0x23840
    ctx->pc = 0x18ea78u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 2), 1));
label_18ea7c:
    // 0x18ea7c: 0x8c680010
    ctx->pc = 0x18ea7cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18ea80: 0x8c640000
    ctx->pc = 0x18ea80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ea84: 0x8c650004
    ctx->pc = 0x18ea84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18ea88: 0xc063a4e
    ctx->pc = 0x18EA88u;
    SET_GPR_U32(ctx, 31, 0x18EA90u);
    ctx->pc = 0x18EA8Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->pc = 0x18E938u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyCalcWorkSofdec_0x18e938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA90u; }
        else if (ctx->pc != 0x18EA90u) { ctx->pc = 0x18EA90u; }
    }
    if (ctx->pc != 0x18EA90u) { return; }
    ctx->pc = 0x18EA90u;
    // 0x18ea90: 0xdfbf0000
    ctx->pc = 0x18ea90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ea94: 0x3e00008
    ctx->pc = 0x18EA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EA98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EA7Cu: goto label_18ea7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18EA9Cu;
}
