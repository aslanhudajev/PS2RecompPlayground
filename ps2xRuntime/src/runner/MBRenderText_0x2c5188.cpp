#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBRenderText
// Address: 0x2c5188 - 0x2c5744
void MBRenderText_0x2c5188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5188u;

label_2c5188:
    // 0x2c5188: 0x27bdff00
    ctx->pc = 0x2c5188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
label_2c518c:
    // 0x2c518c: 0xffbf00e0
    ctx->pc = 0x2c518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_2c5190:
    // 0x2c5190: 0xffbe00d0
    ctx->pc = 0x2c5190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_2c5194:
    // 0x2c5194: 0xffb700c0
    ctx->pc = 0x2c5194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_2c5198:
    // 0x2c5198: 0xffb600b0
    ctx->pc = 0x2c5198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_2c519c:
    // 0x2c519c: 0xffb500a0
    ctx->pc = 0x2c519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_2c51a0:
    // 0x2c51a0: 0xffb40090
    ctx->pc = 0x2c51a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2c51a4:
    // 0x2c51a4: 0xffb30080
    ctx->pc = 0x2c51a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_2c51a8:
    // 0x2c51a8: 0xffb20070
    ctx->pc = 0x2c51a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2c51ac:
    // 0x2c51ac: 0xffb10060
    ctx->pc = 0x2c51acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_2c51b0:
    // 0x2c51b0: 0xffb00050
    ctx->pc = 0x2c51b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2c51b4:
    // 0x2c51b4: 0xe7b500f8
    ctx->pc = 0x2c51b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2c51b8:
    // 0x2c51b8: 0xe7b400f0
    ctx->pc = 0x2c51b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2c51bc:
    // 0x2c51bc: 0x3c020036
    ctx->pc = 0x2c51bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2c51c0:
    // 0x2c51c0: 0x8c42dee0
    ctx->pc = 0x2c51c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
label_2c51c4:
    // 0x2c51c4: 0xafa20030
    ctx->pc = 0x2c51c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2c51c8:
    // 0x2c51c8: 0x24020002
    ctx->pc = 0x2c51c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2c51cc:
    // 0x2c51cc: 0xafa20048
    ctx->pc = 0x2c51ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2c51d0:
    // 0x2c51d0: 0x3c030038
    ctx->pc = 0x2c51d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
label_2c51d4:
    // 0x2c51d4: 0x8c62b134
    ctx->pc = 0x2c51d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294947124)));
label_2c51d8:
    // 0x2c51d8: 0x10400003
label_2c51dc:
    if (ctx->pc == 0x2C51DCu) {
        ctx->pc = 0x2C51DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C51E0u;
        goto label_2c51e0;
    }
    ctx->pc = 0x2C51D8u;
    {
        const bool branch_taken_0x2c51d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C51DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c51d8) {
            ctx->pc = 0x2C51E8u;
            goto label_2c51e8;
        }
    }
    ctx->pc = 0x2C51E0u;
label_2c51e0:
    // 0x2c51e0: 0x1000014a
label_2c51e4:
    if (ctx->pc == 0x2C51E4u) {
        ctx->pc = 0x2C51E4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947124), GPR_U32(ctx, 0));
        ctx->pc = 0x2C51E8u;
        goto label_2c51e8;
    }
    ctx->pc = 0x2C51E0u;
    {
        const bool branch_taken_0x2c51e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C51E4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947124), GPR_U32(ctx, 0));
        if (branch_taken_0x2c51e0) {
            ctx->pc = 0x2C570Cu;
            goto label_2c570c;
        }
    }
    ctx->pc = 0x2C51E8u;
label_2c51e8:
    // 0x2c51e8: 0x3c020038
    ctx->pc = 0x2c51e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c51ec:
    // 0x2c51ec: 0x8fa40030
    ctx->pc = 0x2c51ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2c51f0:
    // 0x2c51f0: 0x8c830040
    ctx->pc = 0x2c51f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2c51f4:
    // 0x2c51f4: 0xc441b158
    ctx->pc = 0x2c51f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c51f8:
    // 0x2c51f8: 0xc4600000
    ctx->pc = 0x2c51f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c51fc:
    // 0x2c51fc: 0x46000802
    ctx->pc = 0x2c51fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2c5200:
    // 0x2c5200: 0x3c013f00
    ctx->pc = 0x2c5200u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_2c5204:
    // 0x2c5204: 0x44811000
    ctx->pc = 0x2c5204u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_2c5208:
    // 0x2c5208: 0x46020000
    ctx->pc = 0x2c5208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2c520c:
    // 0x2c520c: 0x460000e4
    ctx->pc = 0x2c520cu;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
label_2c5210:
    // 0x2c5210: 0xe7a3003c
    ctx->pc = 0x2c5210u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2c5214:
    // 0x2c5214: 0xc4600004
    ctx->pc = 0x2c5214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5218:
    // 0x2c5218: 0x46000842
    ctx->pc = 0x2c5218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2c521c:
    // 0x2c521c: 0x46020840
    ctx->pc = 0x2c521cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2c5220:
    // 0x2c5220: 0x46000824
    ctx->pc = 0x2c5220u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_2c5224:
    // 0x2c5224: 0xe7a00040
    ctx->pc = 0x2c5224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2c5228:
    // 0x2c5228: 0xc0b09ea
label_2c522c:
    if (ctx->pc == 0x2C522Cu) {
        ctx->pc = 0x2C5230u;
        goto label_2c5230;
    }
    ctx->pc = 0x2C5228u;
    SET_GPR_U32(ctx, 31, 0x2C5230u);
    ctx->pc = 0x2C27A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBStartBlits_0x2c27a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5230u; }
    }
    if (ctx->pc != 0x2C5230u) { return; }
    ctx->pc = 0x2C5230u;
label_2c5230:
    // 0x2c5230: 0x3c02003d
    ctx->pc = 0x2c5230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c5234:
    // 0x2c5234: 0x8c421f70
    ctx->pc = 0x2c5234u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8048)));
label_2c5238:
    // 0x2c5238: 0x1840012e
label_2c523c:
    if (ctx->pc == 0x2C523Cu) {
        ctx->pc = 0x2C523Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5240u;
        goto label_2c5240;
    }
    ctx->pc = 0x2C5238u;
    {
        const bool branch_taken_0x2c5238 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C523Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c5238) {
            ctx->pc = 0x2C56F4u;
            goto label_2c56f4;
        }
    }
    ctx->pc = 0x2C5240u;
label_2c5240:
    // 0x2c5240: 0x2403002c
    ctx->pc = 0x2c5240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
label_2c5244:
    // 0x2c5244: 0x0
    ctx->pc = 0x2c5244u;
    // NOP
label_2c5248:
    // 0x2c5248: 0x3c31818
    ctx->pc = 0x2c5248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2c524c:
    // 0x2c524c: 0x3c02003d
    ctx->pc = 0x2c524cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c5250:
    // 0x2c5250: 0x2442c980
    ctx->pc = 0x2c5250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953344));
label_2c5254:
    // 0x2c5254: 0x628821
    ctx->pc = 0x2c5254u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c5258:
    // 0x2c5258: 0x8e230000
    ctx->pc = 0x2c5258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c525c:
    // 0x2c525c: 0x30620001
    ctx->pc = 0x2c525cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2c5260:
    // 0x2c5260: 0x5440011f
label_2c5264:
    if (ctx->pc == 0x2C5264u) {
        ctx->pc = 0x2C5264u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
        ctx->pc = 0x2C5268u;
        goto label_2c5268;
    }
    ctx->pc = 0x2C5260u;
    {
        const bool branch_taken_0x2c5260 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c5260) {
            ctx->pc = 0x2C5264u;
            SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
            ctx->pc = 0x2C56E0u;
            goto label_2c56e0;
        }
    }
    ctx->pc = 0x2C5268u;
label_2c5268:
    // 0x2c5268: 0x30620008
    ctx->pc = 0x2c5268u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
label_2c526c:
    // 0x2c526c: 0x10400005
label_2c5270:
    if (ctx->pc == 0x2C5270u) {
        ctx->pc = 0x2C5270u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x2C5274u;
        goto label_2c5274;
    }
    ctx->pc = 0x2C526Cu;
    {
        const bool branch_taken_0x2c526c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5270u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x2c526c) {
            ctx->pc = 0x2C5284u;
            goto label_2c5284;
        }
    }
    ctx->pc = 0x2C5274u;
label_2c5274:
    // 0x2c5274: 0x10400006
label_2c5278:
    if (ctx->pc == 0x2C5278u) {
        ctx->pc = 0x2C5278u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C527Cu;
        goto label_2c527c;
    }
    ctx->pc = 0x2C5274u;
    {
        const bool branch_taken_0x2c5274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5278u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c5274) {
            ctx->pc = 0x2C5290u;
            goto label_2c5290;
        }
    }
    ctx->pc = 0x2C527Cu;
label_2c527c:
    // 0x2c527c: 0x10000117
label_2c5280:
    if (ctx->pc == 0x2C5280u) {
        ctx->pc = 0x2C5280u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->pc = 0x2C5284u;
        goto label_2c5284;
    }
    ctx->pc = 0x2C527Cu;
    {
        const bool branch_taken_0x2c527c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5280u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        if (branch_taken_0x2c527c) {
            ctx->pc = 0x2C56DCu;
            goto label_2c56dc;
        }
    }
    ctx->pc = 0x2C5284u;
label_2c5284:
    // 0x2c5284: 0x8fa40048
    ctx->pc = 0x2c5284u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2c5288:
    // 0x2c5288: 0x50800115
label_2c528c:
    if (ctx->pc == 0x2C528Cu) {
        ctx->pc = 0x2C528Cu;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
        ctx->pc = 0x2C5290u;
        goto label_2c5290;
    }
    ctx->pc = 0x2C5288u;
    {
        const bool branch_taken_0x2c5288 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c5288) {
            ctx->pc = 0x2C528Cu;
            SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
            ctx->pc = 0x2C56E0u;
            goto label_2c56e0;
        }
    }
    ctx->pc = 0x2C5290u;
label_2c5290:
    // 0x2c5290: 0x8e360004
    ctx->pc = 0x2c5290u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c5294:
    // 0x2c5294: 0x8e250008
    ctx->pc = 0x2c5294u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c5298:
    // 0x2c5298: 0xafa50034
    ctx->pc = 0x2c5298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_2c529c:
    // 0x2c529c: 0xc6350014
    ctx->pc = 0x2c529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c52a0:
    // 0x2c52a0: 0x86240024
    ctx->pc = 0x2c52a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_2c52a4:
    // 0x2c52a4: 0x3c03003d
    ctx->pc = 0x2c52a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
label_2c52a8:
    // 0x2c52a8: 0x2463b810
    ctx->pc = 0x2c52a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294948880));
label_2c52ac:
    // 0x2c52ac: 0x41080
    ctx->pc = 0x2c52acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2c52b0:
    // 0x2c52b0: 0x431021
    ctx->pc = 0x2c52b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c52b4:
    // 0x2c52b4: 0x8c540000
    ctx->pc = 0x2c52b4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c52b8:
    // 0x2c52b8: 0x12800108
label_2c52bc:
    if (ctx->pc == 0x2C52BCu) {
        ctx->pc = 0x2C52BCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x2C52C0u;
        goto label_2c52c0;
    }
    ctx->pc = 0x2C52B8u;
    {
        const bool branch_taken_0x2c52b8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C52BCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x2c52b8) {
            ctx->pc = 0x2C56DCu;
            goto label_2c56dc;
        }
    }
    ctx->pc = 0x2C52C0u;
label_2c52c0:
    // 0x2c52c0: 0x8e220028
    ctx->pc = 0x2c52c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c52c4:
    // 0x2c52c4: 0xae02001c
    ctx->pc = 0x2c52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2c52c8:
    // 0x2c52c8: 0x8e220000
    ctx->pc = 0x2c52c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c52cc:
    // 0x2c52cc: 0xae020000
    ctx->pc = 0x2c52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c52d0:
    // 0x2c52d0: 0x3c013f80
    ctx->pc = 0x2c52d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2c52d4:
    // 0x2c52d4: 0x44810000
    ctx->pc = 0x2c52d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2c52d8:
    // 0x2c52d8: 0x4600a832
    ctx->pc = 0x2c52d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c52dc:
    // 0x2c52dc: 0x0
    ctx->pc = 0x2c52dcu;
    // NOP
label_2c52e0:
    // 0x2c52e0: 0x45000005
label_2c52e4:
    if (ctx->pc == 0x2C52E4u) {
        ctx->pc = 0x2C52E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x2C52E8u;
        goto label_2c52e8;
    }
    ctx->pc = 0x2C52E0u;
    {
        const bool branch_taken_0x2c52e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C52E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        if (branch_taken_0x2c52e0) {
            ctx->pc = 0x2C52F8u;
            goto label_2c52f8;
        }
    }
    ctx->pc = 0x2C52E8u;
label_2c52e8:
    // 0x2c52e8: 0x4600a032
    ctx->pc = 0x2c52e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c52ec:
    // 0x2c52ec: 0x0
    ctx->pc = 0x2c52ecu;
    // NOP
label_2c52f0:
    // 0x2c52f0: 0x45010004
label_2c52f4:
    if (ctx->pc == 0x2C52F4u) {
        ctx->pc = 0x2C52F4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        ctx->pc = 0x2C52F8u;
        goto label_2c52f8;
    }
    ctx->pc = 0x2C52F0u;
    {
        const bool branch_taken_0x2c52f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C52F4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        if (branch_taken_0x2c52f0) {
            ctx->pc = 0x2C5304u;
            goto label_2c5304;
        }
    }
    ctx->pc = 0x2C52F8u;
label_2c52f8:
    // 0x2c52f8: 0x24070001
    ctx->pc = 0x2c52f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_2c52fc:
    // 0x2c52fc: 0xafa70044
    ctx->pc = 0x2c52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
label_2c5300:
    // 0x2c5300: 0x3c03003d
    ctx->pc = 0x2c5300u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
label_2c5304:
    // 0x2c5304: 0x2463b8a8
    ctx->pc = 0x2c5304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949032));
label_2c5308:
    // 0x2c5308: 0x41080
    ctx->pc = 0x2c5308u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2c530c:
    // 0x2c530c: 0x431021
    ctx->pc = 0x2c530cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c5310:
    // 0x2c5310: 0xc4400000
    ctx->pc = 0x2c5310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5314:
    // 0x2c5314: 0x46800020
    ctx->pc = 0x2c5314u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2c5318:
    // 0x2c5318: 0xc6210018
    ctx->pc = 0x2c5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c531c:
    // 0x2c531c: 0x46010002
    ctx->pc = 0x2c531cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c5320:
    // 0x2c5320: 0x46000064
    ctx->pc = 0x2c5320u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2c5324:
    // 0x2c5324: 0xe7a10038
    ctx->pc = 0x2c5324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2c5328:
    // 0x2c5328: 0x8e320010
    ctx->pc = 0x2c5328u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c532c:
    // 0x2c532c: 0x92420000
    ctx->pc = 0x2c532cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2c5330:
    // 0x2c5330: 0x504000eb
label_2c5334:
    if (ctx->pc == 0x2C5334u) {
        ctx->pc = 0x2C5334u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
        ctx->pc = 0x2C5338u;
        goto label_2c5338;
    }
    ctx->pc = 0x2C5330u;
    {
        const bool branch_taken_0x2c5330 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c5330) {
            ctx->pc = 0x2C5334u;
            SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
            ctx->pc = 0x2C56E0u;
            goto label_2c56e0;
        }
    }
    ctx->pc = 0x2C5338u;
label_2c5338:
    // 0x2c5338: 0x8fb70034
    ctx->pc = 0x2c5338u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2c533c:
    // 0x2c533c: 0x0
    ctx->pc = 0x2c533cu;
    // NOP
label_2c5340:
    // 0x2c5340: 0x2415ffff
    ctx->pc = 0x2c5340u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c5344:
    // 0x2c5344: 0x92440000
    ctx->pc = 0x2c5344u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2c5348:
    // 0x2c5348: 0x2402002a
    ctx->pc = 0x2c5348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
label_2c534c:
    // 0x2c534c: 0x14820034
label_2c5350:
    if (ctx->pc == 0x2C5350u) {
        ctx->pc = 0x2C5350u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5354u;
        goto label_2c5354;
    }
    ctx->pc = 0x2C534Cu;
    {
        const bool branch_taken_0x2c534c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C5350u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c534c) {
            ctx->pc = 0x2C5420u;
            goto label_2c5420;
        }
    }
    ctx->pc = 0x2C5354u;
label_2c5354:
    // 0x2c5354: 0x92420001
    ctx->pc = 0x2c5354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2c5358:
    // 0x2c5358: 0x2443ffbc
    ctx->pc = 0x2c5358u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967228));
label_2c535c:
    // 0x2c535c: 0x2c620015
    ctx->pc = 0x2c535cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 21));
label_2c5360:
    // 0x2c5360: 0x1040001f
label_2c5364:
    if (ctx->pc == 0x2C5364u) {
        ctx->pc = 0x2C5364u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2C5368u;
        goto label_2c5368;
    }
    ctx->pc = 0x2C5360u;
    {
        const bool branch_taken_0x2c5360 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5364u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2c5360) {
            ctx->pc = 0x2C53E0u;
            goto label_2c53e0;
        }
    }
    ctx->pc = 0x2C5368u;
label_2c5368:
    // 0x2c5368: 0x24426f40
    ctx->pc = 0x2c5368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28480));
label_2c536c:
    // 0x2c536c: 0x31880
    ctx->pc = 0x2c536cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2c5370:
    // 0x2c5370: 0x621821
    ctx->pc = 0x2c5370u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c5374:
    // 0x2c5374: 0x8c620000
    ctx->pc = 0x2c5374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c5378:
    // 0x2c5378: 0x400008
label_2c537c:
    if (ctx->pc == 0x2C537Cu) {
        ctx->pc = 0x2C5380u;
        goto label_2c5380;
    }
    ctx->pc = 0x2C5378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5188u: goto label_2c5188;
            case 0x2C518Cu: goto label_2c518c;
            case 0x2C5190u: goto label_2c5190;
            case 0x2C5194u: goto label_2c5194;
            case 0x2C5198u: goto label_2c5198;
            case 0x2C519Cu: goto label_2c519c;
            case 0x2C51A0u: goto label_2c51a0;
            case 0x2C51A4u: goto label_2c51a4;
            case 0x2C51A8u: goto label_2c51a8;
            case 0x2C51ACu: goto label_2c51ac;
            case 0x2C51B0u: goto label_2c51b0;
            case 0x2C51B4u: goto label_2c51b4;
            case 0x2C51B8u: goto label_2c51b8;
            case 0x2C51BCu: goto label_2c51bc;
            case 0x2C51C0u: goto label_2c51c0;
            case 0x2C51C4u: goto label_2c51c4;
            case 0x2C51C8u: goto label_2c51c8;
            case 0x2C51CCu: goto label_2c51cc;
            case 0x2C51D0u: goto label_2c51d0;
            case 0x2C51D4u: goto label_2c51d4;
            case 0x2C51D8u: goto label_2c51d8;
            case 0x2C51DCu: goto label_2c51dc;
            case 0x2C51E0u: goto label_2c51e0;
            case 0x2C51E4u: goto label_2c51e4;
            case 0x2C51E8u: goto label_2c51e8;
            case 0x2C51ECu: goto label_2c51ec;
            case 0x2C51F0u: goto label_2c51f0;
            case 0x2C51F4u: goto label_2c51f4;
            case 0x2C51F8u: goto label_2c51f8;
            case 0x2C51FCu: goto label_2c51fc;
            case 0x2C5200u: goto label_2c5200;
            case 0x2C5204u: goto label_2c5204;
            case 0x2C5208u: goto label_2c5208;
            case 0x2C520Cu: goto label_2c520c;
            case 0x2C5210u: goto label_2c5210;
            case 0x2C5214u: goto label_2c5214;
            case 0x2C5218u: goto label_2c5218;
            case 0x2C521Cu: goto label_2c521c;
            case 0x2C5220u: goto label_2c5220;
            case 0x2C5224u: goto label_2c5224;
            case 0x2C5228u: goto label_2c5228;
            case 0x2C522Cu: goto label_2c522c;
            case 0x2C5230u: goto label_2c5230;
            case 0x2C5234u: goto label_2c5234;
            case 0x2C5238u: goto label_2c5238;
            case 0x2C523Cu: goto label_2c523c;
            case 0x2C5240u: goto label_2c5240;
            case 0x2C5244u: goto label_2c5244;
            case 0x2C5248u: goto label_2c5248;
            case 0x2C524Cu: goto label_2c524c;
            case 0x2C5250u: goto label_2c5250;
            case 0x2C5254u: goto label_2c5254;
            case 0x2C5258u: goto label_2c5258;
            case 0x2C525Cu: goto label_2c525c;
            case 0x2C5260u: goto label_2c5260;
            case 0x2C5264u: goto label_2c5264;
            case 0x2C5268u: goto label_2c5268;
            case 0x2C526Cu: goto label_2c526c;
            case 0x2C5270u: goto label_2c5270;
            case 0x2C5274u: goto label_2c5274;
            case 0x2C5278u: goto label_2c5278;
            case 0x2C527Cu: goto label_2c527c;
            case 0x2C5280u: goto label_2c5280;
            case 0x2C5284u: goto label_2c5284;
            case 0x2C5288u: goto label_2c5288;
            case 0x2C528Cu: goto label_2c528c;
            case 0x2C5290u: goto label_2c5290;
            case 0x2C5294u: goto label_2c5294;
            case 0x2C5298u: goto label_2c5298;
            case 0x2C529Cu: goto label_2c529c;
            case 0x2C52A0u: goto label_2c52a0;
            case 0x2C52A4u: goto label_2c52a4;
            case 0x2C52A8u: goto label_2c52a8;
            case 0x2C52ACu: goto label_2c52ac;
            case 0x2C52B0u: goto label_2c52b0;
            case 0x2C52B4u: goto label_2c52b4;
            case 0x2C52B8u: goto label_2c52b8;
            case 0x2C52BCu: goto label_2c52bc;
            case 0x2C52C0u: goto label_2c52c0;
            case 0x2C52C4u: goto label_2c52c4;
            case 0x2C52C8u: goto label_2c52c8;
            case 0x2C52CCu: goto label_2c52cc;
            case 0x2C52D0u: goto label_2c52d0;
            case 0x2C52D4u: goto label_2c52d4;
            case 0x2C52D8u: goto label_2c52d8;
            case 0x2C52DCu: goto label_2c52dc;
            case 0x2C52E0u: goto label_2c52e0;
            case 0x2C52E4u: goto label_2c52e4;
            case 0x2C52E8u: goto label_2c52e8;
            case 0x2C52ECu: goto label_2c52ec;
            case 0x2C52F0u: goto label_2c52f0;
            case 0x2C52F4u: goto label_2c52f4;
            case 0x2C52F8u: goto label_2c52f8;
            case 0x2C52FCu: goto label_2c52fc;
            case 0x2C5300u: goto label_2c5300;
            case 0x2C5304u: goto label_2c5304;
            case 0x2C5308u: goto label_2c5308;
            case 0x2C530Cu: goto label_2c530c;
            case 0x2C5310u: goto label_2c5310;
            case 0x2C5314u: goto label_2c5314;
            case 0x2C5318u: goto label_2c5318;
            case 0x2C531Cu: goto label_2c531c;
            case 0x2C5320u: goto label_2c5320;
            case 0x2C5324u: goto label_2c5324;
            case 0x2C5328u: goto label_2c5328;
            case 0x2C532Cu: goto label_2c532c;
            case 0x2C5330u: goto label_2c5330;
            case 0x2C5334u: goto label_2c5334;
            case 0x2C5338u: goto label_2c5338;
            case 0x2C533Cu: goto label_2c533c;
            case 0x2C5340u: goto label_2c5340;
            case 0x2C5344u: goto label_2c5344;
            case 0x2C5348u: goto label_2c5348;
            case 0x2C534Cu: goto label_2c534c;
            case 0x2C5350u: goto label_2c5350;
            case 0x2C5354u: goto label_2c5354;
            case 0x2C5358u: goto label_2c5358;
            case 0x2C535Cu: goto label_2c535c;
            case 0x2C5360u: goto label_2c5360;
            case 0x2C5364u: goto label_2c5364;
            case 0x2C5368u: goto label_2c5368;
            case 0x2C536Cu: goto label_2c536c;
            case 0x2C5370u: goto label_2c5370;
            case 0x2C5374u: goto label_2c5374;
            case 0x2C5378u: goto label_2c5378;
            case 0x2C537Cu: goto label_2c537c;
            case 0x2C5380u: goto label_2c5380;
            case 0x2C5384u: goto label_2c5384;
            case 0x2C5388u: goto label_2c5388;
            case 0x2C538Cu: goto label_2c538c;
            case 0x2C5390u: goto label_2c5390;
            case 0x2C5394u: goto label_2c5394;
            case 0x2C5398u: goto label_2c5398;
            case 0x2C539Cu: goto label_2c539c;
            case 0x2C53A0u: goto label_2c53a0;
            case 0x2C53A4u: goto label_2c53a4;
            case 0x2C53A8u: goto label_2c53a8;
            case 0x2C53ACu: goto label_2c53ac;
            case 0x2C53B0u: goto label_2c53b0;
            case 0x2C53B4u: goto label_2c53b4;
            case 0x2C53B8u: goto label_2c53b8;
            case 0x2C53BCu: goto label_2c53bc;
            case 0x2C53C0u: goto label_2c53c0;
            case 0x2C53C4u: goto label_2c53c4;
            case 0x2C53C8u: goto label_2c53c8;
            case 0x2C53CCu: goto label_2c53cc;
            case 0x2C53D0u: goto label_2c53d0;
            case 0x2C53D4u: goto label_2c53d4;
            case 0x2C53D8u: goto label_2c53d8;
            case 0x2C53DCu: goto label_2c53dc;
            case 0x2C53E0u: goto label_2c53e0;
            case 0x2C53E4u: goto label_2c53e4;
            case 0x2C53E8u: goto label_2c53e8;
            case 0x2C53ECu: goto label_2c53ec;
            case 0x2C53F0u: goto label_2c53f0;
            case 0x2C53F4u: goto label_2c53f4;
            case 0x2C53F8u: goto label_2c53f8;
            case 0x2C53FCu: goto label_2c53fc;
            case 0x2C5400u: goto label_2c5400;
            case 0x2C5404u: goto label_2c5404;
            case 0x2C5408u: goto label_2c5408;
            case 0x2C540Cu: goto label_2c540c;
            case 0x2C5410u: goto label_2c5410;
            case 0x2C5414u: goto label_2c5414;
            case 0x2C5418u: goto label_2c5418;
            case 0x2C541Cu: goto label_2c541c;
            case 0x2C5420u: goto label_2c5420;
            case 0x2C5424u: goto label_2c5424;
            case 0x2C5428u: goto label_2c5428;
            case 0x2C542Cu: goto label_2c542c;
            case 0x2C5430u: goto label_2c5430;
            case 0x2C5434u: goto label_2c5434;
            case 0x2C5438u: goto label_2c5438;
            case 0x2C543Cu: goto label_2c543c;
            case 0x2C5440u: goto label_2c5440;
            case 0x2C5444u: goto label_2c5444;
            case 0x2C5448u: goto label_2c5448;
            case 0x2C544Cu: goto label_2c544c;
            case 0x2C5450u: goto label_2c5450;
            case 0x2C5454u: goto label_2c5454;
            case 0x2C5458u: goto label_2c5458;
            case 0x2C545Cu: goto label_2c545c;
            case 0x2C5460u: goto label_2c5460;
            case 0x2C5464u: goto label_2c5464;
            case 0x2C5468u: goto label_2c5468;
            case 0x2C546Cu: goto label_2c546c;
            case 0x2C5470u: goto label_2c5470;
            case 0x2C5474u: goto label_2c5474;
            case 0x2C5478u: goto label_2c5478;
            case 0x2C547Cu: goto label_2c547c;
            case 0x2C5480u: goto label_2c5480;
            case 0x2C5484u: goto label_2c5484;
            case 0x2C5488u: goto label_2c5488;
            case 0x2C548Cu: goto label_2c548c;
            case 0x2C5490u: goto label_2c5490;
            case 0x2C5494u: goto label_2c5494;
            case 0x2C5498u: goto label_2c5498;
            case 0x2C549Cu: goto label_2c549c;
            case 0x2C54A0u: goto label_2c54a0;
            case 0x2C54A4u: goto label_2c54a4;
            case 0x2C54A8u: goto label_2c54a8;
            case 0x2C54ACu: goto label_2c54ac;
            case 0x2C54B0u: goto label_2c54b0;
            case 0x2C54B4u: goto label_2c54b4;
            case 0x2C54B8u: goto label_2c54b8;
            case 0x2C54BCu: goto label_2c54bc;
            case 0x2C54C0u: goto label_2c54c0;
            case 0x2C54C4u: goto label_2c54c4;
            case 0x2C54C8u: goto label_2c54c8;
            case 0x2C54CCu: goto label_2c54cc;
            case 0x2C54D0u: goto label_2c54d0;
            case 0x2C54D4u: goto label_2c54d4;
            case 0x2C54D8u: goto label_2c54d8;
            case 0x2C54DCu: goto label_2c54dc;
            case 0x2C54E0u: goto label_2c54e0;
            case 0x2C54E4u: goto label_2c54e4;
            case 0x2C54E8u: goto label_2c54e8;
            case 0x2C54ECu: goto label_2c54ec;
            case 0x2C54F0u: goto label_2c54f0;
            case 0x2C54F4u: goto label_2c54f4;
            case 0x2C54F8u: goto label_2c54f8;
            case 0x2C54FCu: goto label_2c54fc;
            case 0x2C5500u: goto label_2c5500;
            case 0x2C5504u: goto label_2c5504;
            case 0x2C5508u: goto label_2c5508;
            case 0x2C550Cu: goto label_2c550c;
            case 0x2C5510u: goto label_2c5510;
            case 0x2C5514u: goto label_2c5514;
            case 0x2C5518u: goto label_2c5518;
            case 0x2C551Cu: goto label_2c551c;
            case 0x2C5520u: goto label_2c5520;
            case 0x2C5524u: goto label_2c5524;
            case 0x2C5528u: goto label_2c5528;
            case 0x2C552Cu: goto label_2c552c;
            case 0x2C5530u: goto label_2c5530;
            case 0x2C5534u: goto label_2c5534;
            case 0x2C5538u: goto label_2c5538;
            case 0x2C553Cu: goto label_2c553c;
            case 0x2C5540u: goto label_2c5540;
            case 0x2C5544u: goto label_2c5544;
            case 0x2C5548u: goto label_2c5548;
            case 0x2C554Cu: goto label_2c554c;
            case 0x2C5550u: goto label_2c5550;
            case 0x2C5554u: goto label_2c5554;
            case 0x2C5558u: goto label_2c5558;
            case 0x2C555Cu: goto label_2c555c;
            case 0x2C5560u: goto label_2c5560;
            case 0x2C5564u: goto label_2c5564;
            case 0x2C5568u: goto label_2c5568;
            case 0x2C556Cu: goto label_2c556c;
            case 0x2C5570u: goto label_2c5570;
            case 0x2C5574u: goto label_2c5574;
            case 0x2C5578u: goto label_2c5578;
            case 0x2C557Cu: goto label_2c557c;
            case 0x2C5580u: goto label_2c5580;
            case 0x2C5584u: goto label_2c5584;
            case 0x2C5588u: goto label_2c5588;
            case 0x2C558Cu: goto label_2c558c;
            case 0x2C5590u: goto label_2c5590;
            case 0x2C5594u: goto label_2c5594;
            case 0x2C5598u: goto label_2c5598;
            case 0x2C559Cu: goto label_2c559c;
            case 0x2C55A0u: goto label_2c55a0;
            case 0x2C55A4u: goto label_2c55a4;
            case 0x2C55A8u: goto label_2c55a8;
            case 0x2C55ACu: goto label_2c55ac;
            case 0x2C55B0u: goto label_2c55b0;
            case 0x2C55B4u: goto label_2c55b4;
            case 0x2C55B8u: goto label_2c55b8;
            case 0x2C55BCu: goto label_2c55bc;
            case 0x2C55C0u: goto label_2c55c0;
            case 0x2C55C4u: goto label_2c55c4;
            case 0x2C55C8u: goto label_2c55c8;
            case 0x2C55CCu: goto label_2c55cc;
            case 0x2C55D0u: goto label_2c55d0;
            case 0x2C55D4u: goto label_2c55d4;
            case 0x2C55D8u: goto label_2c55d8;
            case 0x2C55DCu: goto label_2c55dc;
            case 0x2C55E0u: goto label_2c55e0;
            case 0x2C55E4u: goto label_2c55e4;
            case 0x2C55E8u: goto label_2c55e8;
            case 0x2C55ECu: goto label_2c55ec;
            case 0x2C55F0u: goto label_2c55f0;
            case 0x2C55F4u: goto label_2c55f4;
            case 0x2C55F8u: goto label_2c55f8;
            case 0x2C55FCu: goto label_2c55fc;
            case 0x2C5600u: goto label_2c5600;
            case 0x2C5604u: goto label_2c5604;
            case 0x2C5608u: goto label_2c5608;
            case 0x2C560Cu: goto label_2c560c;
            case 0x2C5610u: goto label_2c5610;
            case 0x2C5614u: goto label_2c5614;
            case 0x2C5618u: goto label_2c5618;
            case 0x2C561Cu: goto label_2c561c;
            case 0x2C5620u: goto label_2c5620;
            case 0x2C5624u: goto label_2c5624;
            case 0x2C5628u: goto label_2c5628;
            case 0x2C562Cu: goto label_2c562c;
            case 0x2C5630u: goto label_2c5630;
            case 0x2C5634u: goto label_2c5634;
            case 0x2C5638u: goto label_2c5638;
            case 0x2C563Cu: goto label_2c563c;
            case 0x2C5640u: goto label_2c5640;
            case 0x2C5644u: goto label_2c5644;
            case 0x2C5648u: goto label_2c5648;
            case 0x2C564Cu: goto label_2c564c;
            case 0x2C5650u: goto label_2c5650;
            case 0x2C5654u: goto label_2c5654;
            case 0x2C5658u: goto label_2c5658;
            case 0x2C565Cu: goto label_2c565c;
            case 0x2C5660u: goto label_2c5660;
            case 0x2C5664u: goto label_2c5664;
            case 0x2C5668u: goto label_2c5668;
            case 0x2C566Cu: goto label_2c566c;
            case 0x2C5670u: goto label_2c5670;
            case 0x2C5674u: goto label_2c5674;
            case 0x2C5678u: goto label_2c5678;
            case 0x2C567Cu: goto label_2c567c;
            case 0x2C5680u: goto label_2c5680;
            case 0x2C5684u: goto label_2c5684;
            case 0x2C5688u: goto label_2c5688;
            case 0x2C568Cu: goto label_2c568c;
            case 0x2C5690u: goto label_2c5690;
            case 0x2C5694u: goto label_2c5694;
            case 0x2C5698u: goto label_2c5698;
            case 0x2C569Cu: goto label_2c569c;
            case 0x2C56A0u: goto label_2c56a0;
            case 0x2C56A4u: goto label_2c56a4;
            case 0x2C56A8u: goto label_2c56a8;
            case 0x2C56ACu: goto label_2c56ac;
            case 0x2C56B0u: goto label_2c56b0;
            case 0x2C56B4u: goto label_2c56b4;
            case 0x2C56B8u: goto label_2c56b8;
            case 0x2C56BCu: goto label_2c56bc;
            case 0x2C56C0u: goto label_2c56c0;
            case 0x2C56C4u: goto label_2c56c4;
            case 0x2C56C8u: goto label_2c56c8;
            case 0x2C56CCu: goto label_2c56cc;
            case 0x2C56D0u: goto label_2c56d0;
            case 0x2C56D4u: goto label_2c56d4;
            case 0x2C56D8u: goto label_2c56d8;
            case 0x2C56DCu: goto label_2c56dc;
            case 0x2C56E0u: goto label_2c56e0;
            case 0x2C56E4u: goto label_2c56e4;
            case 0x2C56E8u: goto label_2c56e8;
            case 0x2C56ECu: goto label_2c56ec;
            case 0x2C56F0u: goto label_2c56f0;
            case 0x2C56F4u: goto label_2c56f4;
            case 0x2C56F8u: goto label_2c56f8;
            case 0x2C56FCu: goto label_2c56fc;
            case 0x2C5700u: goto label_2c5700;
            case 0x2C5704u: goto label_2c5704;
            case 0x2C5708u: goto label_2c5708;
            case 0x2C570Cu: goto label_2c570c;
            case 0x2C5710u: goto label_2c5710;
            case 0x2C5714u: goto label_2c5714;
            case 0x2C5718u: goto label_2c5718;
            case 0x2C571Cu: goto label_2c571c;
            case 0x2C5720u: goto label_2c5720;
            case 0x2C5724u: goto label_2c5724;
            case 0x2C5728u: goto label_2c5728;
            case 0x2C572Cu: goto label_2c572c;
            case 0x2C5730u: goto label_2c5730;
            case 0x2C5734u: goto label_2c5734;
            case 0x2C5738u: goto label_2c5738;
            case 0x2C573Cu: goto label_2c573c;
            case 0x2C5740u: goto label_2c5740;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C5380u;
label_2c5380:
    // 0x2c5380: 0x3c020038
    ctx->pc = 0x2c5380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c5384:
    // 0x2c5384: 0x10000020
label_2c5388:
    if (ctx->pc == 0x2C5388u) {
        ctx->pc = 0x2C5388u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
        ctx->pc = 0x2C538Cu;
        goto label_2c538c;
    }
    ctx->pc = 0x2C5384u;
    {
        const bool branch_taken_0x2c5384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5388u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
        if (branch_taken_0x2c5384) {
            ctx->pc = 0x2C5408u;
            goto label_2c5408;
        }
    }
    ctx->pc = 0x2C538Cu;
label_2c538c:
    // 0x2c538c: 0x3c020038
    ctx->pc = 0x2c538cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c5390:
    // 0x2c5390: 0x1000001d
label_2c5394:
    if (ctx->pc == 0x2C5394u) {
        ctx->pc = 0x2C5394u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947152)));
        ctx->pc = 0x2C5398u;
        goto label_2c5398;
    }
    ctx->pc = 0x2C5390u;
    {
        const bool branch_taken_0x2c5390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5394u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947152)));
        if (branch_taken_0x2c5390) {
            ctx->pc = 0x2C5408u;
            goto label_2c5408;
        }
    }
    ctx->pc = 0x2C5398u;
label_2c5398:
    // 0x2c5398: 0x3c020038
    ctx->pc = 0x2c5398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c539c:
    // 0x2c539c: 0x1000001a
label_2c53a0:
    if (ctx->pc == 0x2C53A0u) {
        ctx->pc = 0x2C53A0u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947144)));
        ctx->pc = 0x2C53A4u;
        goto label_2c53a4;
    }
    ctx->pc = 0x2C539Cu;
    {
        const bool branch_taken_0x2c539c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C53A0u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947144)));
        if (branch_taken_0x2c539c) {
            ctx->pc = 0x2C5408u;
            goto label_2c5408;
        }
    }
    ctx->pc = 0x2C53A4u;
label_2c53a4:
    // 0x2c53a4: 0x3c020038
    ctx->pc = 0x2c53a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c53a8:
    // 0x2c53a8: 0x10000017
label_2c53ac:
    if (ctx->pc == 0x2C53ACu) {
        ctx->pc = 0x2C53ACu;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947148)));
        ctx->pc = 0x2C53B0u;
        goto label_2c53b0;
    }
    ctx->pc = 0x2C53A8u;
    {
        const bool branch_taken_0x2c53a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C53ACu;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947148)));
        if (branch_taken_0x2c53a8) {
            ctx->pc = 0x2C5408u;
            goto label_2c5408;
        }
    }
    ctx->pc = 0x2C53B0u;
label_2c53b0:
    // 0x2c53b0: 0x3c020038
    ctx->pc = 0x2c53b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c53b4:
    // 0x2c53b4: 0x10000014
label_2c53b8:
    if (ctx->pc == 0x2C53B8u) {
        ctx->pc = 0x2C53B8u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947140)));
        ctx->pc = 0x2C53BCu;
        goto label_2c53bc;
    }
    ctx->pc = 0x2C53B4u;
    {
        const bool branch_taken_0x2c53b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C53B8u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947140)));
        if (branch_taken_0x2c53b4) {
            ctx->pc = 0x2C5408u;
            goto label_2c5408;
        }
    }
    ctx->pc = 0x2C53BCu;
label_2c53bc:
    // 0x2c53bc: 0x3c020038
    ctx->pc = 0x2c53bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c53c0:
    // 0x2c53c0: 0x10000011
label_2c53c4:
    if (ctx->pc == 0x2C53C4u) {
        ctx->pc = 0x2C53C4u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947136)));
        ctx->pc = 0x2C53C8u;
        goto label_2c53c8;
    }
    ctx->pc = 0x2C53C0u;
    {
        const bool branch_taken_0x2c53c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C53C4u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947136)));
        if (branch_taken_0x2c53c0) {
            ctx->pc = 0x2C5408u;
            goto label_2c5408;
        }
    }
    ctx->pc = 0x2C53C8u;
label_2c53c8:
    // 0x2c53c8: 0x3c020038
    ctx->pc = 0x2c53c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c53cc:
    // 0x2c53cc: 0x1000000e
label_2c53d0:
    if (ctx->pc == 0x2C53D0u) {
        ctx->pc = 0x2C53D0u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947132)));
        ctx->pc = 0x2C53D4u;
        goto label_2c53d4;
    }
    ctx->pc = 0x2C53CCu;
    {
        const bool branch_taken_0x2c53cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C53D0u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947132)));
        if (branch_taken_0x2c53cc) {
            ctx->pc = 0x2C5408u;
            goto label_2c5408;
        }
    }
    ctx->pc = 0x2C53D4u;
label_2c53d4:
    // 0x2c53d4: 0x3c020038
    ctx->pc = 0x2c53d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c53d8:
    // 0x2c53d8: 0x1000000b
label_2c53dc:
    if (ctx->pc == 0x2C53DCu) {
        ctx->pc = 0x2C53DCu;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947128)));
        ctx->pc = 0x2C53E0u;
        goto label_2c53e0;
    }
    ctx->pc = 0x2C53D8u;
    {
        const bool branch_taken_0x2c53d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C53DCu;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294947128)));
        if (branch_taken_0x2c53d8) {
            ctx->pc = 0x2C5408u;
            goto label_2c5408;
        }
    }
    ctx->pc = 0x2C53E0u;
label_2c53e0:
    // 0x2c53e0: 0x8e820008
    ctx->pc = 0x2c53e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2c53e4:
    // 0x2c53e4: 0x82102a
    ctx->pc = 0x2c53e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_2c53e8:
    // 0x2c53e8: 0x10400006
label_2c53ec:
    if (ctx->pc == 0x2C53ECu) {
        ctx->pc = 0x2C53ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x2C53F0u;
        goto label_2c53f0;
    }
    ctx->pc = 0x2C53E8u;
    {
        const bool branch_taken_0x2c53e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C53ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x2c53e8) {
            ctx->pc = 0x2C5404u;
            goto label_2c5404;
        }
    }
    ctx->pc = 0x2C53F0u;
label_2c53f0:
    // 0x2c53f0: 0x8e830004
    ctx->pc = 0x2c53f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2c53f4:
    // 0x2c53f4: 0x821018
    ctx->pc = 0x2c53f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2c53f8:
    // 0x2c53f8: 0x431021
    ctx->pc = 0x2c53f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c53fc:
    // 0x2c53fc: 0x10000002
label_2c5400:
    if (ctx->pc == 0x2C5400u) {
        ctx->pc = 0x2C5400u;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->pc = 0x2C5404u;
        goto label_2c5404;
    }
    ctx->pc = 0x2C53FCu;
    {
        const bool branch_taken_0x2c53fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5400u;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
        if (branch_taken_0x2c53fc) {
            ctx->pc = 0x2C5408u;
            goto label_2c5408;
        }
    }
    ctx->pc = 0x2C5404u;
label_2c5404:
    // 0x2c5404: 0x982d
    ctx->pc = 0x2c5404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5408:
    // 0x2c5408: 0x5ea00030
label_2c540c:
    if (ctx->pc == 0x2C540Cu) {
        ctx->pc = 0x2C540Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x2C5410u;
        goto label_2c5410;
    }
    ctx->pc = 0x2C5408u;
    {
        const bool branch_taken_0x2c5408 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x2c5408) {
            ctx->pc = 0x2C540Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x2C54CCu;
            goto label_2c54cc;
        }
    }
    ctx->pc = 0x2C5410u;
label_2c5410:
    // 0x2c5410: 0x526000af
label_2c5414:
    if (ctx->pc == 0x2C5414u) {
        ctx->pc = 0x2C5414u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2C5418u;
        goto label_2c5418;
    }
    ctx->pc = 0x2C5410u;
    {
        const bool branch_taken_0x2c5410 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c5410) {
            ctx->pc = 0x2C5414u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2C56D0u;
            goto label_2c56d0;
        }
    }
    ctx->pc = 0x2C5418u;
label_2c5418:
    // 0x2c5418: 0x1000002c
label_2c541c:
    if (ctx->pc == 0x2C541Cu) {
        ctx->pc = 0x2C541Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x2C5420u;
        goto label_2c5420;
    }
    ctx->pc = 0x2C5418u;
    {
        const bool branch_taken_0x2c5418 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C541Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
        if (branch_taken_0x2c5418) {
            ctx->pc = 0x2C54CCu;
            goto label_2c54cc;
        }
    }
    ctx->pc = 0x2C5420u;
label_2c5420:
    // 0x2c5420: 0x8e82000c
    ctx->pc = 0x2c5420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2c5424:
    // 0x2c5424: 0x30420001
    ctx->pc = 0x2c5424u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_2c5428:
    // 0x2c5428: 0x10400016
label_2c542c:
    if (ctx->pc == 0x2C542Cu) {
        ctx->pc = 0x2C542Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 128));
        ctx->pc = 0x2C5430u;
        goto label_2c5430;
    }
    ctx->pc = 0x2C5428u;
    {
        const bool branch_taken_0x2c5428 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C542Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 128));
        if (branch_taken_0x2c5428) {
            ctx->pc = 0x2C5484u;
            goto label_2c5484;
        }
    }
    ctx->pc = 0x2C5430u;
label_2c5430:
    // 0x2c5430: 0x14400005
label_2c5434:
    if (ctx->pc == 0x2C5434u) {
        ctx->pc = 0x2C5434u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x2C5438u;
        goto label_2c5438;
    }
    ctx->pc = 0x2C5430u;
    {
        const bool branch_taken_0x2c5430 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C5434u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967248));
        if (branch_taken_0x2c5430) {
            ctx->pc = 0x2C5448u;
            goto label_2c5448;
        }
    }
    ctx->pc = 0x2C5438u;
label_2c5438:
    // 0x2c5438: 0x2486ff80
    ctx->pc = 0x2c5438u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967168));
label_2c543c:
    // 0x2c543c: 0x26520001
    ctx->pc = 0x2c543cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2c5440:
    // 0x2c5440: 0x1000000a
label_2c5444:
    if (ctx->pc == 0x2C5444u) {
        ctx->pc = 0x2C5444u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2C5448u;
        goto label_2c5448;
    }
    ctx->pc = 0x2C5440u;
    {
        const bool branch_taken_0x2c5440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5444u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x2c5440) {
            ctx->pc = 0x2C546Cu;
            goto label_2c546c;
        }
    }
    ctx->pc = 0x2C5448u;
label_2c5448:
    // 0x2c5448: 0x2c42000a
    ctx->pc = 0x2c5448u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_2c544c:
    // 0x2c544c: 0x54400008
label_2c5450:
    if (ctx->pc == 0x2C5450u) {
        ctx->pc = 0x2C5450u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x2C5454u;
        goto label_2c5454;
    }
    ctx->pc = 0x2C544Cu;
    {
        const bool branch_taken_0x2c544c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c544c) {
            ctx->pc = 0x2C5450u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x2C5470u;
            goto label_2c5470;
        }
    }
    ctx->pc = 0x2C5454u;
label_2c5454:
    // 0x2c5454: 0x2402003a
    ctx->pc = 0x2c5454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
label_2c5458:
    // 0x2c5458: 0x10820004
label_2c545c:
    if (ctx->pc == 0x2C545Cu) {
        ctx->pc = 0x2C545Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x2C5460u;
        goto label_2c5460;
    }
    ctx->pc = 0x2C5458u;
    {
        const bool branch_taken_0x2c5458 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C545Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
        if (branch_taken_0x2c5458) {
            ctx->pc = 0x2C546Cu;
            goto label_2c546c;
        }
    }
    ctx->pc = 0x2C5460u;
label_2c5460:
    // 0x2c5460: 0x5482009b
label_2c5464:
    if (ctx->pc == 0x2C5464u) {
        ctx->pc = 0x2C5464u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2C5468u;
        goto label_2c5468;
    }
    ctx->pc = 0x2C5460u;
    {
        const bool branch_taken_0x2c5460 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x2c5460) {
            ctx->pc = 0x2C5464u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2C56D0u;
            goto label_2c56d0;
        }
    }
    ctx->pc = 0x2C5468u;
label_2c5468:
    // 0x2c5468: 0x2404003b
    ctx->pc = 0x2c5468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 59));
label_2c546c:
    // 0x2c546c: 0x8e830004
    ctx->pc = 0x2c546cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2c5470:
    // 0x2c5470: 0x24020024
    ctx->pc = 0x2c5470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
label_2c5474:
    // 0x2c5474: 0x821018
    ctx->pc = 0x2c5474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2c5478:
    // 0x2c5478: 0x431021
    ctx->pc = 0x2c5478u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c547c:
    // 0x2c547c: 0x10000012
label_2c5480:
    if (ctx->pc == 0x2C5480u) {
        ctx->pc = 0x2C5480u;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->pc = 0x2C5484u;
        goto label_2c5484;
    }
    ctx->pc = 0x2C547Cu;
    {
        const bool branch_taken_0x2c547c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5480u;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
        if (branch_taken_0x2c547c) {
            ctx->pc = 0x2C54C8u;
            goto label_2c54c8;
        }
    }
    ctx->pc = 0x2C5484u;
label_2c5484:
    // 0x2c5484: 0x50800092
label_2c5488:
    if (ctx->pc == 0x2C5488u) {
        ctx->pc = 0x2C5488u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2C548Cu;
        goto label_2c548c;
    }
    ctx->pc = 0x2C5484u;
    {
        const bool branch_taken_0x2c5484 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c5484) {
            ctx->pc = 0x2C5488u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2C56D0u;
            goto label_2c56d0;
        }
    }
    ctx->pc = 0x2C548Cu;
label_2c548c:
    // 0x2c548c: 0x8e820008
    ctx->pc = 0x2c548cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2c5490:
    // 0x2c5490: 0x82102a
    ctx->pc = 0x2c5490u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_2c5494:
    // 0x2c5494: 0x1040008d
label_2c5498:
    if (ctx->pc == 0x2C5498u) {
        ctx->pc = 0x2C5498u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x2C549Cu;
        goto label_2c549c;
    }
    ctx->pc = 0x2C5494u;
    {
        const bool branch_taken_0x2c5494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5498u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x2c5494) {
            ctx->pc = 0x2C56CCu;
            goto label_2c56cc;
        }
    }
    ctx->pc = 0x2C549Cu;
label_2c549c:
    // 0x2c549c: 0x8e830004
    ctx->pc = 0x2c549cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2c54a0:
    // 0x2c54a0: 0x821018
    ctx->pc = 0x2c54a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2c54a4:
    // 0x2c54a4: 0x431021
    ctx->pc = 0x2c54a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c54a8:
    // 0x2c54a8: 0x94530020
    ctx->pc = 0x2c54a8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2c54ac:
    // 0x2c54ac: 0x16600008
label_2c54b0:
    if (ctx->pc == 0x2C54B0u) {
        ctx->pc = 0x2C54B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x2C54B4u;
        goto label_2c54b4;
    }
    ctx->pc = 0x2C54ACu;
    {
        const bool branch_taken_0x2c54ac = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C54B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x2c54ac) {
            ctx->pc = 0x2C54D0u;
            goto label_2c54d0;
        }
    }
    ctx->pc = 0x2C54B4u;
label_2c54b4:
    // 0x2c54b4: 0x8fa20038
    ctx->pc = 0x2c54b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2c54b8:
    // 0x2c54b8: 0x2c21821
    ctx->pc = 0x2c54b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2c54bc:
    // 0x2c54bc: 0x38820020
    ctx->pc = 0x2c54bcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 32));
label_2c54c0:
    // 0x2c54c0: 0x10000082
label_2c54c4:
    if (ctx->pc == 0x2C54C4u) {
        ctx->pc = 0x2C54C4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 3));
        ctx->pc = 0x2C54C8u;
        goto label_2c54c8;
    }
    ctx->pc = 0x2C54C0u;
    {
        const bool branch_taken_0x2c54c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C54C4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 3));
        if (branch_taken_0x2c54c0) {
            ctx->pc = 0x2C56CCu;
            goto label_2c56cc;
        }
    }
    ctx->pc = 0x2C54C8u;
label_2c54c8:
    // 0x2c54c8: 0x8e830004
    ctx->pc = 0x2c54c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2c54cc:
    // 0x2c54cc: 0x24020024
    ctx->pc = 0x2c54ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
label_2c54d0:
    // 0x2c54d0: 0x821018
    ctx->pc = 0x2c54d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2c54d4:
    // 0x2c54d4: 0x431021
    ctx->pc = 0x2c54d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c54d8:
    // 0x2c54d8: 0x6843000b
    ctx->pc = 0x2c54d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
label_2c54dc:
    // 0x2c54dc: 0x6c430004
    ctx->pc = 0x2c54dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2c54e0:
    // 0x2c54e0: 0x68440013
    ctx->pc = 0x2c54e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_2c54e4:
    // 0x2c54e4: 0x6c44000c
    ctx->pc = 0x2c54e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2c54e8:
    // 0x2c54e8: 0x6845001b
    ctx->pc = 0x2c54e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
label_2c54ec:
    // 0x2c54ec: 0x6c450014
    ctx->pc = 0x2c54ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2c54f0:
    // 0x2c54f0: 0xb3a3000b
    ctx->pc = 0x2c54f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c54f4:
    // 0x2c54f4: 0xb7a30004
    ctx->pc = 0x2c54f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c54f8:
    // 0x2c54f8: 0xb3a40013
    ctx->pc = 0x2c54f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c54fc:
    // 0x2c54fc: 0xb7a4000c
    ctx->pc = 0x2c54fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c5500:
    // 0x2c5500: 0xb3a5001b
    ctx->pc = 0x2c5500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c5504:
    // 0x2c5504: 0xb7a50014
    ctx->pc = 0x2c5504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c5508:
    // 0x2c5508: 0x5aa00024
label_2c550c:
    if (ctx->pc == 0x2C550Cu) {
        ctx->pc = 0x2C550Cu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
        ctx->pc = 0x2C5510u;
        goto label_2c5510;
    }
    ctx->pc = 0x2C5508u;
    {
        const bool branch_taken_0x2c5508 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x2c5508) {
            ctx->pc = 0x2C550Cu;
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
            ctx->pc = 0x2C559Cu;
            goto label_2c559c;
        }
    }
    ctx->pc = 0x2C5510u;
label_2c5510:
    // 0x2c5510: 0x8e820000
    ctx->pc = 0x2c5510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c5514:
    // 0x2c5514: 0x24530004
    ctx->pc = 0x2c5514u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4));
label_2c5518:
    // 0x2c5518: 0x8e220000
    ctx->pc = 0x2c5518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c551c:
    // 0x2c551c: 0x30424000
    ctx->pc = 0x2c551cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
label_2c5520:
    // 0x2c5520: 0x10400009
label_2c5524:
    if (ctx->pc == 0x2C5524u) {
        ctx->pc = 0x2C5524u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2C5528u;
        goto label_2c5528;
    }
    ctx->pc = 0x2C5520u;
    {
        const bool branch_taken_0x2c5520 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5524u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2c5520) {
            ctx->pc = 0x2C5548u;
            goto label_2c5548;
        }
    }
    ctx->pc = 0x2C5528u;
label_2c5528:
    // 0x2c5528: 0x44930000
    ctx->pc = 0x2c5528u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
label_2c552c:
    // 0x2c552c: 0x46800020
    ctx->pc = 0x2c552cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2c5530:
    // 0x2c5530: 0xc6210018
    ctx->pc = 0x2c5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c5534:
    // 0x2c5534: 0x46010002
    ctx->pc = 0x2c5534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c5538:
    // 0x2c5538: 0x46000064
    ctx->pc = 0x2c5538u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2c553c:
    // 0x2c553c: 0x44020800
    ctx->pc = 0x2c553cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2c5540:
    // 0x2c5540: 0x10000062
label_2c5544:
    if (ctx->pc == 0x2C5544u) {
        ctx->pc = 0x2C5544u;
        SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->pc = 0x2C5548u;
        goto label_2c5548;
    }
    ctx->pc = 0x2C5540u;
    {
        const bool branch_taken_0x2c5540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5544u;
        SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        if (branch_taken_0x2c5540) {
            ctx->pc = 0x2C56CCu;
            goto label_2c56cc;
        }
    }
    ctx->pc = 0x2C5548u;
label_2c5548:
    // 0x2c5548: 0x26f7fffe
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967294));
label_2c554c:
    // 0x2c554c: 0x200202d
    ctx->pc = 0x2c554cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5550:
    // 0x2c5550: 0x2a0282d
    ctx->pc = 0x2c5550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c5554:
    // 0x2c5554: 0xc0b0ed6
label_2c5558:
    if (ctx->pc == 0x2C5558u) {
        ctx->pc = 0x2C5558u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C555Cu;
        goto label_2c555c;
    }
    ctx->pc = 0x2C5554u;
    SET_GPR_U32(ctx, 31, 0x2C555Cu);
    ctx->pc = 0x2C5558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C555Cu; }
    }
    if (ctx->pc != 0x2C555Cu) { return; }
    ctx->pc = 0x2C555Cu;
label_2c555c:
    // 0x2c555c: 0x200202d
    ctx->pc = 0x2c555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5560:
    // 0x2c5560: 0x260282d
    ctx->pc = 0x2c5560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c5564:
    // 0x2c5564: 0xc0b0cf6
label_2c5568:
    if (ctx->pc == 0x2C5568u) {
        ctx->pc = 0x2C5568u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C556Cu;
        goto label_2c556c;
    }
    ctx->pc = 0x2C5564u;
    SET_GPR_U32(ctx, 31, 0x2C556Cu);
    ctx->pc = 0x2C5568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C556Cu; }
    }
    if (ctx->pc != 0x2C556Cu) { return; }
    ctx->pc = 0x2C556Cu;
label_2c556c:
    // 0x2c556c: 0x200202d
    ctx->pc = 0x2c556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5570:
    // 0x2c5570: 0x44806000
    ctx->pc = 0x2c5570u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_2c5574:
    // 0x2c5574: 0x3c013f80
    ctx->pc = 0x2c5574u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2c5578:
    // 0x2c5578: 0x44816800
    ctx->pc = 0x2c5578u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_2c557c:
    // 0x2c557c: 0x46006386
    ctx->pc = 0x2c557cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2c5580:
    // 0x2c5580: 0xc0b0e6a
label_2c5584:
    if (ctx->pc == 0x2C5584u) {
        ctx->pc = 0x2C5584u;
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x2C5588u;
        goto label_2c5588;
    }
    ctx->pc = 0x2C5580u;
    SET_GPR_U32(ctx, 31, 0x2C5588u);
    ctx->pc = 0x2C5584u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5588u; }
    }
    if (ctx->pc != 0x2C5588u) { return; }
    ctx->pc = 0x2C5588u;
label_2c5588:
    // 0x2c5588: 0x2673fffe
    ctx->pc = 0x2c5588u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967294));
label_2c558c:
    // 0x2c558c: 0x3c028080
    ctx->pc = 0x2c558cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32896 << 16));
label_2c5590:
    // 0x2c5590: 0x34428080
    ctx->pc = 0x2c5590u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32896));
label_2c5594:
    // 0x2c5594: 0x1000000b
label_2c5598:
    if (ctx->pc == 0x2C5598u) {
        ctx->pc = 0x2C5598u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2C559Cu;
        goto label_2c559c;
    }
    ctx->pc = 0x2C5594u;
    {
        const bool branch_taken_0x2c5594 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5598u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x2c5594) {
            ctx->pc = 0x2C55C4u;
            goto label_2c55c4;
        }
    }
    ctx->pc = 0x2C559Cu;
label_2c559c:
    // 0x2c559c: 0x4a00005
label_2c55a0:
    if (ctx->pc == 0x2C55A0u) {
        ctx->pc = 0x2C55A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C55A4u;
        goto label_2c55a4;
    }
    ctx->pc = 0x2C559Cu;
    {
        const bool branch_taken_0x2c559c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2C55A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c559c) {
            ctx->pc = 0x2C55B4u;
            goto label_2c55b4;
        }
    }
    ctx->pc = 0x2C55A4u;
label_2c55a4:
    // 0x2c55a4: 0xc0b0ed6
label_2c55a8:
    if (ctx->pc == 0x2C55A8u) {
        ctx->pc = 0x2C55A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C55ACu;
        goto label_2c55ac;
    }
    ctx->pc = 0x2C55A4u;
    SET_GPR_U32(ctx, 31, 0x2C55ACu);
    ctx->pc = 0x2C55A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55ACu; }
    }
    if (ctx->pc != 0x2C55ACu) { return; }
    ctx->pc = 0x2C55ACu;
label_2c55ac:
    // 0x2c55ac: 0x10000005
label_2c55b0:
    if (ctx->pc == 0x2C55B0u) {
        ctx->pc = 0x2C55B4u;
        goto label_2c55b4;
    }
    ctx->pc = 0x2C55ACu;
    {
        const bool branch_taken_0x2c55ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c55ac) {
            ctx->pc = 0x2C55C4u;
            goto label_2c55c4;
        }
    }
    ctx->pc = 0x2C55B4u;
label_2c55b4:
    // 0x2c55b4: 0x18c00003
label_2c55b8:
    if (ctx->pc == 0x2C55B8u) {
        ctx->pc = 0x2C55BCu;
        goto label_2c55bc;
    }
    ctx->pc = 0x2C55B4u;
    {
        const bool branch_taken_0x2c55b4 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2c55b4) {
            ctx->pc = 0x2C55C4u;
            goto label_2c55c4;
        }
    }
    ctx->pc = 0x2C55BCu;
label_2c55bc:
    // 0x2c55bc: 0xc0b0ed6
label_2c55c0:
    if (ctx->pc == 0x2C55C0u) {
        ctx->pc = 0x2C55C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C55C4u;
        goto label_2c55c4;
    }
    ctx->pc = 0x2C55BCu;
    SET_GPR_U32(ctx, 31, 0x2C55C4u);
    ctx->pc = 0x2C55C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55C4u; }
    }
    if (ctx->pc != 0x2C55C4u) { return; }
    ctx->pc = 0x2C55C4u;
label_2c55c4:
    // 0x2c55c4: 0x44960800
    ctx->pc = 0x2c55c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 22);
label_2c55c8:
    // 0x2c55c8: 0x46800860
    ctx->pc = 0x2c55c8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2c55cc:
    // 0x2c55cc: 0x8fa30030
    ctx->pc = 0x2c55ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2c55d0:
    // 0x2c55d0: 0x8c620040
    ctx->pc = 0x2c55d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2c55d4:
    // 0x2c55d4: 0xc4400000
    ctx->pc = 0x2c55d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c55d8:
    // 0x2c55d8: 0x46000842
    ctx->pc = 0x2c55d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2c55dc:
    // 0x2c55dc: 0x3c013f00
    ctx->pc = 0x2c55dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_2c55e0:
    // 0x2c55e0: 0x44811000
    ctx->pc = 0x2c55e0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_2c55e4:
    // 0x2c55e4: 0x46020840
    ctx->pc = 0x2c55e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2c55e8:
    // 0x2c55e8: 0x46000824
    ctx->pc = 0x2c55e8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_2c55ec:
    // 0x2c55ec: 0x44020000
    ctx->pc = 0x2c55ecu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
label_2c55f0:
    // 0x2c55f0: 0xa6020008
    ctx->pc = 0x2c55f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_2c55f4:
    // 0x2c55f4: 0x44970800
    ctx->pc = 0x2c55f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 23);
label_2c55f8:
    // 0x2c55f8: 0x46800860
    ctx->pc = 0x2c55f8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2c55fc:
    // 0x2c55fc: 0x8c620040
    ctx->pc = 0x2c55fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2c5600:
    // 0x2c5600: 0xc4400004
    ctx->pc = 0x2c5600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5604:
    // 0x2c5604: 0x46000842
    ctx->pc = 0x2c5604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2c5608:
    // 0x2c5608: 0x46020840
    ctx->pc = 0x2c5608u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2c560c:
    // 0x2c560c: 0x46000824
    ctx->pc = 0x2c560cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_2c5610:
    // 0x2c5610: 0x44020000
    ctx->pc = 0x2c5610u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
label_2c5614:
    // 0x2c5614: 0xa602000a
    ctx->pc = 0x2c5614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_2c5618:
    // 0x2c5618: 0xc621000c
    ctx->pc = 0x2c5618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c561c:
    // 0x2c561c: 0x3c014200
    ctx->pc = 0x2c561cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16896 << 16));
label_2c5620:
    // 0x2c5620: 0x44810000
    ctx->pc = 0x2c5620u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2c5624:
    // 0x2c5624: 0x46000842
    ctx->pc = 0x2c5624u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2c5628:
    // 0x2c5628: 0x46000824
    ctx->pc = 0x2c5628u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_2c562c:
    // 0x2c562c: 0xe600000c
    ctx->pc = 0x2c562cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2c5630:
    // 0x2c5630: 0x8fa20044
    ctx->pc = 0x2c5630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2c5634:
    // 0x2c5634: 0x10400004
label_2c5638:
    if (ctx->pc == 0x2C5638u) {
        ctx->pc = 0x2C5638u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C563Cu;
        goto label_2c563c;
    }
    ctx->pc = 0x2C5634u;
    {
        const bool branch_taken_0x2c5634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5638u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c5634) {
            ctx->pc = 0x2C5648u;
            goto label_2c5648;
        }
    }
    ctx->pc = 0x2C563Cu;
label_2c563c:
    // 0x2c563c: 0x4600ab06
    ctx->pc = 0x2c563cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2c5640:
    // 0x2c5640: 0xc0b0d7a
label_2c5644:
    if (ctx->pc == 0x2C5644u) {
        ctx->pc = 0x2C5644u;
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2C5648u;
        goto label_2c5648;
    }
    ctx->pc = 0x2C5640u;
    SET_GPR_U32(ctx, 31, 0x2C5648u);
    ctx->pc = 0x2C5644u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C35E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitScaleSize_0x2c35e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5648u; }
    }
    if (ctx->pc != 0x2C5648u) { return; }
    ctx->pc = 0x2C5648u;
label_2c5648:
    // 0x2c5648: 0x8e220000
    ctx->pc = 0x2c5648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c564c:
    // 0x2c564c: 0x30424000
    ctx->pc = 0x2c564cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
label_2c5650:
    // 0x2c5650: 0x10400011
label_2c5654:
    if (ctx->pc == 0x2C5654u) {
        ctx->pc = 0x2C5654u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x2C5658u;
        goto label_2c5658;
    }
    ctx->pc = 0x2C5650u;
    {
        const bool branch_taken_0x2c5650 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5654u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        if (branch_taken_0x2c5650) {
            ctx->pc = 0x2C5698u;
            goto label_2c5698;
        }
    }
    ctx->pc = 0x2C5658u;
label_2c5658:
    // 0x2c5658: 0x96020008
    ctx->pc = 0x2c5658u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2c565c:
    // 0x2c565c: 0x431023
    ctx->pc = 0x2c565cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c5660:
    // 0x2c5660: 0xa6020008
    ctx->pc = 0x2c5660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_2c5664:
    // 0x2c5664: 0x9602000a
    ctx->pc = 0x2c5664u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_2c5668:
    // 0x2c5668: 0x8fa40040
    ctx->pc = 0x2c5668u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2c566c:
    // 0x2c566c: 0x441023
    ctx->pc = 0x2c566cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c5670:
    // 0x2c5670: 0xa602000a
    ctx->pc = 0x2c5670u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_2c5674:
    // 0x2c5674: 0x8fa5003c
    ctx->pc = 0x2c5674u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2c5678:
    // 0x2c5678: 0x51840
    ctx->pc = 0x2c5678u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
label_2c567c:
    // 0x2c567c: 0x96020010
    ctx->pc = 0x2c567cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_2c5680:
    // 0x2c5680: 0x431021
    ctx->pc = 0x2c5680u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c5684:
    // 0x2c5684: 0xa6020010
    ctx->pc = 0x2c5684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_2c5688:
    // 0x2c5688: 0x41840
    ctx->pc = 0x2c5688u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_2c568c:
    // 0x2c568c: 0x96020012
    ctx->pc = 0x2c568cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_2c5690:
    // 0x2c5690: 0x431021
    ctx->pc = 0x2c5690u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c5694:
    // 0x2c5694: 0xa6020012
    ctx->pc = 0x2c5694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_2c5698:
    // 0x2c5698: 0x44930000
    ctx->pc = 0x2c5698u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
label_2c569c:
    // 0x2c569c: 0x46800020
    ctx->pc = 0x2c569cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2c56a0:
    // 0x2c56a0: 0xc6210018
    ctx->pc = 0x2c56a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c56a4:
    // 0x2c56a4: 0x46010002
    ctx->pc = 0x2c56a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c56a8:
    // 0x2c56a8: 0x46000064
    ctx->pc = 0x2c56a8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2c56ac:
    // 0x2c56ac: 0x44020800
    ctx->pc = 0x2c56acu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2c56b0:
    // 0x2c56b0: 0x2c2b021
    ctx->pc = 0x2c56b0u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2c56b4:
    // 0x2c56b4: 0xc0b082e
label_2c56b8:
    if (ctx->pc == 0x2C56B8u) {
        ctx->pc = 0x2C56B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C56BCu;
        goto label_2c56bc;
    }
    ctx->pc = 0x2C56B4u;
    SET_GPR_U32(ctx, 31, 0x2C56BCu);
    ctx->pc = 0x2C56B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C20B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawBlit_0x2c20b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56BCu; }
    }
    if (ctx->pc != 0x2C56BCu) { return; }
    ctx->pc = 0x2C56BCu;
label_2c56bc:
    // 0x2c56bc: 0x5aa00004
label_2c56c0:
    if (ctx->pc == 0x2C56C0u) {
        ctx->pc = 0x2C56C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2C56C4u;
        goto label_2c56c4;
    }
    ctx->pc = 0x2C56BCu;
    {
        const bool branch_taken_0x2c56bc = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x2c56bc) {
            ctx->pc = 0x2C56C0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2C56D0u;
            goto label_2c56d0;
        }
    }
    ctx->pc = 0x2C56C4u;
label_2c56c4:
    // 0x2c56c4: 0x8e220028
    ctx->pc = 0x2c56c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c56c8:
    // 0x2c56c8: 0xae02001c
    ctx->pc = 0x2c56c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2c56cc:
    // 0x2c56cc: 0x26520001
    ctx->pc = 0x2c56ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2c56d0:
    // 0x2c56d0: 0x92420000
    ctx->pc = 0x2c56d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2c56d4:
    // 0x2c56d4: 0x1440ff1a
label_2c56d8:
    if (ctx->pc == 0x2C56D8u) {
        ctx->pc = 0x2C56D8u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x2C56DCu;
        goto label_2c56dc;
    }
    ctx->pc = 0x2C56D4u;
    {
        const bool branch_taken_0x2c56d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C56D8u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x2c56d4) {
            ctx->pc = 0x2C5340u;
            goto label_2c5340;
        }
    }
    ctx->pc = 0x2C56DCu;
label_2c56dc:
    // 0x2c56dc: 0x27de0001
    ctx->pc = 0x2c56dcu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
label_2c56e0:
    // 0x2c56e0: 0x3c02003d
    ctx->pc = 0x2c56e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c56e4:
    // 0x2c56e4: 0x8c421f70
    ctx->pc = 0x2c56e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8048)));
label_2c56e8:
    // 0x2c56e8: 0x3c2102a
    ctx->pc = 0x2c56e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 2)));
label_2c56ec:
    // 0x2c56ec: 0x1440fed6
label_2c56f0:
    if (ctx->pc == 0x2C56F0u) {
        ctx->pc = 0x2C56F0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x2C56F4u;
        goto label_2c56f4;
    }
    ctx->pc = 0x2C56ECu;
    {
        const bool branch_taken_0x2c56ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C56F0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
        if (branch_taken_0x2c56ec) {
            ctx->pc = 0x2C5248u;
            goto label_2c5248;
        }
    }
    ctx->pc = 0x2C56F4u;
label_2c56f4:
    // 0x2c56f4: 0x8fa20048
    ctx->pc = 0x2c56f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2c56f8:
    // 0x2c56f8: 0x2442ffff
    ctx->pc = 0x2c56f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c56fc:
    // 0x2c56fc: 0x1040fecc
label_2c5700:
    if (ctx->pc == 0x2C5700u) {
        ctx->pc = 0x2C5700u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x2C5704u;
        goto label_2c5704;
    }
    ctx->pc = 0x2C56FCu;
    {
        const bool branch_taken_0x2c56fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5700u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x2c56fc) {
            ctx->pc = 0x2C5230u;
            goto label_2c5230;
        }
    }
    ctx->pc = 0x2C5704u;
label_2c5704:
    // 0x2c5704: 0xc0b09ec
label_2c5708:
    if (ctx->pc == 0x2C5708u) {
        ctx->pc = 0x2C570Cu;
        goto label_2c570c;
    }
    ctx->pc = 0x2C5704u;
    SET_GPR_U32(ctx, 31, 0x2C570Cu);
    ctx->pc = 0x2C27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndBlits_0x2c27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C570Cu; }
    }
    if (ctx->pc != 0x2C570Cu) { return; }
    ctx->pc = 0x2C570Cu;
label_2c570c:
    // 0x2c570c: 0xdfbf00e0
    ctx->pc = 0x2c570cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2c5710:
    // 0x2c5710: 0xdfbe00d0
    ctx->pc = 0x2c5710u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2c5714:
    // 0x2c5714: 0xdfb700c0
    ctx->pc = 0x2c5714u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2c5718:
    // 0x2c5718: 0xdfb600b0
    ctx->pc = 0x2c5718u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2c571c:
    // 0x2c571c: 0xdfb500a0
    ctx->pc = 0x2c571cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2c5720:
    // 0x2c5720: 0xdfb40090
    ctx->pc = 0x2c5720u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2c5724:
    // 0x2c5724: 0xdfb30080
    ctx->pc = 0x2c5724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2c5728:
    // 0x2c5728: 0xdfb20070
    ctx->pc = 0x2c5728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2c572c:
    // 0x2c572c: 0xdfb10060
    ctx->pc = 0x2c572cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c5730:
    // 0x2c5730: 0xdfb00050
    ctx->pc = 0x2c5730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c5734:
    // 0x2c5734: 0xc7b500f8
    ctx->pc = 0x2c5734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c5738:
    // 0x2c5738: 0xc7b400f0
    ctx->pc = 0x2c5738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c573c:
    // 0x2c573c: 0x3e00008
label_2c5740:
    if (ctx->pc == 0x2C5740u) {
        ctx->pc = 0x2C5740u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2C5744u;
        goto label_fallthrough_0x2c573c;
    }
    ctx->pc = 0x2C573Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5740u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5188u: goto label_2c5188;
            case 0x2C518Cu: goto label_2c518c;
            case 0x2C5190u: goto label_2c5190;
            case 0x2C5194u: goto label_2c5194;
            case 0x2C5198u: goto label_2c5198;
            case 0x2C519Cu: goto label_2c519c;
            case 0x2C51A0u: goto label_2c51a0;
            case 0x2C51A4u: goto label_2c51a4;
            case 0x2C51A8u: goto label_2c51a8;
            case 0x2C51ACu: goto label_2c51ac;
            case 0x2C51B0u: goto label_2c51b0;
            case 0x2C51B4u: goto label_2c51b4;
            case 0x2C51B8u: goto label_2c51b8;
            case 0x2C51BCu: goto label_2c51bc;
            case 0x2C51C0u: goto label_2c51c0;
            case 0x2C51C4u: goto label_2c51c4;
            case 0x2C51C8u: goto label_2c51c8;
            case 0x2C51CCu: goto label_2c51cc;
            case 0x2C51D0u: goto label_2c51d0;
            case 0x2C51D4u: goto label_2c51d4;
            case 0x2C51D8u: goto label_2c51d8;
            case 0x2C51DCu: goto label_2c51dc;
            case 0x2C51E0u: goto label_2c51e0;
            case 0x2C51E4u: goto label_2c51e4;
            case 0x2C51E8u: goto label_2c51e8;
            case 0x2C51ECu: goto label_2c51ec;
            case 0x2C51F0u: goto label_2c51f0;
            case 0x2C51F4u: goto label_2c51f4;
            case 0x2C51F8u: goto label_2c51f8;
            case 0x2C51FCu: goto label_2c51fc;
            case 0x2C5200u: goto label_2c5200;
            case 0x2C5204u: goto label_2c5204;
            case 0x2C5208u: goto label_2c5208;
            case 0x2C520Cu: goto label_2c520c;
            case 0x2C5210u: goto label_2c5210;
            case 0x2C5214u: goto label_2c5214;
            case 0x2C5218u: goto label_2c5218;
            case 0x2C521Cu: goto label_2c521c;
            case 0x2C5220u: goto label_2c5220;
            case 0x2C5224u: goto label_2c5224;
            case 0x2C5228u: goto label_2c5228;
            case 0x2C522Cu: goto label_2c522c;
            case 0x2C5230u: goto label_2c5230;
            case 0x2C5234u: goto label_2c5234;
            case 0x2C5238u: goto label_2c5238;
            case 0x2C523Cu: goto label_2c523c;
            case 0x2C5240u: goto label_2c5240;
            case 0x2C5244u: goto label_2c5244;
            case 0x2C5248u: goto label_2c5248;
            case 0x2C524Cu: goto label_2c524c;
            case 0x2C5250u: goto label_2c5250;
            case 0x2C5254u: goto label_2c5254;
            case 0x2C5258u: goto label_2c5258;
            case 0x2C525Cu: goto label_2c525c;
            case 0x2C5260u: goto label_2c5260;
            case 0x2C5264u: goto label_2c5264;
            case 0x2C5268u: goto label_2c5268;
            case 0x2C526Cu: goto label_2c526c;
            case 0x2C5270u: goto label_2c5270;
            case 0x2C5274u: goto label_2c5274;
            case 0x2C5278u: goto label_2c5278;
            case 0x2C527Cu: goto label_2c527c;
            case 0x2C5280u: goto label_2c5280;
            case 0x2C5284u: goto label_2c5284;
            case 0x2C5288u: goto label_2c5288;
            case 0x2C528Cu: goto label_2c528c;
            case 0x2C5290u: goto label_2c5290;
            case 0x2C5294u: goto label_2c5294;
            case 0x2C5298u: goto label_2c5298;
            case 0x2C529Cu: goto label_2c529c;
            case 0x2C52A0u: goto label_2c52a0;
            case 0x2C52A4u: goto label_2c52a4;
            case 0x2C52A8u: goto label_2c52a8;
            case 0x2C52ACu: goto label_2c52ac;
            case 0x2C52B0u: goto label_2c52b0;
            case 0x2C52B4u: goto label_2c52b4;
            case 0x2C52B8u: goto label_2c52b8;
            case 0x2C52BCu: goto label_2c52bc;
            case 0x2C52C0u: goto label_2c52c0;
            case 0x2C52C4u: goto label_2c52c4;
            case 0x2C52C8u: goto label_2c52c8;
            case 0x2C52CCu: goto label_2c52cc;
            case 0x2C52D0u: goto label_2c52d0;
            case 0x2C52D4u: goto label_2c52d4;
            case 0x2C52D8u: goto label_2c52d8;
            case 0x2C52DCu: goto label_2c52dc;
            case 0x2C52E0u: goto label_2c52e0;
            case 0x2C52E4u: goto label_2c52e4;
            case 0x2C52E8u: goto label_2c52e8;
            case 0x2C52ECu: goto label_2c52ec;
            case 0x2C52F0u: goto label_2c52f0;
            case 0x2C52F4u: goto label_2c52f4;
            case 0x2C52F8u: goto label_2c52f8;
            case 0x2C52FCu: goto label_2c52fc;
            case 0x2C5300u: goto label_2c5300;
            case 0x2C5304u: goto label_2c5304;
            case 0x2C5308u: goto label_2c5308;
            case 0x2C530Cu: goto label_2c530c;
            case 0x2C5310u: goto label_2c5310;
            case 0x2C5314u: goto label_2c5314;
            case 0x2C5318u: goto label_2c5318;
            case 0x2C531Cu: goto label_2c531c;
            case 0x2C5320u: goto label_2c5320;
            case 0x2C5324u: goto label_2c5324;
            case 0x2C5328u: goto label_2c5328;
            case 0x2C532Cu: goto label_2c532c;
            case 0x2C5330u: goto label_2c5330;
            case 0x2C5334u: goto label_2c5334;
            case 0x2C5338u: goto label_2c5338;
            case 0x2C533Cu: goto label_2c533c;
            case 0x2C5340u: goto label_2c5340;
            case 0x2C5344u: goto label_2c5344;
            case 0x2C5348u: goto label_2c5348;
            case 0x2C534Cu: goto label_2c534c;
            case 0x2C5350u: goto label_2c5350;
            case 0x2C5354u: goto label_2c5354;
            case 0x2C5358u: goto label_2c5358;
            case 0x2C535Cu: goto label_2c535c;
            case 0x2C5360u: goto label_2c5360;
            case 0x2C5364u: goto label_2c5364;
            case 0x2C5368u: goto label_2c5368;
            case 0x2C536Cu: goto label_2c536c;
            case 0x2C5370u: goto label_2c5370;
            case 0x2C5374u: goto label_2c5374;
            case 0x2C5378u: goto label_2c5378;
            case 0x2C537Cu: goto label_2c537c;
            case 0x2C5380u: goto label_2c5380;
            case 0x2C5384u: goto label_2c5384;
            case 0x2C5388u: goto label_2c5388;
            case 0x2C538Cu: goto label_2c538c;
            case 0x2C5390u: goto label_2c5390;
            case 0x2C5394u: goto label_2c5394;
            case 0x2C5398u: goto label_2c5398;
            case 0x2C539Cu: goto label_2c539c;
            case 0x2C53A0u: goto label_2c53a0;
            case 0x2C53A4u: goto label_2c53a4;
            case 0x2C53A8u: goto label_2c53a8;
            case 0x2C53ACu: goto label_2c53ac;
            case 0x2C53B0u: goto label_2c53b0;
            case 0x2C53B4u: goto label_2c53b4;
            case 0x2C53B8u: goto label_2c53b8;
            case 0x2C53BCu: goto label_2c53bc;
            case 0x2C53C0u: goto label_2c53c0;
            case 0x2C53C4u: goto label_2c53c4;
            case 0x2C53C8u: goto label_2c53c8;
            case 0x2C53CCu: goto label_2c53cc;
            case 0x2C53D0u: goto label_2c53d0;
            case 0x2C53D4u: goto label_2c53d4;
            case 0x2C53D8u: goto label_2c53d8;
            case 0x2C53DCu: goto label_2c53dc;
            case 0x2C53E0u: goto label_2c53e0;
            case 0x2C53E4u: goto label_2c53e4;
            case 0x2C53E8u: goto label_2c53e8;
            case 0x2C53ECu: goto label_2c53ec;
            case 0x2C53F0u: goto label_2c53f0;
            case 0x2C53F4u: goto label_2c53f4;
            case 0x2C53F8u: goto label_2c53f8;
            case 0x2C53FCu: goto label_2c53fc;
            case 0x2C5400u: goto label_2c5400;
            case 0x2C5404u: goto label_2c5404;
            case 0x2C5408u: goto label_2c5408;
            case 0x2C540Cu: goto label_2c540c;
            case 0x2C5410u: goto label_2c5410;
            case 0x2C5414u: goto label_2c5414;
            case 0x2C5418u: goto label_2c5418;
            case 0x2C541Cu: goto label_2c541c;
            case 0x2C5420u: goto label_2c5420;
            case 0x2C5424u: goto label_2c5424;
            case 0x2C5428u: goto label_2c5428;
            case 0x2C542Cu: goto label_2c542c;
            case 0x2C5430u: goto label_2c5430;
            case 0x2C5434u: goto label_2c5434;
            case 0x2C5438u: goto label_2c5438;
            case 0x2C543Cu: goto label_2c543c;
            case 0x2C5440u: goto label_2c5440;
            case 0x2C5444u: goto label_2c5444;
            case 0x2C5448u: goto label_2c5448;
            case 0x2C544Cu: goto label_2c544c;
            case 0x2C5450u: goto label_2c5450;
            case 0x2C5454u: goto label_2c5454;
            case 0x2C5458u: goto label_2c5458;
            case 0x2C545Cu: goto label_2c545c;
            case 0x2C5460u: goto label_2c5460;
            case 0x2C5464u: goto label_2c5464;
            case 0x2C5468u: goto label_2c5468;
            case 0x2C546Cu: goto label_2c546c;
            case 0x2C5470u: goto label_2c5470;
            case 0x2C5474u: goto label_2c5474;
            case 0x2C5478u: goto label_2c5478;
            case 0x2C547Cu: goto label_2c547c;
            case 0x2C5480u: goto label_2c5480;
            case 0x2C5484u: goto label_2c5484;
            case 0x2C5488u: goto label_2c5488;
            case 0x2C548Cu: goto label_2c548c;
            case 0x2C5490u: goto label_2c5490;
            case 0x2C5494u: goto label_2c5494;
            case 0x2C5498u: goto label_2c5498;
            case 0x2C549Cu: goto label_2c549c;
            case 0x2C54A0u: goto label_2c54a0;
            case 0x2C54A4u: goto label_2c54a4;
            case 0x2C54A8u: goto label_2c54a8;
            case 0x2C54ACu: goto label_2c54ac;
            case 0x2C54B0u: goto label_2c54b0;
            case 0x2C54B4u: goto label_2c54b4;
            case 0x2C54B8u: goto label_2c54b8;
            case 0x2C54BCu: goto label_2c54bc;
            case 0x2C54C0u: goto label_2c54c0;
            case 0x2C54C4u: goto label_2c54c4;
            case 0x2C54C8u: goto label_2c54c8;
            case 0x2C54CCu: goto label_2c54cc;
            case 0x2C54D0u: goto label_2c54d0;
            case 0x2C54D4u: goto label_2c54d4;
            case 0x2C54D8u: goto label_2c54d8;
            case 0x2C54DCu: goto label_2c54dc;
            case 0x2C54E0u: goto label_2c54e0;
            case 0x2C54E4u: goto label_2c54e4;
            case 0x2C54E8u: goto label_2c54e8;
            case 0x2C54ECu: goto label_2c54ec;
            case 0x2C54F0u: goto label_2c54f0;
            case 0x2C54F4u: goto label_2c54f4;
            case 0x2C54F8u: goto label_2c54f8;
            case 0x2C54FCu: goto label_2c54fc;
            case 0x2C5500u: goto label_2c5500;
            case 0x2C5504u: goto label_2c5504;
            case 0x2C5508u: goto label_2c5508;
            case 0x2C550Cu: goto label_2c550c;
            case 0x2C5510u: goto label_2c5510;
            case 0x2C5514u: goto label_2c5514;
            case 0x2C5518u: goto label_2c5518;
            case 0x2C551Cu: goto label_2c551c;
            case 0x2C5520u: goto label_2c5520;
            case 0x2C5524u: goto label_2c5524;
            case 0x2C5528u: goto label_2c5528;
            case 0x2C552Cu: goto label_2c552c;
            case 0x2C5530u: goto label_2c5530;
            case 0x2C5534u: goto label_2c5534;
            case 0x2C5538u: goto label_2c5538;
            case 0x2C553Cu: goto label_2c553c;
            case 0x2C5540u: goto label_2c5540;
            case 0x2C5544u: goto label_2c5544;
            case 0x2C5548u: goto label_2c5548;
            case 0x2C554Cu: goto label_2c554c;
            case 0x2C5550u: goto label_2c5550;
            case 0x2C5554u: goto label_2c5554;
            case 0x2C5558u: goto label_2c5558;
            case 0x2C555Cu: goto label_2c555c;
            case 0x2C5560u: goto label_2c5560;
            case 0x2C5564u: goto label_2c5564;
            case 0x2C5568u: goto label_2c5568;
            case 0x2C556Cu: goto label_2c556c;
            case 0x2C5570u: goto label_2c5570;
            case 0x2C5574u: goto label_2c5574;
            case 0x2C5578u: goto label_2c5578;
            case 0x2C557Cu: goto label_2c557c;
            case 0x2C5580u: goto label_2c5580;
            case 0x2C5584u: goto label_2c5584;
            case 0x2C5588u: goto label_2c5588;
            case 0x2C558Cu: goto label_2c558c;
            case 0x2C5590u: goto label_2c5590;
            case 0x2C5594u: goto label_2c5594;
            case 0x2C5598u: goto label_2c5598;
            case 0x2C559Cu: goto label_2c559c;
            case 0x2C55A0u: goto label_2c55a0;
            case 0x2C55A4u: goto label_2c55a4;
            case 0x2C55A8u: goto label_2c55a8;
            case 0x2C55ACu: goto label_2c55ac;
            case 0x2C55B0u: goto label_2c55b0;
            case 0x2C55B4u: goto label_2c55b4;
            case 0x2C55B8u: goto label_2c55b8;
            case 0x2C55BCu: goto label_2c55bc;
            case 0x2C55C0u: goto label_2c55c0;
            case 0x2C55C4u: goto label_2c55c4;
            case 0x2C55C8u: goto label_2c55c8;
            case 0x2C55CCu: goto label_2c55cc;
            case 0x2C55D0u: goto label_2c55d0;
            case 0x2C55D4u: goto label_2c55d4;
            case 0x2C55D8u: goto label_2c55d8;
            case 0x2C55DCu: goto label_2c55dc;
            case 0x2C55E0u: goto label_2c55e0;
            case 0x2C55E4u: goto label_2c55e4;
            case 0x2C55E8u: goto label_2c55e8;
            case 0x2C55ECu: goto label_2c55ec;
            case 0x2C55F0u: goto label_2c55f0;
            case 0x2C55F4u: goto label_2c55f4;
            case 0x2C55F8u: goto label_2c55f8;
            case 0x2C55FCu: goto label_2c55fc;
            case 0x2C5600u: goto label_2c5600;
            case 0x2C5604u: goto label_2c5604;
            case 0x2C5608u: goto label_2c5608;
            case 0x2C560Cu: goto label_2c560c;
            case 0x2C5610u: goto label_2c5610;
            case 0x2C5614u: goto label_2c5614;
            case 0x2C5618u: goto label_2c5618;
            case 0x2C561Cu: goto label_2c561c;
            case 0x2C5620u: goto label_2c5620;
            case 0x2C5624u: goto label_2c5624;
            case 0x2C5628u: goto label_2c5628;
            case 0x2C562Cu: goto label_2c562c;
            case 0x2C5630u: goto label_2c5630;
            case 0x2C5634u: goto label_2c5634;
            case 0x2C5638u: goto label_2c5638;
            case 0x2C563Cu: goto label_2c563c;
            case 0x2C5640u: goto label_2c5640;
            case 0x2C5644u: goto label_2c5644;
            case 0x2C5648u: goto label_2c5648;
            case 0x2C564Cu: goto label_2c564c;
            case 0x2C5650u: goto label_2c5650;
            case 0x2C5654u: goto label_2c5654;
            case 0x2C5658u: goto label_2c5658;
            case 0x2C565Cu: goto label_2c565c;
            case 0x2C5660u: goto label_2c5660;
            case 0x2C5664u: goto label_2c5664;
            case 0x2C5668u: goto label_2c5668;
            case 0x2C566Cu: goto label_2c566c;
            case 0x2C5670u: goto label_2c5670;
            case 0x2C5674u: goto label_2c5674;
            case 0x2C5678u: goto label_2c5678;
            case 0x2C567Cu: goto label_2c567c;
            case 0x2C5680u: goto label_2c5680;
            case 0x2C5684u: goto label_2c5684;
            case 0x2C5688u: goto label_2c5688;
            case 0x2C568Cu: goto label_2c568c;
            case 0x2C5690u: goto label_2c5690;
            case 0x2C5694u: goto label_2c5694;
            case 0x2C5698u: goto label_2c5698;
            case 0x2C569Cu: goto label_2c569c;
            case 0x2C56A0u: goto label_2c56a0;
            case 0x2C56A4u: goto label_2c56a4;
            case 0x2C56A8u: goto label_2c56a8;
            case 0x2C56ACu: goto label_2c56ac;
            case 0x2C56B0u: goto label_2c56b0;
            case 0x2C56B4u: goto label_2c56b4;
            case 0x2C56B8u: goto label_2c56b8;
            case 0x2C56BCu: goto label_2c56bc;
            case 0x2C56C0u: goto label_2c56c0;
            case 0x2C56C4u: goto label_2c56c4;
            case 0x2C56C8u: goto label_2c56c8;
            case 0x2C56CCu: goto label_2c56cc;
            case 0x2C56D0u: goto label_2c56d0;
            case 0x2C56D4u: goto label_2c56d4;
            case 0x2C56D8u: goto label_2c56d8;
            case 0x2C56DCu: goto label_2c56dc;
            case 0x2C56E0u: goto label_2c56e0;
            case 0x2C56E4u: goto label_2c56e4;
            case 0x2C56E8u: goto label_2c56e8;
            case 0x2C56ECu: goto label_2c56ec;
            case 0x2C56F0u: goto label_2c56f0;
            case 0x2C56F4u: goto label_2c56f4;
            case 0x2C56F8u: goto label_2c56f8;
            case 0x2C56FCu: goto label_2c56fc;
            case 0x2C5700u: goto label_2c5700;
            case 0x2C5704u: goto label_2c5704;
            case 0x2C5708u: goto label_2c5708;
            case 0x2C570Cu: goto label_2c570c;
            case 0x2C5710u: goto label_2c5710;
            case 0x2C5714u: goto label_2c5714;
            case 0x2C5718u: goto label_2c5718;
            case 0x2C571Cu: goto label_2c571c;
            case 0x2C5720u: goto label_2c5720;
            case 0x2C5724u: goto label_2c5724;
            case 0x2C5728u: goto label_2c5728;
            case 0x2C572Cu: goto label_2c572c;
            case 0x2C5730u: goto label_2c5730;
            case 0x2C5734u: goto label_2c5734;
            case 0x2C5738u: goto label_2c5738;
            case 0x2C573Cu: goto label_2c573c;
            case 0x2C5740u: goto label_2c5740;
            default: break;
        }
        return;
    }
label_fallthrough_0x2c573c:
    ctx->pc = 0x2C5744u;
}
