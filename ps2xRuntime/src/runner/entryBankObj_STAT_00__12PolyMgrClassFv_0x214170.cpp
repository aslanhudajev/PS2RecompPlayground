#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj_STAT_00__12PolyMgrClassFv
// Address: 0x214170 - 0x21428c
void entryBankObj_STAT_00__12PolyMgrClassFv_0x214170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj_STAT_00__12PolyMgrClassFv");


    ctx->pc = 0x214170u;

    // 0x214170: 0x27bdffe0
    ctx->pc = 0x214170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214174: 0x7fbf0010
    ctx->pc = 0x214174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x214178: 0x7fb00000
    ctx->pc = 0x214178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21417c: 0x8c860000
    ctx->pc = 0x21417cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214180: 0x3c020050
    ctx->pc = 0x214180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x214184: 0x2443ea20
    ctx->pc = 0x214184u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x214188: 0x70808628
    ctx->pc = 0x214188u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21418c: 0x3c056000
    ctx->pc = 0x21418cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)24576 << 16));
    // 0x214190: 0x84c20008
    ctx->pc = 0x214190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x214194: 0x3c044000
    ctx->pc = 0x214194u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16384 << 16));
    // 0x214198: 0x23100
    ctx->pc = 0x214198u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 4));
    // 0x21419c: 0x661821
    ctx->pc = 0x21419cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2141a0: 0x8c660000
    ctx->pc = 0x2141a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2141a4: 0xc52824
    ctx->pc = 0x2141a4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2141a8: 0x50a40034
    ctx->pc = 0x2141A8u;
    {
        const bool branch_taken_0x2141a8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        if (branch_taken_0x2141a8) {
            ctx->pc = 0x2141ACu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x21427Cu;
            goto label_21427c;
        }
    }
    ctx->pc = 0x2141B0u;
    // 0x2141b0: 0x3c092000
    ctx->pc = 0x2141b0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)8192 << 16));
    // 0x2141b4: 0x50a9002e
    ctx->pc = 0x2141B4u;
    {
        const bool branch_taken_0x2141b4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 9));
        if (branch_taken_0x2141b4) {
            ctx->pc = 0x2141B8u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x214270u;
            goto label_214270;
        }
    }
    ctx->pc = 0x2141BCu;
    // 0x2141bc: 0x10a00003
    ctx->pc = 0x2141BCu;
    {
        const bool branch_taken_0x2141bc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2141C0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)40959 << 16));
        if (branch_taken_0x2141bc) {
            ctx->pc = 0x2141CCu;
            goto label_2141cc;
        }
    }
    ctx->pc = 0x2141C4u;
    // 0x2141c4: 0x1000002c
    ctx->pc = 0x2141C4u;
    {
        const bool branch_taken_0x2141c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2141c4) {
            ctx->pc = 0x214278u;
            goto label_214278;
        }
    }
    ctx->pc = 0x2141CCu;
label_2141cc:
    // 0x2141cc: 0x3484ffff
    ctx->pc = 0x2141ccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2141d0: 0xc42024
    ctx->pc = 0x2141d0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2141d4: 0xac640000
    ctx->pc = 0x2141d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2141d8: 0x8c680000
    ctx->pc = 0x2141d8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2141dc: 0x3c040050
    ctx->pc = 0x2141dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
    // 0x2141e0: 0x2487ea2a
    ctx->pc = 0x2141e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4294961706));
    // 0x2141e4: 0x3c040027
    ctx->pc = 0x2141e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x2141e8: 0x3c010050
    ctx->pc = 0x2141e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2141ec: 0x2406010d
    ctx->pc = 0x2141ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 269));
    // 0x2141f0: 0x1094025
    ctx->pc = 0x2141f0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2141f4: 0xac680000
    ctx->pc = 0x2141f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x2141f8: 0x8429faf8
    ctx->pc = 0x2141f8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294966008)));
    // 0x2141fc: 0x22840
    ctx->pc = 0x2141fcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 1));
    // 0x214200: 0x2484ab10
    ctx->pc = 0x214200u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945552));
    // 0x214204: 0x852821
    ctx->pc = 0x214204u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x214208: 0x3c010050
    ctx->pc = 0x214208u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21420c: 0x94100
    ctx->pc = 0x21420cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 4));
    // 0x214210: 0xa422faf8
    ctx->pc = 0x214210u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966008), (uint16_t)GPR_U32(ctx, 2));
    // 0x214214: 0xe83821
    ctx->pc = 0x214214u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x214218: 0xa4e20000
    ctx->pc = 0x214218u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x21421c: 0xa4690008
    ctx->pc = 0x21421cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 9));
    // 0x214220: 0xa466000a
    ctx->pc = 0x214220u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x214224: 0x3c010091
    ctx->pc = 0x214224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214228: 0xac2019ac
    ctx->pc = 0x214228u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6572), GPR_U32(ctx, 0));
    // 0x21422c: 0x84a50000
    ctx->pc = 0x21422cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214230: 0xc05adc4
    ctx->pc = 0x214230u;
    SET_GPR_U32(ctx, 31, 0x214238u);
    ctx->pc = 0x214234u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_OpenAfs_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214238u; }
        else if (ctx->pc != 0x214238u) { ctx->pc = 0x214238u; }
    }
    if (ctx->pc != 0x214238u) { return; }
    ctx->pc = 0x214238u;
    // 0x214238: 0x3c010050
    ctx->pc = 0x214238u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21423c: 0xac220c68
    ctx->pc = 0x21423cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3176), GPR_U32(ctx, 2));
    // 0x214240: 0x3c010050
    ctx->pc = 0x214240u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x214244: 0xc05afe2
    ctx->pc = 0x214244u;
    SET_GPR_U32(ctx, 31, 0x21424Cu);
    ctx->pc = 0x214248u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3176)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21424Cu; }
        else if (ctx->pc != 0x21424Cu) { ctx->pc = 0x21424Cu; }
    }
    if (ctx->pc != 0x21424Cu) { return; }
    ctx->pc = 0x21424Cu;
    // 0x21424c: 0x8f838cf8
    ctx->pc = 0x21424cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x214250: 0x3c010091
    ctx->pc = 0x214250u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214254: 0xac221970
    ctx->pc = 0x214254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6512), GPR_U32(ctx, 2));
    // 0x214258: 0x3c010091
    ctx->pc = 0x214258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x21425c: 0x24020001
    ctx->pc = 0x21425cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x214260: 0xac231974
    ctx->pc = 0x214260u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6516), GPR_U32(ctx, 3));
    // 0x214264: 0x8e030000
    ctx->pc = 0x214264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214268: 0x10000004
    ctx->pc = 0x214268u;
    {
        const bool branch_taken_0x214268 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21426Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x214268) {
            ctx->pc = 0x21427Cu;
            goto label_21427c;
        }
    }
    ctx->pc = 0x214270u;
label_214270:
    // 0x214270: 0x10000003
    ctx->pc = 0x214270u;
    {
        const bool branch_taken_0x214270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x214274u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x214270) {
            ctx->pc = 0x214280u;
            goto label_214280;
        }
    }
    ctx->pc = 0x214278u;
label_214278:
    // 0x214278: 0x2402ffff
    ctx->pc = 0x214278u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_21427c:
    // 0x21427c: 0x7bbf0010
    ctx->pc = 0x21427cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_214280:
    // 0x214280: 0x7bb00000
    ctx->pc = 0x214280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214284: 0x3e00008
    ctx->pc = 0x214284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214288u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2141CCu: goto label_2141cc;
            case 0x214270u: goto label_214270;
            case 0x214278u: goto label_214278;
            case 0x21427Cu: goto label_21427c;
            case 0x214280u: goto label_214280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21428Cu;
}
