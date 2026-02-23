#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispBulletMoveOn__10PlayerTaskFv
// Address: 0x211190 - 0x211258
void dispBulletMoveOn__10PlayerTaskFv_0x211190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispBulletMoveOn__10PlayerTaskFv");


    ctx->pc = 0x211190u;

    // 0x211190: 0x8c861cb8
    ctx->pc = 0x211190u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x211194: 0x3c030052
    ctx->pc = 0x211194u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x211198: 0x8c871cbc
    ctx->pc = 0x211198u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x21119c: 0x2463c910
    ctx->pc = 0x21119cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953232));
    // 0x2111a0: 0x628c0
    ctx->pc = 0x2111a0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x2111a4: 0xa63021
    ctx->pc = 0x2111a4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2111a8: 0x628c0
    ctx->pc = 0x2111a8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x2111ac: 0xc52821
    ctx->pc = 0x2111acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2111b0: 0x52880
    ctx->pc = 0x2111b0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2111b4: 0x655021
    ctx->pc = 0x2111b4u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2111b8: 0x8ce50048
    ctx->pc = 0x2111b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x2111bc: 0x28a10009
    ctx->pc = 0x2111bcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 9));
    // 0x2111c0: 0x50200001
    ctx->pc = 0x2111C0u;
    {
        const bool branch_taken_0x2111c0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2111c0) {
            ctx->pc = 0x2111C4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
            ctx->pc = 0x2111C8u;
            goto label_2111c8;
        }
    }
    ctx->pc = 0x2111C8u;
label_2111c8:
    // 0x2111c8: 0x8ce6004c
    ctx->pc = 0x2111c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x2111cc: 0xc5182a
    ctx->pc = 0x2111ccu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x2111d0: 0x14600002
    ctx->pc = 0x2111D0u;
    {
        const bool branch_taken_0x2111d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2111D4u;
        SET_GPR_U32(ctx, 11, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        if (branch_taken_0x2111d0) {
            ctx->pc = 0x2111DCu;
            goto label_2111dc;
        }
    }
    ctx->pc = 0x2111D8u;
    // 0x2111d8: 0x70005e28
    ctx->pc = 0x2111d8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2111dc:
    // 0x2111dc: 0x70004e28
    ctx->pc = 0x2111dcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2111e0: 0x3c030052
    ctx->pc = 0x2111e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x2111e4: 0x2467c830
    ctx->pc = 0x2111e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294953008));
    // 0x2111e8: 0x3c034080
    ctx->pc = 0x2111e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
    // 0x2111ec: 0x44830800
    ctx->pc = 0x2111ecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x2111f0: 0x24050001
    ctx->pc = 0x2111f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2111f4:
    // 0x2111f4: 0x8c881cb8
    ctx->pc = 0x2111f4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x2111f8: 0x12b3021
    ctx->pc = 0x2111f8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x2111fc: 0x61840
    ctx->pc = 0x2111fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x211200: 0x661821
    ctx->pc = 0x211200u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x211204: 0x31880
    ctx->pc = 0x211204u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x211208: 0xc5400004
    ctx->pc = 0x211208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21120c: 0x830c0
    ctx->pc = 0x21120cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 8), 3));
    // 0x211210: 0xc84021
    ctx->pc = 0x211210u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x211214: 0x83080
    ctx->pc = 0x211214u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 8), 2));
    // 0x211218: 0xc83023
    ctx->pc = 0x211218u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x21121c: 0x63080
    ctx->pc = 0x21121cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x211220: 0xe63021
    ctx->pc = 0x211220u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x211224: 0x661821
    ctx->pc = 0x211224u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x211228: 0xc4620004
    ctx->pc = 0x211228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21122c: 0x25290001
    ctx->pc = 0x21122cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x211230: 0x46001001
    ctx->pc = 0x211230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x211234: 0x29230009
    ctx->pc = 0x211234u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), 9));
    // 0x211238: 0x46010003
    ctx->pc = 0x211238u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x21123c: 0xe5400010
    ctx->pc = 0x21123cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x211240: 0xad450018
    ctx->pc = 0x211240u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 5));
    // 0x211244: 0xad40001c
    ctx->pc = 0x211244u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 0));
    // 0x211248: 0x1460ffea
    ctx->pc = 0x211248u;
    {
        const bool branch_taken_0x211248 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21124Cu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 36));
        if (branch_taken_0x211248) {
            ctx->pc = 0x2111F4u;
            goto label_2111f4;
        }
    }
    ctx->pc = 0x211250u;
    // 0x211250: 0x3e00008
    ctx->pc = 0x211250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2111C8u: goto label_2111c8;
            case 0x2111DCu: goto label_2111dc;
            case 0x2111F4u: goto label_2111f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211258u;
}
