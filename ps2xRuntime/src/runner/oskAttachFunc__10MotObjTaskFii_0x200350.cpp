#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: oskAttachFunc__10MotObjTaskFii
// Address: 0x200350 - 0x2003e8
void oskAttachFunc__10MotObjTaskFii_0x200350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("oskAttachFunc__10MotObjTaskFii");


    ctx->pc = 0x200350u;

    // 0x200350: 0x27bdffe0
    ctx->pc = 0x200350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200354: 0x7fbf0010
    ctx->pc = 0x200354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x200358: 0x7fb00000
    ctx->pc = 0x200358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20035c: 0xc48c1ca0
    ctx->pc = 0x20035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x200360: 0xc06b218
    ctx->pc = 0x200360u;
    SET_GPR_U32(ctx, 31, 0x200368u);
    ctx->pc = 0x200364u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200368u; }
        else if (ctx->pc != 0x200368u) { ctx->pc = 0x200368u; }
    }
    if (ctx->pc != 0x200368u) { return; }
    ctx->pc = 0x200368u;
    // 0x200368: 0x101403
    ctx->pc = 0x200368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 16));
    // 0x20036c: 0x3042ffff
    ctx->pc = 0x20036cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x200370: 0x21900
    ctx->pc = 0x200370u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x200374: 0x3c020050
    ctx->pc = 0x200374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x200378: 0x2442ea24
    ctx->pc = 0x200378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x20037c: 0x431021
    ctx->pc = 0x20037cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200380: 0x8c430000
    ctx->pc = 0x200380u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200384: 0x3204ffff
    ctx->pc = 0x200384u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 65535));
    // 0x200388: 0x41040
    ctx->pc = 0x200388u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x20038c: 0x441021
    ctx->pc = 0x20038cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x200390: 0x22080
    ctx->pc = 0x200390u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    // 0x200394: 0x641821
    ctx->pc = 0x200394u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200398: 0x8c640000
    ctx->pc = 0x200398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20039c: 0x2402002a
    ctx->pc = 0x20039cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
    // 0x2003a0: 0x8c83002c
    ctx->pc = 0x2003a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2003a4: 0x31880
    ctx->pc = 0x2003a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2003a8: 0x2463000c
    ctx->pc = 0x2003a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
    // 0x2003ac: 0x31880
    ctx->pc = 0x2003acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2003b0: 0x831821
    ctx->pc = 0x2003b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2003b4: 0x8c6300a0
    ctx->pc = 0x2003b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2003b8: 0x14620005
    ctx->pc = 0x2003B8u;
    {
        const bool branch_taken_0x2003b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2003BCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2003b8) {
            ctx->pc = 0x2003D0u;
            goto label_2003d0;
        }
    }
    ctx->pc = 0x2003C0u;
    // 0x2003c0: 0xc0853ac
    ctx->pc = 0x2003C0u;
    SET_GPR_U32(ctx, 31, 0x2003C8u);
    ctx->pc = 0x2003C4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003C8u; }
        else if (ctx->pc != 0x2003C8u) { ctx->pc = 0x2003C8u; }
    }
    if (ctx->pc != 0x2003C8u) { return; }
    ctx->pc = 0x2003C8u;
    // 0x2003c8: 0x10000004
    ctx->pc = 0x2003C8u;
    {
        const bool branch_taken_0x2003c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2003CCu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2003c8) {
            ctx->pc = 0x2003DCu;
            goto label_2003dc;
        }
    }
    ctx->pc = 0x2003D0u;
label_2003d0:
    // 0x2003d0: 0xc0853c8
    ctx->pc = 0x2003D0u;
    SET_GPR_U32(ctx, 31, 0x2003D8u);
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003D8u; }
        else if (ctx->pc != 0x2003D8u) { ctx->pc = 0x2003D8u; }
    }
    if (ctx->pc != 0x2003D8u) { return; }
    ctx->pc = 0x2003D8u;
    // 0x2003d8: 0x7bbf0010
    ctx->pc = 0x2003d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2003dc:
    // 0x2003dc: 0x7bb00000
    ctx->pc = 0x2003dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2003e0: 0x3e00008
    ctx->pc = 0x2003E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2003E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2003D0u: goto label_2003d0;
            case 0x2003DCu: goto label_2003dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2003E8u;
}
