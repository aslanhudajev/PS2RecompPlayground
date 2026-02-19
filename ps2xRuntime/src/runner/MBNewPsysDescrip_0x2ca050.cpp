#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewPsysDescrip
// Address: 0x2ca050 - 0x2ca83c
void MBNewPsysDescrip_0x2ca050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ca050u;

    // 0x2ca050: 0x27bdffc0
    ctx->pc = 0x2ca050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ca054: 0xffbf0030
    ctx->pc = 0x2ca054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ca058: 0xffb20020
    ctx->pc = 0x2ca058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ca05c: 0xffb10010
    ctx->pc = 0x2ca05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ca060: 0xffb00000
    ctx->pc = 0x2ca060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca064: 0xe0802d
    ctx->pc = 0x2ca064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca068: 0x8e020024
    ctx->pc = 0x2ca068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca06c: 0x30420008
    ctx->pc = 0x2ca06cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x2ca070: 0x54400001
    ctx->pc = 0x2CA070u;
    {
        const bool branch_taken_0x2ca070 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ca070) {
            ctx->pc = 0x2CA074u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->pc = 0x2CA078u;
            goto label_2ca078;
        }
    }
    ctx->pc = 0x2CA078u;
label_2ca078:
    // 0x2ca078: 0x10a00006
    ctx->pc = 0x2CA078u;
    {
        const bool branch_taken_0x2ca078 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA07Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca078) {
            ctx->pc = 0x2CA094u;
            goto label_2ca094;
        }
    }
    ctx->pc = 0x2CA080u;
    // 0x2ca080: 0xc0b27c2
    ctx->pc = 0x2CA080u;
    SET_GPR_U32(ctx, 31, 0x2CA088u);
    ctx->pc = 0x2CA084u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C9F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        createPsysNode_0x2c9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA088u; }
    }
    if (ctx->pc != 0x2CA088u) { return; }
    ctx->pc = 0x2CA088u;
    // 0x2ca088: 0x40882d
    ctx->pc = 0x2ca088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca08c: 0x56200003
    ctx->pc = 0x2CA08Cu;
    {
        const bool branch_taken_0x2ca08c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ca08c) {
            ctx->pc = 0x2CA090u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2CA09Cu;
            goto label_2ca09c;
        }
    }
    ctx->pc = 0x2CA094u;
label_2ca094:
    // 0x2ca094: 0x100001e3
    ctx->pc = 0x2CA094u;
    {
        const bool branch_taken_0x2ca094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA098u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca094) {
            ctx->pc = 0x2CA824u;
            goto label_2ca824;
        }
    }
    ctx->pc = 0x2CA09Cu;
label_2ca09c:
    // 0x2ca09c: 0x30420001
    ctx->pc = 0x2ca09cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2ca0a0: 0x10400003
    ctx->pc = 0x2CA0A0u;
    {
        const bool branch_taken_0x2ca0a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA0A4u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        if (branch_taken_0x2ca0a0) {
            ctx->pc = 0x2CA0B0u;
            goto label_2ca0b0;
        }
    }
    ctx->pc = 0x2CA0A8u;
    // 0x2ca0a8: 0x96020028
    ctx->pc = 0x2ca0a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2ca0ac: 0xa642002e
    ctx->pc = 0x2ca0acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 2));
label_2ca0b0:
    // 0x2ca0b0: 0x8e020024
    ctx->pc = 0x2ca0b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca0b4: 0x30420002
    ctx->pc = 0x2ca0b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2ca0b8: 0x50400004
    ctx->pc = 0x2CA0B8u;
    {
        const bool branch_taken_0x2ca0b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca0b8) {
            ctx->pc = 0x2CA0BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2CA0CCu;
            goto label_2ca0cc;
        }
    }
    ctx->pc = 0x2CA0C0u;
    // 0x2ca0c0: 0x9602002c
    ctx->pc = 0x2ca0c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ca0c4: 0xa6420030
    ctx->pc = 0x2ca0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca0c8: 0x8e020024
    ctx->pc = 0x2ca0c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2ca0cc:
    // 0x2ca0cc: 0x30420004
    ctx->pc = 0x2ca0ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2ca0d0: 0x50400004
    ctx->pc = 0x2CA0D0u;
    {
        const bool branch_taken_0x2ca0d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca0d0) {
            ctx->pc = 0x2CA0D4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2CA0E4u;
            goto label_2ca0e4;
        }
    }
    ctx->pc = 0x2CA0D8u;
    // 0x2ca0d8: 0x96020030
    ctx->pc = 0x2ca0d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ca0dc: 0xa6420032
    ctx->pc = 0x2ca0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca0e0: 0x8e020024
    ctx->pc = 0x2ca0e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2ca0e4:
    // 0x2ca0e4: 0x30420020
    ctx->pc = 0x2ca0e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x2ca0e8: 0x10400004
    ctx->pc = 0x2CA0E8u;
    {
        const bool branch_taken_0x2ca0e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA0ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca0e8) {
            ctx->pc = 0x2CA0FCu;
            goto label_2ca0fc;
        }
    }
    ctx->pc = 0x2CA0F0u;
    // 0x2ca0f0: 0xc60c003c
    ctx->pc = 0x2ca0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca0f4: 0xc0b25a6
    ctx->pc = 0x2CA0F4u;
    SET_GPR_U32(ctx, 31, 0x2CA0FCu);
    ctx->pc = 0x2CA0F8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2C9698u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetETime_0x2c9698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA0FCu; }
    }
    if (ctx->pc != 0x2CA0FCu) { return; }
    ctx->pc = 0x2CA0FCu;
label_2ca0fc:
    // 0x2ca0fc: 0x8e020024
    ctx->pc = 0x2ca0fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca100: 0x30420040
    ctx->pc = 0x2ca100u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2ca104: 0x10400004
    ctx->pc = 0x2CA104u;
    {
        const bool branch_taken_0x2ca104 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA108u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca104) {
            ctx->pc = 0x2CA118u;
            goto label_2ca118;
        }
    }
    ctx->pc = 0x2CA10Cu;
    // 0x2ca10c: 0xc60c0044
    ctx->pc = 0x2ca10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca110: 0xc0b25f6
    ctx->pc = 0x2CA110u;
    SET_GPR_U32(ctx, 31, 0x2CA118u);
    ctx->pc = 0x2CA114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2C97D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPTime_0x2c97d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA118u; }
    }
    if (ctx->pc != 0x2CA118u) { return; }
    ctx->pc = 0x2CA118u;
label_2ca118:
    // 0x2ca118: 0x8e020024
    ctx->pc = 0x2ca118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca11c: 0x30420100
    ctx->pc = 0x2ca11cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2ca120: 0x10400005
    ctx->pc = 0x2CA120u;
    {
        const bool branch_taken_0x2ca120 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA124u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca120) {
            ctx->pc = 0x2CA138u;
            goto label_2ca138;
        }
    }
    ctx->pc = 0x2CA128u;
    // 0x2ca128: 0xc60c0058
    ctx->pc = 0x2ca128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca12c: 0xc60d005c
    ctx->pc = 0x2ca12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ca130: 0xc0b2672
    ctx->pc = 0x2CA130u;
    SET_GPR_U32(ctx, 31, 0x2CA138u);
    ctx->pc = 0x2CA134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->pc = 0x2C99C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetEDirection_0x2c99c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA138u; }
    }
    if (ctx->pc != 0x2CA138u) { return; }
    ctx->pc = 0x2CA138u;
label_2ca138:
    // 0x2ca138: 0x8e020024
    ctx->pc = 0x2ca138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca13c: 0x30420200
    ctx->pc = 0x2ca13cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x2ca140: 0x10400003
    ctx->pc = 0x2CA140u;
    {
        const bool branch_taken_0x2ca140 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA144u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca140) {
            ctx->pc = 0x2CA150u;
            goto label_2ca150;
        }
    }
    ctx->pc = 0x2CA148u;
    // 0x2ca148: 0xc0b269c
    ctx->pc = 0x2CA148u;
    SET_GPR_U32(ctx, 31, 0x2CA150u);
    ctx->pc = 0x2CA14Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2C9A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetEAngle_0x2c9a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA150u; }
    }
    if (ctx->pc != 0x2CA150u) { return; }
    ctx->pc = 0x2CA150u;
label_2ca150:
    // 0x2ca150: 0x8e020024
    ctx->pc = 0x2ca150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca154: 0x30420400
    ctx->pc = 0x2ca154u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x2ca158: 0x10400005
    ctx->pc = 0x2CA158u;
    {
        const bool branch_taken_0x2ca158 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA15Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca158) {
            ctx->pc = 0x2CA170u;
            goto label_2ca170;
        }
    }
    ctx->pc = 0x2CA160u;
    // 0x2ca160: 0xc60c0068
    ctx->pc = 0x2ca160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca164: 0xc60d006c
    ctx->pc = 0x2ca164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ca168: 0xc0b265a
    ctx->pc = 0x2CA168u;
    SET_GPR_U32(ctx, 31, 0x2CA170u);
    ctx->pc = 0x2CA16Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->pc = 0x2C9968u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetEVolume_0x2c9968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA170u; }
    }
    if (ctx->pc != 0x2CA170u) { return; }
    ctx->pc = 0x2CA170u;
label_2ca170:
    // 0x2ca170: 0x8e020024
    ctx->pc = 0x2ca170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca174: 0x30420800
    ctx->pc = 0x2ca174u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x2ca178: 0x10400006
    ctx->pc = 0x2CA178u;
    {
        const bool branch_taken_0x2ca178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA17Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca178) {
            ctx->pc = 0x2CA194u;
            goto label_2ca194;
        }
    }
    ctx->pc = 0x2CA180u;
    // 0x2ca180: 0xc60c0074
    ctx->pc = 0x2ca180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca184: 0xc60d0078
    ctx->pc = 0x2ca184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ca188: 0xc60e007c
    ctx->pc = 0x2ca188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ca18c: 0xc0b2646
    ctx->pc = 0x2CA18Cu;
    SET_GPR_U32(ctx, 31, 0x2CA194u);
    ctx->pc = 0x2CA190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->pc = 0x2C9918u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetERate4_0x2c9918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA194u; }
    }
    if (ctx->pc != 0x2CA194u) { return; }
    ctx->pc = 0x2CA194u;
label_2ca194:
    // 0x2ca194: 0x8e020024
    ctx->pc = 0x2ca194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca198: 0x30421000
    ctx->pc = 0x2ca198u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x2ca19c: 0x50400008
    ctx->pc = 0x2CA19Cu;
    {
        const bool branch_taken_0x2ca19c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca19c) {
            ctx->pc = 0x2CA1A0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2CA1C0u;
            goto label_2ca1c0;
        }
    }
    ctx->pc = 0x2CA1A4u;
    // 0x2ca1a4: 0xc6000088
    ctx->pc = 0x2ca1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca1a8: 0x3c01bd11
    ctx->pc = 0x2ca1a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48401 << 16));
    // 0x2ca1ac: 0x3421a2b4
    ctx->pc = 0x2ca1acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 41652));
    // 0x2ca1b0: 0x44810800
    ctx->pc = 0x2ca1b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2ca1b4: 0x46010002
    ctx->pc = 0x2ca1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca1b8: 0xe6400098
    ctx->pc = 0x2ca1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x2ca1bc: 0x8e020024
    ctx->pc = 0x2ca1bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2ca1c0:
    // 0x2ca1c0: 0x30422000
    ctx->pc = 0x2ca1c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
    // 0x2ca1c4: 0x50400005
    ctx->pc = 0x2CA1C4u;
    {
        const bool branch_taken_0x2ca1c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca1c4) {
            ctx->pc = 0x2CA1C8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2CA1DCu;
            goto label_2ca1dc;
        }
    }
    ctx->pc = 0x2CA1CCu;
    // 0x2ca1cc: 0xc600008c
    ctx->pc = 0x2ca1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca1d0: 0x46000007
    ctx->pc = 0x2ca1d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ca1d4: 0xe640009c
    ctx->pc = 0x2ca1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
    // 0x2ca1d8: 0x8e020024
    ctx->pc = 0x2ca1d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2ca1dc:
    // 0x2ca1dc: 0x30424000
    ctx->pc = 0x2ca1dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x2ca1e0: 0x10400003
    ctx->pc = 0x2CA1E0u;
    {
        const bool branch_taken_0x2ca1e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA1E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca1e0) {
            ctx->pc = 0x2CA1F0u;
            goto label_2ca1f0;
        }
    }
    ctx->pc = 0x2CA1E8u;
    // 0x2ca1e8: 0xc0b2664
    ctx->pc = 0x2CA1E8u;
    SET_GPR_U32(ctx, 31, 0x2CA1F0u);
    ctx->pc = 0x2CA1ECu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2C9990u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPSpeed_0x2c9990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1F0u; }
    }
    if (ctx->pc != 0x2CA1F0u) { return; }
    ctx->pc = 0x2CA1F0u;
label_2ca1f0:
    // 0x2ca1f0: 0x8e020024
    ctx->pc = 0x2ca1f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca1f4: 0x30428000
    ctx->pc = 0x2ca1f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x2ca1f8: 0x10400003
    ctx->pc = 0x2CA1F8u;
    {
        const bool branch_taken_0x2ca1f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA1FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca1f8) {
            ctx->pc = 0x2CA208u;
            goto label_2ca208;
        }
    }
    ctx->pc = 0x2CA200u;
    // 0x2ca200: 0xc0b2726
    ctx->pc = 0x2CA200u;
    SET_GPR_U32(ctx, 31, 0x2CA208u);
    ctx->pc = 0x2CA204u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 148));
    ctx->pc = 0x2C9C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPTexName_0x2c9c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA208u; }
    }
    if (ctx->pc != 0x2CA208u) { return; }
    ctx->pc = 0x2CA208u;
label_2ca208:
    // 0x2ca208: 0x8e020024
    ctx->pc = 0x2ca208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca20c: 0x3c030001
    ctx->pc = 0x2ca20cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2ca210: 0x431024
    ctx->pc = 0x2ca210u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca214: 0x10400003
    ctx->pc = 0x2CA214u;
    {
        const bool branch_taken_0x2ca214 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA218u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca214) {
            ctx->pc = 0x2CA224u;
            goto label_2ca224;
        }
    }
    ctx->pc = 0x2CA21Cu;
    // 0x2ca21c: 0xc0b2726
    ctx->pc = 0x2CA21Cu;
    SET_GPR_U32(ctx, 31, 0x2CA224u);
    ctx->pc = 0x2CA220u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    ctx->pc = 0x2C9C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPTexName_0x2c9c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA224u; }
    }
    if (ctx->pc != 0x2CA224u) { return; }
    ctx->pc = 0x2CA224u;
label_2ca224:
    // 0x2ca224: 0x8e020024
    ctx->pc = 0x2ca224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca228: 0x3c030002
    ctx->pc = 0x2ca228u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
    // 0x2ca22c: 0x431024
    ctx->pc = 0x2ca22cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca230: 0x10400003
    ctx->pc = 0x2CA230u;
    {
        const bool branch_taken_0x2ca230 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA234u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca230) {
            ctx->pc = 0x2CA240u;
            goto label_2ca240;
        }
    }
    ctx->pc = 0x2CA238u;
    // 0x2ca238: 0xc0b2716
    ctx->pc = 0x2CA238u;
    SET_GPR_U32(ctx, 31, 0x2CA240u);
    ctx->pc = 0x2CA23Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->pc = 0x2C9C58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPTex_0x2c9c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA240u; }
    }
    if (ctx->pc != 0x2CA240u) { return; }
    ctx->pc = 0x2CA240u;
label_2ca240:
    // 0x2ca240: 0x8e020024
    ctx->pc = 0x2ca240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca244: 0x3c030004
    ctx->pc = 0x2ca244u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x2ca248: 0x431024
    ctx->pc = 0x2ca248u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca24c: 0x50400008
    ctx->pc = 0x2CA24Cu;
    {
        const bool branch_taken_0x2ca24c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca24c) {
            ctx->pc = 0x2CA250u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2CA270u;
            goto label_2ca270;
        }
    }
    ctx->pc = 0x2CA254u;
    // 0x2ca254: 0x8e230070
    ctx->pc = 0x2ca254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2ca258: 0x8e0200c0
    ctx->pc = 0x2ca258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2ca25c: 0xac620088
    ctx->pc = 0x2ca25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x2ca260: 0x8e230070
    ctx->pc = 0x2ca260u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2ca264: 0x8e0200c4
    ctx->pc = 0x2ca264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2ca268: 0xac62008c
    ctx->pc = 0x2ca268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 2));
    // 0x2ca26c: 0x8e020024
    ctx->pc = 0x2ca26cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2ca270:
    // 0x2ca270: 0x3c030008
    ctx->pc = 0x2ca270u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x2ca274: 0x431024
    ctx->pc = 0x2ca274u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca278: 0x5040010e
    ctx->pc = 0x2CA278u;
    {
        const bool branch_taken_0x2ca278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca278) {
            ctx->pc = 0x2CA27Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2CA6B4u;
            goto label_2ca6b4;
        }
    }
    ctx->pc = 0x2CA280u;
    // 0x2ca280: 0x920300cb
    ctx->pc = 0x2ca280u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 203)));
    // 0x2ca284: 0x4600005
    ctx->pc = 0x2CA284u;
    {
        const bool branch_taken_0x2ca284 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA288u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ca284) {
            ctx->pc = 0x2CA29Cu;
            goto label_2ca29c;
        }
    }
    ctx->pc = 0x2CA28Cu;
    // 0x2ca28c: 0x44836000
    ctx->pc = 0x2ca28cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x2ca290: 0x46806320
    ctx->pc = 0x2ca290u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2ca294: 0x10000006
    ctx->pc = 0x2CA294u;
    {
        const bool branch_taken_0x2ca294 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca294) {
            ctx->pc = 0x2CA2B0u;
            goto label_2ca2b0;
        }
    }
    ctx->pc = 0x2CA29Cu;
label_2ca29c:
    // 0x2ca29c: 0x31842
    ctx->pc = 0x2ca29cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca2a0: 0x431025
    ctx->pc = 0x2ca2a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca2a4: 0x44826000
    ctx->pc = 0x2ca2a4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2ca2a8: 0x46806320
    ctx->pc = 0x2ca2a8u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2ca2ac: 0x460c6300
    ctx->pc = 0x2ca2acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2ca2b0:
    // 0x2ca2b0: 0x3c013b80
    ctx->pc = 0x2ca2b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca2b4: 0x34218081
    ctx->pc = 0x2ca2b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca2b8: 0x44810000
    ctx->pc = 0x2ca2b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca2bc: 0x920300cf
    ctx->pc = 0x2ca2bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 207)));
    // 0x2ca2c0: 0x4600005
    ctx->pc = 0x2CA2C0u;
    {
        const bool branch_taken_0x2ca2c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA2C4u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2ca2c0) {
            ctx->pc = 0x2CA2D8u;
            goto label_2ca2d8;
        }
    }
    ctx->pc = 0x2CA2C8u;
    // 0x2ca2c8: 0x44836800
    ctx->pc = 0x2ca2c8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x2ca2cc: 0x46806b60
    ctx->pc = 0x2ca2ccu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2ca2d0: 0x1000000b
    ctx->pc = 0x2CA2D0u;
    {
        const bool branch_taken_0x2ca2d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA2D4u;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2ca2d0) {
            ctx->pc = 0x2CA300u;
            goto label_2ca300;
        }
    }
    ctx->pc = 0x2CA2D8u;
label_2ca2d8:
    // 0x2ca2d8: 0x30620001
    ctx->pc = 0x2ca2d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2ca2dc: 0x31842
    ctx->pc = 0x2ca2dcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca2e0: 0x431025
    ctx->pc = 0x2ca2e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca2e4: 0x44826800
    ctx->pc = 0x2ca2e4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2ca2e8: 0x46806b60
    ctx->pc = 0x2ca2e8u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2ca2ec: 0x460d6b40
    ctx->pc = 0x2ca2ecu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2ca2f0: 0x3c013b80
    ctx->pc = 0x2ca2f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca2f4: 0x34218081
    ctx->pc = 0x2ca2f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca2f8: 0x44810000
    ctx->pc = 0x2ca2f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca2fc: 0x46006b42
    ctx->pc = 0x2ca2fcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2ca300:
    // 0x2ca300: 0x920300d3
    ctx->pc = 0x2ca300u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 211)));
    // 0x2ca304: 0x4600005
    ctx->pc = 0x2CA304u;
    {
        const bool branch_taken_0x2ca304 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA308u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ca304) {
            ctx->pc = 0x2CA31Cu;
            goto label_2ca31c;
        }
    }
    ctx->pc = 0x2CA30Cu;
    // 0x2ca30c: 0x44837000
    ctx->pc = 0x2ca30cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x2ca310: 0x468073a0
    ctx->pc = 0x2ca310u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2ca314: 0x10000006
    ctx->pc = 0x2CA314u;
    {
        const bool branch_taken_0x2ca314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca314) {
            ctx->pc = 0x2CA330u;
            goto label_2ca330;
        }
    }
    ctx->pc = 0x2CA31Cu;
label_2ca31c:
    // 0x2ca31c: 0x31842
    ctx->pc = 0x2ca31cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca320: 0x431025
    ctx->pc = 0x2ca320u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca324: 0x44827000
    ctx->pc = 0x2ca324u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2ca328: 0x468073a0
    ctx->pc = 0x2ca328u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2ca32c: 0x460e7380
    ctx->pc = 0x2ca32cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_2ca330:
    // 0x2ca330: 0x3c013b80
    ctx->pc = 0x2ca330u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca334: 0x34218081
    ctx->pc = 0x2ca334u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca338: 0x44810000
    ctx->pc = 0x2ca338u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca33c: 0x920300d7
    ctx->pc = 0x2ca33cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 215)));
    // 0x2ca340: 0x4600005
    ctx->pc = 0x2CA340u;
    {
        const bool branch_taken_0x2ca340 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA344u;
        ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
        if (branch_taken_0x2ca340) {
            ctx->pc = 0x2CA358u;
            goto label_2ca358;
        }
    }
    ctx->pc = 0x2CA348u;
    // 0x2ca348: 0x44830000
    ctx->pc = 0x2ca348u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2ca34c: 0x46800020
    ctx->pc = 0x2ca34cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ca350: 0x10000007
    ctx->pc = 0x2CA350u;
    {
        const bool branch_taken_0x2ca350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca350) {
            ctx->pc = 0x2CA370u;
            goto label_2ca370;
        }
    }
    ctx->pc = 0x2CA358u;
label_2ca358:
    // 0x2ca358: 0x30620001
    ctx->pc = 0x2ca358u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2ca35c: 0x31842
    ctx->pc = 0x2ca35cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca360: 0x431025
    ctx->pc = 0x2ca360u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca364: 0x44820000
    ctx->pc = 0x2ca364u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2ca368: 0x46800020
    ctx->pc = 0x2ca368u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ca36c: 0x46000000
    ctx->pc = 0x2ca36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ca370:
    // 0x2ca370: 0x3c013b80
    ctx->pc = 0x2ca370u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca374: 0x34218081
    ctx->pc = 0x2ca374u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca378: 0x44817800
    ctx->pc = 0x2ca378u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2ca37c: 0x220202d
    ctx->pc = 0x2ca37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca380: 0x24050003
    ctx->pc = 0x2ca380u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ca384: 0xc0b26a6
    ctx->pc = 0x2CA384u;
    SET_GPR_U32(ctx, 31, 0x2CA38Cu);
    ctx->pc = 0x2CA388u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA38Cu; }
    }
    if (ctx->pc != 0x2CA38Cu) { return; }
    ctx->pc = 0x2CA38Cu;
    // 0x2ca38c: 0x920300ca
    ctx->pc = 0x2ca38cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 202)));
    // 0x2ca390: 0x4600005
    ctx->pc = 0x2CA390u;
    {
        const bool branch_taken_0x2ca390 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA394u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ca390) {
            ctx->pc = 0x2CA3A8u;
            goto label_2ca3a8;
        }
    }
    ctx->pc = 0x2CA398u;
    // 0x2ca398: 0x44836000
    ctx->pc = 0x2ca398u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x2ca39c: 0x46806320
    ctx->pc = 0x2ca39cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2ca3a0: 0x10000006
    ctx->pc = 0x2CA3A0u;
    {
        const bool branch_taken_0x2ca3a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca3a0) {
            ctx->pc = 0x2CA3BCu;
            goto label_2ca3bc;
        }
    }
    ctx->pc = 0x2CA3A8u;
label_2ca3a8:
    // 0x2ca3a8: 0x31842
    ctx->pc = 0x2ca3a8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca3ac: 0x431025
    ctx->pc = 0x2ca3acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca3b0: 0x44826000
    ctx->pc = 0x2ca3b0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2ca3b4: 0x46806320
    ctx->pc = 0x2ca3b4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2ca3b8: 0x460c6300
    ctx->pc = 0x2ca3b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2ca3bc:
    // 0x2ca3bc: 0x3c013b80
    ctx->pc = 0x2ca3bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca3c0: 0x34218081
    ctx->pc = 0x2ca3c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca3c4: 0x44810000
    ctx->pc = 0x2ca3c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca3c8: 0x920300ce
    ctx->pc = 0x2ca3c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 206)));
    // 0x2ca3cc: 0x4600005
    ctx->pc = 0x2CA3CCu;
    {
        const bool branch_taken_0x2ca3cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA3D0u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2ca3cc) {
            ctx->pc = 0x2CA3E4u;
            goto label_2ca3e4;
        }
    }
    ctx->pc = 0x2CA3D4u;
    // 0x2ca3d4: 0x44836800
    ctx->pc = 0x2ca3d4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x2ca3d8: 0x46806b60
    ctx->pc = 0x2ca3d8u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2ca3dc: 0x1000000b
    ctx->pc = 0x2CA3DCu;
    {
        const bool branch_taken_0x2ca3dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA3E0u;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2ca3dc) {
            ctx->pc = 0x2CA40Cu;
            goto label_2ca40c;
        }
    }
    ctx->pc = 0x2CA3E4u;
label_2ca3e4:
    // 0x2ca3e4: 0x30620001
    ctx->pc = 0x2ca3e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2ca3e8: 0x31842
    ctx->pc = 0x2ca3e8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca3ec: 0x431025
    ctx->pc = 0x2ca3ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca3f0: 0x44826800
    ctx->pc = 0x2ca3f0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2ca3f4: 0x46806b60
    ctx->pc = 0x2ca3f4u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2ca3f8: 0x460d6b40
    ctx->pc = 0x2ca3f8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2ca3fc: 0x3c013b80
    ctx->pc = 0x2ca3fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca400: 0x34218081
    ctx->pc = 0x2ca400u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca404: 0x44810000
    ctx->pc = 0x2ca404u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca408: 0x46006b42
    ctx->pc = 0x2ca408u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2ca40c:
    // 0x2ca40c: 0x920300d2
    ctx->pc = 0x2ca40cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 210)));
    // 0x2ca410: 0x4600005
    ctx->pc = 0x2CA410u;
    {
        const bool branch_taken_0x2ca410 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA414u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ca410) {
            ctx->pc = 0x2CA428u;
            goto label_2ca428;
        }
    }
    ctx->pc = 0x2CA418u;
    // 0x2ca418: 0x44837000
    ctx->pc = 0x2ca418u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x2ca41c: 0x468073a0
    ctx->pc = 0x2ca41cu;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2ca420: 0x10000006
    ctx->pc = 0x2CA420u;
    {
        const bool branch_taken_0x2ca420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca420) {
            ctx->pc = 0x2CA43Cu;
            goto label_2ca43c;
        }
    }
    ctx->pc = 0x2CA428u;
label_2ca428:
    // 0x2ca428: 0x31842
    ctx->pc = 0x2ca428u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca42c: 0x431025
    ctx->pc = 0x2ca42cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca430: 0x44827000
    ctx->pc = 0x2ca430u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2ca434: 0x468073a0
    ctx->pc = 0x2ca434u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2ca438: 0x460e7380
    ctx->pc = 0x2ca438u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_2ca43c:
    // 0x2ca43c: 0x3c013b80
    ctx->pc = 0x2ca43cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca440: 0x34218081
    ctx->pc = 0x2ca440u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca444: 0x44810000
    ctx->pc = 0x2ca444u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca448: 0x920300d6
    ctx->pc = 0x2ca448u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 214)));
    // 0x2ca44c: 0x4600005
    ctx->pc = 0x2CA44Cu;
    {
        const bool branch_taken_0x2ca44c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA450u;
        ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
        if (branch_taken_0x2ca44c) {
            ctx->pc = 0x2CA464u;
            goto label_2ca464;
        }
    }
    ctx->pc = 0x2CA454u;
    // 0x2ca454: 0x44830000
    ctx->pc = 0x2ca454u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2ca458: 0x46800020
    ctx->pc = 0x2ca458u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ca45c: 0x10000007
    ctx->pc = 0x2CA45Cu;
    {
        const bool branch_taken_0x2ca45c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca45c) {
            ctx->pc = 0x2CA47Cu;
            goto label_2ca47c;
        }
    }
    ctx->pc = 0x2CA464u;
label_2ca464:
    // 0x2ca464: 0x30620001
    ctx->pc = 0x2ca464u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2ca468: 0x31842
    ctx->pc = 0x2ca468u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca46c: 0x431025
    ctx->pc = 0x2ca46cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca470: 0x44820000
    ctx->pc = 0x2ca470u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2ca474: 0x46800020
    ctx->pc = 0x2ca474u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ca478: 0x46000000
    ctx->pc = 0x2ca478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ca47c:
    // 0x2ca47c: 0x3c013b80
    ctx->pc = 0x2ca47cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca480: 0x34218081
    ctx->pc = 0x2ca480u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca484: 0x44817800
    ctx->pc = 0x2ca484u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2ca488: 0x220202d
    ctx->pc = 0x2ca488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca48c: 0x24050002
    ctx->pc = 0x2ca48cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca490: 0xc0b26a6
    ctx->pc = 0x2CA490u;
    SET_GPR_U32(ctx, 31, 0x2CA498u);
    ctx->pc = 0x2CA494u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA498u; }
    }
    if (ctx->pc != 0x2CA498u) { return; }
    ctx->pc = 0x2CA498u;
    // 0x2ca498: 0x920300c9
    ctx->pc = 0x2ca498u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 201)));
    // 0x2ca49c: 0x4600005
    ctx->pc = 0x2CA49Cu;
    {
        const bool branch_taken_0x2ca49c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA4A0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ca49c) {
            ctx->pc = 0x2CA4B4u;
            goto label_2ca4b4;
        }
    }
    ctx->pc = 0x2CA4A4u;
    // 0x2ca4a4: 0x44836000
    ctx->pc = 0x2ca4a4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x2ca4a8: 0x46806320
    ctx->pc = 0x2ca4a8u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2ca4ac: 0x10000006
    ctx->pc = 0x2CA4ACu;
    {
        const bool branch_taken_0x2ca4ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca4ac) {
            ctx->pc = 0x2CA4C8u;
            goto label_2ca4c8;
        }
    }
    ctx->pc = 0x2CA4B4u;
label_2ca4b4:
    // 0x2ca4b4: 0x31842
    ctx->pc = 0x2ca4b4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca4b8: 0x431025
    ctx->pc = 0x2ca4b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca4bc: 0x44826000
    ctx->pc = 0x2ca4bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2ca4c0: 0x46806320
    ctx->pc = 0x2ca4c0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2ca4c4: 0x460c6300
    ctx->pc = 0x2ca4c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2ca4c8:
    // 0x2ca4c8: 0x3c013b80
    ctx->pc = 0x2ca4c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca4cc: 0x34218081
    ctx->pc = 0x2ca4ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca4d0: 0x44810000
    ctx->pc = 0x2ca4d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca4d4: 0x920300cd
    ctx->pc = 0x2ca4d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 205)));
    // 0x2ca4d8: 0x4600005
    ctx->pc = 0x2CA4D8u;
    {
        const bool branch_taken_0x2ca4d8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA4DCu;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2ca4d8) {
            ctx->pc = 0x2CA4F0u;
            goto label_2ca4f0;
        }
    }
    ctx->pc = 0x2CA4E0u;
    // 0x2ca4e0: 0x44836800
    ctx->pc = 0x2ca4e0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x2ca4e4: 0x46806b60
    ctx->pc = 0x2ca4e4u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2ca4e8: 0x1000000b
    ctx->pc = 0x2CA4E8u;
    {
        const bool branch_taken_0x2ca4e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA4ECu;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2ca4e8) {
            ctx->pc = 0x2CA518u;
            goto label_2ca518;
        }
    }
    ctx->pc = 0x2CA4F0u;
label_2ca4f0:
    // 0x2ca4f0: 0x30620001
    ctx->pc = 0x2ca4f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2ca4f4: 0x31842
    ctx->pc = 0x2ca4f4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca4f8: 0x431025
    ctx->pc = 0x2ca4f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca4fc: 0x44826800
    ctx->pc = 0x2ca4fcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2ca500: 0x46806b60
    ctx->pc = 0x2ca500u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2ca504: 0x460d6b40
    ctx->pc = 0x2ca504u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2ca508: 0x3c013b80
    ctx->pc = 0x2ca508u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca50c: 0x34218081
    ctx->pc = 0x2ca50cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca510: 0x44810000
    ctx->pc = 0x2ca510u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca514: 0x46006b42
    ctx->pc = 0x2ca514u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2ca518:
    // 0x2ca518: 0x920300d1
    ctx->pc = 0x2ca518u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 209)));
    // 0x2ca51c: 0x4600005
    ctx->pc = 0x2CA51Cu;
    {
        const bool branch_taken_0x2ca51c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA520u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ca51c) {
            ctx->pc = 0x2CA534u;
            goto label_2ca534;
        }
    }
    ctx->pc = 0x2CA524u;
    // 0x2ca524: 0x44837000
    ctx->pc = 0x2ca524u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x2ca528: 0x468073a0
    ctx->pc = 0x2ca528u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2ca52c: 0x10000006
    ctx->pc = 0x2CA52Cu;
    {
        const bool branch_taken_0x2ca52c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca52c) {
            ctx->pc = 0x2CA548u;
            goto label_2ca548;
        }
    }
    ctx->pc = 0x2CA534u;
label_2ca534:
    // 0x2ca534: 0x31842
    ctx->pc = 0x2ca534u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca538: 0x431025
    ctx->pc = 0x2ca538u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca53c: 0x44827000
    ctx->pc = 0x2ca53cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2ca540: 0x468073a0
    ctx->pc = 0x2ca540u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2ca544: 0x460e7380
    ctx->pc = 0x2ca544u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_2ca548:
    // 0x2ca548: 0x3c013b80
    ctx->pc = 0x2ca548u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca54c: 0x34218081
    ctx->pc = 0x2ca54cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca550: 0x44810000
    ctx->pc = 0x2ca550u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca554: 0x920300d5
    ctx->pc = 0x2ca554u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2ca558: 0x4600005
    ctx->pc = 0x2CA558u;
    {
        const bool branch_taken_0x2ca558 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA55Cu;
        ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
        if (branch_taken_0x2ca558) {
            ctx->pc = 0x2CA570u;
            goto label_2ca570;
        }
    }
    ctx->pc = 0x2CA560u;
    // 0x2ca560: 0x44830000
    ctx->pc = 0x2ca560u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2ca564: 0x46800020
    ctx->pc = 0x2ca564u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ca568: 0x10000007
    ctx->pc = 0x2CA568u;
    {
        const bool branch_taken_0x2ca568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca568) {
            ctx->pc = 0x2CA588u;
            goto label_2ca588;
        }
    }
    ctx->pc = 0x2CA570u;
label_2ca570:
    // 0x2ca570: 0x30620001
    ctx->pc = 0x2ca570u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2ca574: 0x31842
    ctx->pc = 0x2ca574u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca578: 0x431025
    ctx->pc = 0x2ca578u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca57c: 0x44820000
    ctx->pc = 0x2ca57cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2ca580: 0x46800020
    ctx->pc = 0x2ca580u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ca584: 0x46000000
    ctx->pc = 0x2ca584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ca588:
    // 0x2ca588: 0x3c013b80
    ctx->pc = 0x2ca588u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca58c: 0x34218081
    ctx->pc = 0x2ca58cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca590: 0x44817800
    ctx->pc = 0x2ca590u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2ca594: 0x220202d
    ctx->pc = 0x2ca594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca598: 0x24050001
    ctx->pc = 0x2ca598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca59c: 0xc0b26a6
    ctx->pc = 0x2CA59Cu;
    SET_GPR_U32(ctx, 31, 0x2CA5A4u);
    ctx->pc = 0x2CA5A0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5A4u; }
    }
    if (ctx->pc != 0x2CA5A4u) { return; }
    ctx->pc = 0x2CA5A4u;
    // 0x2ca5a4: 0x920300c8
    ctx->pc = 0x2ca5a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2ca5a8: 0x4600005
    ctx->pc = 0x2CA5A8u;
    {
        const bool branch_taken_0x2ca5a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA5ACu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ca5a8) {
            ctx->pc = 0x2CA5C0u;
            goto label_2ca5c0;
        }
    }
    ctx->pc = 0x2CA5B0u;
    // 0x2ca5b0: 0x44836000
    ctx->pc = 0x2ca5b0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x2ca5b4: 0x46806320
    ctx->pc = 0x2ca5b4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2ca5b8: 0x10000006
    ctx->pc = 0x2CA5B8u;
    {
        const bool branch_taken_0x2ca5b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca5b8) {
            ctx->pc = 0x2CA5D4u;
            goto label_2ca5d4;
        }
    }
    ctx->pc = 0x2CA5C0u;
label_2ca5c0:
    // 0x2ca5c0: 0x31842
    ctx->pc = 0x2ca5c0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca5c4: 0x431025
    ctx->pc = 0x2ca5c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca5c8: 0x44826000
    ctx->pc = 0x2ca5c8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2ca5cc: 0x46806320
    ctx->pc = 0x2ca5ccu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2ca5d0: 0x460c6300
    ctx->pc = 0x2ca5d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2ca5d4:
    // 0x2ca5d4: 0x3c013b80
    ctx->pc = 0x2ca5d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca5d8: 0x34218081
    ctx->pc = 0x2ca5d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca5dc: 0x44810000
    ctx->pc = 0x2ca5dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca5e0: 0x920300cc
    ctx->pc = 0x2ca5e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2ca5e4: 0x4600005
    ctx->pc = 0x2CA5E4u;
    {
        const bool branch_taken_0x2ca5e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA5E8u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2ca5e4) {
            ctx->pc = 0x2CA5FCu;
            goto label_2ca5fc;
        }
    }
    ctx->pc = 0x2CA5ECu;
    // 0x2ca5ec: 0x44836800
    ctx->pc = 0x2ca5ecu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x2ca5f0: 0x46806b60
    ctx->pc = 0x2ca5f0u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2ca5f4: 0x1000000b
    ctx->pc = 0x2CA5F4u;
    {
        const bool branch_taken_0x2ca5f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA5F8u;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2ca5f4) {
            ctx->pc = 0x2CA624u;
            goto label_2ca624;
        }
    }
    ctx->pc = 0x2CA5FCu;
label_2ca5fc:
    // 0x2ca5fc: 0x30620001
    ctx->pc = 0x2ca5fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2ca600: 0x31842
    ctx->pc = 0x2ca600u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca604: 0x431025
    ctx->pc = 0x2ca604u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca608: 0x44826800
    ctx->pc = 0x2ca608u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2ca60c: 0x46806b60
    ctx->pc = 0x2ca60cu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2ca610: 0x460d6b40
    ctx->pc = 0x2ca610u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2ca614: 0x3c013b80
    ctx->pc = 0x2ca614u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca618: 0x34218081
    ctx->pc = 0x2ca618u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca61c: 0x44810000
    ctx->pc = 0x2ca61cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca620: 0x46006b42
    ctx->pc = 0x2ca620u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2ca624:
    // 0x2ca624: 0x920300d0
    ctx->pc = 0x2ca624u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2ca628: 0x4600005
    ctx->pc = 0x2CA628u;
    {
        const bool branch_taken_0x2ca628 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA62Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ca628) {
            ctx->pc = 0x2CA640u;
            goto label_2ca640;
        }
    }
    ctx->pc = 0x2CA630u;
    // 0x2ca630: 0x44837000
    ctx->pc = 0x2ca630u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x2ca634: 0x468073a0
    ctx->pc = 0x2ca634u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2ca638: 0x10000006
    ctx->pc = 0x2CA638u;
    {
        const bool branch_taken_0x2ca638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca638) {
            ctx->pc = 0x2CA654u;
            goto label_2ca654;
        }
    }
    ctx->pc = 0x2CA640u;
label_2ca640:
    // 0x2ca640: 0x31842
    ctx->pc = 0x2ca640u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca644: 0x431025
    ctx->pc = 0x2ca644u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca648: 0x44827000
    ctx->pc = 0x2ca648u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2ca64c: 0x468073a0
    ctx->pc = 0x2ca64cu;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2ca650: 0x460e7380
    ctx->pc = 0x2ca650u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_2ca654:
    // 0x2ca654: 0x3c013b80
    ctx->pc = 0x2ca654u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca658: 0x34218081
    ctx->pc = 0x2ca658u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca65c: 0x44810000
    ctx->pc = 0x2ca65cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca660: 0x920300d4
    ctx->pc = 0x2ca660u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2ca664: 0x4600005
    ctx->pc = 0x2CA664u;
    {
        const bool branch_taken_0x2ca664 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CA668u;
        ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
        if (branch_taken_0x2ca664) {
            ctx->pc = 0x2CA67Cu;
            goto label_2ca67c;
        }
    }
    ctx->pc = 0x2CA66Cu;
    // 0x2ca66c: 0x44830000
    ctx->pc = 0x2ca66cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2ca670: 0x46800020
    ctx->pc = 0x2ca670u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ca674: 0x10000007
    ctx->pc = 0x2CA674u;
    {
        const bool branch_taken_0x2ca674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ca674) {
            ctx->pc = 0x2CA694u;
            goto label_2ca694;
        }
    }
    ctx->pc = 0x2CA67Cu;
label_2ca67c:
    // 0x2ca67c: 0x30620001
    ctx->pc = 0x2ca67cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2ca680: 0x31842
    ctx->pc = 0x2ca680u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ca684: 0x431025
    ctx->pc = 0x2ca684u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca688: 0x44820000
    ctx->pc = 0x2ca688u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2ca68c: 0x46800020
    ctx->pc = 0x2ca68cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ca690: 0x46000000
    ctx->pc = 0x2ca690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ca694:
    // 0x2ca694: 0x3c013b80
    ctx->pc = 0x2ca694u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2ca698: 0x34218081
    ctx->pc = 0x2ca698u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2ca69c: 0x44817800
    ctx->pc = 0x2ca69cu;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2ca6a0: 0x220202d
    ctx->pc = 0x2ca6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6a4: 0x282d
    ctx->pc = 0x2ca6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6a8: 0xc0b26a6
    ctx->pc = 0x2CA6A8u;
    SET_GPR_U32(ctx, 31, 0x2CA6B0u);
    ctx->pc = 0x2CA6ACu;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA6B0u; }
    }
    if (ctx->pc != 0x2CA6B0u) { return; }
    ctx->pc = 0x2CA6B0u;
    // 0x2ca6b0: 0x8e020024
    ctx->pc = 0x2ca6b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2ca6b4:
    // 0x2ca6b4: 0x3c030010
    ctx->pc = 0x2ca6b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x2ca6b8: 0x431024
    ctx->pc = 0x2ca6b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca6bc: 0x10400007
    ctx->pc = 0x2CA6BCu;
    {
        const bool branch_taken_0x2ca6bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA6C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6bc) {
            ctx->pc = 0x2CA6DCu;
            goto label_2ca6dc;
        }
    }
    ctx->pc = 0x2CA6C4u;
    // 0x2ca6c4: 0x24050004
    ctx->pc = 0x2ca6c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ca6c8: 0xc60c00d8
    ctx->pc = 0x2ca6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca6cc: 0xc60d00dc
    ctx->pc = 0x2ca6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ca6d0: 0xc60e00e0
    ctx->pc = 0x2ca6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ca6d4: 0xc0b26a6
    ctx->pc = 0x2CA6D4u;
    SET_GPR_U32(ctx, 31, 0x2CA6DCu);
    ctx->pc = 0x2CA6D8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA6DCu; }
    }
    if (ctx->pc != 0x2CA6DCu) { return; }
    ctx->pc = 0x2CA6DCu;
label_2ca6dc:
    // 0x2ca6dc: 0x82020004
    ctx->pc = 0x2ca6dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ca6e0: 0x1040001b
    ctx->pc = 0x2CA6E0u;
    {
        const bool branch_taken_0x2ca6e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA6E4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6e0) {
            ctx->pc = 0x2CA750u;
            goto label_2ca750;
        }
    }
    ctx->pc = 0x2CA6E8u;
    // 0x2ca6e8: 0x24020001
    ctx->pc = 0x2ca6e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca6ec: 0x10620015
    ctx->pc = 0x2CA6ECu;
    {
        const bool branch_taken_0x2ca6ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2CA6F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x2ca6ec) {
            ctx->pc = 0x2CA744u;
            goto label_2ca744;
        }
    }
    ctx->pc = 0x2CA6F4u;
    // 0x2ca6f4: 0x10400005
    ctx->pc = 0x2CA6F4u;
    {
        const bool branch_taken_0x2ca6f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA6F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2ca6f4) {
            ctx->pc = 0x2CA70Cu;
            goto label_2ca70c;
        }
    }
    ctx->pc = 0x2CA6FCu;
    // 0x2ca6fc: 0x1062000b
    ctx->pc = 0x2CA6FCu;
    {
        const bool branch_taken_0x2ca6fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2CA700u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
        if (branch_taken_0x2ca6fc) {
            ctx->pc = 0x2CA72Cu;
            goto label_2ca72c;
        }
    }
    ctx->pc = 0x2CA704u;
    // 0x2ca704: 0x10000011
    ctx->pc = 0x2CA704u;
    {
        const bool branch_taken_0x2ca704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA708u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 192));
        if (branch_taken_0x2ca704) {
            ctx->pc = 0x2CA74Cu;
            goto label_2ca74c;
        }
    }
    ctx->pc = 0x2CA70Cu;
label_2ca70c:
    // 0x2ca70c: 0x24020002
    ctx->pc = 0x2ca70cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca710: 0x50620008
    ctx->pc = 0x2CA710u;
    {
        const bool branch_taken_0x2ca710 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ca710) {
            ctx->pc = 0x2CA714u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->pc = 0x2CA734u;
            goto label_2ca734;
        }
    }
    ctx->pc = 0x2CA718u;
    // 0x2ca718: 0x24020003
    ctx->pc = 0x2ca718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ca71c: 0x10620007
    ctx->pc = 0x2CA71Cu;
    {
        const bool branch_taken_0x2ca71c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2CA720u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
        if (branch_taken_0x2ca71c) {
            ctx->pc = 0x2CA73Cu;
            goto label_2ca73c;
        }
    }
    ctx->pc = 0x2CA724u;
    // 0x2ca724: 0x10000009
    ctx->pc = 0x2CA724u;
    {
        const bool branch_taken_0x2ca724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA728u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 192));
        if (branch_taken_0x2ca724) {
            ctx->pc = 0x2CA74Cu;
            goto label_2ca74c;
        }
    }
    ctx->pc = 0x2CA72Cu;
label_2ca72c:
    // 0x2ca72c: 0x10000007
    ctx->pc = 0x2CA72Cu;
    {
        const bool branch_taken_0x2ca72c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA730u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65343));
        if (branch_taken_0x2ca72c) {
            ctx->pc = 0x2CA74Cu;
            goto label_2ca74c;
        }
    }
    ctx->pc = 0x2CA734u;
label_2ca734:
    // 0x2ca734: 0x10000005
    ctx->pc = 0x2CA734u;
    {
        const bool branch_taken_0x2ca734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA738u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
        if (branch_taken_0x2ca734) {
            ctx->pc = 0x2CA74Cu;
            goto label_2ca74c;
        }
    }
    ctx->pc = 0x2CA73Cu;
label_2ca73c:
    // 0x2ca73c: 0x10000003
    ctx->pc = 0x2CA73Cu;
    {
        const bool branch_taken_0x2ca73c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA740u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
        if (branch_taken_0x2ca73c) {
            ctx->pc = 0x2CA74Cu;
            goto label_2ca74c;
        }
    }
    ctx->pc = 0x2CA744u;
label_2ca744:
    // 0x2ca744: 0x9642002c
    ctx->pc = 0x2ca744u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2ca748: 0x344200c0
    ctx->pc = 0x2ca748u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 192));
label_2ca74c:
    // 0x2ca74c: 0xa642002c
    ctx->pc = 0x2ca74cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
label_2ca750:
    // 0x2ca750: 0x82020005
    ctx->pc = 0x2ca750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2ca754: 0x18400003
    ctx->pc = 0x2CA754u;
    {
        const bool branch_taken_0x2ca754 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CA758u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca754) {
            ctx->pc = 0x2CA764u;
            goto label_2ca764;
        }
    }
    ctx->pc = 0x2CA75Cu;
    // 0x2ca75c: 0xc0b263a
    ctx->pc = 0x2CA75Cu;
    SET_GPR_U32(ctx, 31, 0x2CA764u);
    ctx->pc = 0x2CA760u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
    ctx->pc = 0x2C98E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetEOneshot_0x2c98e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA764u; }
    }
    if (ctx->pc != 0x2CA764u) { return; }
    ctx->pc = 0x2CA764u;
label_2ca764:
    // 0x2ca764: 0x82020006
    ctx->pc = 0x2ca764u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2ca768: 0x58400004
    ctx->pc = 0x2CA768u;
    {
        const bool branch_taken_0x2ca768 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca768) {
            ctx->pc = 0x2CA76Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
            ctx->pc = 0x2CA77Cu;
            goto label_2ca77c;
        }
    }
    ctx->pc = 0x2CA770u;
    // 0x2ca770: 0xc0b2630
    ctx->pc = 0x2CA770u;
    SET_GPR_U32(ctx, 31, 0x2CA778u);
    ctx->pc = 0x2CA774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C98C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetEForever_0x2c98c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA778u; }
    }
    if (ctx->pc != 0x2CA778u) { return; }
    ctx->pc = 0x2CA778u;
    // 0x2ca778: 0x82020009
    ctx->pc = 0x2ca778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_2ca77c:
    // 0x2ca77c: 0x58400005
    ctx->pc = 0x2CA77Cu;
    {
        const bool branch_taken_0x2ca77c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca77c) {
            ctx->pc = 0x2CA780u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->pc = 0x2CA794u;
            goto label_2ca794;
        }
    }
    ctx->pc = 0x2CA784u;
    // 0x2ca784: 0x9642002c
    ctx->pc = 0x2ca784u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2ca788: 0x34420010
    ctx->pc = 0x2ca788u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
    // 0x2ca78c: 0xa642002c
    ctx->pc = 0x2ca78cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca790: 0x8202000a
    ctx->pc = 0x2ca790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_2ca794:
    // 0x2ca794: 0x58400005
    ctx->pc = 0x2CA794u;
    {
        const bool branch_taken_0x2ca794 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca794) {
            ctx->pc = 0x2CA798u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
            ctx->pc = 0x2CA7ACu;
            goto label_2ca7ac;
        }
    }
    ctx->pc = 0x2CA79Cu;
    // 0x2ca79c: 0x9642002c
    ctx->pc = 0x2ca79cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2ca7a0: 0x34420020
    ctx->pc = 0x2ca7a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32));
    // 0x2ca7a4: 0xa642002c
    ctx->pc = 0x2ca7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca7a8: 0x8202000b
    ctx->pc = 0x2ca7a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_2ca7ac:
    // 0x2ca7ac: 0x18400004
    ctx->pc = 0x2CA7ACu;
    {
        const bool branch_taken_0x2ca7ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CA7B0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
        if (branch_taken_0x2ca7ac) {
            ctx->pc = 0x2CA7C0u;
            goto label_2ca7c0;
        }
    }
    ctx->pc = 0x2CA7B4u;
    // 0x2ca7b4: 0x8e220060
    ctx->pc = 0x2ca7b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2ca7b8: 0x431025
    ctx->pc = 0x2ca7b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca7bc: 0xae220060
    ctx->pc = 0x2ca7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_2ca7c0:
    // 0x2ca7c0: 0x8202000c
    ctx->pc = 0x2ca7c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ca7c4: 0x18400004
    ctx->pc = 0x2CA7C4u;
    {
        const bool branch_taken_0x2ca7c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CA7C8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
        if (branch_taken_0x2ca7c4) {
            ctx->pc = 0x2CA7D8u;
            goto label_2ca7d8;
        }
    }
    ctx->pc = 0x2CA7CCu;
    // 0x2ca7cc: 0x8e220060
    ctx->pc = 0x2ca7ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2ca7d0: 0x431025
    ctx->pc = 0x2ca7d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca7d4: 0xae220060
    ctx->pc = 0x2ca7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_2ca7d8:
    // 0x2ca7d8: 0x8202000d
    ctx->pc = 0x2ca7d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2ca7dc: 0x58400005
    ctx->pc = 0x2CA7DCu;
    {
        const bool branch_taken_0x2ca7dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca7dc) {
            ctx->pc = 0x2CA7E0u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->pc = 0x2CA7F4u;
            goto label_2ca7f4;
        }
    }
    ctx->pc = 0x2CA7E4u;
    // 0x2ca7e4: 0x8e220060
    ctx->pc = 0x2ca7e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2ca7e8: 0x34420800
    ctx->pc = 0x2ca7e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
    // 0x2ca7ec: 0xae220060
    ctx->pc = 0x2ca7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2ca7f0: 0x8202000e
    ctx->pc = 0x2ca7f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_2ca7f4:
    // 0x2ca7f4: 0x58400005
    ctx->pc = 0x2CA7F4u;
    {
        const bool branch_taken_0x2ca7f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca7f4) {
            ctx->pc = 0x2CA7F8u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
            ctx->pc = 0x2CA80Cu;
            goto label_2ca80c;
        }
    }
    ctx->pc = 0x2CA7FCu;
    // 0x2ca7fc: 0x8e220060
    ctx->pc = 0x2ca7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2ca800: 0x34420040
    ctx->pc = 0x2ca800u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
    // 0x2ca804: 0xae220060
    ctx->pc = 0x2ca804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2ca808: 0x8202000f
    ctx->pc = 0x2ca808u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_2ca80c:
    // 0x2ca80c: 0x18400005
    ctx->pc = 0x2CA80Cu;
    {
        const bool branch_taken_0x2ca80c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CA810u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca80c) {
            ctx->pc = 0x2CA824u;
            goto label_2ca824;
        }
    }
    ctx->pc = 0x2CA814u;
    // 0x2ca814: 0x8e220060
    ctx->pc = 0x2ca814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2ca818: 0x34420080
    ctx->pc = 0x2ca818u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
    // 0x2ca81c: 0xae220060
    ctx->pc = 0x2ca81cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2ca820: 0x220102d
    ctx->pc = 0x2ca820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca824:
    // 0x2ca824: 0xdfbf0030
    ctx->pc = 0x2ca824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca828: 0xdfb20020
    ctx->pc = 0x2ca828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca82c: 0xdfb10010
    ctx->pc = 0x2ca82cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca830: 0xdfb00000
    ctx->pc = 0x2ca830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca834: 0x3e00008
    ctx->pc = 0x2CA834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CA078u: goto label_2ca078;
            case 0x2CA094u: goto label_2ca094;
            case 0x2CA09Cu: goto label_2ca09c;
            case 0x2CA0B0u: goto label_2ca0b0;
            case 0x2CA0CCu: goto label_2ca0cc;
            case 0x2CA0E4u: goto label_2ca0e4;
            case 0x2CA0FCu: goto label_2ca0fc;
            case 0x2CA118u: goto label_2ca118;
            case 0x2CA138u: goto label_2ca138;
            case 0x2CA150u: goto label_2ca150;
            case 0x2CA170u: goto label_2ca170;
            case 0x2CA194u: goto label_2ca194;
            case 0x2CA1C0u: goto label_2ca1c0;
            case 0x2CA1DCu: goto label_2ca1dc;
            case 0x2CA1F0u: goto label_2ca1f0;
            case 0x2CA208u: goto label_2ca208;
            case 0x2CA224u: goto label_2ca224;
            case 0x2CA240u: goto label_2ca240;
            case 0x2CA270u: goto label_2ca270;
            case 0x2CA29Cu: goto label_2ca29c;
            case 0x2CA2B0u: goto label_2ca2b0;
            case 0x2CA2D8u: goto label_2ca2d8;
            case 0x2CA300u: goto label_2ca300;
            case 0x2CA31Cu: goto label_2ca31c;
            case 0x2CA330u: goto label_2ca330;
            case 0x2CA358u: goto label_2ca358;
            case 0x2CA370u: goto label_2ca370;
            case 0x2CA3A8u: goto label_2ca3a8;
            case 0x2CA3BCu: goto label_2ca3bc;
            case 0x2CA3E4u: goto label_2ca3e4;
            case 0x2CA40Cu: goto label_2ca40c;
            case 0x2CA428u: goto label_2ca428;
            case 0x2CA43Cu: goto label_2ca43c;
            case 0x2CA464u: goto label_2ca464;
            case 0x2CA47Cu: goto label_2ca47c;
            case 0x2CA4B4u: goto label_2ca4b4;
            case 0x2CA4C8u: goto label_2ca4c8;
            case 0x2CA4F0u: goto label_2ca4f0;
            case 0x2CA518u: goto label_2ca518;
            case 0x2CA534u: goto label_2ca534;
            case 0x2CA548u: goto label_2ca548;
            case 0x2CA570u: goto label_2ca570;
            case 0x2CA588u: goto label_2ca588;
            case 0x2CA5C0u: goto label_2ca5c0;
            case 0x2CA5D4u: goto label_2ca5d4;
            case 0x2CA5FCu: goto label_2ca5fc;
            case 0x2CA624u: goto label_2ca624;
            case 0x2CA640u: goto label_2ca640;
            case 0x2CA654u: goto label_2ca654;
            case 0x2CA67Cu: goto label_2ca67c;
            case 0x2CA694u: goto label_2ca694;
            case 0x2CA6B4u: goto label_2ca6b4;
            case 0x2CA6DCu: goto label_2ca6dc;
            case 0x2CA70Cu: goto label_2ca70c;
            case 0x2CA72Cu: goto label_2ca72c;
            case 0x2CA734u: goto label_2ca734;
            case 0x2CA73Cu: goto label_2ca73c;
            case 0x2CA744u: goto label_2ca744;
            case 0x2CA74Cu: goto label_2ca74c;
            case 0x2CA750u: goto label_2ca750;
            case 0x2CA764u: goto label_2ca764;
            case 0x2CA77Cu: goto label_2ca77c;
            case 0x2CA794u: goto label_2ca794;
            case 0x2CA7ACu: goto label_2ca7ac;
            case 0x2CA7C0u: goto label_2ca7c0;
            case 0x2CA7D8u: goto label_2ca7d8;
            case 0x2CA7F4u: goto label_2ca7f4;
            case 0x2CA80Cu: goto label_2ca80c;
            case 0x2CA824u: goto label_2ca824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CA83Cu;
}
