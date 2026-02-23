#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: kCopy
// Address: 0x155548 - 0x155580
void kCopy_0x155548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("kCopy");


    ctx->pc = 0x155548u;

    // 0x155548: 0x63082
    ctx->pc = 0x155548u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 2));
    // 0x15554c: 0x10c0000a
    ctx->pc = 0x15554Cu;
    {
        const bool branch_taken_0x15554c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x155550u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15554c) {
            ctx->pc = 0x155578u;
            goto label_155578;
        }
    }
    ctx->pc = 0x155554u;
    // 0x155554: 0x0
    ctx->pc = 0x155554u;
    // NOP
label_155558:
    // 0x155558: 0x8ca30000
    ctx->pc = 0x155558u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15555c: 0x24e70001
    ctx->pc = 0x15555cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x155560: 0x24a50004
    ctx->pc = 0x155560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x155564: 0xe6102b
    ctx->pc = 0x155564u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x155568: 0xac830000
    ctx->pc = 0x155568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x15556c: 0x24840004
    ctx->pc = 0x15556cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x155570: 0x1440fff9
    ctx->pc = 0x155570u;
    {
        const bool branch_taken_0x155570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x155570) {
            ctx->pc = 0x155558u;
            goto label_155558;
        }
    }
    ctx->pc = 0x155578u;
label_155578:
    // 0x155578: 0x3e00008
    ctx->pc = 0x155578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15557Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155558u: goto label_155558;
            case 0x155578u: goto label_155578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155580u;
}
