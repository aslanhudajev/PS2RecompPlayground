#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugObjectEnd
// Address: 0x2be580 - 0x2be61c
void pbDebugObjectEnd_0x2be580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2be580u;

    // 0x2be580: 0x27bdffd0
    ctx->pc = 0x2be580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2be584: 0xffbf0020
    ctx->pc = 0x2be584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2be588: 0xffb10010
    ctx->pc = 0x2be588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2be58c: 0xffb00000
    ctx->pc = 0x2be58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2be590: 0x3c100037
    ctx->pc = 0x2be590u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2be594: 0x8e032740
    ctx->pc = 0x2be594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10048)));
    // 0x2be598: 0x8c620030
    ctx->pc = 0x2be598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2be59c: 0x1040001a
    ctx->pc = 0x2BE59Cu;
    {
        const bool branch_taken_0x2be59c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE5A0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be59c) {
            ctx->pc = 0x2BE608u;
            goto label_2be608;
        }
    }
    ctx->pc = 0x2BE5A4u;
    // 0x2be5a4: 0xac600030
    ctx->pc = 0x2be5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2be5a8: 0xc0a8e9e
    ctx->pc = 0x2BE5A8u;
    SET_GPR_U32(ctx, 31, 0x2BE5B0u);
    ctx->pc = 0x2BE5ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2A3A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetOneTriMode_0x2a3a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE5B0u; }
    }
    if (ctx->pc != 0x2BE5B0u) { return; }
    ctx->pc = 0x2BE5B0u;
    // 0x2be5b0: 0x8e052740
    ctx->pc = 0x2be5b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 10048)));
    // 0x2be5b4: 0x8ca400c0
    ctx->pc = 0x2be5b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x2be5b8: 0x14910011
    ctx->pc = 0x2BE5B8u;
    {
        const bool branch_taken_0x2be5b8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 17));
        ctx->pc = 0x2BE5BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2be5b8) {
            ctx->pc = 0x2BE600u;
            goto label_2be600;
        }
    }
    ctx->pc = 0x2BE5C0u;
    // 0x2be5c0: 0x8c830070
    ctx->pc = 0x2be5c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2be5c4: 0x8ca200c4
    ctx->pc = 0x2be5c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2be5c8: 0xac62000c
    ctx->pc = 0x2be5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2be5cc: 0x8c830070
    ctx->pc = 0x2be5ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2be5d0: 0x94a200cc
    ctx->pc = 0x2be5d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x2be5d4: 0xa4620010
    ctx->pc = 0x2be5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2be5d8: 0x8c830070
    ctx->pc = 0x2be5d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2be5dc: 0x94a200ce
    ctx->pc = 0x2be5dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 206)));
    // 0x2be5e0: 0xa4620012
    ctx->pc = 0x2be5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2be5e4: 0x8c830070
    ctx->pc = 0x2be5e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2be5e8: 0x94a200d0
    ctx->pc = 0x2be5e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x2be5ec: 0xa4620014
    ctx->pc = 0x2be5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2be5f0: 0x8c830070
    ctx->pc = 0x2be5f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2be5f4: 0x8ca200c8
    ctx->pc = 0x2be5f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x2be5f8: 0xac62001c
    ctx->pc = 0x2be5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2be5fc: 0x3c020037
    ctx->pc = 0x2be5fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2be600:
    // 0x2be600: 0x8c422740
    ctx->pc = 0x2be600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2be604: 0xac4000c0
    ctx->pc = 0x2be604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
label_2be608:
    // 0x2be608: 0xdfbf0020
    ctx->pc = 0x2be608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be60c: 0xdfb10010
    ctx->pc = 0x2be60cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be610: 0xdfb00000
    ctx->pc = 0x2be610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be614: 0x3e00008
    ctx->pc = 0x2BE614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE618u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BE600u: goto label_2be600;
            case 0x2BE608u: goto label_2be608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BE61Cu;
}
