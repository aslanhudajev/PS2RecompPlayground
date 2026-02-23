#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskNameImm__13EntryDatClassFi
// Address: 0x2190f0 - 0x21914c
void entryOskNameImm__13EntryDatClassFi_0x2190f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskNameImm__13EntryDatClassFi");


    ctx->pc = 0x2190f0u;

    // 0x2190f0: 0x27bdffe0
    ctx->pc = 0x2190f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2190f4: 0x7fbf0010
    ctx->pc = 0x2190f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2190f8: 0x7fb00000
    ctx->pc = 0x2190f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2190fc: 0x70a08628
    ctx->pc = 0x2190fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x219100: 0x84831000
    ctx->pc = 0x219100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4096)));
    // 0x219104: 0x84851002
    ctx->pc = 0x219104u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x219108: 0xa3082a
    ctx->pc = 0x219108u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x21910c: 0x14200002
    ctx->pc = 0x21910Cu;
    {
        const bool branch_taken_0x21910c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x219110u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x21910c) {
            ctx->pc = 0x219118u;
            goto label_219118;
        }
    }
    ctx->pc = 0x219114u;
    // 0x219114: 0x70001628
    ctx->pc = 0x219114u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_219118:
    // 0x219118: 0xa21021
    ctx->pc = 0x219118u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21911c: 0x10620003
    ctx->pc = 0x21911Cu;
    {
        const bool branch_taken_0x21911c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21911c) {
            ctx->pc = 0x21912Cu;
            goto label_21912c;
        }
    }
    ctx->pc = 0x219124u;
    // 0x219124: 0xc0863a8
    ctx->pc = 0x219124u;
    SET_GPR_U32(ctx, 31, 0x21912Cu);
    ctx->pc = 0x218EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        flushCur__13EntryDatClassFv_0x218ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21912Cu; }
        else if (ctx->pc != 0x21912Cu) { ctx->pc = 0x21912Cu; }
    }
    if (ctx->pc != 0x21912Cu) { return; }
    ctx->pc = 0x21912Cu;
label_21912c:
    // 0x21912c: 0x3c020051
    ctx->pc = 0x21912cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x219130: 0x72002e28
    ctx->pc = 0x219130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x219134: 0xc07f8b4
    ctx->pc = 0x219134u;
    SET_GPR_U32(ctx, 31, 0x21913Cu);
    ctx->pc = 0x219138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FE2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskNameImm__15OneSkinMgrClassFi_0x1fe2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21913Cu; }
        else if (ctx->pc != 0x21913Cu) { ctx->pc = 0x21913Cu; }
    }
    if (ctx->pc != 0x21913Cu) { return; }
    ctx->pc = 0x21913Cu;
    // 0x21913c: 0x7bbf0010
    ctx->pc = 0x21913cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219140: 0x7bb00000
    ctx->pc = 0x219140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219144: 0x3e00008
    ctx->pc = 0x219144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219148u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219118u: goto label_219118;
            case 0x21912Cu: goto label_21912c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21914Cu;
}
