#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeRemoveNodeSub
// Address: 0x212238 - 0x212314
void AtreeRemoveNodeSub_0x212238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212238u;

    // 0x212238: 0x27bdffe0
    ctx->pc = 0x212238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21223c: 0xffbf0010
    ctx->pc = 0x21223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x212240: 0xffb00000
    ctx->pc = 0x212240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212244: 0x80802d
    ctx->pc = 0x212244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212248: 0x8e020000
    ctx->pc = 0x212248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21224c: 0x1040001c
    ctx->pc = 0x21224Cu;
    {
        const bool branch_taken_0x21224c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x212250u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21224c) {
            ctx->pc = 0x2122C0u;
            goto label_2122c0;
        }
    }
    ctx->pc = 0x212254u;
    // 0x212254: 0x8e030020
    ctx->pc = 0x212254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x212258: 0x10620005
    ctx->pc = 0x212258u;
    {
        const bool branch_taken_0x212258 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x21225Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x212258) {
            ctx->pc = 0x212270u;
            goto label_212270;
        }
    }
    ctx->pc = 0x212260u;
    // 0x212260: 0x50620007
    ctx->pc = 0x212260u;
    {
        const bool branch_taken_0x212260 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x212260) {
            ctx->pc = 0x212264u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x212280u;
            goto label_212280;
        }
    }
    ctx->pc = 0x212268u;
    // 0x212268: 0x10000012
    ctx->pc = 0x212268u;
    {
        const bool branch_taken_0x212268 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21226Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x212268) {
            ctx->pc = 0x2122B4u;
            goto label_2122b4;
        }
    }
    ctx->pc = 0x212270u;
label_212270:
    // 0x212270: 0xc084512
    ctx->pc = 0x212270u;
    SET_GPR_U32(ctx, 31, 0x212278u);
    ctx->pc = 0x212274u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x211448u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimDataFree_0x211448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212278u; }
    }
    if (ctx->pc != 0x212278u) { return; }
    ctx->pc = 0x212278u;
    // 0x212278: 0x1000000e
    ctx->pc = 0x212278u;
    {
        const bool branch_taken_0x212278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21227Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x212278) {
            ctx->pc = 0x2122B4u;
            goto label_2122b4;
        }
    }
    ctx->pc = 0x212280u;
label_212280:
    // 0x212280: 0x5080000c
    ctx->pc = 0x212280u;
    {
        const bool branch_taken_0x212280 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x212280) {
            ctx->pc = 0x212284u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2122B4u;
            goto label_2122b4;
        }
    }
    ctx->pc = 0x212288u;
    // 0x212288: 0x8c830074
    ctx->pc = 0x212288u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x21228c: 0x8e020000
    ctx->pc = 0x21228cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212290: 0x54620008
    ctx->pc = 0x212290u;
    {
        const bool branch_taken_0x212290 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x212290) {
            ctx->pc = 0x212294u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2122B4u;
            goto label_2122b4;
        }
    }
    ctx->pc = 0x212298u;
    // 0x212298: 0x80830052
    ctx->pc = 0x212298u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x21229c: 0x2402000e
    ctx->pc = 0x21229cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2122a0: 0x54620004
    ctx->pc = 0x2122A0u;
    {
        const bool branch_taken_0x2122a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2122a0) {
            ctx->pc = 0x2122A4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2122B4u;
            goto label_2122b4;
        }
    }
    ctx->pc = 0x2122A8u;
    // 0x2122a8: 0xc0b3f1a
    ctx->pc = 0x2122A8u;
    SET_GPR_U32(ctx, 31, 0x2122B0u);
    ctx->pc = 0x2122ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122B0u; }
    }
    if (ctx->pc != 0x2122B0u) { return; }
    ctx->pc = 0x2122B0u;
    // 0x2122b0: 0x8e040000
    ctx->pc = 0x2122b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2122b4:
    // 0x2122b4: 0xc0b3f1a
    ctx->pc = 0x2122B4u;
    SET_GPR_U32(ctx, 31, 0x2122BCu);
    ctx->pc = 0x2122B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122BCu; }
    }
    if (ctx->pc != 0x2122BCu) { return; }
    ctx->pc = 0x2122BCu;
    // 0x2122bc: 0xae000000
    ctx->pc = 0x2122bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2122c0:
    // 0x2122c0: 0x2402ffff
    ctx->pc = 0x2122c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2122c4: 0xae020020
    ctx->pc = 0x2122c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2122c8: 0xae00001c
    ctx->pc = 0x2122c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2122cc: 0x3c02003c
    ctx->pc = 0x2122ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2122d0: 0x8c42cb6c
    ctx->pc = 0x2122d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953836)));
    // 0x2122d4: 0x2021023
    ctx->pc = 0x2122d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2122d8: 0x3c03cccc
    ctx->pc = 0x2122d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52428 << 16));
    // 0x2122dc: 0x3463cccd
    ctx->pc = 0x2122dcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x2122e0: 0x431018
    ctx->pc = 0x2122e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2122e4: 0x220c3
    ctx->pc = 0x2122e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2122e8: 0x4800007
    ctx->pc = 0x2122E8u;
    {
        const bool branch_taken_0x2122e8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2122ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2122e8) {
            ctx->pc = 0x212308u;
            goto label_212308;
        }
    }
    ctx->pc = 0x2122F0u;
    // 0x2122f0: 0x3c030032
    ctx->pc = 0x2122f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2122f4: 0x8c62f4b4
    ctx->pc = 0x2122f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294964404)));
    // 0x2122f8: 0x82102a
    ctx->pc = 0x2122f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x2122fc: 0x54400002
    ctx->pc = 0x2122FCu;
    {
        const bool branch_taken_0x2122fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2122fc) {
            ctx->pc = 0x212300u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294964404), GPR_U32(ctx, 4));
            ctx->pc = 0x212308u;
            goto label_212308;
        }
    }
    ctx->pc = 0x212304u;
    // 0x212304: 0xdfbf0010
    ctx->pc = 0x212304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_212308:
    // 0x212308: 0xdfb00000
    ctx->pc = 0x212308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21230c: 0x3e00008
    ctx->pc = 0x21230Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212310u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212270u: goto label_212270;
            case 0x212280u: goto label_212280;
            case 0x2122B4u: goto label_2122b4;
            case 0x2122C0u: goto label_2122c0;
            case 0x212308u: goto label_212308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212314u;
}
