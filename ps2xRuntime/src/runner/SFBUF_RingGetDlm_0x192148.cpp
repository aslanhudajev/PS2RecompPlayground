#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_RingGetDlm
// Address: 0x192148 - 0x1921f0
void SFBUF_RingGetDlm_0x192148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_RingGetDlm");


    ctx->pc = 0x192148u;

    // 0x192148: 0x24020388
    ctx->pc = 0x192148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x19214c: 0x27bdff80
    ctx->pc = 0x19214cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x192150: 0xa22818
    ctx->pc = 0x192150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x192154: 0xffb00010
    ctx->pc = 0x192154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x192158: 0x24900d34
    ctx->pc = 0x192158u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 3380));
    // 0x19215c: 0xffb50060
    ctx->pc = 0x19215cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x192160: 0xffb40050
    ctx->pc = 0x192160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x192164: 0x120a82d
    ctx->pc = 0x192164u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192168: 0xffb30040
    ctx->pc = 0x192168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19216c: 0xe0a02d
    ctx->pc = 0x19216cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192170: 0xffb20030
    ctx->pc = 0x192170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x192174: 0x2058021
    ctx->pc = 0x192174u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x192178: 0xffb10020
    ctx->pc = 0x192178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19217c: 0xc0902d
    ctx->pc = 0x19217cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192180: 0x100882d
    ctx->pc = 0x192180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192184: 0x140982d
    ctx->pc = 0x192184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192188: 0xffbf0070
    ctx->pc = 0x192188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19218c: 0xc064f3a
    ctx->pc = 0x19218Cu;
    SET_GPR_U32(ctx, 31, 0x192194u);
    ctx->pc = 0x192190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192194u; }
        else if (ctx->pc != 0x192194u) { ctx->pc = 0x192194u; }
    }
    if (ctx->pc != 0x192194u) { return; }
    ctx->pc = 0x192194u;
    // 0x192194: 0x8e020028
    ctx->pc = 0x192194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x192198: 0x26050028
    ctx->pc = 0x192198u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 40));
    // 0x19219c: 0x8ca3000c
    ctx->pc = 0x19219cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1921a0: 0x26100010
    ctx->pc = 0x1921a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    // 0x1921a4: 0xae420000
    ctx->pc = 0x1921a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1921a8: 0x3a0202d
    ctx->pc = 0x1921a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1921ac: 0xae230000
    ctx->pc = 0x1921acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1921b0: 0x8ca20004
    ctx->pc = 0x1921b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1921b4: 0x8e030014
    ctx->pc = 0x1921b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1921b8: 0xae820000
    ctx->pc = 0x1921b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1921bc: 0xae630000
    ctx->pc = 0x1921bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1921c0: 0x8ca20008
    ctx->pc = 0x1921c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1921c4: 0xc064f44
    ctx->pc = 0x1921C4u;
    SET_GPR_U32(ctx, 31, 0x1921CCu);
    ctx->pc = 0x1921C8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921CCu; }
        else if (ctx->pc != 0x1921CCu) { ctx->pc = 0x1921CCu; }
    }
    if (ctx->pc != 0x1921CCu) { return; }
    ctx->pc = 0x1921CCu;
    // 0x1921cc: 0xdfbf0070
    ctx->pc = 0x1921ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1921d0: 0xdfb50060
    ctx->pc = 0x1921d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1921d4: 0xdfb40050
    ctx->pc = 0x1921d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1921d8: 0xdfb30040
    ctx->pc = 0x1921d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1921dc: 0xdfb20030
    ctx->pc = 0x1921dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1921e0: 0xdfb10020
    ctx->pc = 0x1921e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1921e4: 0xdfb00010
    ctx->pc = 0x1921e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1921e8: 0x3e00008
    ctx->pc = 0x1921E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1921ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1921F0u;
}
