#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: decode_uleb128
// Address: 0x14c6e8 - 0x14c72c
void decode_uleb128_0x14c6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("decode_uleb128");


    ctx->pc = 0x14c6e8u;

    // 0x14c6e8: 0x90830000
    ctx->pc = 0x14c6e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c6ec: 0x382d
    ctx->pc = 0x14c6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6f0: 0x24840001
    ctx->pc = 0x14c6f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x14c6f4: 0x30620080
    ctx->pc = 0x14c6f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
    // 0x14c6f8: 0x10400009
    ctx->pc = 0x14C6F8u;
    {
        const bool branch_taken_0x14c6f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C6FCu;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 127));
        if (branch_taken_0x14c6f8) {
            ctx->pc = 0x14C720u;
            goto label_14c720;
        }
    }
    ctx->pc = 0x14C700u;
label_14c700:
    // 0x14c700: 0x90830000
    ctx->pc = 0x14c700u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c704: 0x24e70007
    ctx->pc = 0x14c704u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 7));
    // 0x14c708: 0x24840001
    ctx->pc = 0x14c708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x14c70c: 0x3062007f
    ctx->pc = 0x14c70cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 127));
    // 0x14c710: 0xe21004
    ctx->pc = 0x14c710u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x14c714: 0x30630080
    ctx->pc = 0x14c714u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 128));
    // 0x14c718: 0x1460fff9
    ctx->pc = 0x14C718u;
    {
        const bool branch_taken_0x14c718 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C71Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x14c718) {
            ctx->pc = 0x14C700u;
            goto label_14c700;
        }
    }
    ctx->pc = 0x14C720u;
label_14c720:
    // 0x14c720: 0xaca60000
    ctx->pc = 0x14c720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x14c724: 0x3e00008
    ctx->pc = 0x14C724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C728u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C700u: goto label_14c700;
            case 0x14C720u: goto label_14c720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C72Cu;
}
