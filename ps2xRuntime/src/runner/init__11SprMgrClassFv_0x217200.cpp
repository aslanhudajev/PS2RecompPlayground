#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__11SprMgrClassFv
// Address: 0x217200 - 0x2172a8
void init__11SprMgrClassFv_0x217200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__11SprMgrClassFv");


    ctx->pc = 0x217200u;

    // 0x217200: 0x27bdfff0
    ctx->pc = 0x217200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217204: 0x3c03004a
    ctx->pc = 0x217204u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x217208: 0x7fbf0000
    ctx->pc = 0x217208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x21720c: 0x70002628
    ctx->pc = 0x21720cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217210: 0x2465f738
    ctx->pc = 0x217210u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965048));
label_217214:
    // 0x217214: 0xaca00048
    ctx->pc = 0x217214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x217218: 0xaca00098
    ctx->pc = 0x217218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 0));
    // 0x21721c: 0xaca000e8
    ctx->pc = 0x21721cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x217220: 0xaca00138
    ctx->pc = 0x217220u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 312), GPR_U32(ctx, 0));
    // 0x217224: 0xaca00188
    ctx->pc = 0x217224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 392), GPR_U32(ctx, 0));
    // 0x217228: 0xaca001d8
    ctx->pc = 0x217228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 472), GPR_U32(ctx, 0));
    // 0x21722c: 0xaca00228
    ctx->pc = 0x21722cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 552), GPR_U32(ctx, 0));
    // 0x217230: 0x24840008
    ctx->pc = 0x217230u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x217234: 0xaca00278
    ctx->pc = 0x217234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 632), GPR_U32(ctx, 0));
    // 0x217238: 0x288312d8
    ctx->pc = 0x217238u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4824));
    // 0x21723c: 0x1460fff5
    ctx->pc = 0x21723Cu;
    {
        const bool branch_taken_0x21723c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x217240u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 640));
        if (branch_taken_0x21723c) {
            ctx->pc = 0x217214u;
            goto label_217214;
        }
    }
    ctx->pc = 0x217244u;
    // 0x217244: 0x3c010050
    ctx->pc = 0x217244u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x217248: 0x8024fec5
    ctx->pc = 0x217248u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x21724c: 0x3c030029
    ctx->pc = 0x21724cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x217250: 0x2463ada0
    ctx->pc = 0x217250u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294946208));
    // 0x217254: 0x420c0
    ctx->pc = 0x217254u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x217258: 0x641821
    ctx->pc = 0x217258u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21725c: 0xc085c64
    ctx->pc = 0x21725Cu;
    SET_GPR_U32(ctx, 31, 0x217264u);
    ctx->pc = 0x217260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x217190u;
    {
        const uint32_t __entryPc = ctx->pc;
        setSprNoFlag__Fi_0x217190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217264u; }
        else if (ctx->pc != 0x217264u) { ctx->pc = 0x217264u; }
    }
    if (ctx->pc != 0x217264u) { return; }
    ctx->pc = 0x217264u;
    // 0x217264: 0x3c010050
    ctx->pc = 0x217264u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x217268: 0x8024fec5
    ctx->pc = 0x217268u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x21726c: 0x3c030029
    ctx->pc = 0x21726cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x217270: 0x2463ada4
    ctx->pc = 0x217270u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294946212));
    // 0x217274: 0x420c0
    ctx->pc = 0x217274u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x217278: 0x641821
    ctx->pc = 0x217278u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21727c: 0x8c640000
    ctx->pc = 0x21727cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217280: 0x58800004
    ctx->pc = 0x217280u;
    {
        const bool branch_taken_0x217280 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x217280) {
            ctx->pc = 0x217284u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 250));
            ctx->pc = 0x217294u;
            goto label_217294;
        }
    }
    ctx->pc = 0x217288u;
    // 0x217288: 0xc085c64
    ctx->pc = 0x217288u;
    SET_GPR_U32(ctx, 31, 0x217290u);
    ctx->pc = 0x217190u;
    {
        const uint32_t __entryPc = ctx->pc;
        setSprNoFlag__Fi_0x217190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217290u; }
        else if (ctx->pc != 0x217290u) { ctx->pc = 0x217290u; }
    }
    if (ctx->pc != 0x217290u) { return; }
    ctx->pc = 0x217290u;
    // 0x217290: 0x240400fa
    ctx->pc = 0x217290u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 250));
label_217294:
    // 0x217294: 0xc085c64
    ctx->pc = 0x217294u;
    SET_GPR_U32(ctx, 31, 0x21729Cu);
    ctx->pc = 0x217190u;
    {
        const uint32_t __entryPc = ctx->pc;
        setSprNoFlag__Fi_0x217190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21729Cu; }
        else if (ctx->pc != 0x21729Cu) { ctx->pc = 0x21729Cu; }
    }
    if (ctx->pc != 0x21729Cu) { return; }
    ctx->pc = 0x21729Cu;
    // 0x21729c: 0x7bbf0000
    ctx->pc = 0x21729cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2172a0: 0x3e00008
    ctx->pc = 0x2172A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2172A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217214u: goto label_217214;
            case 0x217294u: goto label_217294;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2172A8u;
}
