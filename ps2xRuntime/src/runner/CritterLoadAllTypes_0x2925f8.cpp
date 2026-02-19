#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLoadAllTypes
// Address: 0x2925f8 - 0x2926d8
void CritterLoadAllTypes_0x2925f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2925f8u;

    // 0x2925f8: 0x27bdff70
    ctx->pc = 0x2925f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2925fc: 0xffbf0080
    ctx->pc = 0x2925fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x292600: 0xffb70070
    ctx->pc = 0x292600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x292604: 0xffb60060
    ctx->pc = 0x292604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x292608: 0xffb50050
    ctx->pc = 0x292608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29260c: 0xffb40040
    ctx->pc = 0x29260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x292610: 0xffb30030
    ctx->pc = 0x292610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x292614: 0xffb20020
    ctx->pc = 0x292614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x292618: 0xffb10010
    ctx->pc = 0x292618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29261c: 0xffb00000
    ctx->pc = 0x29261cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292620: 0x80a02d
    ctx->pc = 0x292620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292624: 0x3c020036
    ctx->pc = 0x292624u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x292628: 0x8c42d5fc
    ctx->pc = 0x292628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956540)));
    // 0x29262c: 0x1840001f
    ctx->pc = 0x29262Cu;
    {
        const bool branch_taken_0x29262c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292630u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29262c) {
            ctx->pc = 0x2926ACu;
            goto label_2926ac;
        }
    }
    ctx->pc = 0x292634u;
    // 0x292634: 0x24170050
    ctx->pc = 0x292634u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 80));
    // 0x292638: 0x3c020036
    ctx->pc = 0x292638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29263c: 0x2456d600
    ctx->pc = 0x29263cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x292640: 0x3c150036
    ctx->pc = 0x292640u;
    SET_GPR_U32(ctx, 21, ((uint32_t)54 << 16));
    // 0x292644: 0x2571018
    ctx->pc = 0x292644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_292648:
    // 0x292648: 0x568821
    ctx->pc = 0x292648u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x29264c: 0x8e220000
    ctx->pc = 0x29264cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x292650: 0x50400012
    ctx->pc = 0x292650u;
    {
        const bool branch_taken_0x292650 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x292650) {
            ctx->pc = 0x292654u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29269Cu;
            goto label_29269c;
        }
    }
    ctx->pc = 0x292658u;
    // 0x292658: 0x8e220010
    ctx->pc = 0x292658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29265c: 0x1840000e
    ctx->pc = 0x29265Cu;
    {
        const bool branch_taken_0x29265c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292660u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29265c) {
            ctx->pc = 0x292698u;
            goto label_292698;
        }
    }
    ctx->pc = 0x292664u;
    // 0x292664: 0x24130140
    ctx->pc = 0x292664u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 320));
    // 0x292668: 0x2131018
    ctx->pc = 0x292668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29266c: 0x0
    ctx->pc = 0x29266cu;
    // NOP
label_292670:
    // 0x292670: 0x8e250014
    ctx->pc = 0x292670u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x292674: 0x220202d
    ctx->pc = 0x292674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292678: 0x452821
    ctx->pc = 0x292678u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29267c: 0xc0a4930
    ctx->pc = 0x29267Cu;
    SET_GPR_U32(ctx, 31, 0x292684u);
    ctx->pc = 0x292680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2924C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAllocType_0x2924c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292684u; }
    }
    if (ctx->pc != 0x292684u) { return; }
    ctx->pc = 0x292684u;
    // 0x292684: 0x26100001
    ctx->pc = 0x292684u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x292688: 0x8e220010
    ctx->pc = 0x292688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29268c: 0x202102a
    ctx->pc = 0x29268cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x292690: 0x1440fff7
    ctx->pc = 0x292690u;
    {
        const bool branch_taken_0x292690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x292694u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x292690) {
            ctx->pc = 0x292670u;
            goto label_292670;
        }
    }
    ctx->pc = 0x292698u;
label_292698:
    // 0x292698: 0x26520001
    ctx->pc = 0x292698u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_29269c:
    // 0x29269c: 0x8ea2d5fc
    ctx->pc = 0x29269cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294956540)));
    // 0x2926a0: 0x242102a
    ctx->pc = 0x2926a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x2926a4: 0x1440ffe8
    ctx->pc = 0x2926A4u;
    {
        const bool branch_taken_0x2926a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2926A8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2926a4) {
            ctx->pc = 0x292648u;
            goto label_292648;
        }
    }
    ctx->pc = 0x2926ACu;
label_2926ac:
    // 0x2926ac: 0xdfbf0080
    ctx->pc = 0x2926acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2926b0: 0xdfb70070
    ctx->pc = 0x2926b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2926b4: 0xdfb60060
    ctx->pc = 0x2926b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2926b8: 0xdfb50050
    ctx->pc = 0x2926b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2926bc: 0xdfb40040
    ctx->pc = 0x2926bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2926c0: 0xdfb30030
    ctx->pc = 0x2926c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2926c4: 0xdfb20020
    ctx->pc = 0x2926c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2926c8: 0xdfb10010
    ctx->pc = 0x2926c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2926cc: 0xdfb00000
    ctx->pc = 0x2926ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2926d0: 0x3e00008
    ctx->pc = 0x2926D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2926D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292648u: goto label_292648;
            case 0x292670u: goto label_292670;
            case 0x292698u: goto label_292698;
            case 0x29269Cu: goto label_29269c;
            case 0x2926ACu: goto label_2926ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2926D8u;
}
