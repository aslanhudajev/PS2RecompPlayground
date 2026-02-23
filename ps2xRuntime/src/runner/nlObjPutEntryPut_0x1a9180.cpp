#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutEntryPut
// Address: 0x1a9180 - 0x1a9460
void nlObjPutEntryPut_0x1a9180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutEntryPut");


    ctx->pc = 0x1a9180u;

    // 0x1a9180: 0x27bdff90
    ctx->pc = 0x1a9180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a9184: 0x7fbf0060
    ctx->pc = 0x1a9184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1a9188: 0x7fb50050
    ctx->pc = 0x1a9188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a918c: 0x7fb40040
    ctx->pc = 0x1a918cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a9190: 0x7fb30030
    ctx->pc = 0x1a9190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a9194: 0x7fb20020
    ctx->pc = 0x1a9194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a9198: 0x7fb10010
    ctx->pc = 0x1a9198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a919c: 0x7fb00000
    ctx->pc = 0x1a919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a91a0: 0x848200d8
    ctx->pc = 0x1a91a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x1a91a4: 0x10400007
    ctx->pc = 0x1A91A4u;
    {
        const bool branch_taken_0x1a91a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A91A8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a91a4) {
            ctx->pc = 0x1A91C4u;
            goto label_1a91c4;
        }
    }
    ctx->pc = 0x1A91ACu;
    // 0x1a91ac: 0x70002628
    ctx->pc = 0x1a91acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a91b0: 0xc06c608
    ctx->pc = 0x1A91B0u;
    SET_GPR_U32(ctx, 31, 0x1A91B8u);
    ctx->pc = 0x1A91B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetFBA_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91B8u; }
        else if (ctx->pc != 0x1A91B8u) { ctx->pc = 0x1A91B8u; }
    }
    if (ctx->pc != 0x1A91B8u) { return; }
    ctx->pc = 0x1A91B8u;
    // 0x1a91b8: 0x24040200
    ctx->pc = 0x1a91b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a91bc: 0xc06c608
    ctx->pc = 0x1A91BCu;
    SET_GPR_U32(ctx, 31, 0x1A91C4u);
    ctx->pc = 0x1A91C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetFBA_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91C4u; }
        else if (ctx->pc != 0x1A91C4u) { ctx->pc = 0x1A91C4u; }
    }
    if (ctx->pc != 0x1A91C4u) { return; }
    ctx->pc = 0x1A91C4u;
label_1a91c4:
    // 0x1a91c4: 0x860200d4
    ctx->pc = 0x1a91c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1a91c8: 0x10400027
    ctx->pc = 0x1A91C8u;
    {
        const bool branch_taken_0x1a91c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A91CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 144));
        if (branch_taken_0x1a91c8) {
            ctx->pc = 0x1A9268u;
            goto label_1a9268;
        }
    }
    ctx->pc = 0x1A91D0u;
    // 0x1a91d0: 0x70002628
    ctx->pc = 0x1a91d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a91d4: 0xc0694e8
    ctx->pc = 0x1A91D4u;
    SET_GPR_U32(ctx, 31, 0x1A91DCu);
    ctx->pc = 0x1A91D8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91DCu; }
        else if (ctx->pc != 0x1A91DCu) { ctx->pc = 0x1A91DCu; }
    }
    if (ctx->pc != 0x1A91DCu) { return; }
    ctx->pc = 0x1A91DCu;
    // 0x1a91dc: 0xc0694bc
    ctx->pc = 0x1A91DCu;
    SET_GPR_U32(ctx, 31, 0x1A91E4u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91E4u; }
        else if (ctx->pc != 0x1A91E4u) { ctx->pc = 0x1A91E4u; }
    }
    if (ctx->pc != 0x1A91E4u) { return; }
    ctx->pc = 0x1A91E4u;
    // 0x1a91e4: 0x8f838a40
    ctx->pc = 0x1a91e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937152)));
    // 0x1a91e8: 0x24020001
    ctx->pc = 0x1a91e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a91ec: 0x10620003
    ctx->pc = 0x1A91ECu;
    {
        const bool branch_taken_0x1a91ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A91F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1a91ec) {
            ctx->pc = 0x1A91FCu;
            goto label_1a91fc;
        }
    }
    ctx->pc = 0x1A91F4u;
    // 0x1a91f4: 0x14620012
    ctx->pc = 0x1A91F4u;
    {
        const bool branch_taken_0x1a91f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a91f4) {
            ctx->pc = 0x1A9240u;
            goto label_1a9240;
        }
    }
    ctx->pc = 0x1A91FCu;
label_1a91fc:
    // 0x1a91fc: 0x8e0300d0
    ctx->pc = 0x1a91fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a9200: 0xc60c003c
    ctx->pc = 0x1a9200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9204: 0x8f868a34
    ctx->pc = 0x1a9204u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937140)));
    // 0x1a9208: 0x8f878a3c
    ctx->pc = 0x1a9208u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
    // 0x1a920c: 0x8f888a38
    ctx->pc = 0x1a920cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294937144)));
    // 0x1a9210: 0x3c022000
    ctx->pc = 0x1a9210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x1a9214: 0x70002e28
    ctx->pc = 0x1a9214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9218: 0xc06a434
    ctx->pc = 0x1A9218u;
    SET_GPR_U32(ctx, 31, 0x1A9220u);
    ctx->pc = 0x1A921Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A90D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_i_0x1a90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9220u; }
        else if (ctx->pc != 0x1A9220u) { ctx->pc = 0x1A9220u; }
    }
    if (ctx->pc != 0x1A9220u) { return; }
    ctx->pc = 0x1A9220u;
    // 0x1a9220: 0xaf828a3c
    ctx->pc = 0x1a9220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937148), GPR_U32(ctx, 2));
    // 0x1a9224: 0x8f828a3c
    ctx->pc = 0x1a9224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
    // 0x1a9228: 0x441000e
    ctx->pc = 0x1A9228u;
    {
        const bool branch_taken_0x1a9228 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A922Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
        if (branch_taken_0x1a9228) {
            ctx->pc = 0x1A9264u;
            goto label_1a9264;
        }
    }
    ctx->pc = 0x1A9230u;
    // 0x1a9230: 0xc05114a
    ctx->pc = 0x1A9230u;
    SET_GPR_U32(ctx, 31, 0x1A9238u);
    ctx->pc = 0x1A9234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964352));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9238u; }
        else if (ctx->pc != 0x1A9238u) { ctx->pc = 0x1A9238u; }
    }
    if (ctx->pc != 0x1A9238u) { return; }
    ctx->pc = 0x1A9238u;
label_1a9238:
    // 0x1a9238: 0x1000ffff
    ctx->pc = 0x1A9238u;
    {
        const bool branch_taken_0x1a9238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9238) {
            ctx->pc = 0x1A9238u;
            goto label_1a9238;
        }
    }
    ctx->pc = 0x1A9240u;
label_1a9240:
    // 0x1a9240: 0x8e0300d0
    ctx->pc = 0x1a9240u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a9244: 0xc60c003c
    ctx->pc = 0x1a9244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9248: 0x3c022000
    ctx->pc = 0x1a9248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x1a924c: 0x70002e28
    ctx->pc = 0x1a924cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9250: 0x70003628
    ctx->pc = 0x1a9250u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9254: 0x70003e28
    ctx->pc = 0x1a9254u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9258: 0x622025
    ctx->pc = 0x1a9258u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a925c: 0xc06a434
    ctx->pc = 0x1A925Cu;
    SET_GPR_U32(ctx, 31, 0x1A9264u);
    ctx->pc = 0x1A9260u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A90D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_i_0x1a90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9264u; }
        else if (ctx->pc != 0x1A9264u) { ctx->pc = 0x1A9264u; }
    }
    if (ctx->pc != 0x1A9264u) { return; }
    ctx->pc = 0x1A9264u;
label_1a9264:
    // 0x1a9264: 0x26040090
    ctx->pc = 0x1a9264u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 144));
label_1a9268:
    // 0x1a9268: 0xc06c038
    ctx->pc = 0x1A9268u;
    SET_GPR_U32(ctx, 31, 0x1A9270u);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9270u; }
        else if (ctx->pc != 0x1A9270u) { ctx->pc = 0x1A9270u; }
    }
    if (ctx->pc != 0x1A9270u) { return; }
    ctx->pc = 0x1A9270u;
    // 0x1a9270: 0xc069528
    ctx->pc = 0x1A9270u;
    SET_GPR_U32(ctx, 31, 0x1A9278u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9278u; }
        else if (ctx->pc != 0x1A9278u) { ctx->pc = 0x1A9278u; }
    }
    if (ctx->pc != 0x1A9278u) { return; }
    ctx->pc = 0x1A9278u;
    // 0x1a9278: 0x70408e28
    ctx->pc = 0x1a9278u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a927c: 0x3c020030
    ctx->pc = 0x1a927cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a9280: 0x24523940
    ctx->pc = 0x1a9280u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 14656));
    // 0x1a9284: 0x3c021000
    ctx->pc = 0x1a9284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1a9288: 0x3443d000
    ctx->pc = 0x1a9288u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 53248));
label_1a928c:
    // 0x1a928c: 0x8c620000
    ctx->pc = 0x1a928cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9290: 0x30420100
    ctx->pc = 0x1a9290u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a9294: 0x0
    ctx->pc = 0x1a9294u;
    // NOP
    // 0x1a9298: 0x0
    ctx->pc = 0x1a9298u;
    // NOP
    // 0x1a929c: 0x0
    ctx->pc = 0x1a929cu;
    // NOP
    // 0x1a92a0: 0x1440fffa
    ctx->pc = 0x1A92A0u;
    {
        const bool branch_taken_0x1a92a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a92a0) {
            ctx->pc = 0x1A928Cu;
            goto label_1a928c;
        }
    }
    ctx->pc = 0x1A92A8u;
    // 0x1a92a8: 0x72202628
    ctx->pc = 0x1a92a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a92ac: 0x72402e28
    ctx->pc = 0x1a92acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a92b0: 0xc06ac36
    ctx->pc = 0x1A92B0u;
    SET_GPR_U32(ctx, 31, 0x1A92B8u);
    ctx->pc = 0x1A92B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92B8u; }
        else if (ctx->pc != 0x1A92B8u) { ctx->pc = 0x1A92B8u; }
    }
    if (ctx->pc != 0x1A92B8u) { return; }
    ctx->pc = 0x1A92B8u;
    // 0x1a92b8: 0x26240020
    ctx->pc = 0x1a92b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a92bc: 0x26050020
    ctx->pc = 0x1a92bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a92c0: 0xc06ac36
    ctx->pc = 0x1A92C0u;
    SET_GPR_U32(ctx, 31, 0x1A92C8u);
    ctx->pc = 0x1A92C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92C8u; }
        else if (ctx->pc != 0x1A92C8u) { ctx->pc = 0x1A92C8u; }
    }
    if (ctx->pc != 0x1A92C8u) { return; }
    ctx->pc = 0x1A92C8u;
    // 0x1a92c8: 0x264500d0
    ctx->pc = 0x1a92c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 208));
    // 0x1a92cc: 0x262400d0
    ctx->pc = 0x1a92ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 208));
    // 0x1a92d0: 0xc06ac36
    ctx->pc = 0x1A92D0u;
    SET_GPR_U32(ctx, 31, 0x1A92D8u);
    ctx->pc = 0x1A92D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92D8u; }
        else if (ctx->pc != 0x1A92D8u) { ctx->pc = 0x1A92D8u; }
    }
    if (ctx->pc != 0x1A92D8u) { return; }
    ctx->pc = 0x1A92D8u;
    // 0x1a92d8: 0x8e1300d0
    ctx->pc = 0x1a92d8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a92dc: 0x8f8289b8
    ctx->pc = 0x1a92dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x1a92e0: 0x8e75002c
    ctx->pc = 0x1a92e0u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1a92e4: 0x2a102
    ctx->pc = 0x1a92e4u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1a92e8: 0x26b2000e
    ctx->pc = 0x1a92e8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 14));
    // 0x1a92ec: 0x292082a
    ctx->pc = 0x1a92ecu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 18)));
    // 0x1a92f0: 0x54200009
    ctx->pc = 0x1A92F0u;
    {
        const bool branch_taken_0x1a92f0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a92f0) {
            ctx->pc = 0x1A92F4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 4294967282));
            ctx->pc = 0x1A9318u;
            goto label_1a9318;
        }
    }
    ctx->pc = 0x1A92F8u;
    // 0x1a92f8: 0x262400e0
    ctx->pc = 0x1a92f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 224));
    // 0x1a92fc: 0x26650030
    ctx->pc = 0x1a92fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 48));
    // 0x1a9300: 0xc06ac36
    ctx->pc = 0x1A9300u;
    SET_GPR_U32(ctx, 31, 0x1A9308u);
    ctx->pc = 0x1A9304u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9308u; }
        else if (ctx->pc != 0x1A9308u) { ctx->pc = 0x1A9308u; }
    }
    if (ctx->pc != 0x1A9308u) { return; }
    ctx->pc = 0x1A9308u;
    // 0x1a9308: 0xc06952c
    ctx->pc = 0x1A9308u;
    SET_GPR_U32(ctx, 31, 0x1A9310u);
    ctx->pc = 0x1A930Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9310u; }
        else if (ctx->pc != 0x1A9310u) { ctx->pc = 0x1A9310u; }
    }
    if (ctx->pc != 0x1A9310u) { return; }
    ctx->pc = 0x1A9310u;
    // 0x1a9310: 0x1000002a
    ctx->pc = 0x1A9310u;
    {
        const bool branch_taken_0x1a9310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9314u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937152)));
        if (branch_taken_0x1a9310) {
            ctx->pc = 0x1A93BCu;
            goto label_1a93bc;
        }
    }
    ctx->pc = 0x1A9318u;
label_1a9318:
    // 0x1a9318: 0x262400e0
    ctx->pc = 0x1a9318u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 224));
    // 0x1a931c: 0x26650030
    ctx->pc = 0x1a931cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 48));
    // 0x1a9320: 0xc06ac36
    ctx->pc = 0x1A9320u;
    SET_GPR_U32(ctx, 31, 0x1A9328u);
    ctx->pc = 0x1A9324u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9328u; }
        else if (ctx->pc != 0x1A9328u) { ctx->pc = 0x1A9328u; }
    }
    if (ctx->pc != 0x1A9328u) { return; }
    ctx->pc = 0x1A9328u;
    // 0x1a9328: 0xc06952c
    ctx->pc = 0x1A9328u;
    SET_GPR_U32(ctx, 31, 0x1A9330u);
    ctx->pc = 0x1A932Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9330u; }
        else if (ctx->pc != 0x1A9330u) { ctx->pc = 0x1A9330u; }
    }
    if (ctx->pc != 0x1A9330u) { return; }
    ctx->pc = 0x1A9330u;
    // 0x1a9330: 0x2549023
    ctx->pc = 0x1a9330u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1a9334: 0x26640030
    ctx->pc = 0x1a9334u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 48));
    // 0x1a9338: 0x151900
    ctx->pc = 0x1a9338u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 4));
    // 0x1a933c: 0x1a40001e
    ctx->pc = 0x1A933Cu;
    {
        const bool branch_taken_0x1a933c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1A9340u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x1a933c) {
            ctx->pc = 0x1A93B8u;
            goto label_1a93b8;
        }
    }
    ctx->pc = 0x1A9344u;
label_1a9344:
    // 0x1a9344: 0x292082a
    ctx->pc = 0x1a9344u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 18)));
    // 0x1a9348: 0x10200004
    ctx->pc = 0x1A9348u;
    {
        const bool branch_taken_0x1a9348 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A934Cu;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a9348) {
            ctx->pc = 0x1A935Cu;
            goto label_1a935c;
        }
    }
    ctx->pc = 0x1A9350u;
    // 0x1a9350: 0x10000003
    ctx->pc = 0x1A9350u;
    {
        const bool branch_taken_0x1a9350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9354u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a9350) {
            ctx->pc = 0x1A9360u;
            goto label_1a9360;
        }
    }
    ctx->pc = 0x1A9358u;
    // 0x1a9358: 0x7240ae28
    ctx->pc = 0x1a9358u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1a935c:
    // 0x1a935c: 0x0
    ctx->pc = 0x1a935cu;
    // NOP
label_1a9360:
    // 0x1a9360: 0x3c011001
    ctx->pc = 0x1a9360u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a9364: 0x8c22d000
    ctx->pc = 0x1a9364u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a9368: 0x30420100
    ctx->pc = 0x1a9368u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a936c: 0x0
    ctx->pc = 0x1a936cu;
    // NOP
    // 0x1a9370: 0x0
    ctx->pc = 0x1a9370u;
    // NOP
    // 0x1a9374: 0x1440fffa
    ctx->pc = 0x1A9374u;
    {
        const bool branch_taken_0x1a9374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a9374) {
            ctx->pc = 0x1A9360u;
            goto label_1a9360;
        }
    }
    ctx->pc = 0x1A937Cu;
    // 0x1a937c: 0x72202628
    ctx->pc = 0x1a937cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a9380: 0x72602e28
    ctx->pc = 0x1a9380u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a9384: 0xc06ac36
    ctx->pc = 0x1A9384u;
    SET_GPR_U32(ctx, 31, 0x1A938Cu);
    ctx->pc = 0x1A9388u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A938Cu; }
        else if (ctx->pc != 0x1A938Cu) { ctx->pc = 0x1A938Cu; }
    }
    if (ctx->pc != 0x1A938Cu) { return; }
    ctx->pc = 0x1A938Cu;
    // 0x1a938c: 0xc06952c
    ctx->pc = 0x1A938Cu;
    SET_GPR_U32(ctx, 31, 0x1A9394u);
    ctx->pc = 0x1A9390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9394u; }
        else if (ctx->pc != 0x1A9394u) { ctx->pc = 0x1A9394u; }
    }
    if (ctx->pc != 0x1A9394u) { return; }
    ctx->pc = 0x1A9394u;
    // 0x1a9394: 0x152100
    ctx->pc = 0x1a9394u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 21), 4));
    // 0x1a9398: 0x4810003
    ctx->pc = 0x1A9398u;
    {
        const bool branch_taken_0x1a9398 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A939Cu;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x1a9398) {
            ctx->pc = 0x1A93A8u;
            goto label_1a93a8;
        }
    }
    ctx->pc = 0x1A93A0u;
    // 0x1a93a0: 0x24830003
    ctx->pc = 0x1a93a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a93a4: 0x31883
    ctx->pc = 0x1a93a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a93a8:
    // 0x1a93a8: 0x31880
    ctx->pc = 0x1a93a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a93ac: 0x2559023
    ctx->pc = 0x1a93acu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x1a93b0: 0x1e40ffe4
    ctx->pc = 0x1A93B0u;
    {
        const bool branch_taken_0x1a93b0 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1A93B4u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        if (branch_taken_0x1a93b0) {
            ctx->pc = 0x1A9344u;
            goto label_1a9344;
        }
    }
    ctx->pc = 0x1A93B8u;
label_1a93b8:
    // 0x1a93b8: 0x8f848a40
    ctx->pc = 0x1a93b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937152)));
label_1a93bc:
    // 0x1a93bc: 0x24030001
    ctx->pc = 0x1a93bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a93c0: 0x14830016
    ctx->pc = 0x1A93C0u;
    {
        const bool branch_taken_0x1a93c0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a93c0) {
            ctx->pc = 0x1A941Cu;
            goto label_1a941c;
        }
    }
    ctx->pc = 0x1A93C8u;
    // 0x1a93c8: 0x8f838a3c
    ctx->pc = 0x1a93c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
    // 0x1a93cc: 0x18600013
    ctx->pc = 0x1A93CCu;
    {
        const bool branch_taken_0x1a93cc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a93cc) {
            ctx->pc = 0x1A941Cu;
            goto label_1a941c;
        }
    }
    ctx->pc = 0x1A93D4u;
    // 0x1a93d4: 0x8f918a34
    ctx->pc = 0x1a93d4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294937140)));
    // 0x1a93d8: 0x70002628
    ctx->pc = 0x1a93d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a93dc: 0xc0694e8
    ctx->pc = 0x1A93DCu;
    SET_GPR_U32(ctx, 31, 0x1A93E4u);
    ctx->pc = 0x1A93E0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93E4u; }
        else if (ctx->pc != 0x1A93E4u) { ctx->pc = 0x1A93E4u; }
    }
    if (ctx->pc != 0x1A93E4u) { return; }
    ctx->pc = 0x1A93E4u;
    // 0x1a93e4: 0x10000009
    ctx->pc = 0x1A93E4u;
    {
        const bool branch_taken_0x1a93e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A93E8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
        if (branch_taken_0x1a93e4) {
            ctx->pc = 0x1A940Cu;
            goto label_1a940c;
        }
    }
    ctx->pc = 0x1A93ECu;
label_1a93ec:
    // 0x1a93ec: 0x8e230004
    ctx->pc = 0x1a93ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a93f0: 0x8e220000
    ctx->pc = 0x1a93f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a93f4: 0xac430000
    ctx->pc = 0x1a93f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a93f8: 0x8f828a3c
    ctx->pc = 0x1a93f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
    // 0x1a93fc: 0x26310008
    ctx->pc = 0x1a93fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
    // 0x1a9400: 0x2442ffff
    ctx->pc = 0x1a9400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9404: 0xaf828a3c
    ctx->pc = 0x1a9404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937148), GPR_U32(ctx, 2));
    // 0x1a9408: 0x8f828a3c
    ctx->pc = 0x1a9408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
label_1a940c:
    // 0x1a940c: 0x1440fff7
    ctx->pc = 0x1A940Cu;
    {
        const bool branch_taken_0x1a940c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a940c) {
            ctx->pc = 0x1A93ECu;
            goto label_1a93ec;
        }
    }
    ctx->pc = 0x1A9414u;
    // 0x1a9414: 0xc0694bc
    ctx->pc = 0x1A9414u;
    SET_GPR_U32(ctx, 31, 0x1A941Cu);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A941Cu; }
        else if (ctx->pc != 0x1A941Cu) { ctx->pc = 0x1A941Cu; }
    }
    if (ctx->pc != 0x1A941Cu) { return; }
    ctx->pc = 0x1A941Cu;
label_1a941c:
    // 0x1a941c: 0x860300d8
    ctx->pc = 0x1a941cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1a9420: 0x10600006
    ctx->pc = 0x1A9420u;
    {
        const bool branch_taken_0x1a9420 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9424u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a9420) {
            ctx->pc = 0x1A943Cu;
            goto label_1a943c;
        }
    }
    ctx->pc = 0x1A9428u;
    // 0x1a9428: 0xc06c608
    ctx->pc = 0x1A9428u;
    SET_GPR_U32(ctx, 31, 0x1A9430u);
    ctx->pc = 0x1A942Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetFBA_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9430u; }
        else if (ctx->pc != 0x1A9430u) { ctx->pc = 0x1A9430u; }
    }
    if (ctx->pc != 0x1A9430u) { return; }
    ctx->pc = 0x1A9430u;
    // 0x1a9430: 0x24040200
    ctx->pc = 0x1a9430u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a9434: 0xc06c608
    ctx->pc = 0x1A9434u;
    SET_GPR_U32(ctx, 31, 0x1A943Cu);
    ctx->pc = 0x1A9438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetFBA_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A943Cu; }
        else if (ctx->pc != 0x1A943Cu) { ctx->pc = 0x1A943Cu; }
    }
    if (ctx->pc != 0x1A943Cu) { return; }
    ctx->pc = 0x1A943Cu;
label_1a943c:
    // 0x1a943c: 0x7bbf0060
    ctx->pc = 0x1a943cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a9440: 0x7bb50050
    ctx->pc = 0x1a9440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a9444: 0x7bb40040
    ctx->pc = 0x1a9444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9448: 0x7bb30030
    ctx->pc = 0x1a9448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a944c: 0x7bb20020
    ctx->pc = 0x1a944cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9450: 0x7bb10010
    ctx->pc = 0x1a9450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9454: 0x7bb00000
    ctx->pc = 0x1a9454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9458: 0x3e00008
    ctx->pc = 0x1A9458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A945Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A91C4u: goto label_1a91c4;
            case 0x1A91FCu: goto label_1a91fc;
            case 0x1A9238u: goto label_1a9238;
            case 0x1A9240u: goto label_1a9240;
            case 0x1A9264u: goto label_1a9264;
            case 0x1A9268u: goto label_1a9268;
            case 0x1A928Cu: goto label_1a928c;
            case 0x1A9318u: goto label_1a9318;
            case 0x1A9344u: goto label_1a9344;
            case 0x1A935Cu: goto label_1a935c;
            case 0x1A9360u: goto label_1a9360;
            case 0x1A93A8u: goto label_1a93a8;
            case 0x1A93B8u: goto label_1a93b8;
            case 0x1A93BCu: goto label_1a93bc;
            case 0x1A93ECu: goto label_1a93ec;
            case 0x1A940Cu: goto label_1a940c;
            case 0x1A941Cu: goto label_1a941c;
            case 0x1A943Cu: goto label_1a943c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9460u;
}
