#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _request_rdata
// Address: 0x10fff8 - 0x110058
void _request_rdata_0x10fff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10fff8u;

    // 0x10fff8: 0x27bdffe0
    ctx->pc = 0x10fff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10fffc: 0xffb00000
    ctx->pc = 0x10fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110000: 0x80802d
    ctx->pc = 0x110000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110004: 0xffbf0010
    ctx->pc = 0x110004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110008: 0xc043fb4
    ctx->pc = 0x110008u;
    SET_GPR_U32(ctx, 31, 0x110010u);
    ctx->pc = 0x11000Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x10fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110010u; }
    }
    if (ctx->pc != 0x110010u) { return; }
    ctx->pc = 0x110010u;
    // 0x110010: 0x8e050014
    ctx->pc = 0x110010u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x110014: 0x3c038000
    ctx->pc = 0x110014u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x110018: 0x8e04001c
    ctx->pc = 0x110018u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11001c: 0x3463000c
    ctx->pc = 0x11001cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 12));
    // 0x110020: 0xac450014
    ctx->pc = 0x110020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x110024: 0x24060040
    ctx->pc = 0x110024u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x110028: 0xac44001c
    ctx->pc = 0x110028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x11002c: 0x40282d
    ctx->pc = 0x11002cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110030: 0xac430020
    ctx->pc = 0x110030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x110034: 0x3c048000
    ctx->pc = 0x110034u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x110038: 0xdfbf0010
    ctx->pc = 0x110038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11003c: 0x34840008
    ctx->pc = 0x11003cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8));
    // 0x110040: 0x8e090028
    ctx->pc = 0x110040u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x110044: 0x8e070020
    ctx->pc = 0x110044u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x110048: 0x8e080024
    ctx->pc = 0x110048u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11004c: 0xdfb00000
    ctx->pc = 0x11004cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110050: 0x80456c0
    ctx->pc = 0x110050u;
    ctx->pc = 0x110054u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x115B00u;
    isceSifSendCmd_0x115b00(rdram, ctx, runtime); return;
    ctx->pc = 0x110058u;
}
