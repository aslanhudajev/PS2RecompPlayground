#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvlib_InitObjTbl
// Address: 0x188030 - 0x188074
void mpvlib_InitObjTbl_0x188030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvlib_InitObjTbl");


    ctx->pc = 0x188030u;

    // 0x188030: 0x3c02002e
    ctx->pc = 0x188030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x188034: 0x24424290
    ctx->pc = 0x188034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17040));
    // 0x188038: 0x8c440034
    ctx->pc = 0x188038u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18803c: 0x1880000b
    ctx->pc = 0x18803Cu;
    {
        const bool branch_taken_0x18803c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x188040u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
        if (branch_taken_0x18803c) {
            ctx->pc = 0x18806Cu;
            goto label_18806c;
        }
    }
    ctx->pc = 0x188044u;
    // 0x188044: 0x80102d
    ctx->pc = 0x188044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188048: 0x24040001
    ctx->pc = 0x188048u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18804c: 0x0
    ctx->pc = 0x18804cu;
    // NOP
label_188050:
    // 0x188050: 0xac640160
    ctx->pc = 0x188050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 4));
    // 0x188054: 0x2442ffff
    ctx->pc = 0x188054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x188058: 0x24632000
    ctx->pc = 0x188058u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8192));
    // 0x18805c: 0x0
    ctx->pc = 0x18805cu;
    // NOP
    // 0x188060: 0x0
    ctx->pc = 0x188060u;
    // NOP
    // 0x188064: 0x1440fffa
    ctx->pc = 0x188064u;
    {
        const bool branch_taken_0x188064 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x188064) {
            ctx->pc = 0x188050u;
            goto label_188050;
        }
    }
    ctx->pc = 0x18806Cu;
label_18806c:
    // 0x18806c: 0x3e00008
    ctx->pc = 0x18806Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188050u: goto label_188050;
            case 0x18806Cu: goto label_18806c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188074u;
}
