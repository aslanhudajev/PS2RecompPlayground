#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetReverb
// Address: 0x10b038 - 0x10b1b4
void SetReverb_0x10b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b038u;

    // 0x10b038: 0x27bdff60
    ctx->pc = 0x10b038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10b03c: 0xffb60080
    ctx->pc = 0x10b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x10b040: 0xffb50070
    ctx->pc = 0x10b040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x10b044: 0x3c160017
    ctx->pc = 0x10b044u;
    SET_GPR_S32(ctx, 22, ((uint32_t)23 << 16));
    // 0x10b048: 0xffb40060
    ctx->pc = 0x10b048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x10b04c: 0x3c150017
    ctx->pc = 0x10b04cu;
    SET_GPR_S32(ctx, 21, ((uint32_t)23 << 16));
    // 0x10b050: 0xffb30050
    ctx->pc = 0x10b050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x10b054: 0x3c140017
    ctx->pc = 0x10b054u;
    SET_GPR_S32(ctx, 20, ((uint32_t)23 << 16));
    // 0x10b058: 0xffb20040
    ctx->pc = 0x10b058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10b05c: 0x3c130017
    ctx->pc = 0x10b05cu;
    SET_GPR_S32(ctx, 19, ((uint32_t)23 << 16));
    // 0x10b060: 0xffb10030
    ctx->pc = 0x10b060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10b064: 0x3c120017
    ctx->pc = 0x10b064u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x10b068: 0xffb00020
    ctx->pc = 0x10b068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10b06c: 0x882d
    ctx->pc = 0x10b06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b070: 0xffbf0090
    ctx->pc = 0x10b070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10b074: 0x2410ffff
    ctx->pc = 0x10b074u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b078: 0x24050105
    ctx->pc = 0x10b078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 261));
    // 0x10b07c: 0x0
    ctx->pc = 0x10b07cu;
    // NOP
label_10b080:
    // 0x10b080: 0x2402001e
    ctx->pc = 0x10b080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x10b084: 0x240300c8
    ctx->pc = 0x10b084u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 200));
    // 0x10b088: 0xafa50004
    ctx->pc = 0x10b088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10b08c: 0xafa2000c
    ctx->pc = 0x10b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x10b090: 0x24040001
    ctx->pc = 0x10b090u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b094: 0xafa30010
    ctx->pc = 0x10b094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x10b098: 0x34058130
    ctx->pc = 0x10b098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)33072);
    // 0x10b09c: 0xa7a00008
    ctx->pc = 0x10b09cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x10b0a0: 0x220302d
    ctx->pc = 0x10b0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0a4: 0xa7a0000a
    ctx->pc = 0x10b0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x10b0a8: 0xc045c80
    ctx->pc = 0x10B0A8u;
    SET_GPR_U32(ctx, 31, 0x10B0B0u);
    ctx->pc = 0x10B0ACu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0B0u; }
    }
    if (ctx->pc != 0x10B0B0u) { return; }
    ctx->pc = 0x10B0B0u;
    // 0x10b0b0: 0x14500004
    ctx->pc = 0x10B0B0u;
    {
        const bool branch_taken_0x10b0b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x10B0B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10b0b0) {
            ctx->pc = 0x10B0C4u;
            goto label_10b0c4;
        }
    }
    ctx->pc = 0x10B0B8u;
    // 0x10b0b8: 0xc04ace4
    ctx->pc = 0x10B0B8u;
    SET_GPR_U32(ctx, 31, 0x10B0C0u);
    ctx->pc = 0x10B0BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 14320));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0C0u; }
    }
    if (ctx->pc != 0x10B0C0u) { return; }
    ctx->pc = 0x10B0C0u;
    // 0x10b0c0: 0x24040001
    ctx->pc = 0x10b0c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10b0c4:
    // 0x10b0c4: 0x34058070
    ctx->pc = 0x10b0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32880);
    // 0x10b0c8: 0x24060002
    ctx->pc = 0x10b0c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b0cc: 0xc045c80
    ctx->pc = 0x10B0CCu;
    SET_GPR_U32(ctx, 31, 0x10B0D4u);
    ctx->pc = 0x10B0D0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0D4u; }
    }
    if (ctx->pc != 0x10B0D4u) { return; }
    ctx->pc = 0x10B0D4u;
    // 0x10b0d4: 0x14500004
    ctx->pc = 0x10B0D4u;
    {
        const bool branch_taken_0x10b0d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x10B0D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10b0d4) {
            ctx->pc = 0x10B0E8u;
            goto label_10b0e8;
        }
    }
    ctx->pc = 0x10B0DCu;
    // 0x10b0dc: 0xc04ace4
    ctx->pc = 0x10B0DCu;
    SET_GPR_U32(ctx, 31, 0x10B0E4u);
    ctx->pc = 0x10B0E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 14320));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0E4u; }
    }
    if (ctx->pc != 0x10B0E4u) { return; }
    ctx->pc = 0x10B0E4u;
    // 0x10b0e4: 0x24040001
    ctx->pc = 0x10b0e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10b0e8:
    // 0x10b0e8: 0x34058010
    ctx->pc = 0x10b0e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32784);
    // 0x10b0ec: 0x24060b80
    ctx->pc = 0x10b0ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2944));
    // 0x10b0f0: 0xc045c80
    ctx->pc = 0x10B0F0u;
    SET_GPR_U32(ctx, 31, 0x10B0F8u);
    ctx->pc = 0x10B0F4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16383));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0F8u; }
    }
    if (ctx->pc != 0x10B0F8u) { return; }
    ctx->pc = 0x10B0F8u;
    // 0x10b0f8: 0x14500004
    ctx->pc = 0x10B0F8u;
    {
        const bool branch_taken_0x10b0f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x10B0FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10b0f8) {
            ctx->pc = 0x10B10Cu;
            goto label_10b10c;
        }
    }
    ctx->pc = 0x10B100u;
    // 0x10b100: 0xc04ace4
    ctx->pc = 0x10B100u;
    SET_GPR_U32(ctx, 31, 0x10B108u);
    ctx->pc = 0x10B104u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 14344));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B108u; }
    }
    if (ctx->pc != 0x10B108u) { return; }
    ctx->pc = 0x10B108u;
    // 0x10b108: 0x24040001
    ctx->pc = 0x10b108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10b10c:
    // 0x10b10c: 0x34058010
    ctx->pc = 0x10b10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32784);
    // 0x10b110: 0x24060c80
    ctx->pc = 0x10b110u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3200));
    // 0x10b114: 0xc045c80
    ctx->pc = 0x10B114u;
    SET_GPR_U32(ctx, 31, 0x10B11Cu);
    ctx->pc = 0x10B118u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16383));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B11Cu; }
    }
    if (ctx->pc != 0x10B11Cu) { return; }
    ctx->pc = 0x10B11Cu;
    // 0x10b11c: 0x54500004
    ctx->pc = 0x10B11Cu;
    {
        const bool branch_taken_0x10b11c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x10b11c) {
            ctx->pc = 0x10B120u;
            SET_GPR_S32(ctx, 7, ((uint32_t)255 << 16));
            ctx->pc = 0x10B130u;
            goto label_10b130;
        }
    }
    ctx->pc = 0x10B124u;
    // 0x10b124: 0xc04ace4
    ctx->pc = 0x10B124u;
    SET_GPR_U32(ctx, 31, 0x10B12Cu);
    ctx->pc = 0x10B128u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 14368));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B12Cu; }
    }
    if (ctx->pc != 0x10B12Cu) { return; }
    ctx->pc = 0x10B12Cu;
    // 0x10b12c: 0x3c0700ff
    ctx->pc = 0x10b12cu;
    SET_GPR_S32(ctx, 7, ((uint32_t)255 << 16));
label_10b130:
    // 0x10b130: 0x24040001
    ctx->pc = 0x10b130u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b134: 0x34058030
    ctx->pc = 0x10b134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32816);
    // 0x10b138: 0x24061900
    ctx->pc = 0x10b138u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6400));
    // 0x10b13c: 0xc045c80
    ctx->pc = 0x10B13Cu;
    SET_GPR_U32(ctx, 31, 0x10B144u);
    ctx->pc = 0x10B140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)65535);
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B144u; }
    }
    if (ctx->pc != 0x10B144u) { return; }
    ctx->pc = 0x10B144u;
    // 0x10b144: 0x54500004
    ctx->pc = 0x10B144u;
    {
        const bool branch_taken_0x10b144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x10b144) {
            ctx->pc = 0x10B148u;
            SET_GPR_S32(ctx, 7, ((uint32_t)255 << 16));
            ctx->pc = 0x10B158u;
            goto label_10b158;
        }
    }
    ctx->pc = 0x10B14Cu;
    // 0x10b14c: 0xc04ace4
    ctx->pc = 0x10B14Cu;
    SET_GPR_U32(ctx, 31, 0x10B154u);
    ctx->pc = 0x10B150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 14392));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B154u; }
    }
    if (ctx->pc != 0x10B154u) { return; }
    ctx->pc = 0x10B154u;
    // 0x10b154: 0x3c0700ff
    ctx->pc = 0x10b154u;
    SET_GPR_S32(ctx, 7, ((uint32_t)255 << 16));
label_10b158:
    // 0x10b158: 0x24040001
    ctx->pc = 0x10b158u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b15c: 0x34058030
    ctx->pc = 0x10b15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32816);
    // 0x10b160: 0x24061b00
    ctx->pc = 0x10b160u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6912));
    // 0x10b164: 0xc045c80
    ctx->pc = 0x10B164u;
    SET_GPR_U32(ctx, 31, 0x10B16Cu);
    ctx->pc = 0x10B168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)65535);
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B16Cu; }
    }
    if (ctx->pc != 0x10B16Cu) { return; }
    ctx->pc = 0x10B16Cu;
    // 0x10b16c: 0x54500004
    ctx->pc = 0x10B16Cu;
    {
        const bool branch_taken_0x10b16c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x10b16c) {
            ctx->pc = 0x10B170u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x10B180u;
            goto label_10b180;
        }
    }
    ctx->pc = 0x10B174u;
    // 0x10b174: 0xc04ace4
    ctx->pc = 0x10B174u;
    SET_GPR_U32(ctx, 31, 0x10B17Cu);
    ctx->pc = 0x10B178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 14416));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B17Cu; }
    }
    if (ctx->pc != 0x10B17Cu) { return; }
    ctx->pc = 0x10B17Cu;
    // 0x10b17c: 0x26310001
    ctx->pc = 0x10b17cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_10b180:
    // 0x10b180: 0x2a220002
    ctx->pc = 0x10b180u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x10b184: 0x1440ffbe
    ctx->pc = 0x10B184u;
    {
        const bool branch_taken_0x10b184 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B188u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 261));
        if (branch_taken_0x10b184) {
            ctx->pc = 0x10B080u;
            goto label_10b080;
        }
    }
    ctx->pc = 0x10B18Cu;
    // 0x10b18c: 0xdfbf0090
    ctx->pc = 0x10b18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10b190: 0xdfb60080
    ctx->pc = 0x10b190u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b194: 0xdfb50070
    ctx->pc = 0x10b194u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b198: 0xdfb40060
    ctx->pc = 0x10b198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b19c: 0xdfb30050
    ctx->pc = 0x10b19cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b1a0: 0xdfb20040
    ctx->pc = 0x10b1a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b1a4: 0xdfb10030
    ctx->pc = 0x10b1a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b1a8: 0xdfb00020
    ctx->pc = 0x10b1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b1ac: 0x3e00008
    ctx->pc = 0x10B1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B1B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B080u: goto label_10b080;
            case 0x10B0C4u: goto label_10b0c4;
            case 0x10B0E8u: goto label_10b0e8;
            case 0x10B10Cu: goto label_10b10c;
            case 0x10B130u: goto label_10b130;
            case 0x10B158u: goto label_10b158;
            case 0x10B180u: goto label_10b180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B1B4u;
}
