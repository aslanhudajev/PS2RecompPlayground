#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: close_file_all
// Address: 0x179870 - 0x17999c
void close_file_all_0x179870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("close_file_all");


    ctx->pc = 0x179870u;

    // 0x179870: 0x27bdfe70
    ctx->pc = 0x179870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x179874: 0xffb60160
    ctx->pc = 0x179874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x179878: 0x3c160024
    ctx->pc = 0x179878u;
    SET_GPR_U32(ctx, 22, ((uint32_t)36 << 16));
    // 0x17987c: 0xffb30130
    ctx->pc = 0x17987cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x179880: 0xffb50150
    ctx->pc = 0x179880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x179884: 0x26c2a428
    ctx->pc = 0x179884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294943784));
    // 0x179888: 0x8ed3a428
    ctx->pc = 0x179888u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 22), 4294943784)));
    // 0x17988c: 0xa82d
    ctx->pc = 0x17988cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179890: 0xffbf0180
    ctx->pc = 0x179890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x179894: 0xffb70170
    ctx->pc = 0x179894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x179898: 0xffb40140
    ctx->pc = 0x179898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x17989c: 0xffb20120
    ctx->pc = 0x17989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1798a0: 0xffb10110
    ctx->pc = 0x1798a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x1798a4: 0x16600003
    ctx->pc = 0x1798A4u;
    {
        const bool branch_taken_0x1798a4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1798A8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
        if (branch_taken_0x1798a4) {
            ctx->pc = 0x1798B4u;
            goto label_1798b4;
        }
    }
    ctx->pc = 0x1798ACu;
    // 0x1798ac: 0x10000030
    ctx->pc = 0x1798ACu;
    {
        const bool branch_taken_0x1798ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1798B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1798ac) {
            ctx->pc = 0x179970u;
            goto label_179970;
        }
    }
    ctx->pc = 0x1798B4u;
label_1798b4:
    // 0x1798b4: 0x8c540004
    ctx->pc = 0x1798b4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1798b8: 0x12800026
    ctx->pc = 0x1798B8u;
    {
        const bool branch_taken_0x1798b8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1798BCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1798b8) {
            ctx->pc = 0x179954u;
            goto label_179954;
        }
    }
    ctx->pc = 0x1798C0u;
    // 0x1798c0: 0x3c17002c
    ctx->pc = 0x1798c0u;
    SET_GPR_U32(ctx, 23, ((uint32_t)44 << 16));
    // 0x1798c4: 0x26c4a428
    ctx->pc = 0x1798c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294943784));
label_1798c8:
    // 0x1798c8: 0x1210c0
    ctx->pc = 0x1798c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 3));
    // 0x1798cc: 0x8c83000c
    ctx->pc = 0x1798ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1798d0: 0x2628821
    ctx->pc = 0x1798d0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1798d4: 0x8c900008
    ctx->pc = 0x1798d4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1798d8: 0x3a0282d
    ctx->pc = 0x1798d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798dc: 0x721018
    ctx->pc = 0x1798dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1798e0: 0x1080c0
    ctx->pc = 0x1798e0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
    // 0x1798e4: 0x521821
    ctx->pc = 0x1798e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1798e8: 0x2038021
    ctx->pc = 0x1798e8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1798ec: 0x2708021
    ctx->pc = 0x1798ecu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1798f0: 0xc05e4aa
    ctx->pc = 0x1798F0u;
    SET_GPR_U32(ctx, 31, 0x1798F8u);
    ctx->pc = 0x1798F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1792A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_conv_fname_0x1792a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1798F8u; }
        else if (ctx->pc != 0x1798F8u) { ctx->pc = 0x1798F8u; }
    }
    if (ctx->pc != 0x1798F8u) { return; }
    ctx->pc = 0x1798F8u;
    // 0x1798f8: 0x82020000
    ctx->pc = 0x1798f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1798fc: 0x50400010
    ctx->pc = 0x1798FCu;
    {
        const bool branch_taken_0x1798fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1798fc) {
            ctx->pc = 0x179900u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x179940u;
            goto label_179940;
        }
    }
    ctx->pc = 0x179904u;
    // 0x179904: 0xc0562e0
    ctx->pc = 0x179904u;
    SET_GPR_U32(ctx, 31, 0x17990Cu);
    ctx->pc = 0x179908u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17990Cu; }
        else if (ctx->pc != 0x17990Cu) { ctx->pc = 0x17990Cu; }
    }
    if (ctx->pc != 0x17990Cu) { return; }
    ctx->pc = 0x17990Cu;
    // 0x17990c: 0x4410007
    ctx->pc = 0x17990Cu;
    {
        const bool branch_taken_0x17990c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x179910u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x17990c) {
            ctx->pc = 0x17992Cu;
            goto label_17992c;
        }
    }
    ctx->pc = 0x179914u;
    // 0x179914: 0x3c04002c
    ctx->pc = 0x179914u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x179918: 0x3a0282d
    ctx->pc = 0x179918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17991c: 0xc05114a
    ctx->pc = 0x17991Cu;
    SET_GPR_U32(ctx, 31, 0x179924u);
    ctx->pc = 0x179920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949168));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179924u; }
        else if (ctx->pc != 0x179924u) { ctx->pc = 0x179924u; }
    }
    if (ctx->pc != 0x179924u) { return; }
    ctx->pc = 0x179924u;
    // 0x179924: 0x10000006
    ctx->pc = 0x179924u;
    {
        const bool branch_taken_0x179924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179928u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x179924) {
            ctx->pc = 0x179940u;
            goto label_179940;
        }
    }
    ctx->pc = 0x17992Cu;
label_17992c:
    // 0x17992c: 0x26b50001
    ctx->pc = 0x17992cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x179930: 0x2484b958
    ctx->pc = 0x179930u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949208));
    // 0x179934: 0xc05114a
    ctx->pc = 0x179934u;
    SET_GPR_U32(ctx, 31, 0x17993Cu);
    ctx->pc = 0x179938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17993Cu; }
        else if (ctx->pc != 0x17993Cu) { ctx->pc = 0x17993Cu; }
    }
    if (ctx->pc != 0x17993Cu) { return; }
    ctx->pc = 0x17993Cu;
    // 0x17993c: 0x26520001
    ctx->pc = 0x17993cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_179940:
    // 0x179940: 0x254102b
    ctx->pc = 0x179940u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x179944: 0x1440ffe0
    ctx->pc = 0x179944u;
    {
        const bool branch_taken_0x179944 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x179948u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294943784));
        if (branch_taken_0x179944) {
            ctx->pc = 0x1798C8u;
            goto label_1798c8;
        }
    }
    ctx->pc = 0x17994Cu;
    // 0x17994c: 0x10000003
    ctx->pc = 0x17994Cu;
    {
        const bool branch_taken_0x17994c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179950u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 23), 4294949240));
        if (branch_taken_0x17994c) {
            ctx->pc = 0x17995Cu;
            goto label_17995c;
        }
    }
    ctx->pc = 0x179954u;
label_179954:
    // 0x179954: 0x3c17002c
    ctx->pc = 0x179954u;
    SET_GPR_U32(ctx, 23, ((uint32_t)44 << 16));
    // 0x179958: 0x26e4b978
    ctx->pc = 0x179958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 23), 4294949240));
label_17995c:
    // 0x17995c: 0xc05114a
    ctx->pc = 0x17995Cu;
    SET_GPR_U32(ctx, 31, 0x179964u);
    ctx->pc = 0x179960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179964u; }
        else if (ctx->pc != 0x179964u) { ctx->pc = 0x179964u; }
    }
    if (ctx->pc != 0x179964u) { return; }
    ctx->pc = 0x179964u;
    // 0x179964: 0xc05e69c
    ctx->pc = 0x179964u;
    SET_GPR_U32(ctx, 31, 0x17996Cu);
    ctx->pc = 0x179A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_init_flist_0x179a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17996Cu; }
        else if (ctx->pc != 0x17996Cu) { ctx->pc = 0x17996Cu; }
    }
    if (ctx->pc != 0x17996Cu) { return; }
    ctx->pc = 0x17996Cu;
    // 0x17996c: 0x24020001
    ctx->pc = 0x17996cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_179970:
    // 0x179970: 0xdfbf0180
    ctx->pc = 0x179970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x179974: 0xdfb70170
    ctx->pc = 0x179974u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x179978: 0xdfb60160
    ctx->pc = 0x179978u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17997c: 0xdfb50150
    ctx->pc = 0x17997cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x179980: 0xdfb40140
    ctx->pc = 0x179980u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x179984: 0xdfb30130
    ctx->pc = 0x179984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x179988: 0xdfb20120
    ctx->pc = 0x179988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17998c: 0xdfb10110
    ctx->pc = 0x17998cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x179990: 0xdfb00100
    ctx->pc = 0x179990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x179994: 0x3e00008
    ctx->pc = 0x179994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179998u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1798B4u: goto label_1798b4;
            case 0x1798C8u: goto label_1798c8;
            case 0x17992Cu: goto label_17992c;
            case 0x179940u: goto label_179940;
            case 0x179954u: goto label_179954;
            case 0x17995Cu: goto label_17995c;
            case 0x179970u: goto label_179970;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17999Cu;
}
