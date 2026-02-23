#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__12EvCancelTaskFv
// Address: 0x1e5470 - 0x1e5534
void ctrl__12EvCancelTaskFv_0x1e5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__12EvCancelTaskFv");


    ctx->pc = 0x1e5470u;

    // 0x1e5470: 0x27bdffe0
    ctx->pc = 0x1e5470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5474: 0x7fbf0010
    ctx->pc = 0x1e5474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e5478: 0x7fb00000
    ctx->pc = 0x1e5478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e547c: 0x8f838ce4
    ctx->pc = 0x1e547cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937828)));
    // 0x1e5480: 0x14600005
    ctx->pc = 0x1E5480u;
    {
        const bool branch_taken_0x1e5480 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E5484u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e5480) {
            ctx->pc = 0x1E5498u;
            goto label_1e5498;
        }
    }
    ctx->pc = 0x1E5488u;
    // 0x1e5488: 0xc068fe0
    ctx->pc = 0x1E5488u;
    SET_GPR_U32(ctx, 31, 0x1E5490u);
    ctx->pc = 0x1E548Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5490u; }
        else if (ctx->pc != 0x1E5490u) { ctx->pc = 0x1E5490u; }
    }
    if (ctx->pc != 0x1E5490u) { return; }
    ctx->pc = 0x1E5490u;
    // 0x1e5490: 0x10000019
    ctx->pc = 0x1E5490u;
    {
        const bool branch_taken_0x1e5490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5494u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
        if (branch_taken_0x1e5490) {
            ctx->pc = 0x1E54F8u;
            goto label_1e54f8;
        }
    }
    ctx->pc = 0x1E5498u;
label_1e5498:
    // 0x1e5498: 0x10600016
    ctx->pc = 0x1E5498u;
    {
        const bool branch_taken_0x1e5498 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e5498) {
            ctx->pc = 0x1E54F4u;
            goto label_1e54f4;
        }
    }
    ctx->pc = 0x1E54A0u;
    // 0x1e54a0: 0x83838ce0
    ctx->pc = 0x1e54a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937824)));
    // 0x1e54a4: 0x10600013
    ctx->pc = 0x1E54A4u;
    {
        const bool branch_taken_0x1e54a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e54a4) {
            ctx->pc = 0x1E54F4u;
            goto label_1e54f4;
        }
    }
    ctx->pc = 0x1E54ACu;
    // 0x1e54ac: 0xc072640
    ctx->pc = 0x1E54ACu;
    SET_GPR_U32(ctx, 31, 0x1E54B4u);
    ctx->pc = 0x1E54B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    ctx->pc = 0x1C9900u;
    {
        const uint32_t __entryPc = ctx->pc;
        flushCamJob__10CameraTaskFv_0x1c9900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54B4u; }
        else if (ctx->pc != 0x1E54B4u) { ctx->pc = 0x1E54B4u; }
    }
    if (ctx->pc != 0x1E54B4u) { return; }
    ctx->pc = 0x1E54B4u;
    // 0x1e54b4: 0x24020001
    ctx->pc = 0x1e54b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e54b8: 0xaf828ce8
    ctx->pc = 0x1e54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937832), GPR_U32(ctx, 2));
    // 0x1e54bc: 0xaf828cec
    ctx->pc = 0x1e54bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937836), GPR_U32(ctx, 2));
    // 0x1e54c0: 0x3c020027
    ctx->pc = 0x1e54c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e54c4: 0xa3808ce0
    ctx->pc = 0x1e54c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937824), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e54c8: 0x2442a930
    ctx->pc = 0x1e54c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945072));
    // 0x1e54cc: 0x8c450008
    ctx->pc = 0x1e54ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e54d0: 0x8e040008
    ctx->pc = 0x1e54d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e54d4: 0xc068fd8
    ctx->pc = 0x1E54D4u;
    SET_GPR_U32(ctx, 31, 0x1E54DCu);
    ctx->pc = 0x1E54D8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54DCu; }
        else if (ctx->pc != 0x1E54DCu) { ctx->pc = 0x1E54DCu; }
    }
    if (ctx->pc != 0x1E54DCu) { return; }
    ctx->pc = 0x1E54DCu;
    // 0x1e54dc: 0x3c020051
    ctx->pc = 0x1e54dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e54e0: 0xc08606c
    ctx->pc = 0x1E54E0u;
    SET_GPR_U32(ctx, 31, 0x1E54E8u);
    ctx->pc = 0x1E54E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x2181B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        voiceStop__13SoundMgrClassFv_0x2181b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54E8u; }
        else if (ctx->pc != 0x1E54E8u) { ctx->pc = 0x1E54E8u; }
    }
    if (ctx->pc != 0x1E54E8u) { return; }
    ctx->pc = 0x1E54E8u;
    // 0x1e54e8: 0x3c020051
    ctx->pc = 0x1e54e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e54ec: 0xc0861f0
    ctx->pc = 0x1E54ECu;
    SET_GPR_U32(ctx, 31, 0x1E54F4u);
    ctx->pc = 0x1E54F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x2187C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        voiceReqInit__13SoundMgrClassFv_0x2187c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54F4u; }
        else if (ctx->pc != 0x1E54F4u) { ctx->pc = 0x1E54F4u; }
    }
    if (ctx->pc != 0x1E54F4u) { return; }
    ctx->pc = 0x1E54F4u;
label_1e54f4:
    // 0x1e54f4: 0x8f838b68
    ctx->pc = 0x1e54f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
label_1e54f8:
    // 0x1e54f8: 0x1460000a
    ctx->pc = 0x1E54F8u;
    {
        const bool branch_taken_0x1e54f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e54f8) {
            ctx->pc = 0x1E5524u;
            goto label_1e5524;
        }
    }
    ctx->pc = 0x1E5500u;
    // 0x1e5500: 0x8f838d30
    ctx->pc = 0x1e5500u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x1e5504: 0x30630020
    ctx->pc = 0x1e5504u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x1e5508: 0x10600006
    ctx->pc = 0x1E5508u;
    {
        const bool branch_taken_0x1e5508 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e5508) {
            ctx->pc = 0x1E5524u;
            goto label_1e5524;
        }
    }
    ctx->pc = 0x1E5510u;
    // 0x1e5510: 0x3c020050
    ctx->pc = 0x1e5510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e5514: 0x72002e28
    ctx->pc = 0x1e5514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e5518: 0x2444dac0
    ctx->pc = 0x1e5518u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    // 0x1e551c: 0xc0858a4
    ctx->pc = 0x1E551Cu;
    SET_GPR_U32(ctx, 31, 0x1E5524u);
    ctx->pc = 0x1E5520u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x216290u;
    {
        const uint32_t __entryPc = ctx->pc;
        Entry__16CPutEntryControlFP9CPutEntryi_0x216290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5524u; }
        else if (ctx->pc != 0x1E5524u) { ctx->pc = 0x1E5524u; }
    }
    if (ctx->pc != 0x1E5524u) { return; }
    ctx->pc = 0x1E5524u;
label_1e5524:
    // 0x1e5524: 0x7bbf0010
    ctx->pc = 0x1e5524u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5528: 0x7bb00000
    ctx->pc = 0x1e5528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e552c: 0x3e00008
    ctx->pc = 0x1E552Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5530u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5498u: goto label_1e5498;
            case 0x1E54F4u: goto label_1e54f4;
            case 0x1E54F8u: goto label_1e54f8;
            case 0x1E5524u: goto label_1e5524;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5534u;
}
