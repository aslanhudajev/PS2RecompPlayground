#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DispChannelInfo
// Address: 0x220048 - 0x220274
void DispChannelInfo_0x220048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220048u;

    // 0x220048: 0x27bdff70
    ctx->pc = 0x220048u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22004c: 0xffbf0080
    ctx->pc = 0x22004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x220050: 0xffb60070
    ctx->pc = 0x220050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x220054: 0xffb50060
    ctx->pc = 0x220054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x220058: 0xffb40050
    ctx->pc = 0x220058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22005c: 0xffb30040
    ctx->pc = 0x22005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x220060: 0xffb20030
    ctx->pc = 0x220060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x220064: 0xffb10020
    ctx->pc = 0x220064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x220068: 0xffb00010
    ctx->pc = 0x220068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22006c: 0x3c0400ff
    ctx->pc = 0x22006cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x220070: 0xc0b46e2
    ctx->pc = 0x220070u;
    SET_GPR_U32(ctx, 31, 0x220078u);
    ctx->pc = 0x220074u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220078u; }
    }
    if (ctx->pc != 0x220078u) { return; }
    ctx->pc = 0x220078u;
    // 0x220078: 0x3c02003a
    ctx->pc = 0x220078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x22007c: 0x8c4322f8
    ctx->pc = 0x22007cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x220080: 0x3c020001
    ctx->pc = 0x220080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x220084: 0x344286a0
    ctx->pc = 0x220084u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34464));
    // 0x220088: 0x62001b
    ctx->pc = 0x220088u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x22008c: 0x3810
    ctx->pc = 0x22008cu;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x220090: 0x50400001
    ctx->pc = 0x220090u;
    {
        const bool branch_taken_0x220090 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x220090) {
            ctx->pc = 0x220094u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x220098u;
            goto label_220098;
        }
    }
    ctx->pc = 0x220098u;
label_220098:
    // 0x220098: 0x24040023
    ctx->pc = 0x220098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 35));
    // 0x22009c: 0x2405000f
    ctx->pc = 0x22009cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x2200a0: 0x3c06003a
    ctx->pc = 0x2200a0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2200a4: 0xc0b47da
    ctx->pc = 0x2200A4u;
    SET_GPR_U32(ctx, 31, 0x2200ACu);
    ctx->pc = 0x2200A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 25856));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200ACu; }
    }
    if (ctx->pc != 0x2200ACu) { return; }
    ctx->pc = 0x2200ACu;
    // 0x2200ac: 0x24040002
    ctx->pc = 0x2200acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2200b0: 0x24050010
    ctx->pc = 0x2200b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2200b4: 0x3c06003a
    ctx->pc = 0x2200b4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2200b8: 0xc0b47da
    ctx->pc = 0x2200B8u;
    SET_GPR_U32(ctx, 31, 0x2200C0u);
    ctx->pc = 0x2200BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 25864));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200C0u; }
    }
    if (ctx->pc != 0x2200C0u) { return; }
    ctx->pc = 0x2200C0u;
    // 0x2200c0: 0x24040002
    ctx->pc = 0x2200c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2200c4: 0x24050011
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
    // 0x2200c8: 0x3c06003a
    ctx->pc = 0x2200c8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2200cc: 0xc0b47da
    ctx->pc = 0x2200CCu;
    SET_GPR_U32(ctx, 31, 0x2200D4u);
    ctx->pc = 0x2200D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 25912));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200D4u; }
    }
    if (ctx->pc != 0x2200D4u) { return; }
    ctx->pc = 0x2200D4u;
    // 0x2200d4: 0x882d
    ctx->pc = 0x2200d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200d8: 0x3c02003c
    ctx->pc = 0x2200d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2200dc: 0x2450d630
    ctx->pc = 0x2200dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294956592));
    // 0x2200e0: 0x2413ffff
    ctx->pc = 0x2200e0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2200e4: 0x3c16003a
    ctx->pc = 0x2200e4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)58 << 16));
    // 0x2200e8: 0x3c150032
    ctx->pc = 0x2200e8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)50 << 16));
    // 0x2200ec: 0x2414001c
    ctx->pc = 0x2200ecu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2200f0: 0x2a22000c
    ctx->pc = 0x2200f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 12));
    // 0x2200f4: 0x0
    ctx->pc = 0x2200f4u;
    // NOP
label_2200f8:
    // 0x2200f8: 0x14400003
    ctx->pc = 0x2200F8u;
    {
        const bool branch_taken_0x2200f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2200FCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2200f8) {
            ctx->pc = 0x220108u;
            goto label_220108;
        }
    }
    ctx->pc = 0x220100u;
    // 0x220100: 0xc0b46e2
    ctx->pc = 0x220100u;
    SET_GPR_U32(ctx, 31, 0x220108u);
    ctx->pc = 0x220104u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220108u; }
    }
    if (ctx->pc != 0x220108u) { return; }
    ctx->pc = 0x220108u;
label_220108:
    // 0x220108: 0x3c020031
    ctx->pc = 0x220108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22010c: 0x8c42ff9c
    ctx->pc = 0x22010cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x220110: 0x5440001f
    ctx->pc = 0x220110u;
    {
        const bool branch_taken_0x220110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x220110) {
            ctx->pc = 0x220114u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x220190u;
            goto label_220190;
        }
    }
    ctx->pc = 0x220118u;
    // 0x220118: 0x8e03001c
    ctx->pc = 0x220118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x22011c: 0x10730005
    ctx->pc = 0x22011Cu;
    {
        const bool branch_taken_0x22011c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        ctx->pc = 0x220120u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x22011c) {
            ctx->pc = 0x220134u;
            goto label_220134;
        }
    }
    ctx->pc = 0x220124u;
    // 0x220124: 0x8c4222f8
    ctx->pc = 0x220124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x220128: 0x62102b
    ctx->pc = 0x220128u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22012c: 0x54400017
    ctx->pc = 0x22012Cu;
    {
        const bool branch_taken_0x22012c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22012c) {
            ctx->pc = 0x220130u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
            ctx->pc = 0x22018Cu;
            goto label_22018c;
        }
    }
    ctx->pc = 0x220134u;
label_220134:
    // 0x220134: 0x2a22000c
    ctx->pc = 0x220134u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 12));
    // 0x220138: 0x10400010
    ctx->pc = 0x220138u;
    {
        const bool branch_taken_0x220138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22013Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x220138) {
            ctx->pc = 0x22017Cu;
            goto label_22017c;
        }
    }
    ctx->pc = 0x220140u;
    // 0x220140: 0x2445fe38
    ctx->pc = 0x220140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294966840));
    // 0x220144: 0x24020014
    ctx->pc = 0x220144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x220148: 0x2222018
    ctx->pc = 0x220148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22014c: 0x851021
    ctx->pc = 0x22014cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x220150: 0x8c430000
    ctx->pc = 0x220150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220154: 0x8e020008
    ctx->pc = 0x220154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x220158: 0x5462000c
    ctx->pc = 0x220158u;
    {
        const bool branch_taken_0x220158 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x220158) {
            ctx->pc = 0x22015Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
            ctx->pc = 0x22018Cu;
            goto label_22018c;
        }
    }
    ctx->pc = 0x220160u;
    // 0x220160: 0xa41021
    ctx->pc = 0x220160u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x220164: 0x8c430004
    ctx->pc = 0x220164u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x220168: 0x8e020018
    ctx->pc = 0x220168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x22016c: 0x54620007
    ctx->pc = 0x22016Cu;
    {
        const bool branch_taken_0x22016c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22016c) {
            ctx->pc = 0x220170u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
            ctx->pc = 0x22018Cu;
            goto label_22018c;
        }
    }
    ctx->pc = 0x220174u;
    // 0x220174: 0x10000006
    ctx->pc = 0x220174u;
    {
        const bool branch_taken_0x220174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220178u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x220174) {
            ctx->pc = 0x220190u;
            goto label_220190;
        }
    }
    ctx->pc = 0x22017Cu;
label_22017c:
    // 0x22017c: 0x8e02001c
    ctx->pc = 0x22017cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x220180: 0x54530003
    ctx->pc = 0x220180u;
    {
        const bool branch_taken_0x220180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x220180) {
            ctx->pc = 0x220184u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x220190u;
            goto label_220190;
        }
    }
    ctx->pc = 0x220188u;
    // 0x220188: 0xae130000
    ctx->pc = 0x220188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_22018c:
    // 0x22018c: 0x8e030000
    ctx->pc = 0x22018cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220190:
    // 0x220190: 0x460000d
    ctx->pc = 0x220190u;
    {
        const bool branch_taken_0x220190 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x220194u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294966636)));
        if (branch_taken_0x220190) {
            ctx->pc = 0x2201C8u;
            goto label_2201c8;
        }
    }
    ctx->pc = 0x220198u;
    // 0x220198: 0x741818
    ctx->pc = 0x220198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22019c: 0x8c480014
    ctx->pc = 0x22019cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2201a0: 0x8e02000c
    ctx->pc = 0x2201a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2201a4: 0xafa20000
    ctx->pc = 0x2201a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2201a8: 0x8e02001c
    ctx->pc = 0x2201a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2201ac: 0xafa20008
    ctx->pc = 0x2201acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2201b0: 0x24040002
    ctx->pc = 0x2201b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2201b4: 0x26250012
    ctx->pc = 0x2201b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 18));
    // 0x2201b8: 0x26c66568
    ctx->pc = 0x2201b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 22), 25960));
    // 0x2201bc: 0x240382d
    ctx->pc = 0x2201bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201c0: 0x10000013
    ctx->pc = 0x2201C0u;
    {
        const bool branch_taken_0x2201c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2201C4u;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        if (branch_taken_0x2201c0) {
            ctx->pc = 0x220210u;
            goto label_220210;
        }
    }
    ctx->pc = 0x2201C8u;
label_2201c8:
    // 0x2201c8: 0x8e020004
    ctx->pc = 0x2201c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2201cc: 0x4400016
    ctx->pc = 0x2201CCu;
    {
        const bool branch_taken_0x2201cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2201D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2201cc) {
            ctx->pc = 0x220228u;
            goto label_220228;
        }
    }
    ctx->pc = 0x2201D4u;
    // 0x2201d4: 0xc0b46e2
    ctx->pc = 0x2201D4u;
    SET_GPR_U32(ctx, 31, 0x2201DCu);
    ctx->pc = 0x2201D8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201DCu; }
    }
    if (ctx->pc != 0x2201DCu) { return; }
    ctx->pc = 0x2201DCu;
    // 0x2201dc: 0x8ea2fd6c
    ctx->pc = 0x2201dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294966636)));
    // 0x2201e0: 0x8e080004
    ctx->pc = 0x2201e0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2201e4: 0x1144018
    ctx->pc = 0x2201e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2201e8: 0x8c430014
    ctx->pc = 0x2201e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2201ec: 0x8e02000c
    ctx->pc = 0x2201ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2201f0: 0xafa20000
    ctx->pc = 0x2201f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2201f4: 0x8e02001c
    ctx->pc = 0x2201f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2201f8: 0xafa20008
    ctx->pc = 0x2201f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2201fc: 0x24040002
    ctx->pc = 0x2201fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x220200: 0x26250012
    ctx->pc = 0x220200u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 18));
    // 0x220204: 0x26c66568
    ctx->pc = 0x220204u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 22), 25960));
    // 0x220208: 0x240382d
    ctx->pc = 0x220208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22020c: 0x1034021
    ctx->pc = 0x22020cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_220210:
    // 0x220210: 0x8e090018
    ctx->pc = 0x220210u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x220214: 0x8e0a0010
    ctx->pc = 0x220214u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x220218: 0xc0b47da
    ctx->pc = 0x220218u;
    SET_GPR_U32(ctx, 31, 0x220220u);
    ctx->pc = 0x22021Cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220220u; }
    }
    if (ctx->pc != 0x220220u) { return; }
    ctx->pc = 0x220220u;
    // 0x220220: 0x10000007
    ctx->pc = 0x220220u;
    {
        const bool branch_taken_0x220220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220224u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x220220) {
            ctx->pc = 0x220240u;
            goto label_220240;
        }
    }
    ctx->pc = 0x220228u;
label_220228:
    // 0x220228: 0x26250012
    ctx->pc = 0x220228u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 18));
    // 0x22022c: 0x3c06003a
    ctx->pc = 0x22022cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x220230: 0x24c66588
    ctx->pc = 0x220230u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 25992));
    // 0x220234: 0xc0b47da
    ctx->pc = 0x220234u;
    SET_GPR_U32(ctx, 31, 0x22023Cu);
    ctx->pc = 0x220238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22023Cu; }
    }
    if (ctx->pc != 0x22023Cu) { return; }
    ctx->pc = 0x22023Cu;
    // 0x22023c: 0x26310001
    ctx->pc = 0x22023cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_220240:
    // 0x220240: 0x2a22000c
    ctx->pc = 0x220240u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 12));
    // 0x220244: 0x1440ffac
    ctx->pc = 0x220244u;
    {
        const bool branch_taken_0x220244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220248u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x220244) {
            ctx->pc = 0x2200F8u;
            goto label_2200f8;
        }
    }
    ctx->pc = 0x22024Cu;
    // 0x22024c: 0xdfbf0080
    ctx->pc = 0x22024cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x220250: 0xdfb60070
    ctx->pc = 0x220250u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x220254: 0xdfb50060
    ctx->pc = 0x220254u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220258: 0xdfb40050
    ctx->pc = 0x220258u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22025c: 0xdfb30040
    ctx->pc = 0x22025cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220260: 0xdfb20030
    ctx->pc = 0x220260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220264: 0xdfb10020
    ctx->pc = 0x220264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220268: 0xdfb00010
    ctx->pc = 0x220268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22026c: 0x3e00008
    ctx->pc = 0x22026Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220270u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220098u: goto label_220098;
            case 0x2200F8u: goto label_2200f8;
            case 0x220108u: goto label_220108;
            case 0x220134u: goto label_220134;
            case 0x22017Cu: goto label_22017c;
            case 0x22018Cu: goto label_22018c;
            case 0x220190u: goto label_220190;
            case 0x2201C8u: goto label_2201c8;
            case 0x220210u: goto label_220210;
            case 0x220228u: goto label_220228;
            case 0x220240u: goto label_220240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220274u;
}
