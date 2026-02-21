#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetSeqCnt
// Address: 0x2ab028 - 0x2ab060
void pbResetSeqCnt_0x2ab028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab028u;

    // 0x2ab028: 0x27bdfff0
    ctx->pc = 0x2ab028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab02c: 0xffbe0000
    ctx->pc = 0x2ab02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x2ab030: 0x3a0f02d
    ctx->pc = 0x2ab030u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab034: 0x3c010037
    ctx->pc = 0x2ab034u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab038: 0xac2083ac
    ctx->pc = 0x2ab038u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935468), GPR_U32(ctx, 0));
    // 0x2ab03c: 0x3c010037
    ctx->pc = 0x2ab03cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab040: 0xa42083b0
    ctx->pc = 0x2ab040u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935472), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ab044: 0x3c010037
    ctx->pc = 0x2ab044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab048: 0xa42083b2
    ctx->pc = 0x2ab048u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935474), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ab04c: 0x3c0e82d
    ctx->pc = 0x2ab04cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab050: 0xdfbe0000
    ctx->pc = 0x2ab050u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab054: 0x27bd0010
    ctx->pc = 0x2ab054u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab058: 0x3e00008
    ctx->pc = 0x2AB058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB060u;
}
