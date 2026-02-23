#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSysSaveScene
// Address: 0x1b1250 - 0x1b1334
void nlSysSaveScene_0x1b1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSysSaveScene");


    ctx->pc = 0x1b1250u;

    // 0x1b1250: 0x27bdffe0
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1254: 0x7fbf0010
    ctx->pc = 0x1b1254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b1258: 0x7fb00000
    ctx->pc = 0x1b1258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b125c: 0x24021270
    ctx->pc = 0x1b125cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4720));
    // 0x1b1260: 0xac820000
    ctx->pc = 0x1b1260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1b1264: 0x240201e0
    ctx->pc = 0x1b1264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 480));
    // 0x1b1268: 0xac820004
    ctx->pc = 0x1b1268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1b126c: 0x24020090
    ctx->pc = 0x1b126cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x1b1270: 0xac820008
    ctx->pc = 0x1b1270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1b1274: 0x3c010030
    ctx->pc = 0x1b1274u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b1278: 0x84292182
    ctx->pc = 0x1b1278u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 8578)));
    // 0x1b127c: 0x3c020030
    ctx->pc = 0x1b127cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1b1280: 0x70808628
    ctx->pc = 0x1b1280u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1b1284: 0x24473c20
    ctx->pc = 0x1b1284u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 15392));
    // 0x1b1288: 0x26060010
    ctx->pc = 0x1b1288u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b128c: 0x24050008
    ctx->pc = 0x1b128cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b1290: 0x3c010030
    ctx->pc = 0x1b1290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b1294: 0x84282192
    ctx->pc = 0x1b1294u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 8594)));
    // 0x1b1298: 0x3c010030
    ctx->pc = 0x1b1298u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b129c: 0x84232172
    ctx->pc = 0x1b129cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 8562)));
    // 0x1b12a0: 0x1281021
    ctx->pc = 0x1b12a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1b12a4: 0x621021
    ctx->pc = 0x1b12a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b12a8: 0xa482019a
    ctx->pc = 0x1b12a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 410), (uint16_t)GPR_U32(ctx, 2));
label_1b12ac:
    // 0x1b12ac: 0x78e30000
    ctx->pc = 0x1b12acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b12b0: 0x78e20010
    ctx->pc = 0x1b12b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1b12b4: 0x24a5ffff
    ctx->pc = 0x1b12b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b12b8: 0x7cc30000
    ctx->pc = 0x1b12b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1b12bc: 0x7cc20010
    ctx->pc = 0x1b12bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x1b12c0: 0x24e70020
    ctx->pc = 0x1b12c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
    // 0x1b12c4: 0x1ca0fff9
    ctx->pc = 0x1B12C4u;
    {
        const bool branch_taken_0x1b12c4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1B12C8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x1b12c4) {
            ctx->pc = 0x1B12ACu;
            goto label_1b12ac;
        }
    }
    ctx->pc = 0x1B12CCu;
    // 0x1b12cc: 0x3c020030
    ctx->pc = 0x1b12ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1b12d0: 0x26040110
    ctx->pc = 0x1b12d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 272));
    // 0x1b12d4: 0xc069108
    ctx->pc = 0x1B12D4u;
    SET_GPR_U32(ctx, 31, 0x1B12DCu);
    ctx->pc = 0x1B12D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 22000));
    ctx->pc = 0x1A4420u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCopyMatrix_0x1a4420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12DCu; }
        else if (ctx->pc != 0x1B12DCu) { ctx->pc = 0x1B12DCu; }
    }
    if (ctx->pc != 0x1B12DCu) { return; }
    ctx->pc = 0x1B12DCu;
    // 0x1b12dc: 0x3c020030
    ctx->pc = 0x1b12dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1b12e0: 0x26040150
    ctx->pc = 0x1b12e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 336));
    // 0x1b12e4: 0xc069108
    ctx->pc = 0x1B12E4u;
    SET_GPR_U32(ctx, 31, 0x1B12ECu);
    ctx->pc = 0x1B12E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 21936));
    ctx->pc = 0x1A4420u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCopyMatrix_0x1a4420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12ECu; }
        else if (ctx->pc != 0x1B12ECu) { ctx->pc = 0x1B12ECu; }
    }
    if (ctx->pc != 0x1B12ECu) { return; }
    ctx->pc = 0x1B12ECu;
    // 0x1b12ec: 0xc7808a18
    ctx->pc = 0x1b12ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b12f0: 0x3c020030
    ctx->pc = 0x1b12f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1b12f4: 0x24452160
    ctx->pc = 0x1b12f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1b12f8: 0x2604019c
    ctx->pc = 0x1b12f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 412));
    // 0x1b12fc: 0x24060010
    ctx->pc = 0x1b12fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b1300: 0xe6000190
    ctx->pc = 0x1b1300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x1b1304: 0xc7808a14
    ctx->pc = 0x1b1304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1308: 0xe6000194
    ctx->pc = 0x1b1308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    // 0x1b130c: 0x838289ac
    ctx->pc = 0x1b130cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x1b1310: 0xc06ac24
    ctx->pc = 0x1B1310u;
    SET_GPR_U32(ctx, 31, 0x1B1318u);
    ctx->pc = 0x1B1314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 408), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1AB090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB090_0x1ab090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1318u; }
        else if (ctx->pc != 0x1B1318u) { ctx->pc = 0x1B1318u; }
    }
    if (ctx->pc != 0x1B1318u) { return; }
    ctx->pc = 0x1B1318u;
    // 0x1b1318: 0x8605019a
    ctx->pc = 0x1b1318u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 410)));
    // 0x1b131c: 0xc06ac4d
    ctx->pc = 0x1B131Cu;
    SET_GPR_U32(ctx, 31, 0x1B1324u);
    ctx->pc = 0x1B1320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 480));
    ctx->pc = 0x1AB134u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB134_0x1ab134(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1324u; }
        else if (ctx->pc != 0x1B1324u) { ctx->pc = 0x1B1324u; }
    }
    if (ctx->pc != 0x1B1324u) { return; }
    ctx->pc = 0x1B1324u;
    // 0x1b1324: 0x7bbf0010
    ctx->pc = 0x1b1324u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1328: 0x7bb00000
    ctx->pc = 0x1b1328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b132c: 0x3e00008
    ctx->pc = 0x1B132Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1330u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B12ACu: goto label_1b12ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1334u;
}
