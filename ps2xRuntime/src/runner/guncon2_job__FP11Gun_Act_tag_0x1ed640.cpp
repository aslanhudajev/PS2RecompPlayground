#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: guncon2_job__FP11Gun_Act_tag
// Address: 0x1ed640 - 0x1ed778
void guncon2_job__FP11Gun_Act_tag_0x1ed640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("guncon2_job__FP11Gun_Act_tag");


    ctx->pc = 0x1ed640u;

    // 0x1ed640: 0x27bdffd0
    ctx->pc = 0x1ed640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed644: 0x7fbf0020
    ctx->pc = 0x1ed644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ed648: 0x7fb10010
    ctx->pc = 0x1ed648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed64c: 0x7fb00000
    ctx->pc = 0x1ed64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed650: 0xac800014
    ctx->pc = 0x1ed650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1ed654: 0xac80000c
    ctx->pc = 0x1ed654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1ed658: 0x70808e28
    ctx->pc = 0x1ed658u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ed65c: 0x8c840034
    ctx->pc = 0x1ed65cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1ed660: 0x4800040
    ctx->pc = 0x1ED660u;
    {
        const bool branch_taken_0x1ed660 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1ed660) {
            ctx->pc = 0x1ED764u;
            goto label_1ed764;
        }
    }
    ctx->pc = 0x1ED668u;
    // 0x1ed668: 0x41040
    ctx->pc = 0x1ed668u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ed66c: 0x441021
    ctx->pc = 0x1ed66cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ed670: 0x21940
    ctx->pc = 0x1ed670u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ed674: 0x3c020051
    ctx->pc = 0x1ed674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed678: 0x24424a40
    ctx->pc = 0x1ed678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19008));
    // 0x1ed67c: 0x438021
    ctx->pc = 0x1ed67cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed680: 0x3c020051
    ctx->pc = 0x1ed680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed684: 0x24454940
    ctx->pc = 0x1ed684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 18752));
    // 0x1ed688: 0xc07f298
    ctx->pc = 0x1ED688u;
    SET_GPR_U32(ctx, 31, 0x1ED690u);
    ctx->pc = 0x1ED68Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1FCA60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunRead__FUiPc_0x1fca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED690u; }
        else if (ctx->pc != 0x1ED690u) { ctx->pc = 0x1ED690u; }
    }
    if (ctx->pc != 0x1ED690u) { return; }
    ctx->pc = 0x1ED690u;
    // 0x1ed690: 0x14400034
    ctx->pc = 0x1ED690u;
    {
        const bool branch_taken_0x1ed690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED694u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ed690) {
            ctx->pc = 0x1ED764u;
            goto label_1ed764;
        }
    }
    ctx->pc = 0x1ED698u;
    // 0x1ed698: 0xc07f2f4
    ctx->pc = 0x1ED698u;
    SET_GPR_U32(ctx, 31, 0x1ED6A0u);
    ctx->pc = 0x1FCBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunSync__Fi_0x1fcbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED6A0u; }
        else if (ctx->pc != 0x1ED6A0u) { ctx->pc = 0x1ED6A0u; }
    }
    if (ctx->pc != 0x1ED6A0u) { return; }
    ctx->pc = 0x1ED6A0u;
    // 0x1ed6a0: 0x3c010051
    ctx->pc = 0x1ed6a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed6a4: 0x80234940
    ctx->pc = 0x1ed6a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18752)));
    // 0x1ed6a8: 0x1060002e
    ctx->pc = 0x1ED6A8u;
    {
        const bool branch_taken_0x1ed6a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ed6a8) {
            ctx->pc = 0x1ED764u;
            goto label_1ed764;
        }
    }
    ctx->pc = 0x1ED6B0u;
    // 0x1ed6b0: 0x24020001
    ctx->pc = 0x1ed6b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed6b4: 0xae020000
    ctx->pc = 0x1ed6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ed6b8: 0x3c010051
    ctx->pc = 0x1ed6b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed6bc: 0x80224941
    ctx->pc = 0x1ed6bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18753)));
    // 0x1ed6c0: 0x72202628
    ctx->pc = 0x1ed6c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ed6c4: 0x72002e28
    ctx->pc = 0x1ed6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ed6c8: 0xa2020004
    ctx->pc = 0x1ed6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ed6cc: 0x3c010051
    ctx->pc = 0x1ed6ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed6d0: 0x80224942
    ctx->pc = 0x1ed6d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18754)));
    // 0x1ed6d4: 0xa2020005
    ctx->pc = 0x1ed6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ed6d8: 0x3c010051
    ctx->pc = 0x1ed6d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed6dc: 0x80234944
    ctx->pc = 0x1ed6dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18756)));
    // 0x1ed6e0: 0x3c010051
    ctx->pc = 0x1ed6e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed6e4: 0x90224943
    ctx->pc = 0x1ed6e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18755)));
    // 0x1ed6e8: 0x31a00
    ctx->pc = 0x1ed6e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ed6ec: 0x621025
    ctx->pc = 0x1ed6ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed6f0: 0xa6020006
    ctx->pc = 0x1ed6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ed6f4: 0x3c010051
    ctx->pc = 0x1ed6f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed6f8: 0x80234946
    ctx->pc = 0x1ed6f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18758)));
    // 0x1ed6fc: 0x3c010051
    ctx->pc = 0x1ed6fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed700: 0x90224945
    ctx->pc = 0x1ed700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18757)));
    // 0x1ed704: 0x31a00
    ctx->pc = 0x1ed704u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ed708: 0x621025
    ctx->pc = 0x1ed708u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed70c: 0xa6020008
    ctx->pc = 0x1ed70cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ed710: 0x92020005
    ctx->pc = 0x1ed710u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1ed714: 0x30420001
    ctx->pc = 0x1ed714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1ed718: 0xa602000a
    ctx->pc = 0x1ed718u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ed71c: 0x92030004
    ctx->pc = 0x1ed71cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ed720: 0x92020005
    ctx->pc = 0x1ed720u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1ed724: 0x8e060014
    ctx->pc = 0x1ed724u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed728: 0x601827
    ctx->pc = 0x1ed728u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1ed72c: 0x401027
    ctx->pc = 0x1ed72cu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1ed730: 0x31a00
    ctx->pc = 0x1ed730u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ed734: 0x304200ff
    ctx->pc = 0x1ed734u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ed738: 0x621025
    ctx->pc = 0x1ed738u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed73c: 0xae020014
    ctx->pc = 0x1ed73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1ed740: 0x8e030014
    ctx->pc = 0x1ed740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed744: 0xc31026
    ctx->pc = 0x1ed744u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ed748: 0x621024
    ctx->pc = 0x1ed748u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed74c: 0xae020010
    ctx->pc = 0x1ed74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1ed750: 0x8e020014
    ctx->pc = 0x1ed750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed754: 0xc21026
    ctx->pc = 0x1ed754u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1ed758: 0xc21024
    ctx->pc = 0x1ed758u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1ed75c: 0xc07b5e0
    ctx->pc = 0x1ED75Cu;
    SET_GPR_U32(ctx, 31, 0x1ED764u);
    ctx->pc = 0x1ED760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1ED780u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_gunposi__FP11Gun_Act_tagP10USBGUN_Tag_0x1ed780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED764u; }
        else if (ctx->pc != 0x1ED764u) { ctx->pc = 0x1ED764u; }
    }
    if (ctx->pc != 0x1ED764u) { return; }
    ctx->pc = 0x1ED764u;
label_1ed764:
    // 0x1ed764: 0x7bbf0020
    ctx->pc = 0x1ed764u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed768: 0x7bb10010
    ctx->pc = 0x1ed768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed76c: 0x7bb00000
    ctx->pc = 0x1ed76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed770: 0x3e00008
    ctx->pc = 0x1ED770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED774u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED764u: goto label_1ed764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED778u;
}
