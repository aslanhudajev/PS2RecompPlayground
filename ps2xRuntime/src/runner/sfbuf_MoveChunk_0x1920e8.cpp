#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_MoveChunk
// Address: 0x1920e8 - 0x192144
void sfbuf_MoveChunk_0x1920e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_MoveChunk");


    ctx->pc = 0x1920e8u;

label_1920e8:
    // 0x1920e8: 0x27bdffc0
    ctx->pc = 0x1920e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1920ec:
    // 0x1920ec: 0xffb10020
    ctx->pc = 0x1920ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1920f0:
    // 0x1920f0: 0x3a0382d
    ctx->pc = 0x1920f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1920f4:
    // 0x1920f4: 0xffb00010
    ctx->pc = 0x1920f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1920f8:
    // 0x1920f8: 0xa0882d
    ctx->pc = 0x1920f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1920fc:
    // 0x1920fc: 0xffbf0030
    ctx->pc = 0x1920fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_192100:
    // 0x192100: 0x80802d
    ctx->pc = 0x192100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192104:
    // 0x192104: 0x8e030000
    ctx->pc = 0x192104u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_192108:
    // 0x192108: 0x8c620018
    ctx->pc = 0x192108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19210c:
    // 0x19210c: 0x40f809
label_192110:
    if (ctx->pc == 0x192110u) {
        ctx->pc = 0x192110u;
        SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x192114u;
        goto label_192114;
    }
    ctx->pc = 0x19210Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192114u);
        ctx->pc = 0x192110u;
        SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 17), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1920E8u: goto label_1920e8;
            case 0x1920ECu: goto label_1920ec;
            case 0x1920F0u: goto label_1920f0;
            case 0x1920F4u: goto label_1920f4;
            case 0x1920F8u: goto label_1920f8;
            case 0x1920FCu: goto label_1920fc;
            case 0x192100u: goto label_192100;
            case 0x192104u: goto label_192104;
            case 0x192108u: goto label_192108;
            case 0x19210Cu: goto label_19210c;
            case 0x192110u: goto label_192110;
            case 0x192114u: goto label_192114;
            case 0x192118u: goto label_192118;
            case 0x19211Cu: goto label_19211c;
            case 0x192120u: goto label_192120;
            case 0x192124u: goto label_192124;
            case 0x192128u: goto label_192128;
            case 0x19212Cu: goto label_19212c;
            case 0x192130u: goto label_192130;
            case 0x192134u: goto label_192134;
            case 0x192138u: goto label_192138;
            case 0x19213Cu: goto label_19213c;
            case 0x192140u: goto label_192140;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x192114u; }
            if (ctx->pc != 0x192114u) { return; }
        }
    }
    ctx->pc = 0x192114u;
label_192114:
    // 0x192114: 0x8e030000
    ctx->pc = 0x192114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_192118:
    // 0x192118: 0x200202d
    ctx->pc = 0x192118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19211c:
    // 0x19211c: 0x220282d
    ctx->pc = 0x19211cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_192120:
    // 0x192120: 0x8c620020
    ctx->pc = 0x192120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_192124:
    // 0x192124: 0x40f809
label_192128:
    if (ctx->pc == 0x192128u) {
        ctx->pc = 0x192128u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19212Cu;
        goto label_19212c;
    }
    ctx->pc = 0x192124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19212Cu);
        ctx->pc = 0x192128u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1920E8u: goto label_1920e8;
            case 0x1920ECu: goto label_1920ec;
            case 0x1920F0u: goto label_1920f0;
            case 0x1920F4u: goto label_1920f4;
            case 0x1920F8u: goto label_1920f8;
            case 0x1920FCu: goto label_1920fc;
            case 0x192100u: goto label_192100;
            case 0x192104u: goto label_192104;
            case 0x192108u: goto label_192108;
            case 0x19210Cu: goto label_19210c;
            case 0x192110u: goto label_192110;
            case 0x192114u: goto label_192114;
            case 0x192118u: goto label_192118;
            case 0x19211Cu: goto label_19211c;
            case 0x192120u: goto label_192120;
            case 0x192124u: goto label_192124;
            case 0x192128u: goto label_192128;
            case 0x19212Cu: goto label_19212c;
            case 0x192130u: goto label_192130;
            case 0x192134u: goto label_192134;
            case 0x192138u: goto label_192138;
            case 0x19213Cu: goto label_19213c;
            case 0x192140u: goto label_192140;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19212Cu; }
            if (ctx->pc != 0x19212Cu) { return; }
        }
    }
    ctx->pc = 0x19212Cu;
label_19212c:
    // 0x19212c: 0x8fa20004
    ctx->pc = 0x19212cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_192130:
    // 0x192130: 0xdfbf0030
    ctx->pc = 0x192130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_192134:
    // 0x192134: 0xdfb10020
    ctx->pc = 0x192134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_192138:
    // 0x192138: 0xdfb00010
    ctx->pc = 0x192138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19213c:
    // 0x19213c: 0x3e00008
label_192140:
    if (ctx->pc == 0x192140u) {
        ctx->pc = 0x192140u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x192144u;
        goto label_fallthrough_0x19213c;
    }
    ctx->pc = 0x19213Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192140u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1920E8u: goto label_1920e8;
            case 0x1920ECu: goto label_1920ec;
            case 0x1920F0u: goto label_1920f0;
            case 0x1920F4u: goto label_1920f4;
            case 0x1920F8u: goto label_1920f8;
            case 0x1920FCu: goto label_1920fc;
            case 0x192100u: goto label_192100;
            case 0x192104u: goto label_192104;
            case 0x192108u: goto label_192108;
            case 0x19210Cu: goto label_19210c;
            case 0x192110u: goto label_192110;
            case 0x192114u: goto label_192114;
            case 0x192118u: goto label_192118;
            case 0x19211Cu: goto label_19211c;
            case 0x192120u: goto label_192120;
            case 0x192124u: goto label_192124;
            case 0x192128u: goto label_192128;
            case 0x19212Cu: goto label_19212c;
            case 0x192130u: goto label_192130;
            case 0x192134u: goto label_192134;
            case 0x192138u: goto label_192138;
            case 0x19213Cu: goto label_19213c;
            case 0x192140u: goto label_192140;
            default: break;
        }
        return;
    }
label_fallthrough_0x19213c:
    ctx->pc = 0x192144u;
}
