#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ObjPutSetAlphaForce__Fif
// Address: 0x2153d0 - 0x21546c
void ObjPutSetAlphaForce__Fif_0x2153d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ObjPutSetAlphaForce__Fif");


    ctx->pc = 0x2153d0u;

    // 0x2153d0: 0x27bdffc0
    ctx->pc = 0x2153d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2153d4: 0x7fbf0030
    ctx->pc = 0x2153d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2153d8: 0x7fb10020
    ctx->pc = 0x2153d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2153dc: 0x7fb00010
    ctx->pc = 0x2153dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2153e0: 0x41403
    ctx->pc = 0x2153e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2153e4: 0x3403ffff
    ctx->pc = 0x2153e4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2153e8: 0x432824
    ctx->pc = 0x2153e8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2153ec: 0x3c020050
    ctx->pc = 0x2153ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2153f0: 0xe7b40000
    ctx->pc = 0x2153f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2153f4: 0x58100
    ctx->pc = 0x2153f4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2153f8: 0x2442ea20
    ctx->pc = 0x2153f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x2153fc: 0x501021
    ctx->pc = 0x2153fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x215400: 0x8c430000
    ctx->pc = 0x215400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215404: 0x46006506
    ctx->pc = 0x215404u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x215408: 0x3c028000
    ctx->pc = 0x215408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x21540c: 0x621024
    ctx->pc = 0x21540cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215410: 0x14400004
    ctx->pc = 0x215410u;
    {
        const bool branch_taken_0x215410 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x215414u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x215410) {
            ctx->pc = 0x215424u;
            goto label_215424;
        }
    }
    ctx->pc = 0x215418u;
    // 0x215418: 0x3c020051
    ctx->pc = 0x215418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x21541c: 0xc0863cc
    ctx->pc = 0x21541Cu;
    SET_GPR_U32(ctx, 31, 0x215424u);
    ctx->pc = 0x215420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215424u; }
        else if (ctx->pc != 0x215424u) { ctx->pc = 0x215424u; }
    }
    if (ctx->pc != 0x215424u) { return; }
    ctx->pc = 0x215424u;
label_215424:
    // 0x215424: 0x3c020050
    ctx->pc = 0x215424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x215428: 0x2442ea24
    ctx->pc = 0x215428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x21542c: 0x501021
    ctx->pc = 0x21542cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x215430: 0x8c420000
    ctx->pc = 0x215430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215434: 0x3224ffff
    ctx->pc = 0x215434u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 65535));
    // 0x215438: 0x41840
    ctx->pc = 0x215438u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x21543c: 0x641821
    ctx->pc = 0x21543cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x215440: 0x31880
    ctx->pc = 0x215440u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x215444: 0x431021
    ctx->pc = 0x215444u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215448: 0x8c440000
    ctx->pc = 0x215448u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21544c: 0xc06a450
    ctx->pc = 0x21544Cu;
    SET_GPR_U32(ctx, 31, 0x215454u);
    ctx->pc = 0x215450u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A9140u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_0x1a9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215454u; }
        else if (ctx->pc != 0x215454u) { ctx->pc = 0x215454u; }
    }
    if (ctx->pc != 0x215454u) { return; }
    ctx->pc = 0x215454u;
    // 0x215454: 0x7bbf0030
    ctx->pc = 0x215454u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215458: 0x7bb10020
    ctx->pc = 0x215458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21545c: 0x7bb00010
    ctx->pc = 0x21545cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215460: 0xc7b40000
    ctx->pc = 0x215460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x215464: 0x3e00008
    ctx->pc = 0x215464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215424u: goto label_215424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21546Cu;
}
