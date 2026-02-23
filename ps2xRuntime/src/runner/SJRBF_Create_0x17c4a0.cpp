#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <iostream>

// Function: SJRBF_Create
// Address: 0x17c4a0 - 0x17c58c
void SJRBF_Create_0x17c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_Create");

    std::cerr << "[SJRBF_Create] entry" << std::endl;
    ctx->pc = 0x17c4a0u;

    // 0x17c4a0: 0x27bdffb0
    ctx->pc = 0x17c4a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c4a4: 0xffb30030
    ctx->pc = 0x17c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17c4a8: 0xffb20020
    ctx->pc = 0x17c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17c4ac: 0xc0982d
    ctx->pc = 0x17c4acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4b0: 0xffb10010
    ctx->pc = 0x17c4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17c4b4: 0xa0902d
    ctx->pc = 0x17c4b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4b8: 0xffbf0040
    ctx->pc = 0x17c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17c4bc: 0x80882d
    ctx->pc = 0x17c4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4c0: 0xc05efbc
    ctx->pc = 0x17C4C0u;
    SET_GPR_U32(ctx, 31, 0x17C4C8u);
    ctx->pc = 0x17C4C4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4C8u; }
        else if (ctx->pc != 0x17C4C8u) { ctx->pc = 0x17C4C8u; }
    }
    if (ctx->pc != 0x17C4C8u) { return; }
    std::cerr << "[SJRBF_Create] after SJCRS_Lock" << std::endl;
    ctx->pc = 0x17C4C8u;
    // 0x17c4c8: 0x3c040024
    ctx->pc = 0x17c4c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x17c4cc: 0x2483f130
    ctx->pc = 0x17c4ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294963504));
    // 0x17c4d0: 0x8c620004
    ctx->pc = 0x17c4d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17c4d4: 0x1040000a
    ctx->pc = 0x17C4D4u;
    {
        const bool branch_taken_0x17c4d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C4D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c4d4) {
            ctx->pc = 0x17C500u;
            goto label_17c500;
        }
    }
    ctx->pc = 0x17C4DCu;
    // 0x17c4dc: 0x24630004
    ctx->pc = 0x17c4dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x17c4e0: 0x24a50001
    ctx->pc = 0x17c4e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c4e4: 0x0
    ctx->pc = 0x17c4e4u;
    // NOP
label_17c4e8:
    { static int _n=0; if (++_n<=30 || (_n%5000)==0) std::cerr << "[SJRBF_Create] loop_17c4e8 r5=" << GPR_S32(ctx,5) << " (n=" << _n << ")" << std::endl; }
    // 0x17c4e8: 0x28a20040
    ctx->pc = 0x17c4e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 64));
    // 0x17c4ec: 0x10400004
    ctx->pc = 0x17C4ECu;
    {
        const bool branch_taken_0x17c4ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C4F0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 48));
        if (branch_taken_0x17c4ec) {
            ctx->pc = 0x17C500u;
            goto label_17c500;
        }
    }
    ctx->pc = 0x17C4F4u;
    // 0x17c4f4: 0x8c620000
    ctx->pc = 0x17c4f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c4f8: 0x5440fffb
    ctx->pc = 0x17C4F8u;
    {
        const bool branch_taken_0x17c4f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17c4f8) {
            ctx->pc = 0x17C4FCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x17C4E8u;
            goto label_17c4e8;
        }
    }
    ctx->pc = 0x17C500u;
label_17c500:
    // 0x17c500: 0x24020040
    ctx->pc = 0x17c500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c504: 0x14a20003
    ctx->pc = 0x17C504u;
    {
        const bool branch_taken_0x17c504 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x17C508u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x17c504) {
            ctx->pc = 0x17C514u;
            goto label_17c514;
        }
    }
    ctx->pc = 0x17C50Cu;
    // 0x17c50c: 0x10000015
    ctx->pc = 0x17C50Cu;
    {
        const bool branch_taken_0x17c50c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C510u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c50c) {
            ctx->pc = 0x17C564u;
            goto label_17c564;
        }
    }
    ctx->pc = 0x17C514u;
label_17c514:
    // 0x17c514: 0x2484f130
    ctx->pc = 0x17c514u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963504));
    // 0x17c518: 0xa21018
    ctx->pc = 0x17c518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x17c51c: 0x3c030024
    ctx->pc = 0x17c51cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17c520: 0x3c05002c
    ctx->pc = 0x17c520u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x17c524: 0x3c060018
    ctx->pc = 0x17c524u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x17c528: 0x2463f100
    ctx->pc = 0x17c528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963456));
    // 0x17c52c: 0x24a5bf90
    ctx->pc = 0x17c52cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950800));
    // 0x17c530: 0x24c6c410
    ctx->pc = 0x17c530u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294951952));
    // 0x17c534: 0x24070001
    ctx->pc = 0x17c534u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c538: 0x448021
    ctx->pc = 0x17c538u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17c53c: 0xae11001c
    ctx->pc = 0x17c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x17c540: 0x200202d
    ctx->pc = 0x17c540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c544: 0xae120020
    ctx->pc = 0x17c544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x17c548: 0xae130024
    ctx->pc = 0x17c548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
    // 0x17c54c: 0xae10002c
    ctx->pc = 0x17c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 16));
    // 0x17c550: 0xae070004
    ctx->pc = 0x17c550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x17c554: 0xae030000
    ctx->pc = 0x17c554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17c558: 0xae050008
    ctx->pc = 0x17c558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x17c55c: 0xc05f17a
    ctx->pc = 0x17C55Cu;
    SET_GPR_U32(ctx, 31, 0x17C564u);
    ctx->pc = 0x17C560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    ctx->pc = 0x17C5E8u;
    std::cerr << "[SJRBF_Create] before SJRBF_Reset" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Reset_0x17c5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C564u; }
        else if (ctx->pc != 0x17C564u) { ctx->pc = 0x17C564u; }
    }
    if (ctx->pc != 0x17C564u) { return; }
    std::cerr << "[SJRBF_Create] after SJRBF_Reset" << std::endl;
    ctx->pc = 0x17C564u;
label_17c564:
    std::cerr << "[SJRBF_Create] before SJCRS_Unlock" << std::endl;
    // 0x17c564: 0xc05efc2
    ctx->pc = 0x17C564u;
    SET_GPR_U32(ctx, 31, 0x17C56Cu);
    ctx->pc = 0x17BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Unlock_0x17bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C56Cu; }
        else if (ctx->pc != 0x17C56Cu) { ctx->pc = 0x17C56Cu; }
    }
    if (ctx->pc != 0x17C56Cu) { return; }
    std::cerr << "[SJRBF_Create] returning" << std::endl;
    ctx->pc = 0x17C56Cu;
    // 0x17c56c: 0x200102d
    ctx->pc = 0x17c56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c570: 0xdfbf0040
    ctx->pc = 0x17c570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c574: 0xdfb30030
    ctx->pc = 0x17c574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c578: 0xdfb20020
    ctx->pc = 0x17c578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c57c: 0xdfb10010
    ctx->pc = 0x17c57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c580: 0xdfb00000
    ctx->pc = 0x17c580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c584: 0x3e00008
    ctx->pc = 0x17C584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C4E8u: goto label_17c4e8;
            case 0x17C500u: goto label_17c500;
            case 0x17C514u: goto label_17c514;
            case 0x17C564u: goto label_17c564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C58Cu;
}
