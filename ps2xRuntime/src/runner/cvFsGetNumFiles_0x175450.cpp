#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetNumFiles
// Address: 0x175450 - 0x175558
void cvFsGetNumFiles_0x175450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetNumFiles");


    ctx->pc = 0x175450u;

label_175450:
    // 0x175450: 0x27bdff60
    ctx->pc = 0x175450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_175454:
    // 0x175454: 0xffb10030
    ctx->pc = 0x175454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_175458:
    // 0x175458: 0x80882d
    ctx->pc = 0x175458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17545c:
    // 0x17545c: 0xffb60080
    ctx->pc = 0x17545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_175460:
    // 0x175460: 0xffb50070
    ctx->pc = 0x175460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_175464:
    // 0x175464: 0xffb40060
    ctx->pc = 0x175464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_175468:
    // 0x175468: 0xa82d
    ctx->pc = 0x175468u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17546c:
    // 0x17546c: 0xffb30050
    ctx->pc = 0x17546cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_175470:
    // 0x175470: 0xa02d
    ctx->pc = 0x175470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175474:
    // 0x175474: 0xffb20040
    ctx->pc = 0x175474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_175478:
    // 0x175478: 0xffbf0090
    ctx->pc = 0x175478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17547c:
    // 0x17547c: 0xc051554
label_175480:
    if (ctx->pc == 0x175480u) {
        ctx->pc = 0x175480u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->pc = 0x175484u;
        goto label_175484;
    }
    ctx->pc = 0x17547Cu;
    SET_GPR_U32(ctx, 31, 0x175484u);
    ctx->pc = 0x175480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175484u; }
        else if (ctx->pc != 0x175484u) { ctx->pc = 0x175484u; }
    }
    if (ctx->pc != 0x175484u) { return; }
    ctx->pc = 0x175484u;
label_175484:
    // 0x175484: 0x40b02d
    ctx->pc = 0x175484u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175488:
    // 0x175488: 0x3c02002e
    ctx->pc = 0x175488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
label_17548c:
    // 0x17548c: 0x2442f2ec
    ctx->pc = 0x17548cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963948));
label_175490:
    // 0x175490: 0x40982d
    ctx->pc = 0x175490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175494:
    // 0x175494: 0x2452fffc
    ctx->pc = 0x175494u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294967292));
label_175498:
    // 0x175498: 0x220202d
    ctx->pc = 0x175498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17549c:
    // 0x17549c: 0x260282d
    ctx->pc = 0x17549cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1754a0:
    // 0x1754a0: 0xc05160e
label_1754a4:
    if (ctx->pc == 0x1754A4u) {
        ctx->pc = 0x1754A4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1754A8u;
        goto label_1754a8;
    }
    ctx->pc = 0x1754A0u;
    SET_GPR_U32(ctx, 31, 0x1754A8u);
    ctx->pc = 0x1754A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145838u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x145838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754A8u; }
        else if (ctx->pc != 0x1754A8u) { ctx->pc = 0x1754A8u; }
    }
    if (ctx->pc != 0x1754A8u) { return; }
    ctx->pc = 0x1754A8u;
label_1754a8:
    // 0x1754a8: 0x5440001c
label_1754ac:
    if (ctx->pc == 0x1754ACu) {
        ctx->pc = 0x1754ACu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x1754B0u;
        goto label_1754b0;
    }
    ctx->pc = 0x1754A8u;
    {
        const bool branch_taken_0x1754a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1754a8) {
            ctx->pc = 0x1754ACu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x17551Cu;
            goto label_17551c;
        }
    }
    ctx->pc = 0x1754B0u;
label_1754b0:
    // 0x1754b0: 0x8e500000
    ctx->pc = 0x1754b0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1754b4:
    // 0x1754b4: 0xc05d754
label_1754b8:
    if (ctx->pc == 0x1754B8u) {
        ctx->pc = 0x1754B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1754BCu;
        goto label_1754bc;
    }
    ctx->pc = 0x1754B4u;
    SET_GPR_U32(ctx, 31, 0x1754BCu);
    ctx->pc = 0x1754B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        isNeedDevName_0x175d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754BCu; }
        else if (ctx->pc != 0x1754BCu) { ctx->pc = 0x1754BCu; }
    }
    if (ctx->pc != 0x1754BCu) { return; }
    ctx->pc = 0x1754BCu;
label_1754bc:
    // 0x1754bc: 0x1040000d
label_1754c0:
    if (ctx->pc == 0x1754C0u) {
        ctx->pc = 0x1754C4u;
        goto label_1754c4;
    }
    ctx->pc = 0x1754BCu;
    {
        const bool branch_taken_0x1754bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1754bc) {
            ctx->pc = 0x1754F4u;
            goto label_1754f4;
        }
    }
    ctx->pc = 0x1754C4u;
label_1754c4:
    // 0x1754c4: 0x52000015
label_1754c8:
    if (ctx->pc == 0x1754C8u) {
        ctx->pc = 0x1754C8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x1754CCu;
        goto label_1754cc;
    }
    ctx->pc = 0x1754C4u;
    {
        const bool branch_taken_0x1754c4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1754c4) {
            ctx->pc = 0x1754C8u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x17551Cu;
            goto label_17551c;
        }
    }
    ctx->pc = 0x1754CCu;
label_1754cc:
    // 0x1754cc: 0x8e020060
    ctx->pc = 0x1754ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1754d0:
    // 0x1754d0: 0x10400011
label_1754d4:
    if (ctx->pc == 0x1754D4u) {
        ctx->pc = 0x1754D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1754D8u;
        goto label_1754d8;
    }
    ctx->pc = 0x1754D0u;
    {
        const bool branch_taken_0x1754d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1754D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1754d0) {
            ctx->pc = 0x175518u;
            goto label_175518;
        }
    }
    ctx->pc = 0x1754D8u;
label_1754d8:
    // 0x1754d8: 0xafb10004
    ctx->pc = 0x1754d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_1754dc:
    // 0x1754dc: 0x24050004
    ctx->pc = 0x1754dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_1754e0:
    // 0x1754e0: 0x302d
    ctx->pc = 0x1754e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1754e4:
    // 0x1754e4: 0x40f809
label_1754e8:
    if (ctx->pc == 0x1754E8u) {
        ctx->pc = 0x1754E8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1754ECu;
        goto label_1754ec;
    }
    ctx->pc = 0x1754E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1754ECu);
        ctx->pc = 0x1754E8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175450u: goto label_175450;
            case 0x175454u: goto label_175454;
            case 0x175458u: goto label_175458;
            case 0x17545Cu: goto label_17545c;
            case 0x175460u: goto label_175460;
            case 0x175464u: goto label_175464;
            case 0x175468u: goto label_175468;
            case 0x17546Cu: goto label_17546c;
            case 0x175470u: goto label_175470;
            case 0x175474u: goto label_175474;
            case 0x175478u: goto label_175478;
            case 0x17547Cu: goto label_17547c;
            case 0x175480u: goto label_175480;
            case 0x175484u: goto label_175484;
            case 0x175488u: goto label_175488;
            case 0x17548Cu: goto label_17548c;
            case 0x175490u: goto label_175490;
            case 0x175494u: goto label_175494;
            case 0x175498u: goto label_175498;
            case 0x17549Cu: goto label_17549c;
            case 0x1754A0u: goto label_1754a0;
            case 0x1754A4u: goto label_1754a4;
            case 0x1754A8u: goto label_1754a8;
            case 0x1754ACu: goto label_1754ac;
            case 0x1754B0u: goto label_1754b0;
            case 0x1754B4u: goto label_1754b4;
            case 0x1754B8u: goto label_1754b8;
            case 0x1754BCu: goto label_1754bc;
            case 0x1754C0u: goto label_1754c0;
            case 0x1754C4u: goto label_1754c4;
            case 0x1754C8u: goto label_1754c8;
            case 0x1754CCu: goto label_1754cc;
            case 0x1754D0u: goto label_1754d0;
            case 0x1754D4u: goto label_1754d4;
            case 0x1754D8u: goto label_1754d8;
            case 0x1754DCu: goto label_1754dc;
            case 0x1754E0u: goto label_1754e0;
            case 0x1754E4u: goto label_1754e4;
            case 0x1754E8u: goto label_1754e8;
            case 0x1754ECu: goto label_1754ec;
            case 0x1754F0u: goto label_1754f0;
            case 0x1754F4u: goto label_1754f4;
            case 0x1754F8u: goto label_1754f8;
            case 0x1754FCu: goto label_1754fc;
            case 0x175500u: goto label_175500;
            case 0x175504u: goto label_175504;
            case 0x175508u: goto label_175508;
            case 0x17550Cu: goto label_17550c;
            case 0x175510u: goto label_175510;
            case 0x175514u: goto label_175514;
            case 0x175518u: goto label_175518;
            case 0x17551Cu: goto label_17551c;
            case 0x175520u: goto label_175520;
            case 0x175524u: goto label_175524;
            case 0x175528u: goto label_175528;
            case 0x17552Cu: goto label_17552c;
            case 0x175530u: goto label_175530;
            case 0x175534u: goto label_175534;
            case 0x175538u: goto label_175538;
            case 0x17553Cu: goto label_17553c;
            case 0x175540u: goto label_175540;
            case 0x175544u: goto label_175544;
            case 0x175548u: goto label_175548;
            case 0x17554Cu: goto label_17554c;
            case 0x175550u: goto label_175550;
            case 0x175554u: goto label_175554;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1754ECu; }
            if (ctx->pc != 0x1754ECu) { return; }
        }
    }
    ctx->pc = 0x1754ECu;
label_1754ec:
    // 0x1754ec: 0x1000000f
label_1754f0:
    if (ctx->pc == 0x1754F0u) {
        ctx->pc = 0x1754F0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1754F4u;
        goto label_1754f4;
    }
    ctx->pc = 0x1754ECu;
    {
        const bool branch_taken_0x1754ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1754F0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1754ec) {
            ctx->pc = 0x17552Cu;
            goto label_17552c;
        }
    }
    ctx->pc = 0x1754F4u;
label_1754f4:
    // 0x1754f4: 0x12000009
label_1754f8:
    if (ctx->pc == 0x1754F8u) {
        ctx->pc = 0x1754F8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x1754FCu;
        goto label_1754fc;
    }
    ctx->pc = 0x1754F4u;
    {
        const bool branch_taken_0x1754f4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1754F8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x1754f4) {
            ctx->pc = 0x17551Cu;
            goto label_17551c;
        }
    }
    ctx->pc = 0x1754FCu;
label_1754fc:
    // 0x1754fc: 0x8e020044
    ctx->pc = 0x1754fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_175500:
    // 0x175500: 0x10400007
label_175504:
    if (ctx->pc == 0x175504u) {
        ctx->pc = 0x175504u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x175508u;
        goto label_175508;
    }
    ctx->pc = 0x175500u;
    {
        const bool branch_taken_0x175500 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175504u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x175500) {
            ctx->pc = 0x175520u;
            goto label_175520;
        }
    }
    ctx->pc = 0x175508u;
label_175508:
    // 0x175508: 0x40f809
label_17550c:
    if (ctx->pc == 0x17550Cu) {
        ctx->pc = 0x175510u;
        goto label_175510;
    }
    ctx->pc = 0x175508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175510u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175450u: goto label_175450;
            case 0x175454u: goto label_175454;
            case 0x175458u: goto label_175458;
            case 0x17545Cu: goto label_17545c;
            case 0x175460u: goto label_175460;
            case 0x175464u: goto label_175464;
            case 0x175468u: goto label_175468;
            case 0x17546Cu: goto label_17546c;
            case 0x175470u: goto label_175470;
            case 0x175474u: goto label_175474;
            case 0x175478u: goto label_175478;
            case 0x17547Cu: goto label_17547c;
            case 0x175480u: goto label_175480;
            case 0x175484u: goto label_175484;
            case 0x175488u: goto label_175488;
            case 0x17548Cu: goto label_17548c;
            case 0x175490u: goto label_175490;
            case 0x175494u: goto label_175494;
            case 0x175498u: goto label_175498;
            case 0x17549Cu: goto label_17549c;
            case 0x1754A0u: goto label_1754a0;
            case 0x1754A4u: goto label_1754a4;
            case 0x1754A8u: goto label_1754a8;
            case 0x1754ACu: goto label_1754ac;
            case 0x1754B0u: goto label_1754b0;
            case 0x1754B4u: goto label_1754b4;
            case 0x1754B8u: goto label_1754b8;
            case 0x1754BCu: goto label_1754bc;
            case 0x1754C0u: goto label_1754c0;
            case 0x1754C4u: goto label_1754c4;
            case 0x1754C8u: goto label_1754c8;
            case 0x1754CCu: goto label_1754cc;
            case 0x1754D0u: goto label_1754d0;
            case 0x1754D4u: goto label_1754d4;
            case 0x1754D8u: goto label_1754d8;
            case 0x1754DCu: goto label_1754dc;
            case 0x1754E0u: goto label_1754e0;
            case 0x1754E4u: goto label_1754e4;
            case 0x1754E8u: goto label_1754e8;
            case 0x1754ECu: goto label_1754ec;
            case 0x1754F0u: goto label_1754f0;
            case 0x1754F4u: goto label_1754f4;
            case 0x1754F8u: goto label_1754f8;
            case 0x1754FCu: goto label_1754fc;
            case 0x175500u: goto label_175500;
            case 0x175504u: goto label_175504;
            case 0x175508u: goto label_175508;
            case 0x17550Cu: goto label_17550c;
            case 0x175510u: goto label_175510;
            case 0x175514u: goto label_175514;
            case 0x175518u: goto label_175518;
            case 0x17551Cu: goto label_17551c;
            case 0x175520u: goto label_175520;
            case 0x175524u: goto label_175524;
            case 0x175528u: goto label_175528;
            case 0x17552Cu: goto label_17552c;
            case 0x175530u: goto label_175530;
            case 0x175534u: goto label_175534;
            case 0x175538u: goto label_175538;
            case 0x17553Cu: goto label_17553c;
            case 0x175540u: goto label_175540;
            case 0x175544u: goto label_175544;
            case 0x175548u: goto label_175548;
            case 0x17554Cu: goto label_17554c;
            case 0x175550u: goto label_175550;
            case 0x175554u: goto label_175554;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175510u; }
            if (ctx->pc != 0x175510u) { return; }
        }
    }
    ctx->pc = 0x175510u;
label_175510:
    // 0x175510: 0x10000006
label_175514:
    if (ctx->pc == 0x175514u) {
        ctx->pc = 0x175514u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175518u;
        goto label_175518;
    }
    ctx->pc = 0x175510u;
    {
        const bool branch_taken_0x175510 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175514u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175510) {
            ctx->pc = 0x17552Cu;
            goto label_17552c;
        }
    }
    ctx->pc = 0x175518u;
label_175518:
    // 0x175518: 0x26940001
    ctx->pc = 0x175518u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_17551c:
    // 0x17551c: 0x26520010
    ctx->pc = 0x17551cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
label_175520:
    // 0x175520: 0x2a820020
    ctx->pc = 0x175520u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 32));
label_175524:
    // 0x175524: 0x1440ffdc
label_175528:
    if (ctx->pc == 0x175528u) {
        ctx->pc = 0x175528u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x17552Cu;
        goto label_17552c;
    }
    ctx->pc = 0x175524u;
    {
        const bool branch_taken_0x175524 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x175528u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 16));
        if (branch_taken_0x175524) {
            ctx->pc = 0x175498u;
            goto label_175498;
        }
    }
    ctx->pc = 0x17552Cu;
label_17552c:
    // 0x17552c: 0x2a0102d
    ctx->pc = 0x17552cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_175530:
    // 0x175530: 0xdfbf0090
    ctx->pc = 0x175530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_175534:
    // 0x175534: 0xdfb60080
    ctx->pc = 0x175534u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_175538:
    // 0x175538: 0xdfb50070
    ctx->pc = 0x175538u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17553c:
    // 0x17553c: 0xdfb40060
    ctx->pc = 0x17553cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_175540:
    // 0x175540: 0xdfb30050
    ctx->pc = 0x175540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_175544:
    // 0x175544: 0xdfb20040
    ctx->pc = 0x175544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_175548:
    // 0x175548: 0xdfb10030
    ctx->pc = 0x175548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17554c:
    // 0x17554c: 0xdfb00020
    ctx->pc = 0x17554cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175550:
    // 0x175550: 0x3e00008
label_175554:
    if (ctx->pc == 0x175554u) {
        ctx->pc = 0x175554u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x175558u;
        goto label_fallthrough_0x175550;
    }
    ctx->pc = 0x175550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175554u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175450u: goto label_175450;
            case 0x175454u: goto label_175454;
            case 0x175458u: goto label_175458;
            case 0x17545Cu: goto label_17545c;
            case 0x175460u: goto label_175460;
            case 0x175464u: goto label_175464;
            case 0x175468u: goto label_175468;
            case 0x17546Cu: goto label_17546c;
            case 0x175470u: goto label_175470;
            case 0x175474u: goto label_175474;
            case 0x175478u: goto label_175478;
            case 0x17547Cu: goto label_17547c;
            case 0x175480u: goto label_175480;
            case 0x175484u: goto label_175484;
            case 0x175488u: goto label_175488;
            case 0x17548Cu: goto label_17548c;
            case 0x175490u: goto label_175490;
            case 0x175494u: goto label_175494;
            case 0x175498u: goto label_175498;
            case 0x17549Cu: goto label_17549c;
            case 0x1754A0u: goto label_1754a0;
            case 0x1754A4u: goto label_1754a4;
            case 0x1754A8u: goto label_1754a8;
            case 0x1754ACu: goto label_1754ac;
            case 0x1754B0u: goto label_1754b0;
            case 0x1754B4u: goto label_1754b4;
            case 0x1754B8u: goto label_1754b8;
            case 0x1754BCu: goto label_1754bc;
            case 0x1754C0u: goto label_1754c0;
            case 0x1754C4u: goto label_1754c4;
            case 0x1754C8u: goto label_1754c8;
            case 0x1754CCu: goto label_1754cc;
            case 0x1754D0u: goto label_1754d0;
            case 0x1754D4u: goto label_1754d4;
            case 0x1754D8u: goto label_1754d8;
            case 0x1754DCu: goto label_1754dc;
            case 0x1754E0u: goto label_1754e0;
            case 0x1754E4u: goto label_1754e4;
            case 0x1754E8u: goto label_1754e8;
            case 0x1754ECu: goto label_1754ec;
            case 0x1754F0u: goto label_1754f0;
            case 0x1754F4u: goto label_1754f4;
            case 0x1754F8u: goto label_1754f8;
            case 0x1754FCu: goto label_1754fc;
            case 0x175500u: goto label_175500;
            case 0x175504u: goto label_175504;
            case 0x175508u: goto label_175508;
            case 0x17550Cu: goto label_17550c;
            case 0x175510u: goto label_175510;
            case 0x175514u: goto label_175514;
            case 0x175518u: goto label_175518;
            case 0x17551Cu: goto label_17551c;
            case 0x175520u: goto label_175520;
            case 0x175524u: goto label_175524;
            case 0x175528u: goto label_175528;
            case 0x17552Cu: goto label_17552c;
            case 0x175530u: goto label_175530;
            case 0x175534u: goto label_175534;
            case 0x175538u: goto label_175538;
            case 0x17553Cu: goto label_17553c;
            case 0x175540u: goto label_175540;
            case 0x175544u: goto label_175544;
            case 0x175548u: goto label_175548;
            case 0x17554Cu: goto label_17554c;
            case 0x175550u: goto label_175550;
            case 0x175554u: goto label_175554;
            default: break;
        }
        return;
    }
label_fallthrough_0x175550:
    ctx->pc = 0x175558u;
}
