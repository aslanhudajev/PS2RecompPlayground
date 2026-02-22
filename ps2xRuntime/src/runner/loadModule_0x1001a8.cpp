#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: loadModule
// Address: 0x1001a8 - 0x10024c
void loadModule_0x1001a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1001a8u;

    // 0x1001a8: 0x27bdffd0
    ctx->pc = 0x1001a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1001ac: 0x3c060017
    ctx->pc = 0x1001acu;
    SET_GPR_S32(ctx, 6, ((uint32_t)23 << 16));
    // 0x1001b0: 0xffb10010
    ctx->pc = 0x1001b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1001b4: 0x24c65bc0
    ctx->pc = 0x1001b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 23488));
    // 0x1001b8: 0x80882d
    ctx->pc = 0x1001b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001bc: 0xffb00000
    ctx->pc = 0x1001bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1001c0: 0xffbf0020
    ctx->pc = 0x1001c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1001c4: 0xc04526a
    ctx->pc = 0x1001C4u;
    SET_GPR_U32(ctx, 31, 0x1001CCu);
    ctx->pc = 0x1001C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1149A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x1149a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1001CCu; }
    }
    if (ctx->pc != 0x1001CCu) { return; }
    ctx->pc = 0x1001CCu;
    // 0x1001cc: 0x40802d
    ctx->pc = 0x1001ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001d0: 0x6010017
    ctx->pc = 0x1001D0u;
    {
        const bool branch_taken_0x1001d0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1001D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1001d0) {
            ctx->pc = 0x100230u;
            goto label_100230;
        }
    }
    ctx->pc = 0x1001D8u;
    // 0x1001d8: 0x3c040017
    ctx->pc = 0x1001d8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1001dc: 0x24842a10
    ctx->pc = 0x1001dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10768));
    // 0x1001e0: 0x200302d
    ctx->pc = 0x1001e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001e4: 0xc04ace4
    ctx->pc = 0x1001E4u;
    SET_GPR_U32(ctx, 31, 0x1001ECu);
    ctx->pc = 0x1001E8u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1001ECu; }
    }
    if (ctx->pc != 0x1001ECu) { return; }
    ctx->pc = 0x1001ECu;
    // 0x1001ec: 0x3c03fffe
    ctx->pc = 0x1001ecu;
    SET_GPR_S32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x1001f0: 0x3463fffb
    ctx->pc = 0x1001f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)65531);
    // 0x1001f4: 0x16030006
    ctx->pc = 0x1001F4u;
    {
        const bool branch_taken_0x1001f4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        ctx->pc = 0x1001F8u;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x1001f4) {
            ctx->pc = 0x100210u;
            goto label_100210;
        }
    }
    ctx->pc = 0x1001FCu;
    // 0x1001fc: 0x3c040017
    ctx->pc = 0x1001fcu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x100200: 0xc04ace4
    ctx->pc = 0x100200u;
    SET_GPR_U32(ctx, 31, 0x100208u);
    ctx->pc = 0x100204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10816));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100208u; }
    }
    if (ctx->pc != 0x100208u) { return; }
    ctx->pc = 0x100208u;
    // 0x100208: 0x10000004
    ctx->pc = 0x100208u;
    {
        const bool branch_taken_0x100208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10020Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x100208) {
            ctx->pc = 0x10021Cu;
            goto label_10021c;
        }
    }
    ctx->pc = 0x100210u;
label_100210:
    // 0x100210: 0xc04ace4
    ctx->pc = 0x100210u;
    SET_GPR_U32(ctx, 31, 0x100218u);
    ctx->pc = 0x100214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10832));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100218u; }
    }
    if (ctx->pc != 0x100218u) { return; }
    ctx->pc = 0x100218u;
    // 0x100218: 0xdfbf0020
    ctx->pc = 0x100218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10021c:
    // 0x10021c: 0x24040001
    ctx->pc = 0x10021cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x100220: 0xdfb10010
    ctx->pc = 0x100220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100224: 0xdfb00000
    ctx->pc = 0x100224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100228: 0x8049d20
    ctx->pc = 0x100228u;
    ctx->pc = 0x10022Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x127480u;
    exit_0x127480(rdram, ctx, runtime); return;
    ctx->pc = 0x100230u;
label_100230:
    // 0x100230: 0x3c040017
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x100234: 0xdfbf0020
    ctx->pc = 0x100234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100238: 0x24842a68
    ctx->pc = 0x100238u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10856));
    // 0x10023c: 0xdfb10010
    ctx->pc = 0x10023cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100240: 0xdfb00000
    ctx->pc = 0x100240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100244: 0x804ace4
    ctx->pc = 0x100244u;
    ctx->pc = 0x100248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x12B390u;
    printf_0x12b390(rdram, ctx, runtime); return;
    ctx->pc = 0x10024Cu;
}
